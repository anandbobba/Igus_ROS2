// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from irc_ros_msgs:msg/CanModuleState.idl
// generated code does not contain a copyright notice
#include "irc_ros_msgs/msg/detail/can_module_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "irc_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "irc_ros_msgs/msg/detail/can_module_state__struct.h"
#include "irc_ros_msgs/msg/detail/can_module_state__functions.h"
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

#include "rosidl_runtime_c/string.h"  // can_id, hardware_ident, motor_state, name, reset_state
#include "rosidl_runtime_c/string_functions.h"  // can_id, hardware_ident, motor_state, name, reset_state

// forward declare type support functions


using _CanModuleState__ros_msg_type = irc_ros_msgs__msg__CanModuleState;

static bool _CanModuleState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CanModuleState__ros_msg_type * ros_message = static_cast<const _CanModuleState__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: can_id
  {
    const rosidl_runtime_c__String * str = &ros_message->can_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: hardware_ident
  {
    const rosidl_runtime_c__String * str = &ros_message->hardware_ident;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: version_major
  {
    cdr << ros_message->version_major;
  }

  // Field name: version_minor
  {
    cdr << ros_message->version_minor;
  }

  // Field name: temperature_motor
  {
    cdr << ros_message->temperature_motor;
  }

  // Field name: temperature_board
  {
    cdr << ros_message->temperature_board;
  }

  // Field name: supply_voltage
  {
    cdr << ros_message->supply_voltage;
  }

  // Field name: motor_current
  {
    cdr << ros_message->motor_current;
  }

  // Field name: error_state
  {
    cdr << ros_message->error_state;
  }

  // Field name: reset_state
  {
    const rosidl_runtime_c__String * str = &ros_message->reset_state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: motor_state
  {
    const rosidl_runtime_c__String * str = &ros_message->motor_state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: command_mode
  {
    cdr << ros_message->command_mode;
  }

  return true;
}

static bool _CanModuleState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CanModuleState__ros_msg_type * ros_message = static_cast<_CanModuleState__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: can_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->can_id.data) {
      rosidl_runtime_c__String__init(&ros_message->can_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->can_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'can_id'\n");
      return false;
    }
  }

  // Field name: hardware_ident
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->hardware_ident.data) {
      rosidl_runtime_c__String__init(&ros_message->hardware_ident);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->hardware_ident,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'hardware_ident'\n");
      return false;
    }
  }

  // Field name: version_major
  {
    cdr >> ros_message->version_major;
  }

  // Field name: version_minor
  {
    cdr >> ros_message->version_minor;
  }

  // Field name: temperature_motor
  {
    cdr >> ros_message->temperature_motor;
  }

  // Field name: temperature_board
  {
    cdr >> ros_message->temperature_board;
  }

  // Field name: supply_voltage
  {
    cdr >> ros_message->supply_voltage;
  }

  // Field name: motor_current
  {
    cdr >> ros_message->motor_current;
  }

  // Field name: error_state
  {
    cdr >> ros_message->error_state;
  }

  // Field name: reset_state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->reset_state.data) {
      rosidl_runtime_c__String__init(&ros_message->reset_state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->reset_state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'reset_state'\n");
      return false;
    }
  }

  // Field name: motor_state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->motor_state.data) {
      rosidl_runtime_c__String__init(&ros_message->motor_state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->motor_state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'motor_state'\n");
      return false;
    }
  }

  // Field name: command_mode
  {
    cdr >> ros_message->command_mode;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irc_ros_msgs
size_t get_serialized_size_irc_ros_msgs__msg__CanModuleState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CanModuleState__ros_msg_type * ros_message = static_cast<const _CanModuleState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name can_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->can_id.size + 1);
  // field.name hardware_ident
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->hardware_ident.size + 1);
  // field.name version_major
  {
    size_t item_size = sizeof(ros_message->version_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name version_minor
  {
    size_t item_size = sizeof(ros_message->version_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature_motor
  {
    size_t item_size = sizeof(ros_message->temperature_motor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature_board
  {
    size_t item_size = sizeof(ros_message->temperature_board);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name supply_voltage
  {
    size_t item_size = sizeof(ros_message->supply_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_current
  {
    size_t item_size = sizeof(ros_message->motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_state
  {
    size_t item_size = sizeof(ros_message->error_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reset_state.size + 1);
  // field.name motor_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->motor_state.size + 1);
  // field.name command_mode
  {
    size_t item_size = sizeof(ros_message->command_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CanModuleState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_irc_ros_msgs__msg__CanModuleState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_irc_ros_msgs
size_t max_serialized_size_irc_ros_msgs__msg__CanModuleState(
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

  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: can_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: hardware_ident
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: version_major
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: version_minor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: temperature_motor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: temperature_board
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: supply_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: motor_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: error_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_state
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: motor_state
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: command_mode
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
    using DataType = irc_ros_msgs__msg__CanModuleState;
    is_plain =
      (
      offsetof(DataType, command_mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CanModuleState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_irc_ros_msgs__msg__CanModuleState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CanModuleState = {
  "irc_ros_msgs::msg",
  "CanModuleState",
  _CanModuleState__cdr_serialize,
  _CanModuleState__cdr_deserialize,
  _CanModuleState__get_serialized_size,
  _CanModuleState__max_serialized_size
};

static rosidl_message_type_support_t _CanModuleState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CanModuleState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, irc_ros_msgs, msg, CanModuleState)() {
  return &_CanModuleState__type_support;
}

#if defined(__cplusplus)
}
#endif
