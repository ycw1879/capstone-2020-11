#!/usr/bin/env python

import cv2
import numpy as np
import os
import rospy
from std_msgs.msg import Int32MultiArray

width = 640
height = 480
lower_light = np.array([0, 0, 0]) # ([0, 0, 0]
upper_light = np.array([255, 255, 140]) # [255, 255, 130]  ([240, 240, 130])
edge_min = 25   # 20
edge_max = 70   # 60
centor_gap = 100
hough_min_lengh = 10
hough_max_gap = 15
histo_gap = 30
idx_gap = 300

def Edge_Recalibration(img):
    global edge_min, edge_min
    result = cv2.Canny(img, edge_min, edge_max)
    return result

def talker():
    global width, height, lower_light, upper_light, edge_max, edge_min, centor_gap, hough_max_gap, hough_min_lengh, rank, histo_gap, idx_gap
    rospy.init_node('Camera', anonymous=False)
    pub = rospy.Publisher('camera', Int32MultiArray, queue_size=1)
    msg = Int32MultiArray()
    rate = rospy.Rate(10)
    cap = cv2.VideoCapture(1)
    cap.set(5, 10)
    while not rospy.is_shutdown() and cap.isOpened():
        hist = []
        for i in range(0, width + (idx_gap * 2) + 1):
            hist.append(1)
        ret, frame = cap.read()
        kernel = np.ones((5, 5), np.uint8)
        #image = cv2.resize(frame, dsize=(width, height), interpolation=cv2.INTER_AREA)
        image = cv2.GaussianBlur(frame, (5,5), 1)
        frame = image.copy()
        hsv = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)
        mask = cv2.inRange(hsv, lower_light, upper_light)
        cv2.imshow('inrange', mask) ##########################################################
        result = cv2.dilate(mask, kernel, iterations=1)
        # result = cv2.erode(result, kernel, iterations=1)
        cv2.imshow('erod', result) ##########################################################
        # res = cv2.bitwise_and(frame, frame, mask=result)
        gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
        edge = Edge_Recalibration(gray)
        edge = cv2.dilate(edge, kernel, iterations=1)
        cv2.imshow('edge', edge) ##########################################################
        lines = cv2.HoughLinesP(edge, 1, np.pi / 360, 100, hough_min_lengh, hough_max_gap)
        if lines is not None:
            for line in lines:
                x1, y1, x2, y2 = line.reshape(4)
                cv2.line(edge, (x1, y1), (x2, y2), 255, 10)
        view_tp = np.zeros_like(image)
        edge = cv2.bitwise_and(edge, edge, mask=mask) ##########################
        # edge = cv2.erode(edge, kernel, iterations=1)
        # edge = cv2.dilate(edge, kernel, iterations=1)
        cv2.imshow('concat', edge) ##########################################################
        new_lines = []
        new_x = []
        lines = cv2.HoughLinesP(edge, 1, np.pi / 360, 100, hough_min_lengh, hough_max_gap)
        if lines is not None:
            for line in lines:
                x1, y1, x2, y2 = line.reshape(4)
                cv2.line(image, (x1, y1), (x2, y2), (255, 255, 255), 1) # removoe
                dx = x2 - x1
                if dx == 0:
                    hist[x1 + idx_gap] = hist[x1 + idx_gap] + 1
                    new_lines.append([x1, height, x2, height])
                    new_x.append(x1)
                    continue
                dy = y2 - y1
                m = dy / dx
                if abs(m) > 1:
                    tp = m * x1
                    b = y1 - tp
                    start_y = height
                    start_x = int((start_y - b) / m)
                    if start_x <= -idx_gap or start_x > width+idx_gap:
                        continue
                    hist[start_x + idx_gap] = hist[start_x + idx_gap] + 1
                    end_y = 0
                    end_x = int((end_y - b) / m)
                    new_lines.append([start_x, start_y, end_x, end_y])
                    new_x.append(start_x)
                    cv2.line(image, (start_x, start_y), (end_x, end_y), (255, 255, 255), 1)
                    # if start_x < (width // 2):
                        # cv2.line(image, (start_x, start_y), (end_x, end_y), (255, 0, 0), 2)
                    # else:
                        # cv2.line(image, (start_x, start_y), (end_x, end_y), (0, 0, 255), 2)
        if lines is not None:
            for line in lines:
                x1, y1, x2, y2 = line.reshape(4)
                cv2.line(image, (x1, y1), (x2, y2), (255, 0, 0), 1) # removoe
        # x=np.linspace(0, width + (idx_gap * 2), width + (idx_gap * 2))

        sum_count_100 = []
        while True:
            idx = hist.index(max(hist))
            idx_low = 0
            idx_up = width + (idx_gap * 2)
            if idx - histo_gap < 0:
                idx_low = 0
            else:
                idx_low = idx - histo_gap
            if idx + histo_gap >= width + idx_gap * 2:
                idx_up = width + idx_gap * 2
            else:
                idx_up = idx + histo_gap
            if sum(hist[idx_low:idx_up]) < 2:
                break
            value = [sum(hist[idx_low:idx_up]), idx_low - idx_gap, idx_up - idx_gap, idx - idx_gap]
            zeros = []
            for i in range(idx_low, idx_up):
                zeros.append(0)
            hist[idx_low:idx_up] = zeros
            sum_count_100.append(value)
        first_x1 = []
        first_y1 = []
        first_x2 = []
        first_y2 = []
        second_x1 = []
        second_y1 = []
        second_x2 = []
        second_y2 = []
        first_avg = []
        second_avg = []
        if len(sum_count_100) == 0:
            pass
        elif len(sum_count_100) == 1:
            for line in new_lines:
                x1, y1, x2, y2 = line
                if sum_count_100[0][1] < x1 < sum_count_100[0][2]:
                    cv2.line(image, (x1, y1), (x2, y2), (100, 100, 100), 2) # removoe
                    if x1 == sum_count_100[0][3]:
                        first_avg.append(x2)
            for line in new_lines:
                x1, y1, x2, y2 = line
                if sum_count_100[0][1] < x1 < sum_count_100[0][2]:
                    if np.mean(first_avg) - histo_gap + 20 < x2 < np.mean(first_avg) + histo_gap - 20:
                        cv2.line(image, (x1, y1), (x2, y2), (0, 255, 0), 2)
                        first_x1.append(x1)
                        first_y1.append(y1)
                        first_x2.append(x2)
                        first_y2.append(y2)
        else:
            if sum_count_100[0][0] > sum_count_100[1][0] * 3:
                pass
            else:
                for line in new_lines:
                    x1, y1, x2, y2 = line
                    if sum_count_100[0][1] < x1 < sum_count_100[0][2]:
                        cv2.line(image, (x1, y1), (x2, y2), (100, 100, 100), 2) # removoe
                        if x1 == sum_count_100[0][3]:
                            first_avg.append(x2)
                    elif sum_count_100[1][1] < x1 < sum_count_100[1][2]:
                        if x1 == sum_count_100[1][3]:
                            second_avg.append(x2)
                    else:
                        pass
                # print(first_avg)
                # print(second_avg)
                for line in new_lines:
                    x1, y1, x2, y2 = line
                    if sum_count_100[0][1] < x1 < sum_count_100[0][2]:
                        if np.mean(first_avg) - histo_gap + 20 < x2 < np.mean(first_avg) + histo_gap - 20 and 0 < x2 < height:
                            cv2.line(image, (x1, y1), (x2, y2), (0, 255, 0), 2)
                            first_x1.append(x1)
                            first_y1.append(y1)
                            first_x2.append(x2)
                            first_y2.append(y2)
                    elif sum_count_100[1][1] < x1 < sum_count_100[1][2]:
                        if abs(sum_count_100[0][3]- sum_count_100[1][3]) < 300:
                            continue
                        if np.mean(second_avg) - histo_gap + 20 < x2 < np.mean(second_avg) + histo_gap - 20 and 0 < x2 < height:
                            cv2.line(image, (x1, y1), (x2, y2), (0, 0, 255), 2)
                            second_x1.append(x1)
                            second_y1.append(y1)
                            second_x2.append(x2)
                            second_y2.append(y2)
                    else:
                        pass
        if first_x1 != [] and second_x1 != []:
            x1 = int((np.mean(first_x1) + np.mean(second_x1)) / 2)
            y1 = int((np.mean(first_y1) + np.mean(second_y1)) / 2)
            x2 = int((np.mean(first_x2) + np.mean(second_x2)) / 2)
            y2 = int((np.mean(first_y2) + np.mean(second_y2)) / 2)
            cv2.line(image, (x1, y1), (x2, y2), (255, 255, 200), 2)
            msg.data = [x1, y1, x2, y2]
            pub.publish(msg)
            rate.sleep()
        elif first_x1 != [] and second_x1 ==[]:
            x1 = int((np.mean(first_x1)))
            y1 = int((np.mean(first_y1)))
            x2 = int((np.mean(first_x2)))
            y2 = int((np.mean(first_y2)))
            if x1 < width // 2:
                x1 += 480
                x2 += 110
            else:
                x1 -= 480
                x2 -= 110
            cv2.line(image, (x1, y1), (x2, y2), (255, 255, 200), 2)
            msg.data = [x1, y1, x2, y2]
            pub.publish(msg)
            rate.sleep()
        cv2.imshow('origin', image)
        cv2.waitKey(1)
    cap.release()
    cv2.destroyAllWindows()
if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass
