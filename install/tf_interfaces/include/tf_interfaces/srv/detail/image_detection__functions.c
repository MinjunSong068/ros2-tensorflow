// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tf_interfaces:srv/ImageDetection.idl
// generated code does not contain a copyright notice
#include "tf_interfaces/srv/detail/image_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
tf_interfaces__srv__ImageDetection_Request__init(tf_interfaces__srv__ImageDetection_Request * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    tf_interfaces__srv__ImageDetection_Request__fini(msg);
    return false;
  }
  return true;
}

void
tf_interfaces__srv__ImageDetection_Request__fini(tf_interfaces__srv__ImageDetection_Request * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
}

bool
tf_interfaces__srv__ImageDetection_Request__are_equal(const tf_interfaces__srv__ImageDetection_Request * lhs, const tf_interfaces__srv__ImageDetection_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  return true;
}

bool
tf_interfaces__srv__ImageDetection_Request__copy(
  const tf_interfaces__srv__ImageDetection_Request * input,
  tf_interfaces__srv__ImageDetection_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  return true;
}

tf_interfaces__srv__ImageDetection_Request *
tf_interfaces__srv__ImageDetection_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf_interfaces__srv__ImageDetection_Request * msg = (tf_interfaces__srv__ImageDetection_Request *)allocator.allocate(sizeof(tf_interfaces__srv__ImageDetection_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf_interfaces__srv__ImageDetection_Request));
  bool success = tf_interfaces__srv__ImageDetection_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf_interfaces__srv__ImageDetection_Request__destroy(tf_interfaces__srv__ImageDetection_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf_interfaces__srv__ImageDetection_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf_interfaces__srv__ImageDetection_Request__Sequence__init(tf_interfaces__srv__ImageDetection_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf_interfaces__srv__ImageDetection_Request * data = NULL;

  if (size) {
    data = (tf_interfaces__srv__ImageDetection_Request *)allocator.zero_allocate(size, sizeof(tf_interfaces__srv__ImageDetection_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf_interfaces__srv__ImageDetection_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf_interfaces__srv__ImageDetection_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tf_interfaces__srv__ImageDetection_Request__Sequence__fini(tf_interfaces__srv__ImageDetection_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tf_interfaces__srv__ImageDetection_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tf_interfaces__srv__ImageDetection_Request__Sequence *
tf_interfaces__srv__ImageDetection_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf_interfaces__srv__ImageDetection_Request__Sequence * array = (tf_interfaces__srv__ImageDetection_Request__Sequence *)allocator.allocate(sizeof(tf_interfaces__srv__ImageDetection_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf_interfaces__srv__ImageDetection_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf_interfaces__srv__ImageDetection_Request__Sequence__destroy(tf_interfaces__srv__ImageDetection_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf_interfaces__srv__ImageDetection_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf_interfaces__srv__ImageDetection_Request__Sequence__are_equal(const tf_interfaces__srv__ImageDetection_Request__Sequence * lhs, const tf_interfaces__srv__ImageDetection_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf_interfaces__srv__ImageDetection_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf_interfaces__srv__ImageDetection_Request__Sequence__copy(
  const tf_interfaces__srv__ImageDetection_Request__Sequence * input,
  tf_interfaces__srv__ImageDetection_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf_interfaces__srv__ImageDetection_Request);
    tf_interfaces__srv__ImageDetection_Request * data =
      (tf_interfaces__srv__ImageDetection_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf_interfaces__srv__ImageDetection_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tf_interfaces__srv__ImageDetection_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tf_interfaces__srv__ImageDetection_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `detections`
#include "vision_msgs/msg/detail/detection2_d_array__functions.h"

bool
tf_interfaces__srv__ImageDetection_Response__init(tf_interfaces__srv__ImageDetection_Response * msg)
{
  if (!msg) {
    return false;
  }
  // detections
  if (!vision_msgs__msg__Detection2DArray__init(&msg->detections)) {
    tf_interfaces__srv__ImageDetection_Response__fini(msg);
    return false;
  }
  return true;
}

void
tf_interfaces__srv__ImageDetection_Response__fini(tf_interfaces__srv__ImageDetection_Response * msg)
{
  if (!msg) {
    return;
  }
  // detections
  vision_msgs__msg__Detection2DArray__fini(&msg->detections);
}

bool
tf_interfaces__srv__ImageDetection_Response__are_equal(const tf_interfaces__srv__ImageDetection_Response * lhs, const tf_interfaces__srv__ImageDetection_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // detections
  if (!vision_msgs__msg__Detection2DArray__are_equal(
      &(lhs->detections), &(rhs->detections)))
  {
    return false;
  }
  return true;
}

bool
tf_interfaces__srv__ImageDetection_Response__copy(
  const tf_interfaces__srv__ImageDetection_Response * input,
  tf_interfaces__srv__ImageDetection_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // detections
  if (!vision_msgs__msg__Detection2DArray__copy(
      &(input->detections), &(output->detections)))
  {
    return false;
  }
  return true;
}

tf_interfaces__srv__ImageDetection_Response *
tf_interfaces__srv__ImageDetection_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf_interfaces__srv__ImageDetection_Response * msg = (tf_interfaces__srv__ImageDetection_Response *)allocator.allocate(sizeof(tf_interfaces__srv__ImageDetection_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf_interfaces__srv__ImageDetection_Response));
  bool success = tf_interfaces__srv__ImageDetection_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf_interfaces__srv__ImageDetection_Response__destroy(tf_interfaces__srv__ImageDetection_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf_interfaces__srv__ImageDetection_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf_interfaces__srv__ImageDetection_Response__Sequence__init(tf_interfaces__srv__ImageDetection_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf_interfaces__srv__ImageDetection_Response * data = NULL;

  if (size) {
    data = (tf_interfaces__srv__ImageDetection_Response *)allocator.zero_allocate(size, sizeof(tf_interfaces__srv__ImageDetection_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf_interfaces__srv__ImageDetection_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf_interfaces__srv__ImageDetection_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tf_interfaces__srv__ImageDetection_Response__Sequence__fini(tf_interfaces__srv__ImageDetection_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tf_interfaces__srv__ImageDetection_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tf_interfaces__srv__ImageDetection_Response__Sequence *
tf_interfaces__srv__ImageDetection_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf_interfaces__srv__ImageDetection_Response__Sequence * array = (tf_interfaces__srv__ImageDetection_Response__Sequence *)allocator.allocate(sizeof(tf_interfaces__srv__ImageDetection_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf_interfaces__srv__ImageDetection_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf_interfaces__srv__ImageDetection_Response__Sequence__destroy(tf_interfaces__srv__ImageDetection_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf_interfaces__srv__ImageDetection_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf_interfaces__srv__ImageDetection_Response__Sequence__are_equal(const tf_interfaces__srv__ImageDetection_Response__Sequence * lhs, const tf_interfaces__srv__ImageDetection_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf_interfaces__srv__ImageDetection_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf_interfaces__srv__ImageDetection_Response__Sequence__copy(
  const tf_interfaces__srv__ImageDetection_Response__Sequence * input,
  tf_interfaces__srv__ImageDetection_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf_interfaces__srv__ImageDetection_Response);
    tf_interfaces__srv__ImageDetection_Response * data =
      (tf_interfaces__srv__ImageDetection_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf_interfaces__srv__ImageDetection_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tf_interfaces__srv__ImageDetection_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tf_interfaces__srv__ImageDetection_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
