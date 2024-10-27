// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_interfaces:msg/ControllerCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__CONTROLLER_COMMAND__STRUCT_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__CONTROLLER_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_interfaces__msg__ControllerCommand __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__msg__ControllerCommand __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControllerCommand_
{
  using Type = ControllerCommand_<ContainerAllocator>;

  explicit ControllerCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0l;
      this->motor_direction = 0l;
      this->motor_speed = 0l;
    }
  }

  explicit ControllerCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0l;
      this->motor_direction = 0l;
      this->motor_speed = 0l;
    }
  }

  // field types and members
  using _motor_id_type =
    int32_t;
  _motor_id_type motor_id;
  using _motor_direction_type =
    int32_t;
  _motor_direction_type motor_direction;
  using _motor_speed_type =
    int32_t;
  _motor_speed_type motor_speed;

  // setters for named parameter idiom
  Type & set__motor_id(
    const int32_t & _arg)
  {
    this->motor_id = _arg;
    return *this;
  }
  Type & set__motor_direction(
    const int32_t & _arg)
  {
    this->motor_direction = _arg;
    return *this;
  }
  Type & set__motor_speed(
    const int32_t & _arg)
  {
    this->motor_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::msg::ControllerCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::msg::ControllerCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::msg::ControllerCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::msg::ControllerCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::ControllerCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::ControllerCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::ControllerCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::ControllerCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::msg::ControllerCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::msg::ControllerCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__msg__ControllerCommand
    std::shared_ptr<robot_interfaces::msg::ControllerCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__msg__ControllerCommand
    std::shared_ptr<robot_interfaces::msg::ControllerCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerCommand_ & other) const
  {
    if (this->motor_id != other.motor_id) {
      return false;
    }
    if (this->motor_direction != other.motor_direction) {
      return false;
    }
    if (this->motor_speed != other.motor_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerCommand_

// alias to use template instance with default allocator
using ControllerCommand =
  robot_interfaces::msg::ControllerCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__CONTROLLER_COMMAND__STRUCT_HPP_
