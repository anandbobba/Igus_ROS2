// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irc_ros_msgs:msg/CanModuleStates.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATES__STRUCT_HPP_
#define IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'module_states'
#include "irc_ros_msgs/msg/detail/can_module_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irc_ros_msgs__msg__CanModuleStates __attribute__((deprecated))
#else
# define DEPRECATED__irc_ros_msgs__msg__CanModuleStates __declspec(deprecated)
#endif

namespace irc_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CanModuleStates_
{
  using Type = CanModuleStates_<ContainerAllocator>;

  explicit CanModuleStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit CanModuleStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _module_states_type =
    std::vector<irc_ros_msgs::msg::CanModuleState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irc_ros_msgs::msg::CanModuleState_<ContainerAllocator>>>;
  _module_states_type module_states;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__module_states(
    const std::vector<irc_ros_msgs::msg::CanModuleState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irc_ros_msgs::msg::CanModuleState_<ContainerAllocator>>> & _arg)
  {
    this->module_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irc_ros_msgs::msg::CanModuleStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const irc_ros_msgs::msg::CanModuleStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irc_ros_msgs::msg::CanModuleStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irc_ros_msgs::msg::CanModuleStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irc_ros_msgs::msg::CanModuleStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irc_ros_msgs::msg::CanModuleStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irc_ros_msgs::msg::CanModuleStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irc_ros_msgs::msg::CanModuleStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irc_ros_msgs::msg::CanModuleStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irc_ros_msgs::msg::CanModuleStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irc_ros_msgs__msg__CanModuleStates
    std::shared_ptr<irc_ros_msgs::msg::CanModuleStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irc_ros_msgs__msg__CanModuleStates
    std::shared_ptr<irc_ros_msgs::msg::CanModuleStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CanModuleStates_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->module_states != other.module_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const CanModuleStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CanModuleStates_

// alias to use template instance with default allocator
using CanModuleStates =
  irc_ros_msgs::msg::CanModuleStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irc_ros_msgs

#endif  // IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATES__STRUCT_HPP_
