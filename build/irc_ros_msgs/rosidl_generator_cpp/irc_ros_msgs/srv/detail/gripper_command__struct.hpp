// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irc_ros_msgs:srv/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__SRV__DETAIL__GRIPPER_COMMAND__STRUCT_HPP_
#define IRC_ROS_MSGS__SRV__DETAIL__GRIPPER_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__irc_ros_msgs__srv__GripperCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__irc_ros_msgs__srv__GripperCommand_Request __declspec(deprecated)
#endif

namespace irc_ros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GripperCommand_Request_
{
  using Type = GripperCommand_Request_<ContainerAllocator>;

  explicit GripperCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->grip = false;
    }
  }

  explicit GripperCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->grip = false;
    }
  }

  // field types and members
  using _grip_type =
    bool;
  _grip_type grip;

  // setters for named parameter idiom
  Type & set__grip(
    const bool & _arg)
  {
    this->grip = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irc_ros_msgs::srv::GripperCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const irc_ros_msgs::srv::GripperCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irc_ros_msgs::srv::GripperCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irc_ros_msgs::srv::GripperCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irc_ros_msgs::srv::GripperCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irc_ros_msgs::srv::GripperCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irc_ros_msgs::srv::GripperCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irc_ros_msgs::srv::GripperCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irc_ros_msgs::srv::GripperCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irc_ros_msgs::srv::GripperCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irc_ros_msgs__srv__GripperCommand_Request
    std::shared_ptr<irc_ros_msgs::srv::GripperCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irc_ros_msgs__srv__GripperCommand_Request
    std::shared_ptr<irc_ros_msgs::srv::GripperCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperCommand_Request_ & other) const
  {
    if (this->grip != other.grip) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperCommand_Request_

// alias to use template instance with default allocator
using GripperCommand_Request =
  irc_ros_msgs::srv::GripperCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace irc_ros_msgs


#ifndef _WIN32
# define DEPRECATED__irc_ros_msgs__srv__GripperCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__irc_ros_msgs__srv__GripperCommand_Response __declspec(deprecated)
#endif

namespace irc_ros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GripperCommand_Response_
{
  using Type = GripperCommand_Response_<ContainerAllocator>;

  explicit GripperCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripped = false;
    }
  }

  explicit GripperCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripped = false;
    }
  }

  // field types and members
  using _gripped_type =
    bool;
  _gripped_type gripped;

  // setters for named parameter idiom
  Type & set__gripped(
    const bool & _arg)
  {
    this->gripped = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irc_ros_msgs::srv::GripperCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const irc_ros_msgs::srv::GripperCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irc_ros_msgs::srv::GripperCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irc_ros_msgs::srv::GripperCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irc_ros_msgs::srv::GripperCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irc_ros_msgs::srv::GripperCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irc_ros_msgs::srv::GripperCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irc_ros_msgs::srv::GripperCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irc_ros_msgs::srv::GripperCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irc_ros_msgs::srv::GripperCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irc_ros_msgs__srv__GripperCommand_Response
    std::shared_ptr<irc_ros_msgs::srv::GripperCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irc_ros_msgs__srv__GripperCommand_Response
    std::shared_ptr<irc_ros_msgs::srv::GripperCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperCommand_Response_ & other) const
  {
    if (this->gripped != other.gripped) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperCommand_Response_

// alias to use template instance with default allocator
using GripperCommand_Response =
  irc_ros_msgs::srv::GripperCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace irc_ros_msgs

namespace irc_ros_msgs
{

namespace srv
{

struct GripperCommand
{
  using Request = irc_ros_msgs::srv::GripperCommand_Request;
  using Response = irc_ros_msgs::srv::GripperCommand_Response;
};

}  // namespace srv

}  // namespace irc_ros_msgs

#endif  // IRC_ROS_MSGS__SRV__DETAIL__GRIPPER_COMMAND__STRUCT_HPP_
