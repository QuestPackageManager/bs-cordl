#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialEntityTrackingStateEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialEntityTrackingStateEXT_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT::XrSpatialEntityTrackingStateEXT(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT::XrSpatialEntityTrackingStateEXT() {}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT::Stopped{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT::Paused{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT::Tracking{ static_cast<int32_t>(0x3) };
