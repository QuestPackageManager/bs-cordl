#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrViewStateFlags.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrViewStateFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags::XrViewStateFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags::XrViewStateFlags() {}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags::OrientationValid{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags::PositionValid{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags::OrientationTracked{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags::PositionTracked{ static_cast<int32_t>(0x8) };
