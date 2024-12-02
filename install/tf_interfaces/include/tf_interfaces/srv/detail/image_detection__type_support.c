// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tf_interfaces:srv/ImageDetection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tf_interfaces/srv/detail/image_detection__rosidl_typesupport_introspection_c.h"
#include "tf_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tf_interfaces/srv/detail/image_detection__functions.h"
#include "tf_interfaces/srv/detail/image_detection__struct.h"


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ImageDetection_Request__rosidl_typesupport_introspection_c__ImageDetection_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tf_interfaces__srv__ImageDetection_Request__init(message_memory);
}

void ImageDetection_Request__rosidl_typesupport_introspection_c__ImageDetection_Request_fini_function(void * message_memory)
{
  tf_interfaces__srv__ImageDetection_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ImageDetection_Request__rosidl_typesupport_introspection_c__ImageDetection_Request_message_member_array[1] = {
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf_interfaces__srv__ImageDetection_Request, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ImageDetection_Request__rosidl_typesupport_introspection_c__ImageDetection_Request_message_members = {
  "tf_interfaces__srv",  // message namespace
  "ImageDetection_Request",  // message name
  1,  // number of fields
  sizeof(tf_interfaces__srv__ImageDetection_Request),
  ImageDetection_Request__rosidl_typesupport_introspection_c__ImageDetection_Request_message_member_array,  // message members
  ImageDetection_Request__rosidl_typesupport_introspection_c__ImageDetection_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ImageDetection_Request__rosidl_typesupport_introspection_c__ImageDetection_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ImageDetection_Request__rosidl_typesupport_introspection_c__ImageDetection_Request_message_type_support_handle = {
  0,
  &ImageDetection_Request__rosidl_typesupport_introspection_c__ImageDetection_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf_interfaces, srv, ImageDetection_Request)() {
  ImageDetection_Request__rosidl_typesupport_introspection_c__ImageDetection_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!ImageDetection_Request__rosidl_typesupport_introspection_c__ImageDetection_Request_message_type_support_handle.typesupport_identifier) {
    ImageDetection_Request__rosidl_typesupport_introspection_c__ImageDetection_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ImageDetection_Request__rosidl_typesupport_introspection_c__ImageDetection_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tf_interfaces/srv/detail/image_detection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tf_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tf_interfaces/srv/detail/image_detection__functions.h"
// already included above
// #include "tf_interfaces/srv/detail/image_detection__struct.h"


// Include directives for member types
// Member `detections`
#include "vision_msgs/msg/detection2_d_array.h"
// Member `detections`
#include "vision_msgs/msg/detail/detection2_d_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ImageDetection_Response__rosidl_typesupport_introspection_c__ImageDetection_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tf_interfaces__srv__ImageDetection_Response__init(message_memory);
}

void ImageDetection_Response__rosidl_typesupport_introspection_c__ImageDetection_Response_fini_function(void * message_memory)
{
  tf_interfaces__srv__ImageDetection_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ImageDetection_Response__rosidl_typesupport_introspection_c__ImageDetection_Response_message_member_array[1] = {
  {
    "detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf_interfaces__srv__ImageDetection_Response, detections),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ImageDetection_Response__rosidl_typesupport_introspection_c__ImageDetection_Response_message_members = {
  "tf_interfaces__srv",  // message namespace
  "ImageDetection_Response",  // message name
  1,  // number of fields
  sizeof(tf_interfaces__srv__ImageDetection_Response),
  ImageDetection_Response__rosidl_typesupport_introspection_c__ImageDetection_Response_message_member_array,  // message members
  ImageDetection_Response__rosidl_typesupport_introspection_c__ImageDetection_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ImageDetection_Response__rosidl_typesupport_introspection_c__ImageDetection_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ImageDetection_Response__rosidl_typesupport_introspection_c__ImageDetection_Response_message_type_support_handle = {
  0,
  &ImageDetection_Response__rosidl_typesupport_introspection_c__ImageDetection_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf_interfaces, srv, ImageDetection_Response)() {
  ImageDetection_Response__rosidl_typesupport_introspection_c__ImageDetection_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_msgs, msg, Detection2DArray)();
  if (!ImageDetection_Response__rosidl_typesupport_introspection_c__ImageDetection_Response_message_type_support_handle.typesupport_identifier) {
    ImageDetection_Response__rosidl_typesupport_introspection_c__ImageDetection_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ImageDetection_Response__rosidl_typesupport_introspection_c__ImageDetection_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tf_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tf_interfaces/srv/detail/image_detection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tf_interfaces__srv__detail__image_detection__rosidl_typesupport_introspection_c__ImageDetection_service_members = {
  "tf_interfaces__srv",  // service namespace
  "ImageDetection",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tf_interfaces__srv__detail__image_detection__rosidl_typesupport_introspection_c__ImageDetection_Request_message_type_support_handle,
  NULL  // response message
  // tf_interfaces__srv__detail__image_detection__rosidl_typesupport_introspection_c__ImageDetection_Response_message_type_support_handle
};

static rosidl_service_type_support_t tf_interfaces__srv__detail__image_detection__rosidl_typesupport_introspection_c__ImageDetection_service_type_support_handle = {
  0,
  &tf_interfaces__srv__detail__image_detection__rosidl_typesupport_introspection_c__ImageDetection_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf_interfaces, srv, ImageDetection_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf_interfaces, srv, ImageDetection_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf_interfaces, srv, ImageDetection)() {
  if (!tf_interfaces__srv__detail__image_detection__rosidl_typesupport_introspection_c__ImageDetection_service_type_support_handle.typesupport_identifier) {
    tf_interfaces__srv__detail__image_detection__rosidl_typesupport_introspection_c__ImageDetection_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tf_interfaces__srv__detail__image_detection__rosidl_typesupport_introspection_c__ImageDetection_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf_interfaces, srv, ImageDetection_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf_interfaces, srv, ImageDetection_Response)()->data;
  }

  return &tf_interfaces__srv__detail__image_detection__rosidl_typesupport_introspection_c__ImageDetection_service_type_support_handle;
}
