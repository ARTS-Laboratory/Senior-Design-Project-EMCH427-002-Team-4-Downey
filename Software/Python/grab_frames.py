# -*- coding: utf-8 -*-
"""
Created on Wed Sep 22 18:22:52 2021

@author: BPRIDDY
"""

# import ope
import numpy as np
from imutils import contours
import imutils
import IPython as IP
IP.get_ipython().magic('reset -sf')

import cv2
import numpy as np
from imutils import contours
import imutils
import glob
import os
import pandas as pd
import boto3
from botocore.exceptions import ClientError
import decimal
from time import perf_counter

def process_frame(image):
    OG_image = image.copy()

    gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
    # cv2.imshow("gray" ,gray)
    # cv2.imwrite("gray.png", gray)
            # TODO convert RGB to HSV for better light sensitivity
            # hsv1 = cv2.cvtColor(frame1, cv2.COLOR_BGR2HSV)
            # h, s, v1 = cv2.split(hsv1)


            # Blur to remove noise (radius must be ODD)
    image = cv2.GaussianBlur(gray, (5, 5), 0) # 21,21
    # cv2.imshow("GaussianBlur" ,gray)
    # cv2.imwrite("GaussianBlur.png", gray)
            # (minVal, maxVal, minLoc, maxLoc) = cv2.minMaxLoc(gray)
            # image = orig.copy()
            # cv2.circle(image, maxLoc, 21, (255, 0, 0), 2)

            # threshold the image to reveal light regions in the blurred image
    image = cv2.threshold(image, 210, 255, cv2.THRESH_BINARY)[1]
    # cv2.imshow("thresh" ,thresh)
    # cv2.imwrite("thresh.png", thresh)
            # display the results of the naive attempt
    # cv2.imshow("Naive", image)

            # perform a series of erosions and dilations to remove
            # any small blobs of noise from the thresholded image
            # thresh = cv2.erode(thresh, None, iterations=2)
            # thresh = cv2.dilate(thresh, None, iterations=4)
    image = cv2.erode(image, None, iterations=1)
    image = cv2.dilate(image, None, iterations=1)
    # cv2.imshow("erode and dilate" ,thresh)
    # cv2.imwrite("erode_and_dilate.png" ,thresh)

            # cv2.imwrite('./out/protoshape/interim/denoised2.png', thresh)


            # Contours
    contours, hierarchy = cv2.findContours(image, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    im2 = cv2.drawContours(OG_image, contours, contourIdx=-1, color=(0,255,0), thickness=3)
    # cv2.imshow("contour" ,im2)
    # cv2.imwrite("contour.png" ,im2)
    cnts = contours[0] if len(contours) == 2 else contours[1]
    # cY = cnts[0][0][0]
    # cX = cnts[0][0][1]
    
    # cv2.imshow("contour" ,im2)
    max_area = 0
    for c in contours:
        area = cv2.contourArea(c)
        print(area)
        if area > max_area:
            max_area = area
            contour = c
        
    M = cv2.moments(contour)
    cX = int(M["m10"] / M["m00"])
    cY = int(M["m01"] / M["m00"])
    cv2.circle(im2, (cX, cY), 5, (255, 0, 0), -1)
    cv2.imshow("Image", im2)

    contour_mask = np.zeros(gray.shape, np.uint8)
    cv2.drawContours(contour_mask, contour, -1, 255, -1) # draw filled contours
    mean = cv2.mean(gray, mask=contour_mask)

    ((cX, cY), radius) = cv2.minEnclosingCircle(contour)
    
    return max_area, radius, cX, cY, mean 


# Creates the a directory to store the frames
# def create_dir(path):
#     try:
#         if not os.path.exists(path):
#             os.makedirs(path)
#     except OSError:
#         print(f"ERROR: creating directory with name {path}")


# Retrieves the video path and creates a name for the frame directory
# def save_frame(video_path, save_dir):
#     name = video_path.split("\\")[-1].split(".")[0]
#     save_path = os.path.join(save_dir, name)
#     create_dir(save_path)
    
#     cap = cv2.VideoCapture(video_path)
#     idx = 0
    
#     while True:
#         ret, frame = cap.read()
        
#         if ret == False:
#             cap.release()
#             break
        
#         cv2.imwrite(f"{save_path}/{idx}.png", frame)
#         idx += 1

image_path = "save/video_ai/whole916.png"

start = perf_counter()
frame = cv2.imread(image_path)
[max_area, radius, cX, cY, brightness] = process_frame(frame)

print("Elapsed Time:{}".format(perf_counter() - start))

    
    
# if __name__== "__main__":
    
#     # video_paths = glob.glob("videos/*")
#     # save_dir = "save"
    
#     # for path in video_paths:
#     #     save_frame(path, save_dir)
#     #     break

#     image_paths = glob.glob("save/video_ai/whole916.png")
#     image_file_path = image_paths[0]
    
    
#     #image = cv2.imread('./out/protoshape/frames/frame_001521.png')
#     image = cv2.imread(image_file_path)

#     gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
#     # cv2.imshow("gray" ,gray)
#     # cv2.imwrite("gray.png", gray)
#             # TODO convert RGB to HSV for better light sensitivity
#             # hsv1 = cv2.cvtColor(frame1, cv2.COLOR_BGR2HSV)
#             # h, s, v1 = cv2.split(hsv1)


#             # Blur to remove noise (radius must be ODD)
#     blur = cv2.GaussianBlur(gray, (5, 5), 0) # 21,21
#     # cv2.imshow("GaussianBlur" ,gray)
#     # cv2.imwrite("GaussianBlur.png", gray)
#             # (minVal, maxVal, minLoc, maxLoc) = cv2.minMaxLoc(gray)
#             # image = orig.copy()
#             # cv2.circle(image, maxLoc, 21, (255, 0, 0), 2)

#             # threshold the image to reveal light regions in the blurred image
#     thresh = cv2.threshold(blur, 210, 255, cv2.THRESH_BINARY)[1]
#     # cv2.imshow("thresh" ,thresh)
#     # cv2.imwrite("thresh.png", thresh)
#             # display the results of the naive attempt
#     # cv2.imshow("Naive", image)

#             # perform a series of erosions and dilations to remove
#             # any small blobs of noise from the thresholded image
#             # thresh = cv2.erode(thresh, None, iterations=2)
#             # thresh = cv2.dilate(thresh, None, iterations=4)
#     thresh = cv2.erode(thresh, None, iterations=1)
#     thresh = cv2.dilate(thresh, None, iterations=1)
#     # cv2.imshow("erode and dilate" ,thresh)
#     # cv2.imwrite("erode_and_dilate.png" ,thresh)

#             # cv2.imwrite('./out/protoshape/interim/denoised2.png', thresh)


#             # Contours
#     contours, hierarchy = cv2.findContours(thresh, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
#     im2 = cv2.drawContours(image, contours, contourIdx=-1, color=(0,255,0), thickness=3)
#     cv2.imshow("contour" ,im2)
#     # cv2.imwrite("contour.png" ,im2)
#     cnts = contours[0] if len(contours) == 2 else contours[1]
#     # cY = cnts[0][0][0]
#     # cX = cnts[0][0][1]
    
#     # cv2.imshow("contour" ,im2)
#     max_area = 0
#     for c in contours:
#         area = cv2.contourArea(c)
#         print(area)
#         if area > max_area:
#             max_area = area
#             contour = c
        
#     M = cv2.moments(contour)
#     cX = int(M["m10"] / M["m00"])
#     cY = int(M["m01"] / M["m00"])
#     cv2.circle(im2, (cX, cY), 5, (255, 0, 0), -1)
#     cv2.imshow("Image", im2)

#     contour_mask = np.zeros(gray.shape, np.uint8)
#     cv2.drawContours(contour_mask, contour, -1, 255, -1) # draw filled contours
#     mean = cv2.mean(gray, mask=contour_mask)

#     ((cX, cY), radius) = cv2.minEnclosingCircle(contour)

    
    