// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/ControllerCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__CONTROLLER_COMMAND__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__CONTROLLER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/controller_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_ControllerCommand_motor_speed
{
public:
  explicit Init_ControllerCommand_motor_speed(::robot_interfaces::msg::ControllerCommand & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::ControllerCommand motor_speed(::robot_interfaces::msg::ControllerCommand::_motor_speed_type arg)
  {
    msg_.motor_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::ControllerCommand msg_;
};

class Init_ControllerCommand_motor_direction
{
public:
  explicit Init_ControllerCommand_motor_direction(::robot_interfaces::msg::ControllerCommand & msg)
  : msg_(msg)
  {}
  Init_ControllerCommand_motor_speed motor_direction(::robot_interfaces::msg::ControllerCommand::_motor_direction_type arg)
  {
    msg_.motor_direction = std::move(arg);
    return Init_ControllerCommand_motor_speed(msg_);
  }

private:
  ::robot_interfaces::msg::ControllerCommand msg_;
};

class Init_ControllerCommand_motor_id
{
public:
  Init_ControllerCommand_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerCommand_motor_direction motor_id(::robot_interfaces::msg::ControllerCommand::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_ControllerCommand_motor_direction(msg_);
  }

private:
  ::robot_interfaces::msg::ControllerCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::ControllerCommand>()
{
  return robot_interfaces::msg::builder::Init_ControllerCommand_motor_id();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__CONTROLLER_COMMAND__BUILDER_HPP_
