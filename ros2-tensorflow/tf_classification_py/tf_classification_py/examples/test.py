#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
from cv_bridge import CvBridge
import cv2
import numpy as np


class BoundingBoxNode(Node):
    def __init__(self):
        super().__init__('bounding_box_node')
        self.bridge = CvBridge()

        # Subscriber to camera/image topic
        self.subscription = self.create_subscription(
            Image,
            '/camera/image_raw',  # Topic name (adjust as per your setup)
            self.image_callback,
            10
        )
        self.subscription

        # Publisher to send bounding box data
        self.publisher = self.create_publisher(String, '/bounding_boxes', 10)

        self.get_logger().info('BoundingBoxNode has started.')

    def image_callback(self, msg):
        try:
            # Convert ROS2 Image message to OpenCV format
            frame = self.bridge.imgmsg_to_cv2(msg, 'bgr8')

            # Perform bounding box detection (Dummy Example: Static bounding box)
            bbox_start = (100, 100)  # Top-left corner (x, y)
            bbox_end = (300, 300)    # Bottom-right corner (x, y)

            # Draw a rectangle (bounding box) for visualization
            cv2.rectangle(frame, bbox_start, bbox_end, (0, 255, 0), 2)

            # Add bounding box information (as string for this example)
            bbox_info = f"Bounding Box: Start={bbox_start}, End={bbox_end}"
            self.publisher.publish(String(data=bbox_info))
            self.get_logger().info(bbox_info)

            # Display the frame with bounding boxes
            cv2.imshow("Bounding Box Detection", frame)
            cv2.waitKey(1)

        except Exception as e:
            self.get_logger().error(f"Failed to process image: {e}")


def main(args=None):
    rclpy.init(args=args)
    node = BoundingBoxNode()
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
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
from cv_bridge import CvBridge
import cv2
import numpy as np


class BoundingBoxNode(Node):
    def __init__(self):
        super().__init__('bounding_box_node')
        self.bridge = CvBridge()

        # Subscriber to camera/image topic
        self.subscription = self.create_subscription(
            Image,
            '/camera/image_raw',  # Topic name (adjust as per your setup)
            self.image_callback,
            10
        )
        self.subscription

        # Publisher to send bounding box data
        self.publisher = self.create_publisher(String, '/bounding_boxes', 10)

        self.get_logger().info('BoundingBoxNode has started.')

    def image_callback(self, msg):
        try:
            # Convert ROS2 Image message to OpenCV format
            frame = self.bridge.imgmsg_to_cv2(msg, 'bgr8')

            # Perform bounding box detection (Dummy Example: Static bounding box)
            bbox_start = (100, 100)  # Top-left corner (x, y)
            bbox_end = (300, 300)    # Bottom-right corner (x, y)

            # Draw a rectangle (bounding box) for visualization
            cv2.rectangle(frame, bbox_start, bbox_end, (0, 255, 0), 2)

            # Add bounding box information (as string for this example)
            bbox_info = f"Bounding Box: Start={bbox_start}, End={bbox_end}"
            self.publisher.publish(String(data=bbox_info))
            self.get_logger().info(bbox_info)

            # Display the frame with bounding boxes
            cv2.imshow("Bounding Box Detection", frame)
            cv2.waitKey(1)

        except Exception as e:
            self.get_logger().error(f"Failed to process image: {e}")


def main(args=None):
    rclpy.init(args=args)
    node = BoundingBoxNode()
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
