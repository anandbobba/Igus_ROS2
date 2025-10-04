// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irc_ros_msgs:msg/DioCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irc_ros_msgs/msg/detail/dio_command__rosidl_typesupport_introspection_c.h"
#include "irc_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irc_ros_msgs/msg/detail/dio_command__functions.h"
#include "irc_ros_msgs/msg/detail/dio_command__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `names`
#include "rosidl_runtime_c/string_functions.h"
// Member `outputs`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__DioCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irc_ros_msgs__msg__DioCommand__init(message_memory);
}

void irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__DioCommand_fini_function(void * message_memory)
{
  irc_ros_msgs__msg__DioCommand__fini(message_memory);
}

size_t irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__size_function__DioCommand__names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__get_const_function__DioCommand__names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__get_function__DioCommand__names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__fetch_function__DioCommand__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__get_const_function__DioCommand__names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__assign_function__DioCommand__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__get_function__DioCommand__names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__resize_function__DioCommand__names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__size_function__DioCommand__outputs(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__get_const_function__DioCommand__outputs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__get_function__DioCommand__outputs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__fetch_function__DioCommand__outputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__get_const_function__DioCommand__outputs(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__assign_function__DioCommand__outputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__get_function__DioCommand__outputs(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__resize_function__DioCommand__outputs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__DioCommand_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irc_ros_msgs__msg__DioCommand, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irc_ros_msgs__msg__DioCommand, names),  // bytes offset in struct
    NULL,  // default value
    irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__size_function__DioCommand__names,  // size() function pointer
    irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__get_const_function__DioCommand__names,  // get_const(index) function pointer
    irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__get_function__DioCommand__names,  // get(index) function pointer
    irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__fetch_function__DioCommand__names,  // fetch(index, &value) function pointer
    irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__assign_function__DioCommand__names,  // assign(index, value) function pointer
    irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__resize_function__DioCommand__names  // resize(index) function pointer
  },
  {
    "outputs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irc_ros_msgs__msg__DioCommand, outputs),  // bytes offset in struct
    NULL,  // default value
    irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__size_function__DioCommand__outputs,  // size() function pointer
    irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__get_const_function__DioCommand__outputs,  // get_const(index) function pointer
    irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__get_function__DioCommand__outputs,  // get(index) function pointer
    irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__fetch_function__DioCommand__outputs,  // fetch(index, &value) function pointer
    irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__assign_function__DioCommand__outputs,  // assign(index, value) function pointer
    irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__resize_function__DioCommand__outputs  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__DioCommand_message_members = {
  "irc_ros_msgs__msg",  // message namespace
  "DioCommand",  // message name
  3,  // number of fields
  sizeof(irc_ros_msgs__msg__DioCommand),
  irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__DioCommand_message_member_array,  // message members
  irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__DioCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__DioCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__DioCommand_message_type_support_handle = {
  0,
  &irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__DioCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irc_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irc_ros_msgs, msg, DioCommand)() {
  irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__DioCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__DioCommand_message_type_support_handle.typesupport_identifier) {
    irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__DioCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irc_ros_msgs__msg__DioCommand__rosidl_typesupport_introspection_c__DioCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
