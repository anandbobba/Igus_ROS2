// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irc_ros_msgs:msg/CanModuleState.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATE__STRUCT_HPP_
#define IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__irc_ros_msgs__msg__CanModuleState __attribute__((deprecated))
#else
# define DEPRECATED__irc_ros_msgs__msg__CanModuleState __declspec(deprecated)
#endif

namespace irc_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CanModuleState_
{
  using Type = CanModuleState_<ContainerAllocator>;

  explicit CanModuleState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->can_id = "";
      this->hardware_ident = "";
      this->version_major = 0;
      this->version_minor = 0;
      this->temperature_motor = 0.0;
      this->temperature_board = 0.0;
      this->supply_voltage = 0.0;
      this->motor_current = 0.0;
      this->error_state = 0;
      this->reset_state = "";
      this->motor_state = "";
      this->command_mode = 0;
    }
  }

  explicit CanModuleState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    can_id(_alloc),
    hardware_ident(_alloc),
    reset_state(_alloc),
    motor_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->can_id = "";
      this->hardware_ident = "";
      this->version_major = 0;
      this->version_minor = 0;
      this->temperature_motor = 0.0;
      this->temperature_board = 0.0;
      this->supply_voltage = 0.0;
      this->motor_current = 0.0;
      this->error_state = 0;
      this->reset_state = "";
      this->motor_state = "";
      this->command_mode = 0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _can_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _can_id_type can_id;
  using _hardware_ident_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hardware_ident_type hardware_ident;
  using _version_major_type =
    int8_t;
  _version_major_type version_major;
  using _version_minor_type =
    int8_t;
  _version_minor_type version_minor;
  using _temperature_motor_type =
    double;
  _temperature_motor_type temperature_motor;
  using _temperature_board_type =
    double;
  _temperature_board_type temperature_board;
  using _supply_voltage_type =
    double;
  _supply_voltage_type supply_voltage;
  using _motor_current_type =
    double;
  _motor_current_type motor_current;
  using _error_state_type =
    int8_t;
  _error_state_type error_state;
  using _reset_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reset_state_type reset_state;
  using _motor_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _motor_state_type motor_state;
  using _command_mode_type =
    int8_t;
  _command_mode_type command_mode;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__can_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->can_id = _arg;
    return *this;
  }
  Type & set__hardware_ident(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->hardware_ident = _arg;
    return *this;
  }
  Type & set__version_major(
    const int8_t & _arg)
  {
    this->version_major = _arg;
    return *this;
  }
  Type & set__version_minor(
    const int8_t & _arg)
  {
    this->version_minor = _arg;
    return *this;
  }
  Type & set__temperature_motor(
    const double & _arg)
  {
    this->temperature_motor = _arg;
    return *this;
  }
  Type & set__temperature_board(
    const double & _arg)
  {
    this->temperature_board = _arg;
    return *this;
  }
  Type & set__supply_voltage(
    const double & _arg)
  {
    this->supply_voltage = _arg;
    return *this;
  }
  Type & set__motor_current(
    const double & _arg)
  {
    this->motor_current = _arg;
    return *this;
  }
  Type & set__error_state(
    const int8_t & _arg)
  {
    this->error_state = _arg;
    return *this;
  }
  Type & set__reset_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reset_state = _arg;
    return *this;
  }
  Type & set__motor_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->motor_state = _arg;
    return *this;
  }
  Type & set__command_mode(
    const int8_t & _arg)
  {
    this->command_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irc_ros_msgs::msg::CanModuleState_<ContainerAllocator> *;
  using ConstRawPtr =
    const irc_ros_msgs::msg::CanModuleState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irc_ros_msgs::msg::CanModuleState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irc_ros_msgs::msg::CanModuleState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irc_ros_msgs::msg::CanModuleState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irc_ros_msgs::msg::CanModuleState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irc_ros_msgs::msg::CanModuleState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irc_ros_msgs::msg::CanModuleState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irc_ros_msgs::msg::CanModuleState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irc_ros_msgs::msg::CanModuleState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irc_ros_msgs__msg__CanModuleState
    std::shared_ptr<irc_ros_msgs::msg::CanModuleState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irc_ros_msgs__msg__CanModuleState
    std::shared_ptr<irc_ros_msgs::msg::CanModuleState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CanModuleState_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->can_id != other.can_id) {
      return false;
    }
    if (this->hardware_ident != other.hardware_ident) {
      return false;
    }
    if (this->version_major != other.version_major) {
      return false;
    }
    if (this->version_minor != other.version_minor) {
      return false;
    }
    if (this->temperature_motor != other.temperature_motor) {
      return false;
    }
    if (this->temperature_board != other.temperature_board) {
      return false;
    }
    if (this->supply_voltage != other.supply_voltage) {
      return false;
    }
    if (this->motor_current != other.motor_current) {
      return false;
    }
    if (this->error_state != other.error_state) {
      return false;
    }
    if (this->reset_state != other.reset_state) {
      return false;
    }
    if (this->motor_state != other.motor_state) {
      return false;
    }
    if (this->command_mode != other.command_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const CanModuleState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CanModuleState_

// alias to use template instance with default allocator
using CanModuleState =
  irc_ros_msgs::msg::CanModuleState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irc_ros_msgs

#endif  // IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATE__STRUCT_HPP_
