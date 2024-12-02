// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tf_interfaces:srv/ImageDetection.idl
// generated code does not contain a copyright notice

#ifndef TF_INTERFACES__SRV__DETAIL__IMAGE_DETECTION__STRUCT_H_
#define TF_INTERFACES__SRV__DETAIL__IMAGE_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

// Struct defined in srv/ImageDetection in the package tf_interfaces.
typedef struct tf_interfaces__srv__ImageDetection_Request
{
  sensor_msgs__msg__Image image;
} tf_interfaces__srv__ImageDetection_Request;

// Struct for a sequence of tf_interfaces__srv__ImageDetection_Request.
typedef struct tf_interfaces__srv__ImageDetection_Request__Sequence
{
  tf_interfaces__srv__ImageDetection_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf_interfaces__srv__ImageDetection_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'detections'
#include "vision_msgs/msg/detail/detection2_d_array__struct.h"

// Struct defined in srv/ImageDetection in the package tf_interfaces.
typedef struct tf_interfaces__srv__ImageDetection_Response
{
  vision_msgs__msg__Detection2DArray detections;
} tf_interfaces__srv__ImageDetection_Response;

// Struct for a sequence of tf_interfaces__srv__ImageDetection_Response.
typedef struct tf_interfaces__srv__ImageDetection_Response__Sequence
{
  tf_interfaces__srv__ImageDetection_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf_interfaces__srv__ImageDetection_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TF_INTERFACES__SRV__DETAIL__IMAGE_DETECTION__STRUCT_H_
