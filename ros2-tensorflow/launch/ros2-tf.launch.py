from launch import LaunchDescription
from launch_ros.actions import Node

##launch file for setting up real obj detection pipeline with ros2 camera node

def generate_launch_description():
    
    launch_list = LaunchDescription([
        Node(
            package='tf_detection_py',
            namespace='detection_server',
            executable='server',
            name='detection_server'
        ),
        Node(
            package='image_tools',
            namespace='camera_node',
            executable='cam2image',
            name='camera_node'

        )
    ])

    ld = launch.LaunchDescription(launch_list)

    return ld