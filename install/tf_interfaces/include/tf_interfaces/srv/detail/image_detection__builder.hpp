// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tf_interfaces:srv/ImageDetection.idl
// generated code does not contain a copyright notice

#ifndef TF_INTERFACES__SRV__DETAIL__IMAGE_DETECTION__BUILDER_HPP_
#define TF_INTERFACES__SRV__DETAIL__IMAGE_DETECTION__BUILDER_HPP_

#include "tf_interfaces/srv/detail/image_detection__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tf_interfaces
{

namespace srv
{

namespace builder
{

class Init_ImageDetection_Request_image
{
public:
  Init_ImageDetection_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tf_interfaces::srv::ImageDetection_Request image(::tf_interfaces::srv::ImageDetection_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf_interfaces::srv::ImageDetection_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf_interfaces::srv::ImageDetection_Request>()
{
  return tf_interfaces::srv::builder::Init_ImageDetection_Request_image();
}

}  // namespace tf_interfaces


namespace tf_interfaces
{

namespace srv
{

namespace builder
{

class Init_ImageDetection_Response_detections
{
public:
  Init_ImageDetection_Response_detections()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tf_interfaces::srv::ImageDetection_Response detections(::tf_interfaces::srv::ImageDetection_Response::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf_interfaces::srv::ImageDetection_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf_interfaces::srv::ImageDetection_Response>()
{
  return tf_interfaces::srv::builder::Init_ImageDetection_Response_detections();
}

}  // namespace tf_interfaces

#endif  // TF_INTERFACES__SRV__DETAIL__IMAGE_DETECTION__BUILDER_HPP_
