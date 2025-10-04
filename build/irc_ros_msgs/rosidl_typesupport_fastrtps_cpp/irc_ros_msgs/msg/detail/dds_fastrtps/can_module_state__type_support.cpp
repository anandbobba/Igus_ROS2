// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from irc_ros_msgs:msg/CanModuleState.idl
// generated code does not contain a copyright notice
#include "irc_ros_msgs/msg/detail/can_module_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "irc_ros_msgs/msg/detail/can_module_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace irc_ros_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irc_ros_msgs
cdr_serialize(
  const irc_ros_msgs::msg::CanModuleState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: can_id
  cdr << ros_message.can_id;
  // Member: hardware_ident
  cdr << ros_message.hardware_ident;
  // Member: version_major
  cdr << ros_message.version_major;
  // Member: version_minor
  cdr << ros_message.version_minor;
  // Member: temperature_motor
  cdr << ros_message.temperature_motor;
  // Member: temperature_board
  cdr << ros_message.temperature_board;
  // Member: supply_voltage
  cdr << ros_message.supply_voltage;
  // Member: motor_current
  cdr << ros_message.motor_current;
  // Member: error_state
  cdr << ros_message.error_state;
  // Member: reset_state
  cdr << ros_message.reset_state;
  // Member: motor_state
  cdr << ros_message.motor_state;
  // Member: command_mode
  cdr << ros_message.command_mode;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irc_ros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  irc_ros_msgs::msg::CanModuleState & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: can_id
  cdr >> ros_message.can_id;

  // Member: hardware_ident
  cdr >> ros_message.hardware_ident;

  // Member: version_major
  cdr >> ros_message.version_major;

  // Member: version_minor
  cdr >> ros_message.version_minor;

  // Member: temperature_motor
  cdr >> ros_message.temperature_motor;

  // Member: temperature_board
  cdr >> ros_message.temperature_board;

  // Member: supply_voltage
  cdr >> ros_message.supply_voltage;

  // Member: motor_current
  cdr >> ros_message.motor_current;

  // Member: error_state
  cdr >> ros_message.error_state;

  // Member: reset_state
  cdr >> ros_message.reset_state;

  // Member: motor_state
  cdr >> ros_message.motor_state;

  // Member: command_mode
  cdr >> ros_message.command_mode;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irc_ros_msgs
get_serialized_size(
  const irc_ros_msgs::msg::CanModuleState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: can_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.can_id.size() + 1);
  // Member: hardware_ident
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.hardware_ident.size() + 1);
  // Member: version_major
  {
    size_t item_size = sizeof(ros_message.version_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: version_minor
  {
    size_t item_size = sizeof(ros_message.version_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature_motor
  {
    size_t item_size = sizeof(ros_message.temperature_motor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature_board
  {
    size_t item_size = sizeof(ros_message.temperature_board);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: supply_voltage
  {
    size_t item_size = sizeof(ros_message.supply_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_current
  {
    size_t item_size = sizeof(ros_message.motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_state
  {
    size_t item_size = sizeof(ros_message.error_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reset_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.reset_state.size() + 1);
  // Member: motor_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.motor_state.size() + 1);
  // Member: command_mode
  {
    size_t item_size = sizeof(ros_message.command_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_irc_ros_msgs
max_serialized_size_CanModuleState(
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


  // Member: name
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

  // Member: can_id
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

  // Member: hardware_ident
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

  // Member: version_major
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: version_minor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: temperature_motor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: temperature_board
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: supply_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: motor_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: error_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reset_state
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

  // Member: motor_state
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

  // Member: command_mode
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
    using DataType = irc_ros_msgs::msg::CanModuleState;
    is_plain =
      (
      offsetof(DataType, command_mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _CanModuleState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const irc_ros_msgs::msg::CanModuleState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CanModuleState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<irc_ros_msgs::msg::CanModuleState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CanModuleState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const irc_ros_msgs::msg::CanModuleState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CanModuleState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CanModuleState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CanModuleState__callbacks = {
  "irc_ros_msgs::msg",
  "CanModuleState",
  _CanModuleState__cdr_serialize,
  _CanModuleState__cdr_deserialize,
  _CanModuleState__get_serialized_size,
  _CanModuleState__max_serialized_size
};

static rosidl_message_type_support_t _CanModuleState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CanModuleState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace irc_ros_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_irc_ros_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<irc_ros_msgs::msg::CanModuleState>()
{
  return &irc_ros_msgs::msg::typesupport_fastrtps_cpp::_CanModuleState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, irc_ros_msgs, msg, CanModuleState)() {
  return &irc_ros_msgs::msg::typesupport_fastrtps_cpp::_CanModuleState__handle;
}

#ifdef __cplusplus
}
#endif
