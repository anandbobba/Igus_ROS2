// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from irc_ros_msgs:srv/GripperCommand.idl
// generated code does not contain a copyright notice
#include "irc_ros_msgs/srv/detail/gripper_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "irc_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "irc_ros_msgs/srv/detail/gripper_command__struct.h"
#include "irc_ros_msgs/srv/detail/gripper_command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GripperCommand_Request__ros_msg_type = irc_ros_msgs__srv__GripperCommand_Request;

static bool _GripperCommand_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GripperCommand_Request__ros_msg_type * ros_message = static_cast<const _GripperCommand_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: grip
  {
    cdr << (ros_message->grip ? true : false);
  }

  return true;
}

static bool _GripperCommand_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GripperCommand_Request__ros_msg_type * ros_message = static_cast<_GripperCommand_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: grip
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->grip = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irc_ros_msgs
size_t get_serialized_size_irc_ros_msgs__srv__GripperCommand_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GripperCommand_Request__ros_msg_type * ros_message = static_cast<const _GripperCommand_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name grip
  {
    size_t item_size = sizeof(ros_message->grip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GripperCommand_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_irc_ros_msgs__srv__GripperCommand_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irc_ros_msgs
size_t max_serialized_size_irc_ros_msgs__srv__GripperCommand_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: grip
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = irc_ros_msgs__srv__GripperCommand_Request;
    is_plain =
      (
      offsetof(DataType, grip) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GripperCommand_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_irc_ros_msgs__srv__GripperCommand_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GripperCommand_Request = {
  "irc_ros_msgs::srv",
  "GripperCommand_Request",
  _GripperCommand_Request__cdr_serialize,
  _GripperCommand_Request__cdr_deserialize,
  _GripperCommand_Request__get_serialized_size,
  _GripperCommand_Request__max_serialized_size
};

static rosidl_message_type_support_t _GripperCommand_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GripperCommand_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irc_ros_msgs, srv, GripperCommand_Request)() {
  return &_GripperCommand_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "irc_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "irc_ros_msgs/srv/detail/gripper_command__struct.h"
// already included above
// #include "irc_ros_msgs/srv/detail/gripper_command__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GripperCommand_Response__ros_msg_type = irc_ros_msgs__srv__GripperCommand_Response;

static bool _GripperCommand_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GripperCommand_Response__ros_msg_type * ros_message = static_cast<const _GripperCommand_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: gripped
  {
    cdr << (ros_message->gripped ? true : false);
  }

  return true;
}

static bool _GripperCommand_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GripperCommand_Response__ros_msg_type * ros_message = static_cast<_GripperCommand_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: gripped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gripped = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irc_ros_msgs
size_t get_serialized_size_irc_ros_msgs__srv__GripperCommand_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GripperCommand_Response__ros_msg_type * ros_message = static_cast<const _GripperCommand_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name gripped
  {
    size_t item_size = sizeof(ros_message->gripped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GripperCommand_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_irc_ros_msgs__srv__GripperCommand_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irc_ros_msgs
size_t max_serialized_size_irc_ros_msgs__srv__GripperCommand_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: gripped
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = irc_ros_msgs__srv__GripperCommand_Response;
    is_plain =
      (
      offsetof(DataType, gripped) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GripperCommand_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_irc_ros_msgs__srv__GripperCommand_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GripperCommand_Response = {
  "irc_ros_msgs::srv",
  "GripperCommand_Response",
  _GripperCommand_Response__cdr_serialize,
  _GripperCommand_Response__cdr_deserialize,
  _GripperCommand_Response__get_serialized_size,
  _GripperCommand_Response__max_serialized_size
};

static rosidl_message_type_support_t _GripperCommand_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GripperCommand_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irc_ros_msgs, srv, GripperCommand_Response)() {
  return &_GripperCommand_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "irc_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "irc_ros_msgs/srv/gripper_command.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GripperCommand__callbacks = {
  "irc_ros_msgs::srv",
  "GripperCommand",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irc_ros_msgs, srv, GripperCommand_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irc_ros_msgs, srv, GripperCommand_Response)(),
};

static rosidl_service_type_support_t GripperCommand__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GripperCommand__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irc_ros_msgs, srv, GripperCommand)() {
  return &GripperCommand__handle;
}

#if defined(__cplusplus)
}
#endif
