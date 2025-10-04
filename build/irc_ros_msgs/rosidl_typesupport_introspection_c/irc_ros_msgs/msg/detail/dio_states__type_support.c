// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irc_ros_msgs:msg/DioStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irc_ros_msgs/msg/detail/dio_states__rosidl_typesupport_introspection_c.h"
#include "irc_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irc_ros_msgs/msg/detail/dio_states__functions.h"
#include "irc_ros_msgs/msg/detail/dio_states__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `dio_states`
#include "irc_ros_msgs/msg/dio_state.h"
// Member `dio_states`
#include "irc_ros_msgs/msg/detail/dio_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__DioStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irc_ros_msgs__msg__DioStates__init(message_memory);
}

void irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__DioStates_fini_function(void * message_memory)
{
  irc_ros_msgs__msg__DioStates__fini(message_memory);
}

size_t irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__size_function__DioStates__dio_states(
  const void * untyped_member)
{
  const irc_ros_msgs__msg__DioState__Sequence * member =
    (const irc_ros_msgs__msg__DioState__Sequence *)(untyped_member);
  return member->size;
}

const void * irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__get_const_function__DioStates__dio_states(
  const void * untyped_member, size_t index)
{
  const irc_ros_msgs__msg__DioState__Sequence * member =
    (const irc_ros_msgs__msg__DioState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__get_function__DioStates__dio_states(
  void * untyped_member, size_t index)
{
  irc_ros_msgs__msg__DioState__Sequence * member =
    (irc_ros_msgs__msg__DioState__Sequence *)(untyped_member);
  return &member->data[index];
}

void irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__fetch_function__DioStates__dio_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const irc_ros_msgs__msg__DioState * item =
    ((const irc_ros_msgs__msg__DioState *)
    irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__get_const_function__DioStates__dio_states(untyped_member, index));
  irc_ros_msgs__msg__DioState * value =
    (irc_ros_msgs__msg__DioState *)(untyped_value);
  *value = *item;
}

void irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__assign_function__DioStates__dio_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  irc_ros_msgs__msg__DioState * item =
    ((irc_ros_msgs__msg__DioState *)
    irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__get_function__DioStates__dio_states(untyped_member, index));
  const irc_ros_msgs__msg__DioState * value =
    (const irc_ros_msgs__msg__DioState *)(untyped_value);
  *item = *value;
}

bool irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__resize_function__DioStates__dio_states(
  void * untyped_member, size_t size)
{
  irc_ros_msgs__msg__DioState__Sequence * member =
    (irc_ros_msgs__msg__DioState__Sequence *)(untyped_member);
  irc_ros_msgs__msg__DioState__Sequence__fini(member);
  return irc_ros_msgs__msg__DioState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__DioStates_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irc_ros_msgs__msg__DioStates, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dio_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irc_ros_msgs__msg__DioStates, dio_states),  // bytes offset in struct
    NULL,  // default value
    irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__size_function__DioStates__dio_states,  // size() function pointer
    irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__get_const_function__DioStates__dio_states,  // get_const(index) function pointer
    irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__get_function__DioStates__dio_states,  // get(index) function pointer
    irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__fetch_function__DioStates__dio_states,  // fetch(index, &value) function pointer
    irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__assign_function__DioStates__dio_states,  // assign(index, value) function pointer
    irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__resize_function__DioStates__dio_states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__DioStates_message_members = {
  "irc_ros_msgs__msg",  // message namespace
  "DioStates",  // message name
  2,  // number of fields
  sizeof(irc_ros_msgs__msg__DioStates),
  irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__DioStates_message_member_array,  // message members
  irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__DioStates_init_function,  // function to initialize message memory (memory has to be allocated)
  irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__DioStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__DioStates_message_type_support_handle = {
  0,
  &irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__DioStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irc_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irc_ros_msgs, msg, DioStates)() {
  irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__DioStates_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__DioStates_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irc_ros_msgs, msg, DioState)();
  if (!irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__DioStates_message_type_support_handle.typesupport_identifier) {
    irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__DioStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irc_ros_msgs__msg__DioStates__rosidl_typesupport_introspection_c__DioStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
