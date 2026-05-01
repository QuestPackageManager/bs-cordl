#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrViewConfigurationType.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrViewConfigurationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType::XrViewConfigurationType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType::XrViewConfigurationType() {}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType::PrimaryMono{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType::PrimaryStereo{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType::PrimaryQuadVarjo{ static_cast<int32_t>(0x3b9b5a88) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType::SecondaryMonoFirstPersonObserver{ static_cast<int32_t>(
    0x3b9b9cf0) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType::SecondaryMonoThirdPersonObserver{ static_cast<int32_t>(
    0x3b9d0068) };
