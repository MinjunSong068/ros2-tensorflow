// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tf_interfaces:srv/ImageClassification.idl
// generated code does not contain a copyright notice

#ifndef TF_INTERFACES__SRV__DETAIL__IMAGE_CLASSIFICATION__TRAITS_HPP_
#define TF_INTERFACES__SRV__DETAIL__IMAGE_CLASSIFICATION__TRAITS_HPP_

#include "tf_interfaces/srv/detail/image_classification__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf_interfaces::srv::ImageClassification_Request>()
{
  return "tf_interfaces::srv::ImageClassification_Request";
}

template<>
inline const char * name<tf_interfaces::srv::ImageClassification_Request>()
{
  return "tf_interfaces/srv/ImageClassification_Request";
}

template<>
struct has_fixed_size<tf_interfaces::srv::ImageClassification_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<tf_interfaces::srv::ImageClassification_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<tf_interfaces::srv::ImageClassification_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'classification'
#include "vision_msgs/msg/detail/classification2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf_interfaces::srv::ImageClassification_Response>()
{
  return "tf_interfaces::srv::ImageClassification_Response";
}

template<>
inline const char * name<tf_interfaces::srv::ImageClassification_Response>()
{
  return "tf_interfaces/srv/ImageClassification_Response";
}

template<>
struct has_fixed_size<tf_interfaces::srv::ImageClassification_Response>
  : std::integral_constant<bool, has_fixed_size<vision_msgs::msg::Classification2D>::value> {};

template<>
struct has_bounded_size<tf_interfaces::srv::ImageClassification_Response>
  : std::integral_constant<bool, has_bounded_size<vision_msgs::msg::Classification2D>::value> {};

template<>
struct is_message<tf_interfaces::srv::ImageClassification_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf_interfaces::srv::ImageClassification>()
{
  return "tf_interfaces::srv::ImageClassification";
}

template<>
inline const char * name<tf_interfaces::srv::ImageClassification>()
{
  return "tf_interfaces/srv/ImageClassification";
}

template<>
struct has_fixed_size<tf_interfaces::srv::ImageClassification>
  : std::integral_constant<
    bool,
    has_fixed_size<tf_interfaces::srv::ImageClassification_Request>::value &&
    has_fixed_size<tf_interfaces::srv::ImageClassification_Response>::value
  >
{
};

template<>
struct has_bounded_size<tf_interfaces::srv::ImageClassification>
  : std::integral_constant<
    bool,
    has_bounded_size<tf_interfaces::srv::ImageClassification_Request>::value &&
    has_bounded_size<tf_interfaces::srv::ImageClassification_Response>::value
  >
{
};

template<>
struct is_service<tf_interfaces::srv::ImageClassification>
  : std::true_type
{
};

template<>
struct is_service_request<tf_interfaces::srv::ImageClassification_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tf_interfaces::srv::ImageClassification_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TF_INTERFACES__SRV__DETAIL__IMAGE_CLASSIFICATION__TRAITS_HPP_
