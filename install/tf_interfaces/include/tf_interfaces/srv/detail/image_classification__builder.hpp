// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tf_interfaces:srv/ImageClassification.idl
// generated code does not contain a copyright notice

#ifndef TF_INTERFACES__SRV__DETAIL__IMAGE_CLASSIFICATION__BUILDER_HPP_
#define TF_INTERFACES__SRV__DETAIL__IMAGE_CLASSIFICATION__BUILDER_HPP_

#include "tf_interfaces/srv/detail/image_classification__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tf_interfaces
{

namespace srv
{

namespace builder
{

class Init_ImageClassification_Request_image
{
public:
  Init_ImageClassification_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tf_interfaces::srv::ImageClassification_Request image(::tf_interfaces::srv::ImageClassification_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf_interfaces::srv::ImageClassification_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf_interfaces::srv::ImageClassification_Request>()
{
  return tf_interfaces::srv::builder::Init_ImageClassification_Request_image();
}

}  // namespace tf_interfaces


namespace tf_interfaces
{

namespace srv
{

namespace builder
{

class Init_ImageClassification_Response_classification
{
public:
  Init_ImageClassification_Response_classification()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tf_interfaces::srv::ImageClassification_Response classification(::tf_interfaces::srv::ImageClassification_Response::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf_interfaces::srv::ImageClassification_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf_interfaces::srv::ImageClassification_Response>()
{
  return tf_interfaces::srv::builder::Init_ImageClassification_Response_classification();
}

}  // namespace tf_interfaces

#endif  // TF_INTERFACES__SRV__DETAIL__IMAGE_CLASSIFICATION__BUILDER_HPP_
