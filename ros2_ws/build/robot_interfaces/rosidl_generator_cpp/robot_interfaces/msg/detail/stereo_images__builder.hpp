// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/StereoImages.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__STEREO_IMAGES__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__STEREO_IMAGES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/stereo_images__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_StereoImages_cam2_image
{
public:
  explicit Init_StereoImages_cam2_image(::robot_interfaces::msg::StereoImages & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::StereoImages cam2_image(::robot_interfaces::msg::StereoImages::_cam2_image_type arg)
  {
    msg_.cam2_image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::StereoImages msg_;
};

class Init_StereoImages_cam1_image
{
public:
  explicit Init_StereoImages_cam1_image(::robot_interfaces::msg::StereoImages & msg)
  : msg_(msg)
  {}
  Init_StereoImages_cam2_image cam1_image(::robot_interfaces::msg::StereoImages::_cam1_image_type arg)
  {
    msg_.cam1_image = std::move(arg);
    return Init_StereoImages_cam2_image(msg_);
  }

private:
  ::robot_interfaces::msg::StereoImages msg_;
};

class Init_StereoImages_shape
{
public:
  Init_StereoImages_shape()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StereoImages_cam1_image shape(::robot_interfaces::msg::StereoImages::_shape_type arg)
  {
    msg_.shape = std::move(arg);
    return Init_StereoImages_cam1_image(msg_);
  }

private:
  ::robot_interfaces::msg::StereoImages msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::StereoImages>()
{
  return robot_interfaces::msg::builder::Init_StereoImages_shape();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__STEREO_IMAGES__BUILDER_HPP_
