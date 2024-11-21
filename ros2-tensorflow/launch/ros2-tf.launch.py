from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode

##launch file for setting up real obj detection pipeline with ros2 camera node

def generate_launch_description():
    
    launch_list = LaunchDescription([
        Node(
            package='tf_detection_py',
            namespace='detection_server',
            executable='server',
            name='detection_server'
        ),
        # Node(
        #     package='image_tools',
        #     namespace='camera_node',
        #     executable='cam2image',
        #     name='camera_node'
        # ),
        ComposableNodeContainer(
            name='image_container',
            namespace='',
            package='rclcpp_components',
            executable='component_container',
            composable_node_descriptions=[
                ComposableNode(
                    package='image_tools',
                    plugin='image_tools::Cam2Image',
                    name='cam2image',
                    remappings=[('/image', '/burgerimage')],
                    parameters=[{'width': 320, 'height': 240, 'burger_mode': True, 'history': 'keep_last'}],
                    extra_arguments=[{'use_intra_process_comms': True}]),
                ComposableNode(
                    package='image_tools',
                    plugin='image_tools::ShowImage',
                    name='showimage',
                    remappings=[('/image', '/burgerimage')],
                    parameters=[{'history': 'keep_last'}],
                    extra_arguments=[{'use_intra_process_comms': True}])
            ],
            output='both',            
        )
    ])

    ld = launch.LaunchDescription(launch_list)

    return ld