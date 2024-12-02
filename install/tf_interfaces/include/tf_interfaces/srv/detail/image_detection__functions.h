// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tf_interfaces:srv/ImageDetection.idl
// generated code does not contain a copyright notice

#ifndef TF_INTERFACES__SRV__DETAIL__IMAGE_DETECTION__FUNCTIONS_H_
#define TF_INTERFACES__SRV__DETAIL__IMAGE_DETECTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tf_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "tf_interfaces/srv/detail/image_detection__struct.h"

/// Initialize srv/ImageDetection message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tf_interfaces__srv__ImageDetection_Request
 * )) before or use
 * tf_interfaces__srv__ImageDetection_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
bool
tf_interfaces__srv__ImageDetection_Request__init(tf_interfaces__srv__ImageDetection_Request * msg);

/// Finalize srv/ImageDetection message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
void
tf_interfaces__srv__ImageDetection_Request__fini(tf_interfaces__srv__ImageDetection_Request * msg);

/// Create srv/ImageDetection message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tf_interfaces__srv__ImageDetection_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
tf_interfaces__srv__ImageDetection_Request *
tf_interfaces__srv__ImageDetection_Request__create();

/// Destroy srv/ImageDetection message.
/**
 * It calls
 * tf_interfaces__srv__ImageDetection_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
void
tf_interfaces__srv__ImageDetection_Request__destroy(tf_interfaces__srv__ImageDetection_Request * msg);

/// Check for srv/ImageDetection message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
bool
tf_interfaces__srv__ImageDetection_Request__are_equal(const tf_interfaces__srv__ImageDetection_Request * lhs, const tf_interfaces__srv__ImageDetection_Request * rhs);

/// Copy a srv/ImageDetection message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
bool
tf_interfaces__srv__ImageDetection_Request__copy(
  const tf_interfaces__srv__ImageDetection_Request * input,
  tf_interfaces__srv__ImageDetection_Request * output);

/// Initialize array of srv/ImageDetection messages.
/**
 * It allocates the memory for the number of elements and calls
 * tf_interfaces__srv__ImageDetection_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
bool
tf_interfaces__srv__ImageDetection_Request__Sequence__init(tf_interfaces__srv__ImageDetection_Request__Sequence * array, size_t size);

/// Finalize array of srv/ImageDetection messages.
/**
 * It calls
 * tf_interfaces__srv__ImageDetection_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
void
tf_interfaces__srv__ImageDetection_Request__Sequence__fini(tf_interfaces__srv__ImageDetection_Request__Sequence * array);

/// Create array of srv/ImageDetection messages.
/**
 * It allocates the memory for the array and calls
 * tf_interfaces__srv__ImageDetection_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
tf_interfaces__srv__ImageDetection_Request__Sequence *
tf_interfaces__srv__ImageDetection_Request__Sequence__create(size_t size);

/// Destroy array of srv/ImageDetection messages.
/**
 * It calls
 * tf_interfaces__srv__ImageDetection_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
void
tf_interfaces__srv__ImageDetection_Request__Sequence__destroy(tf_interfaces__srv__ImageDetection_Request__Sequence * array);

/// Check for srv/ImageDetection message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
bool
tf_interfaces__srv__ImageDetection_Request__Sequence__are_equal(const tf_interfaces__srv__ImageDetection_Request__Sequence * lhs, const tf_interfaces__srv__ImageDetection_Request__Sequence * rhs);

/// Copy an array of srv/ImageDetection messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
bool
tf_interfaces__srv__ImageDetection_Request__Sequence__copy(
  const tf_interfaces__srv__ImageDetection_Request__Sequence * input,
  tf_interfaces__srv__ImageDetection_Request__Sequence * output);

/// Initialize srv/ImageDetection message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tf_interfaces__srv__ImageDetection_Response
 * )) before or use
 * tf_interfaces__srv__ImageDetection_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
bool
tf_interfaces__srv__ImageDetection_Response__init(tf_interfaces__srv__ImageDetection_Response * msg);

/// Finalize srv/ImageDetection message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
void
tf_interfaces__srv__ImageDetection_Response__fini(tf_interfaces__srv__ImageDetection_Response * msg);

/// Create srv/ImageDetection message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tf_interfaces__srv__ImageDetection_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
tf_interfaces__srv__ImageDetection_Response *
tf_interfaces__srv__ImageDetection_Response__create();

/// Destroy srv/ImageDetection message.
/**
 * It calls
 * tf_interfaces__srv__ImageDetection_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
void
tf_interfaces__srv__ImageDetection_Response__destroy(tf_interfaces__srv__ImageDetection_Response * msg);

/// Check for srv/ImageDetection message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
bool
tf_interfaces__srv__ImageDetection_Response__are_equal(const tf_interfaces__srv__ImageDetection_Response * lhs, const tf_interfaces__srv__ImageDetection_Response * rhs);

/// Copy a srv/ImageDetection message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
bool
tf_interfaces__srv__ImageDetection_Response__copy(
  const tf_interfaces__srv__ImageDetection_Response * input,
  tf_interfaces__srv__ImageDetection_Response * output);

/// Initialize array of srv/ImageDetection messages.
/**
 * It allocates the memory for the number of elements and calls
 * tf_interfaces__srv__ImageDetection_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
bool
tf_interfaces__srv__ImageDetection_Response__Sequence__init(tf_interfaces__srv__ImageDetection_Response__Sequence * array, size_t size);

/// Finalize array of srv/ImageDetection messages.
/**
 * It calls
 * tf_interfaces__srv__ImageDetection_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
void
tf_interfaces__srv__ImageDetection_Response__Sequence__fini(tf_interfaces__srv__ImageDetection_Response__Sequence * array);

/// Create array of srv/ImageDetection messages.
/**
 * It allocates the memory for the array and calls
 * tf_interfaces__srv__ImageDetection_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
tf_interfaces__srv__ImageDetection_Response__Sequence *
tf_interfaces__srv__ImageDetection_Response__Sequence__create(size_t size);

/// Destroy array of srv/ImageDetection messages.
/**
 * It calls
 * tf_interfaces__srv__ImageDetection_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
void
tf_interfaces__srv__ImageDetection_Response__Sequence__destroy(tf_interfaces__srv__ImageDetection_Response__Sequence * array);

/// Check for srv/ImageDetection message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
bool
tf_interfaces__srv__ImageDetection_Response__Sequence__are_equal(const tf_interfaces__srv__ImageDetection_Response__Sequence * lhs, const tf_interfaces__srv__ImageDetection_Response__Sequence * rhs);

/// Copy an array of srv/ImageDetection messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf_interfaces
bool
tf_interfaces__srv__ImageDetection_Response__Sequence__copy(
  const tf_interfaces__srv__ImageDetection_Response__Sequence * input,
  tf_interfaces__srv__ImageDetection_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TF_INTERFACES__SRV__DETAIL__IMAGE_DETECTION__FUNCTIONS_H_
