// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irc_ros_msgs:msg/CanModuleState.idl
// generated code does not contain a copyright notice
#include "irc_ros_msgs/msg/detail/can_module_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `can_id`
// Member `hardware_ident`
// Member `reset_state`
// Member `motor_state`
#include "rosidl_runtime_c/string_functions.h"

bool
irc_ros_msgs__msg__CanModuleState__init(irc_ros_msgs__msg__CanModuleState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    irc_ros_msgs__msg__CanModuleState__fini(msg);
    return false;
  }
  // can_id
  if (!rosidl_runtime_c__String__init(&msg->can_id)) {
    irc_ros_msgs__msg__CanModuleState__fini(msg);
    return false;
  }
  // hardware_ident
  if (!rosidl_runtime_c__String__init(&msg->hardware_ident)) {
    irc_ros_msgs__msg__CanModuleState__fini(msg);
    return false;
  }
  // version_major
  // version_minor
  // temperature_motor
  // temperature_board
  // supply_voltage
  // motor_current
  // error_state
  // reset_state
  if (!rosidl_runtime_c__String__init(&msg->reset_state)) {
    irc_ros_msgs__msg__CanModuleState__fini(msg);
    return false;
  }
  // motor_state
  if (!rosidl_runtime_c__String__init(&msg->motor_state)) {
    irc_ros_msgs__msg__CanModuleState__fini(msg);
    return false;
  }
  // command_mode
  return true;
}

void
irc_ros_msgs__msg__CanModuleState__fini(irc_ros_msgs__msg__CanModuleState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // can_id
  rosidl_runtime_c__String__fini(&msg->can_id);
  // hardware_ident
  rosidl_runtime_c__String__fini(&msg->hardware_ident);
  // version_major
  // version_minor
  // temperature_motor
  // temperature_board
  // supply_voltage
  // motor_current
  // error_state
  // reset_state
  rosidl_runtime_c__String__fini(&msg->reset_state);
  // motor_state
  rosidl_runtime_c__String__fini(&msg->motor_state);
  // command_mode
}

bool
irc_ros_msgs__msg__CanModuleState__are_equal(const irc_ros_msgs__msg__CanModuleState * lhs, const irc_ros_msgs__msg__CanModuleState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // can_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->can_id), &(rhs->can_id)))
  {
    return false;
  }
  // hardware_ident
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hardware_ident), &(rhs->hardware_ident)))
  {
    return false;
  }
  // version_major
  if (lhs->version_major != rhs->version_major) {
    return false;
  }
  // version_minor
  if (lhs->version_minor != rhs->version_minor) {
    return false;
  }
  // temperature_motor
  if (lhs->temperature_motor != rhs->temperature_motor) {
    return false;
  }
  // temperature_board
  if (lhs->temperature_board != rhs->temperature_board) {
    return false;
  }
  // supply_voltage
  if (lhs->supply_voltage != rhs->supply_voltage) {
    return false;
  }
  // motor_current
  if (lhs->motor_current != rhs->motor_current) {
    return false;
  }
  // error_state
  if (lhs->error_state != rhs->error_state) {
    return false;
  }
  // reset_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reset_state), &(rhs->reset_state)))
  {
    return false;
  }
  // motor_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->motor_state), &(rhs->motor_state)))
  {
    return false;
  }
  // command_mode
  if (lhs->command_mode != rhs->command_mode) {
    return false;
  }
  return true;
}

bool
irc_ros_msgs__msg__CanModuleState__copy(
  const irc_ros_msgs__msg__CanModuleState * input,
  irc_ros_msgs__msg__CanModuleState * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // can_id
  if (!rosidl_runtime_c__String__copy(
      &(input->can_id), &(output->can_id)))
  {
    return false;
  }
  // hardware_ident
  if (!rosidl_runtime_c__String__copy(
      &(input->hardware_ident), &(output->hardware_ident)))
  {
    return false;
  }
  // version_major
  output->version_major = input->version_major;
  // version_minor
  output->version_minor = input->version_minor;
  // temperature_motor
  output->temperature_motor = input->temperature_motor;
  // temperature_board
  output->temperature_board = input->temperature_board;
  // supply_voltage
  output->supply_voltage = input->supply_voltage;
  // motor_current
  output->motor_current = input->motor_current;
  // error_state
  output->error_state = input->error_state;
  // reset_state
  if (!rosidl_runtime_c__String__copy(
      &(input->reset_state), &(output->reset_state)))
  {
    return false;
  }
  // motor_state
  if (!rosidl_runtime_c__String__copy(
      &(input->motor_state), &(output->motor_state)))
  {
    return false;
  }
  // command_mode
  output->command_mode = input->command_mode;
  return true;
}

irc_ros_msgs__msg__CanModuleState *
irc_ros_msgs__msg__CanModuleState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__msg__CanModuleState * msg = (irc_ros_msgs__msg__CanModuleState *)allocator.allocate(sizeof(irc_ros_msgs__msg__CanModuleState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irc_ros_msgs__msg__CanModuleState));
  bool success = irc_ros_msgs__msg__CanModuleState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irc_ros_msgs__msg__CanModuleState__destroy(irc_ros_msgs__msg__CanModuleState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irc_ros_msgs__msg__CanModuleState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irc_ros_msgs__msg__CanModuleState__Sequence__init(irc_ros_msgs__msg__CanModuleState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__msg__CanModuleState * data = NULL;

  if (size) {
    data = (irc_ros_msgs__msg__CanModuleState *)allocator.zero_allocate(size, sizeof(irc_ros_msgs__msg__CanModuleState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irc_ros_msgs__msg__CanModuleState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irc_ros_msgs__msg__CanModuleState__fini(&data[i - 1]);
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
irc_ros_msgs__msg__CanModuleState__Sequence__fini(irc_ros_msgs__msg__CanModuleState__Sequence * array)
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
      irc_ros_msgs__msg__CanModuleState__fini(&array->data[i]);
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

irc_ros_msgs__msg__CanModuleState__Sequence *
irc_ros_msgs__msg__CanModuleState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irc_ros_msgs__msg__CanModuleState__Sequence * array = (irc_ros_msgs__msg__CanModuleState__Sequence *)allocator.allocate(sizeof(irc_ros_msgs__msg__CanModuleState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irc_ros_msgs__msg__CanModuleState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irc_ros_msgs__msg__CanModuleState__Sequence__destroy(irc_ros_msgs__msg__CanModuleState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irc_ros_msgs__msg__CanModuleState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irc_ros_msgs__msg__CanModuleState__Sequence__are_equal(const irc_ros_msgs__msg__CanModuleState__Sequence * lhs, const irc_ros_msgs__msg__CanModuleState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irc_ros_msgs__msg__CanModuleState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irc_ros_msgs__msg__CanModuleState__Sequence__copy(
  const irc_ros_msgs__msg__CanModuleState__Sequence * input,
  irc_ros_msgs__msg__CanModuleState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irc_ros_msgs__msg__CanModuleState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irc_ros_msgs__msg__CanModuleState * data =
      (irc_ros_msgs__msg__CanModuleState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irc_ros_msgs__msg__CanModuleState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irc_ros_msgs__msg__CanModuleState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irc_ros_msgs__msg__CanModuleState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
