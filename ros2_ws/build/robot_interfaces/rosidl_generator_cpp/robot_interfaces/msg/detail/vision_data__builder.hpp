// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/VisionData.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__VISION_DATA__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__VISION_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/vision_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_VisionData_distance_array
{
public:
  explicit Init_VisionData_distance_array(::robot_interfaces::msg::VisionData & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::VisionData distance_array(::robot_interfaces::msg::VisionData::_distance_array_type arg)
  {
    msg_.distance_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::VisionData msg_;
};

class Init_VisionData_ai_detect_array
{
public:
  Init_VisionData_ai_detect_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisionData_distance_array ai_detect_array(::robot_interfaces::msg::VisionData::_ai_detect_array_type arg)
  {
    msg_.ai_detect_array = std::move(arg);
    return Init_VisionData_distance_array(msg_);
  }

private:
  ::robot_interfaces::msg::VisionData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::VisionData>()
{
  return robot_interfaces::msg::builder::Init_VisionData_ai_detect_array();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__VISION_DATA__BUILDER_HPP_
