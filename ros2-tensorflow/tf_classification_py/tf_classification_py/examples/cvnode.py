# Copyright 2020 Alberto Soragna. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# ==============================================================================

import rclpy
from ros2_tf_core import img_conversion as img_utils
from ros2_tf_core.qos import qos_profile_vision_info
import tensorflow as tf
from tf_interfaces.srv import ImageClassification as ImageClassificationSrv
from vision_msgs.msg import VisionInfo as VisionInfoMsg
import cv2
import numpy as np
from adafruit_servokit import ServoKit
from cv_bridge import CvBridge
from sensor_msgs.msg import Image


class OpenCVNode(Node):
     
    def __init__(self):
        super().__init__('box_node')
        self.bridge = CvBridge()
        self.width = cv2.VideoCapture(1).get(cv2.CAP_PROP_FRAME_WIDTH)
        self.height - cv2.VideoCapture(1).get(cv2.CAP_PROP_FRAME_HEIGHT)
        cv2.VideoCapture(1).release()
        self.kit = ServoKit(channels=16)
        self.pan = 120
        self.tilt = 120

        self.subscription = self.create_subcription(
            Image,
            '/detections_image',
            self.image_callback,
            10
        )
        self.subscription

        self.get_logger().info("CVNode Init finished")

    def image_callback(self, msg):
        frame = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
        hsv_image = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

        lBound = np.array([50, 100, 100])
        uBound = np.array([70, 255, 255])

        mask = cv2.inRange(hsv_image, lBound, uBound)
        _,contours,_=cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

        for contour in contours:
            area = cv2.contourArea(contour)
            x, y, w, h = cv2.boundingRect(contour)
            if area>=50:
                cv2.rectangle(frame,(x,y),(x+w,y+h),(255,0,0),3)
                objX=x+w/2
                objY=y+h/2
                errorPan=objX-self.width/2
                errorTilt=objY-self.height/2
            if abs(errorPan) > 15:
                pan = pan-errorPan/75
            if abs(errorTilt) > 15:
                tilt = tilt-errorTilt/75

            if pan>180:
                pan=180
                print("Pan Out of  Range")   
            if pan<0:
                pan=0
                print("Pan Out of  Range") 
            if tilt>180:
                tilt=180
                print("Tilt Out of  Range") 
            if tilt<0:
                tilt=0
                print("Tilt Out of  Range")    
            self.kit.servo[0].angle=pan
            self.kit.servo[1].angle=tilt 


    def servoInit():
        kit=ServoKit(channels=16)
        pan=90
        tilt=45
        kit.servo[0].angle=pan
        kit.servo[1].angle=tilt
        return kit

    # def servocontrolCamMovement(kit):
        
        # pan=90
        # tilt=45

	    # # FGmask=cv2.inRange(hsv,l_b,u_b)
    	# # FGmask2=cv2.inRange(hsv,l_b2,u_b2)
    	# # FGmaskComp=cv2.add(FGmask,FGmask2)

        # _,contours,_=cv2.findContours(FGmaskComp,cv2.RETR_EXTERNAL,cv2.CHAIN_APPROX_SIMPLE)
        # contours=sorted(contours,key=lambda x:cv2.contourArea(x),reverse=True)
        # for cnt in contours:
        #     area=cv2.contourArea(cnt)
        #     (x,y,w,h)=cv2.boundingRect(cnt)
        #     if area>=50:
        #         #cv2.drawContours(frame,[cnt],0,(255,0,0),3)
        #         cv2.rectangle(frame,(x,y),(x+w,y+h),(255,0,0),3)
        #         objX=x+w/2
        #         objY=y+h/2
        #         errorPan=objX-width/2
        #         errorTilt=objY-height/2
        #     if abs(errorPan)>15:
        #         pan=pan-errorPan/75
        #     if abs(errorTilt)>15:
        #         tilt=tilt-errorTilt/75


        #     if pan>180:
        #         pan=180
        #         print("Pan Out of  Range")   
        #     if pan<0:
        #         pan=0
        #         print("Pan Out of  Range") 
        #     if tilt>180:
        #         tilt=180
        #         print("Tilt Out of  Range") 
        #     if tilt<0:
        #         tilt=0
        #         print("Tilt Out of  Range")                 
                
        #     kit.servo[0].angle=pan
        #     kit.servo[1].angle=tilt 
        #     break   

    # def servocontrol(x,y):
    #     kit = ServoKit(channels = 16,frequency = 100)
    #     y_axis = kit.servo[1]
    #     x_axis = kit.servo[0]
    #     x_axis.set_pulse_width_range(750,2250)
    #     y_axis.set_pulse_width_range(1400,2800)
    #     # coordrange = range(0,801)
    #     coordrange = range(0,2000)
    #     x_range = np.linspace(104,72,len(coordrange))
    #     y_range = np.linspace(146,93,len(coordrange))
    #     xindex = coordrange.index(x)
    #     yindex = coordrange.index(y)
    #     x_axis.angle = x_range[xindex]
    #     y_axis.angle = y_range[yindex]