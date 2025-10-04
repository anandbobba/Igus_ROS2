// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irc_ros_msgs:msg/GripperCommand.idl
// generated code does not contain a copyright notice
#include "irc_ros_msgs/msg/detail/gripper_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
irc_ros_msgs__msg__GripperCommand__init(irc_ros_msgs__msg__GripperCommand * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irc_ros_msgs__msg__GripperCommand__fini(msg);
    return false;
  }
  // grip
  return true;
}

void
irc_ros_msgs__msg__GripperCommand__fini(irc_ros_msgs__msg__GripperCommand * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // grip
}

bool
irc_ros_msgs__msg__GripperCommand__are_equal(const irc_ros_msgs__msg__GripperCommand * lhs, const irc_ros_msgs__msg__GripperCommand * rhs)
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
  // grip
  if (lhs->grip != rhs->grip) {
    return false;
  }
  return true;
}

bool
irc_ros_msgs__msg__GripperCommand__copy(
  const irc_ros_msgs__msg__GripperCommand * input,
  irc_ros_msgs__msg__GripperCommand * output)
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
  // grip
  output->grip = input->grip;
  return true;
}

irc_ros_msgs__msg__GripperCommand *
irc_ros_msgs__msg__GripperCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__msg__GripperCommand * msg = (irc_ros_msgs__msg__GripperCommand *)allocator.allocate(sizeof(irc_ros_msgs__msg__GripperCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irc_ros_msgs__msg__GripperCommand));
  bool success = irc_ros_msgs__msg__GripperCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irc_ros_msgs__msg__GripperCommand__destroy(irc_ros_msgs__msg__GripperCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irc_ros_msgs__msg__GripperCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irc_ros_msgs__msg__GripperCommand__Sequence__init(irc_ros_msgs__msg__GripperCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__msg__GripperCommand * data = NULL;

  if (size) {
    data = (irc_ros_msgs__msg__GripperCommand *)allocator.zero_allocate(size, sizeof(irc_ros_msgs__msg__GripperCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irc_ros_msgs__msg__GripperCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irc_ros_msgs__msg__GripperCommand__fini(&data[i - 1]);
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
irc_ros_msgs__msg__GripperCommand__Sequence__fini(irc_ros_msgs__msg__GripperCommand__Sequence * array)
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
      irc_ros_msgs__msg__GripperCommand__fini(&array->data[i]);
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

irc_ros_msgs__msg__GripperCommand__Sequence *
irc_ros_msgs__msg__GripperCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__msg__GripperCommand__Sequence * array = (irc_ros_msgs__msg__GripperCommand__Sequence *)allocator.allocate(sizeof(irc_ros_msgs__msg__GripperCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irc_ros_msgs__msg__GripperCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irc_ros_msgs__msg__GripperCommand__Sequence__destroy(irc_ros_msgs__msg__GripperCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irc_ros_msgs__msg__GripperCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irc_ros_msgs__msg__GripperCommand__Sequence__are_equal(const irc_ros_msgs__msg__GripperCommand__Sequence * lhs, const irc_ros_msgs__msg__GripperCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irc_ros_msgs__msg__GripperCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irc_ros_msgs__msg__GripperCommand__Sequence__copy(
  const irc_ros_msgs__msg__GripperCommand__Sequence * input,
  irc_ros_msgs__msg__GripperCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irc_ros_msgs__msg__GripperCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irc_ros_msgs__msg__GripperCommand * data =
      (irc_ros_msgs__msg__GripperCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irc_ros_msgs__msg__GripperCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irc_ros_msgs__msg__GripperCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irc_ros_msgs__msg__GripperCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
