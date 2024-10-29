// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_interfaces:msg/StereoImages.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__STEREO_IMAGES__TRAITS_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__STEREO_IMAGES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_interfaces/msg/detail/stereo_images__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const StereoImages & msg,
  std::ostream & out)
{
  out << "{";
  // member: shape
  {
    if (msg.shape.size() == 0) {
      out << "shape: []";
    } else {
      out << "shape: [";
      size_t pending_items = msg.shape.size();
      for (auto item : msg.shape) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cam1_image
  {
    if (msg.cam1_image.size() == 0) {
      out << "cam1_image: []";
    } else {
      out << "cam1_image: [";
      size_t pending_items = msg.cam1_image.size();
      for (auto item : msg.cam1_image) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cam2_image
  {
    if (msg.cam2_image.size() == 0) {
      out << "cam2_image: []";
    } else {
      out << "cam2_image: [";
      size_t pending_items = msg.cam2_image.size();
      for (auto item : msg.cam2_image) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StereoImages & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: shape
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.shape.size() == 0) {
      out << "shape: []\n";
    } else {
      out << "shape:\n";
      for (auto item : msg.shape) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cam1_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cam1_image.size() == 0) {
      out << "cam1_image: []\n";
    } else {
      out << "cam1_image:\n";
      for (auto item : msg.cam1_image) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cam2_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cam2_image.size() == 0) {
      out << "cam2_image: []\n";
    } else {
      out << "cam2_image:\n";
      for (auto item : msg.cam2_image) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StereoImages & msg, bool use_flow_style = false)
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
  const robot_interfaces::msg::StereoImages & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_interfaces::msg::StereoImages & msg)
{
  return robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interfaces::msg::StereoImages>()
{
  return "robot_interfaces::msg::StereoImages";
}

template<>
inline const char * name<robot_interfaces::msg::StereoImages>()
{
  return "robot_interfaces/msg/StereoImages";
}

template<>
struct has_fixed_size<robot_interfaces::msg::StereoImages>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_interfaces::msg::StereoImages>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_interfaces::msg::StereoImages>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_INTERFACES__MSG__DETAIL__STEREO_IMAGES__TRAITS_HPP_
