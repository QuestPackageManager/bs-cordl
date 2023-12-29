#pragma once
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrReferenceSpaceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType::XrReferenceSpaceType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType::XrReferenceSpaceType() {}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType::View{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType::Local{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType::Stage{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType::UnboundedMsft{ static_cast<int32_t>(0x3b9b5e70) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType::CombinedEyeVarjo{ static_cast<int32_t>(0x3b9ca2a8) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
