#!/usr/bin/env python
import rospy
import cv2
import numpy as np
from cv_bridge import CvBridge, CvBridgeError
from sensor_msgs.msg import Image
from sensor_msgs.msg import CompressedImage
import time
 
class VIDEOS():
    def __init__(self):
        self.selecting_sub_image = "raw"
        self.fps = 30.0
        self.width = 1280
        self.height = 720
        self.count = 1
        # self.fcc = cv2.VideoWriter_fourcc('D', 'I', 'V', 'X')
        # self.out = cv2.VideoWriter('/home/Desktop/test1.avi', self.fcc, self.fps, (self.width, self.height))
        self._sub = rospy.Subscriber('/usb_cam/image_raw', Image, self.callback, queue_size=1)
        self.bridge = CvBridge()
        rospy.on_shutdown(self.cleanup)
       
    
    def callback(self, image_msg):
        cv_image = self.bridge.imgmsg_to_cv2(image_msg, "bgr8")
        dst = cv2.flip(cv_image, -1)
        # self.out.write(dst)
        cv2.imwrite("/home/nvidia/Desktop/video_data/frame%d.png" % self.count, dst)
        self.count = self.count + 1
        cv2.imshow('cv_gray', dst)
        cv2.waitKey(1)
        time.sleep(1)

    def cleanup(self):
        print('shutting down vision node.')
        self.out.release()
        cv2.destroyAllWindows()
        
    def main(self):
        try:
            rospy.spin()
        except KeyboardInterrupt:
            print("Shutting down")
            cv2.destroyAllWindows()
            self.out.release()
 
if __name__ == '__main__':
    rospy.init_node('videos')
    node = VIDEOS()
    node.main()
