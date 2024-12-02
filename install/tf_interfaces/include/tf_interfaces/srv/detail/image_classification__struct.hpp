// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tf_interfaces:srv/ImageClassification.idl
// generated code does not contain a copyright notice

#ifndef TF_INTERFACES__SRV__DETAIL__IMAGE_CLASSIFICATION__STRUCT_HPP_
#define TF_INTERFACES__SRV__DETAIL__IMAGE_CLASSIFICATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tf_interfaces__srv__ImageClassification_Request __attribute__((deprecated))
#else
# define DEPRECATED__tf_interfaces__srv__ImageClassification_Request __declspec(deprecated)
#endif

namespace tf_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ImageClassification_Request_
{
  using Type = ImageClassification_Request_<ContainerAllocator>;

  explicit ImageClassification_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    (void)_init;
  }

  explicit ImageClassification_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tf_interfaces::srv::ImageClassification_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf_interfaces::srv::ImageClassification_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf_interfaces::srv::ImageClassification_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf_interfaces::srv::ImageClassification_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf_interfaces::srv::ImageClassification_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf_interfaces::srv::ImageClassification_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf_interfaces::srv::ImageClassification_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf_interfaces::srv::ImageClassification_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf_interfaces::srv::ImageClassification_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf_interfaces::srv::ImageClassification_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf_interfaces__srv__ImageClassification_Request
    std::shared_ptr<tf_interfaces::srv::ImageClassification_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf_interfaces__srv__ImageClassification_Request
    std::shared_ptr<tf_interfaces::srv::ImageClassification_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageClassification_Request_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageClassification_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageClassification_Request_

// alias to use template instance with default allocator
using ImageClassification_Request =
  tf_interfaces::srv::ImageClassification_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tf_interfaces


// Include directives for member types
// Member 'classification'
#include "vision_msgs/msg/detail/classification2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tf_interfaces__srv__ImageClassification_Response __attribute__((deprecated))
#else
# define DEPRECATED__tf_interfaces__srv__ImageClassification_Response __declspec(deprecated)
#endif

namespace tf_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ImageClassification_Response_
{
  using Type = ImageClassification_Response_<ContainerAllocator>;

  explicit ImageClassification_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : classification(_init)
  {
    (void)_init;
  }

  explicit ImageClassification_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : classification(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _classification_type =
    vision_msgs::msg::Classification2D_<ContainerAllocator>;
  _classification_type classification;

  // setters for named parameter idiom
  Type & set__classification(
    const vision_msgs::msg::Classification2D_<ContainerAllocator> & _arg)
  {
    this->classification = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tf_interfaces::srv::ImageClassification_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf_interfaces::srv::ImageClassification_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf_interfaces::srv::ImageClassification_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf_interfaces::srv::ImageClassification_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf_interfaces::srv::ImageClassification_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf_interfaces::srv::ImageClassification_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf_interfaces::srv::ImageClassification_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf_interfaces::srv::ImageClassification_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf_interfaces::srv::ImageClassification_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf_interfaces::srv::ImageClassification_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf_interfaces__srv__ImageClassification_Response
    std::shared_ptr<tf_interfaces::srv::ImageClassification_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf_interfaces__srv__ImageClassification_Response
    std::shared_ptr<tf_interfaces::srv::ImageClassification_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageClassification_Response_ & other) const
  {
    if (this->classification != other.classification) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageClassification_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageClassification_Response_

// alias to use template instance with default allocator
using ImageClassification_Response =
  tf_interfaces::srv::ImageClassification_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tf_interfaces

namespace tf_interfaces
{

namespace srv
{

struct ImageClassification
{
  using Request = tf_interfaces::srv::ImageClassification_Request;
  using Response = tf_interfaces::srv::ImageClassification_Response;
};

}  // namespace srv

}  // namespace tf_interfaces

#endif  // TF_INTERFACES__SRV__DETAIL__IMAGE_CLASSIFICATION__STRUCT_HPP_
