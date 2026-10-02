#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialPlaneAlignmentEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPlaneAlignmentEXT_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT::XrSpatialPlaneAlignmentEXT(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT::XrSpatialPlaneAlignmentEXT() {}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT::HorizontalUpward{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT::HorizontalDownward{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT::Vertical{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT::Arbitrary{ static_cast<int32_t>(0x3) };
