// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_interfaces:msg/MotorFeedback.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__MOTOR_FEEDBACK__TRAITS_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__MOTOR_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_interfaces/msg/detail/motor_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback1
  {
    out << "feedback1: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback1, out);
    out << ", ";
  }

  // member: feedback2
  {
    out << "feedback2: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback1: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback1, out);
    out << "\n";
  }

  // member: feedback2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback2: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorFeedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_interfaces::msg::MotorFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_interfaces::msg::MotorFeedback & msg)
{
  return robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interfaces::msg::MotorFeedback>()
{
  return "robot_interfaces::msg::MotorFeedback";
}

template<>
inline const char * name<robot_interfaces::msg::MotorFeedback>()
{
  return "robot_interfaces/msg/MotorFeedback";
}

template<>
struct has_fixed_size<robot_interfaces::msg::MotorFeedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_interfaces::msg::MotorFeedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_interfaces::msg::MotorFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_INTERFACES__MSG__DETAIL__MOTOR_FEEDBACK__TRAITS_HPP_
