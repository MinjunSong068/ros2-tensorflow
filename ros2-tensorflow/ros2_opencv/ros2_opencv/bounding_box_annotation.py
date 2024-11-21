## final goal for opencv, generate coordinates from outputted bounding boxes from detection node

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist
from cv_bridge import CvBridge
import cv2
import numpy as np

class boundingBoxAnnotator(Node):
    def __init__(self):
        super().__init__('box_reader')
        self.subscription = self.create_subscription(Image, '/camera/image_raw', self.listener_callback, 10)
        self.subscription
        self.br = CvBridge()
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)

    # def listener_callback():

