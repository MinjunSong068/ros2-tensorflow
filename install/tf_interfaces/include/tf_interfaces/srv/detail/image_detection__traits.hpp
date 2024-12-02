// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tf_interfaces:srv/ImageDetection.idl
// generated code does not contain a copyright notice

#ifndef TF_INTERFACES__SRV__DETAIL__IMAGE_DETECTION__TRAITS_HPP_
#define TF_INTERFACES__SRV__DETAIL__IMAGE_DETECTION__TRAITS_HPP_

#include "tf_interfaces/srv/detail/image_detection__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf_interfaces::srv::ImageDetection_Request>()
{
  return "tf_interfaces::srv::ImageDetection_Request";
}

template<>
inline const char * name<tf_interfaces::srv::ImageDetection_Request>()
{
  return "tf_interfaces/srv/ImageDetection_Request";
}

template<>
struct has_fixed_size<tf_interfaces::srv::ImageDetection_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<tf_interfaces::srv::ImageDetection_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<tf_interfaces::srv::ImageDetection_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'detections'
#include "vision_msgs/msg/detail/detection2_d_array__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf_interfaces::srv::ImageDetection_Response>()
{
  return "tf_interfaces::srv::ImageDetection_Response";
}

template<>
inline const char * name<tf_interfaces::srv::ImageDetection_Response>()
{
  return "tf_interfaces/srv/ImageDetection_Response";
}

template<>
struct has_fixed_size<tf_interfaces::srv::ImageDetection_Response>
  : std::integral_constant<bool, has_fixed_size<vision_msgs::msg::Detection2DArray>::value> {};

template<>
struct has_bounded_size<tf_interfaces::srv::ImageDetection_Response>
  : std::integral_constant<bool, has_bounded_size<vision_msgs::msg::Detection2DArray>::value> {};

template<>
struct is_message<tf_interfaces::srv::ImageDetection_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf_interfaces::srv::ImageDetection>()
{
  return "tf_interfaces::srv::ImageDetection";
}

template<>
inline const char * name<tf_interfaces::srv::ImageDetection>()
{
  return "tf_interfaces/srv/ImageDetection";
}

template<>
struct has_fixed_size<tf_interfaces::srv::ImageDetection>
  : std::integral_constant<
    bool,
    has_fixed_size<tf_interfaces::srv::ImageDetection_Request>::value &&
    has_fixed_size<tf_interfaces::srv::ImageDetection_Response>::value
  >
{
};

template<>
struct has_bounded_size<tf_interfaces::srv::ImageDetection>
  : std::integral_constant<
    bool,
    has_bounded_size<tf_interfaces::srv::ImageDetection_Request>::value &&
    has_bounded_size<tf_interfaces::srv::ImageDetection_Response>::value
  >
{
};

template<>
struct is_service<tf_interfaces::srv::ImageDetection>
  : std::true_type
{
};

template<>
struct is_service_request<tf_interfaces::srv::ImageDetection_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tf_interfaces::srv::ImageDetection_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TF_INTERFACES__SRV__DETAIL__IMAGE_DETECTION__TRAITS_HPP_
