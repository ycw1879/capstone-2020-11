import cv2
import numpy as np


class Warper:
    def __init__(self):
        h = 720
        w = 1280

        print("h : " ,h)
        print("w : " ,w)
         
        # distort scr to dst
        src = np.float32([
            [0, h],
            [w, h],
            [w//2 - 300, 200],
            [w//2 + 300, 200],
        ])
        dst = np.float32([
            [0, h],
            [w, h],
            [0, 0],
            [w , 0],
        ])
        

        self.M = cv2.getPerspectiveTransform(src, dst)
        self.Minv = cv2.getPerspectiveTransform(dst, src)

    def warp(self, img):
        return cv2.warpPerspective(
            img,
            self.M,
            (img.shape[1], img.shape[0]),
            flags=cv2.INTER_LINEAR
        )

    def unwarp(self, img):
        return cv2.warpPersective(
            img,
            self.Minv,
            (img.shape[1], img.shape[0]),
            flags=cv2.INTER_LINEAR
        )
