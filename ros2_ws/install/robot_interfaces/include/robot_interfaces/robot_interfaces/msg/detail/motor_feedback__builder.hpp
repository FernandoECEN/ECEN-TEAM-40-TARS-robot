// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/MotorFeedback.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__MOTOR_FEEDBACK__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__MOTOR_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/motor_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorFeedback_feedback2
{
public:
  explicit Init_MotorFeedback_feedback2(::robot_interfaces::msg::MotorFeedback & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::MotorFeedback feedback2(::robot_interfaces::msg::MotorFeedback::_feedback2_type arg)
  {
    msg_.feedback2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::MotorFeedback msg_;
};

class Init_MotorFeedback_feedback1
{
public:
  Init_MotorFeedback_feedback1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorFeedback_feedback2 feedback1(::robot_interfaces::msg::MotorFeedback::_feedback1_type arg)
  {
    msg_.feedback1 = std::move(arg);
    return Init_MotorFeedback_feedback2(msg_);
  }

private:
  ::robot_interfaces::msg::MotorFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::MotorFeedback>()
{
  return robot_interfaces::msg::builder::Init_MotorFeedback_feedback1();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__MOTOR_FEEDBACK__BUILDER_HPP_
