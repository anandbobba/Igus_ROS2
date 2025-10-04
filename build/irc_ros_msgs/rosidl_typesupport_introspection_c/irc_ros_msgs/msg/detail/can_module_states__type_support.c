// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irc_ros_msgs:msg/CanModuleStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irc_ros_msgs/msg/detail/can_module_states__rosidl_typesupport_introspection_c.h"
#include "irc_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irc_ros_msgs/msg/detail/can_module_states__functions.h"
#include "irc_ros_msgs/msg/detail/can_module_states__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `module_states`
#include "irc_ros_msgs/msg/can_module_state.h"
// Member `module_states`
#include "irc_ros_msgs/msg/detail/can_module_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__CanModuleStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irc_ros_msgs__msg__CanModuleStates__init(message_memory);
}

void irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__CanModuleStates_fini_function(void * message_memory)
{
  irc_ros_msgs__msg__CanModuleStates__fini(message_memory);
}

size_t irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__size_function__CanModuleStates__module_states(
  const void * untyped_member)
{
  const irc_ros_msgs__msg__CanModuleState__Sequence * member =
    (const irc_ros_msgs__msg__CanModuleState__Sequence *)(untyped_member);
  return member->size;
}

const void * irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__get_const_function__CanModuleStates__module_states(
  const void * untyped_member, size_t index)
{
  const irc_ros_msgs__msg__CanModuleState__Sequence * member =
    (const irc_ros_msgs__msg__CanModuleState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__get_function__CanModuleStates__module_states(
  void * untyped_member, size_t index)
{
  irc_ros_msgs__msg__CanModuleState__Sequence * member =
    (irc_ros_msgs__msg__CanModuleState__Sequence *)(untyped_member);
  return &member->data[index];
}

void irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__fetch_function__CanModuleStates__module_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const irc_ros_msgs__msg__CanModuleState * item =
    ((const irc_ros_msgs__msg__CanModuleState *)
    irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__get_const_function__CanModuleStates__module_states(untyped_member, index));
  irc_ros_msgs__msg__CanModuleState * value =
    (irc_ros_msgs__msg__CanModuleState *)(untyped_value);
  *value = *item;
}

void irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__assign_function__CanModuleStates__module_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  irc_ros_msgs__msg__CanModuleState * item =
    ((irc_ros_msgs__msg__CanModuleState *)
    irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__get_function__CanModuleStates__module_states(untyped_member, index));
  const irc_ros_msgs__msg__CanModuleState * value =
    (const irc_ros_msgs__msg__CanModuleState *)(untyped_value);
  *item = *value;
}

bool irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__resize_function__CanModuleStates__module_states(
  void * untyped_member, size_t size)
{
  irc_ros_msgs__msg__CanModuleState__Sequence * member =
    (irc_ros_msgs__msg__CanModuleState__Sequence *)(untyped_member);
  irc_ros_msgs__msg__CanModuleState__Sequence__fini(member);
  return irc_ros_msgs__msg__CanModuleState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__CanModuleStates_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irc_ros_msgs__msg__CanModuleStates, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "module_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irc_ros_msgs__msg__CanModuleStates, module_states),  // bytes offset in struct
    NULL,  // default value
    irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__size_function__CanModuleStates__module_states,  // size() function pointer
    irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__get_const_function__CanModuleStates__module_states,  // get_const(index) function pointer
    irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__get_function__CanModuleStates__module_states,  // get(index) function pointer
    irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__fetch_function__CanModuleStates__module_states,  // fetch(index, &value) function pointer
    irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__assign_function__CanModuleStates__module_states,  // assign(index, value) function pointer
    irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__resize_function__CanModuleStates__module_states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__CanModuleStates_message_members = {
  "irc_ros_msgs__msg",  // message namespace
  "CanModuleStates",  // message name
  2,  // number of fields
  sizeof(irc_ros_msgs__msg__CanModuleStates),
  irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__CanModuleStates_message_member_array,  // message members
  irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__CanModuleStates_init_function,  // function to initialize message memory (memory has to be allocated)
  irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__CanModuleStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__CanModuleStates_message_type_support_handle = {
  0,
  &irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__CanModuleStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irc_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irc_ros_msgs, msg, CanModuleStates)() {
  irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__CanModuleStates_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__CanModuleStates_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irc_ros_msgs, msg, CanModuleState)();
  if (!irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__CanModuleStates_message_type_support_handle.typesupport_identifier) {
    irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__CanModuleStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irc_ros_msgs__msg__CanModuleStates__rosidl_typesupport_introspection_c__CanModuleStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
