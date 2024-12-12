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
from cvnode import OpenCVNode


def main(args=None):
    rclpy.init(args=args)
    node = OpenCVNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
        cv2.destroyAllWindows()


if __name__ == '__main__':
    main()
