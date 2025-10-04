// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irc_ros_msgs:srv/GripperCommand.idl
// generated code does not contain a copyright notice
#include "irc_ros_msgs/srv/detail/gripper_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
irc_ros_msgs__srv__GripperCommand_Request__init(irc_ros_msgs__srv__GripperCommand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // grip
  return true;
}

void
irc_ros_msgs__srv__GripperCommand_Request__fini(irc_ros_msgs__srv__GripperCommand_Request * msg)
{
  if (!msg) {
    return;
  }
  // grip
}

bool
irc_ros_msgs__srv__GripperCommand_Request__are_equal(const irc_ros_msgs__srv__GripperCommand_Request * lhs, const irc_ros_msgs__srv__GripperCommand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // grip
  if (lhs->grip != rhs->grip) {
    return false;
  }
  return true;
}

bool
irc_ros_msgs__srv__GripperCommand_Request__copy(
  const irc_ros_msgs__srv__GripperCommand_Request * input,
  irc_ros_msgs__srv__GripperCommand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // grip
  output->grip = input->grip;
  return true;
}

irc_ros_msgs__srv__GripperCommand_Request *
irc_ros_msgs__srv__GripperCommand_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__srv__GripperCommand_Request * msg = (irc_ros_msgs__srv__GripperCommand_Request *)allocator.allocate(sizeof(irc_ros_msgs__srv__GripperCommand_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irc_ros_msgs__srv__GripperCommand_Request));
  bool success = irc_ros_msgs__srv__GripperCommand_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irc_ros_msgs__srv__GripperCommand_Request__destroy(irc_ros_msgs__srv__GripperCommand_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irc_ros_msgs__srv__GripperCommand_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irc_ros_msgs__srv__GripperCommand_Request__Sequence__init(irc_ros_msgs__srv__GripperCommand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__srv__GripperCommand_Request * data = NULL;

  if (size) {
    data = (irc_ros_msgs__srv__GripperCommand_Request *)allocator.zero_allocate(size, sizeof(irc_ros_msgs__srv__GripperCommand_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irc_ros_msgs__srv__GripperCommand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irc_ros_msgs__srv__GripperCommand_Request__fini(&data[i - 1]);
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
irc_ros_msgs__srv__GripperCommand_Request__Sequence__fini(irc_ros_msgs__srv__GripperCommand_Request__Sequence * array)
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
      irc_ros_msgs__srv__GripperCommand_Request__fini(&array->data[i]);
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

irc_ros_msgs__srv__GripperCommand_Request__Sequence *
irc_ros_msgs__srv__GripperCommand_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__srv__GripperCommand_Request__Sequence * array = (irc_ros_msgs__srv__GripperCommand_Request__Sequence *)allocator.allocate(sizeof(irc_ros_msgs__srv__GripperCommand_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irc_ros_msgs__srv__GripperCommand_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irc_ros_msgs__srv__GripperCommand_Request__Sequence__destroy(irc_ros_msgs__srv__GripperCommand_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irc_ros_msgs__srv__GripperCommand_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irc_ros_msgs__srv__GripperCommand_Request__Sequence__are_equal(const irc_ros_msgs__srv__GripperCommand_Request__Sequence * lhs, const irc_ros_msgs__srv__GripperCommand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irc_ros_msgs__srv__GripperCommand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irc_ros_msgs__srv__GripperCommand_Request__Sequence__copy(
  const irc_ros_msgs__srv__GripperCommand_Request__Sequence * input,
  irc_ros_msgs__srv__GripperCommand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irc_ros_msgs__srv__GripperCommand_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irc_ros_msgs__srv__GripperCommand_Request * data =
      (irc_ros_msgs__srv__GripperCommand_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irc_ros_msgs__srv__GripperCommand_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irc_ros_msgs__srv__GripperCommand_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irc_ros_msgs__srv__GripperCommand_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
irc_ros_msgs__srv__GripperCommand_Response__init(irc_ros_msgs__srv__GripperCommand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // gripped
  return true;
}

void
irc_ros_msgs__srv__GripperCommand_Response__fini(irc_ros_msgs__srv__GripperCommand_Response * msg)
{
  if (!msg) {
    return;
  }
  // gripped
}

bool
irc_ros_msgs__srv__GripperCommand_Response__are_equal(const irc_ros_msgs__srv__GripperCommand_Response * lhs, const irc_ros_msgs__srv__GripperCommand_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gripped
  if (lhs->gripped != rhs->gripped) {
    return false;
  }
  return true;
}

bool
irc_ros_msgs__srv__GripperCommand_Response__copy(
  const irc_ros_msgs__srv__GripperCommand_Response * input,
  irc_ros_msgs__srv__GripperCommand_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // gripped
  output->gripped = input->gripped;
  return true;
}

irc_ros_msgs__srv__GripperCommand_Response *
irc_ros_msgs__srv__GripperCommand_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__srv__GripperCommand_Response * msg = (irc_ros_msgs__srv__GripperCommand_Response *)allocator.allocate(sizeof(irc_ros_msgs__srv__GripperCommand_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irc_ros_msgs__srv__GripperCommand_Response));
  bool success = irc_ros_msgs__srv__GripperCommand_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irc_ros_msgs__srv__GripperCommand_Response__destroy(irc_ros_msgs__srv__GripperCommand_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irc_ros_msgs__srv__GripperCommand_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irc_ros_msgs__srv__GripperCommand_Response__Sequence__init(irc_ros_msgs__srv__GripperCommand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__srv__GripperCommand_Response * data = NULL;

  if (size) {
    data = (irc_ros_msgs__srv__GripperCommand_Response *)allocator.zero_allocate(size, sizeof(irc_ros_msgs__srv__GripperCommand_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irc_ros_msgs__srv__GripperCommand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irc_ros_msgs__srv__GripperCommand_Response__fini(&data[i - 1]);
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
irc_ros_msgs__srv__GripperCommand_Response__Sequence__fini(irc_ros_msgs__srv__GripperCommand_Response__Sequence * array)
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
      irc_ros_msgs__srv__GripperCommand_Response__fini(&array->data[i]);
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

irc_ros_msgs__srv__GripperCommand_Response__Sequence *
irc_ros_msgs__srv__GripperCommand_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__srv__GripperCommand_Response__Sequence * array = (irc_ros_msgs__srv__GripperCommand_Response__Sequence *)allocator.allocate(sizeof(irc_ros_msgs__srv__GripperCommand_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irc_ros_msgs__srv__GripperCommand_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irc_ros_msgs__srv__GripperCommand_Response__Sequence__destroy(irc_ros_msgs__srv__GripperCommand_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irc_ros_msgs__srv__GripperCommand_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irc_ros_msgs__srv__GripperCommand_Response__Sequence__are_equal(const irc_ros_msgs__srv__GripperCommand_Response__Sequence * lhs, const irc_ros_msgs__srv__GripperCommand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irc_ros_msgs__srv__GripperCommand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irc_ros_msgs__srv__GripperCommand_Response__Sequence__copy(
  const irc_ros_msgs__srv__GripperCommand_Response__Sequence * input,
  irc_ros_msgs__srv__GripperCommand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irc_ros_msgs__srv__GripperCommand_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irc_ros_msgs__srv__GripperCommand_Response * data =
      (irc_ros_msgs__srv__GripperCommand_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irc_ros_msgs__srv__GripperCommand_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irc_ros_msgs__srv__GripperCommand_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irc_ros_msgs__srv__GripperCommand_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
