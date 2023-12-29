#pragma once
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpaceLocationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags::XrSpaceLocationFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags::XrSpaceLocationFlags() {}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags::OrientationValid{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags::PositionValid{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags::OrientationTracked{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags::PositionTracked{ static_cast<int32_t>(0x8) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
