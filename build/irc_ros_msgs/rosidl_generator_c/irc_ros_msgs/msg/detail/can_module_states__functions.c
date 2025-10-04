// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irc_ros_msgs:msg/CanModuleStates.idl
// generated code does not contain a copyright notice
#include "irc_ros_msgs/msg/detail/can_module_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `module_states`
#include "irc_ros_msgs/msg/detail/can_module_state__functions.h"

bool
irc_ros_msgs__msg__CanModuleStates__init(irc_ros_msgs__msg__CanModuleStates * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irc_ros_msgs__msg__CanModuleStates__fini(msg);
    return false;
  }
  // module_states
  if (!irc_ros_msgs__msg__CanModuleState__Sequence__init(&msg->module_states, 0)) {
    irc_ros_msgs__msg__CanModuleStates__fini(msg);
    return false;
  }
  return true;
}

void
irc_ros_msgs__msg__CanModuleStates__fini(irc_ros_msgs__msg__CanModuleStates * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // module_states
  irc_ros_msgs__msg__CanModuleState__Sequence__fini(&msg->module_states);
}

bool
irc_ros_msgs__msg__CanModuleStates__are_equal(const irc_ros_msgs__msg__CanModuleStates * lhs, const irc_ros_msgs__msg__CanModuleStates * rhs)
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
  // module_states
  if (!irc_ros_msgs__msg__CanModuleState__Sequence__are_equal(
      &(lhs->module_states), &(rhs->module_states)))
  {
    return false;
  }
  return true;
}

bool
irc_ros_msgs__msg__CanModuleStates__copy(
  const irc_ros_msgs__msg__CanModuleStates * input,
  irc_ros_msgs__msg__CanModuleStates * output)
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
  // module_states
  if (!irc_ros_msgs__msg__CanModuleState__Sequence__copy(
      &(input->module_states), &(output->module_states)))
  {
    return false;
  }
  return true;
}

irc_ros_msgs__msg__CanModuleStates *
irc_ros_msgs__msg__CanModuleStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__msg__CanModuleStates * msg = (irc_ros_msgs__msg__CanModuleStates *)allocator.allocate(sizeof(irc_ros_msgs__msg__CanModuleStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irc_ros_msgs__msg__CanModuleStates));
  bool success = irc_ros_msgs__msg__CanModuleStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irc_ros_msgs__msg__CanModuleStates__destroy(irc_ros_msgs__msg__CanModuleStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irc_ros_msgs__msg__CanModuleStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irc_ros_msgs__msg__CanModuleStates__Sequence__init(irc_ros_msgs__msg__CanModuleStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__msg__CanModuleStates * data = NULL;

  if (size) {
    data = (irc_ros_msgs__msg__CanModuleStates *)allocator.zero_allocate(size, sizeof(irc_ros_msgs__msg__CanModuleStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irc_ros_msgs__msg__CanModuleStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irc_ros_msgs__msg__CanModuleStates__fini(&data[i - 1]);
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
irc_ros_msgs__msg__CanModuleStates__Sequence__fini(irc_ros_msgs__msg__CanModuleStates__Sequence * array)
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
      irc_ros_msgs__msg__CanModuleStates__fini(&array->data[i]);
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

irc_ros_msgs__msg__CanModuleStates__Sequence *
irc_ros_msgs__msg__CanModuleStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__msg__CanModuleStates__Sequence * array = (irc_ros_msgs__msg__CanModuleStates__Sequence *)allocator.allocate(sizeof(irc_ros_msgs__msg__CanModuleStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irc_ros_msgs__msg__CanModuleStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irc_ros_msgs__msg__CanModuleStates__Sequence__destroy(irc_ros_msgs__msg__CanModuleStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irc_ros_msgs__msg__CanModuleStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irc_ros_msgs__msg__CanModuleStates__Sequence__are_equal(const irc_ros_msgs__msg__CanModuleStates__Sequence * lhs, const irc_ros_msgs__msg__CanModuleStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irc_ros_msgs__msg__CanModuleStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irc_ros_msgs__msg__CanModuleStates__Sequence__copy(
  const irc_ros_msgs__msg__CanModuleStates__Sequence * input,
  irc_ros_msgs__msg__CanModuleStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irc_ros_msgs__msg__CanModuleStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irc_ros_msgs__msg__CanModuleStates * data =
      (irc_ros_msgs__msg__CanModuleStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irc_ros_msgs__msg__CanModuleStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irc_ros_msgs__msg__CanModuleStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irc_ros_msgs__msg__CanModuleStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
