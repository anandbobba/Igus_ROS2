// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irc_ros_msgs:srv/DioCommand.idl
// generated code does not contain a copyright notice
#include "irc_ros_msgs/srv/detail/dio_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `names`
#include "rosidl_runtime_c/string_functions.h"
// Member `outputs`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
irc_ros_msgs__srv__DioCommand_Request__init(irc_ros_msgs__srv__DioCommand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irc_ros_msgs__srv__DioCommand_Request__fini(msg);
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->names, 0)) {
    irc_ros_msgs__srv__DioCommand_Request__fini(msg);
    return false;
  }
  // outputs
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->outputs, 0)) {
    irc_ros_msgs__srv__DioCommand_Request__fini(msg);
    return false;
  }
  return true;
}

void
irc_ros_msgs__srv__DioCommand_Request__fini(irc_ros_msgs__srv__DioCommand_Request * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // names
  rosidl_runtime_c__String__Sequence__fini(&msg->names);
  // outputs
  rosidl_runtime_c__boolean__Sequence__fini(&msg->outputs);
}

bool
irc_ros_msgs__srv__DioCommand_Request__are_equal(const irc_ros_msgs__srv__DioCommand_Request * lhs, const irc_ros_msgs__srv__DioCommand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->names), &(rhs->names)))
  {
    return false;
  }
  // outputs
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->outputs), &(rhs->outputs)))
  {
    return false;
  }
  return true;
}

bool
irc_ros_msgs__srv__DioCommand_Request__copy(
  const irc_ros_msgs__srv__DioCommand_Request * input,
  irc_ros_msgs__srv__DioCommand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->names), &(output->names)))
  {
    return false;
  }
  // outputs
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->outputs), &(output->outputs)))
  {
    return false;
  }
  return true;
}

irc_ros_msgs__srv__DioCommand_Request *
irc_ros_msgs__srv__DioCommand_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__srv__DioCommand_Request * msg = (irc_ros_msgs__srv__DioCommand_Request *)allocator.allocate(sizeof(irc_ros_msgs__srv__DioCommand_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irc_ros_msgs__srv__DioCommand_Request));
  bool success = irc_ros_msgs__srv__DioCommand_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irc_ros_msgs__srv__DioCommand_Request__destroy(irc_ros_msgs__srv__DioCommand_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irc_ros_msgs__srv__DioCommand_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irc_ros_msgs__srv__DioCommand_Request__Sequence__init(irc_ros_msgs__srv__DioCommand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__srv__DioCommand_Request * data = NULL;

  if (size) {
    data = (irc_ros_msgs__srv__DioCommand_Request *)allocator.zero_allocate(size, sizeof(irc_ros_msgs__srv__DioCommand_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irc_ros_msgs__srv__DioCommand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irc_ros_msgs__srv__DioCommand_Request__fini(&data[i - 1]);
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
irc_ros_msgs__srv__DioCommand_Request__Sequence__fini(irc_ros_msgs__srv__DioCommand_Request__Sequence * array)
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
      irc_ros_msgs__srv__DioCommand_Request__fini(&array->data[i]);
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

irc_ros_msgs__srv__DioCommand_Request__Sequence *
irc_ros_msgs__srv__DioCommand_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__srv__DioCommand_Request__Sequence * array = (irc_ros_msgs__srv__DioCommand_Request__Sequence *)allocator.allocate(sizeof(irc_ros_msgs__srv__DioCommand_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irc_ros_msgs__srv__DioCommand_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irc_ros_msgs__srv__DioCommand_Request__Sequence__destroy(irc_ros_msgs__srv__DioCommand_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irc_ros_msgs__srv__DioCommand_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irc_ros_msgs__srv__DioCommand_Request__Sequence__are_equal(const irc_ros_msgs__srv__DioCommand_Request__Sequence * lhs, const irc_ros_msgs__srv__DioCommand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irc_ros_msgs__srv__DioCommand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irc_ros_msgs__srv__DioCommand_Request__Sequence__copy(
  const irc_ros_msgs__srv__DioCommand_Request__Sequence * input,
  irc_ros_msgs__srv__DioCommand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irc_ros_msgs__srv__DioCommand_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irc_ros_msgs__srv__DioCommand_Request * data =
      (irc_ros_msgs__srv__DioCommand_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irc_ros_msgs__srv__DioCommand_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irc_ros_msgs__srv__DioCommand_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irc_ros_msgs__srv__DioCommand_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
irc_ros_msgs__srv__DioCommand_Response__init(irc_ros_msgs__srv__DioCommand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
irc_ros_msgs__srv__DioCommand_Response__fini(irc_ros_msgs__srv__DioCommand_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
irc_ros_msgs__srv__DioCommand_Response__are_equal(const irc_ros_msgs__srv__DioCommand_Response * lhs, const irc_ros_msgs__srv__DioCommand_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
irc_ros_msgs__srv__DioCommand_Response__copy(
  const irc_ros_msgs__srv__DioCommand_Response * input,
  irc_ros_msgs__srv__DioCommand_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

irc_ros_msgs__srv__DioCommand_Response *
irc_ros_msgs__srv__DioCommand_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__srv__DioCommand_Response * msg = (irc_ros_msgs__srv__DioCommand_Response *)allocator.allocate(sizeof(irc_ros_msgs__srv__DioCommand_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irc_ros_msgs__srv__DioCommand_Response));
  bool success = irc_ros_msgs__srv__DioCommand_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irc_ros_msgs__srv__DioCommand_Response__destroy(irc_ros_msgs__srv__DioCommand_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irc_ros_msgs__srv__DioCommand_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irc_ros_msgs__srv__DioCommand_Response__Sequence__init(irc_ros_msgs__srv__DioCommand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__srv__DioCommand_Response * data = NULL;

  if (size) {
    data = (irc_ros_msgs__srv__DioCommand_Response *)allocator.zero_allocate(size, sizeof(irc_ros_msgs__srv__DioCommand_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irc_ros_msgs__srv__DioCommand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irc_ros_msgs__srv__DioCommand_Response__fini(&data[i - 1]);
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
irc_ros_msgs__srv__DioCommand_Response__Sequence__fini(irc_ros_msgs__srv__DioCommand_Response__Sequence * array)
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
      irc_ros_msgs__srv__DioCommand_Response__fini(&array->data[i]);
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

irc_ros_msgs__srv__DioCommand_Response__Sequence *
irc_ros_msgs__srv__DioCommand_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__srv__DioCommand_Response__Sequence * array = (irc_ros_msgs__srv__DioCommand_Response__Sequence *)allocator.allocate(sizeof(irc_ros_msgs__srv__DioCommand_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irc_ros_msgs__srv__DioCommand_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irc_ros_msgs__srv__DioCommand_Response__Sequence__destroy(irc_ros_msgs__srv__DioCommand_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irc_ros_msgs__srv__DioCommand_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irc_ros_msgs__srv__DioCommand_Response__Sequence__are_equal(const irc_ros_msgs__srv__DioCommand_Response__Sequence * lhs, const irc_ros_msgs__srv__DioCommand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irc_ros_msgs__srv__DioCommand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irc_ros_msgs__srv__DioCommand_Response__Sequence__copy(
  const irc_ros_msgs__srv__DioCommand_Response__Sequence * input,
  irc_ros_msgs__srv__DioCommand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irc_ros_msgs__srv__DioCommand_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irc_ros_msgs__srv__DioCommand_Response * data =
      (irc_ros_msgs__srv__DioCommand_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irc_ros_msgs__srv__DioCommand_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irc_ros_msgs__srv__DioCommand_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irc_ros_msgs__srv__DioCommand_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
