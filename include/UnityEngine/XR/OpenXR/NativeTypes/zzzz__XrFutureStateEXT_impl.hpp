#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrFutureStateEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrFutureStateEXT_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureStateEXT::XrFutureStateEXT(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureStateEXT::XrFutureStateEXT() {}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureStateEXT UnityEngine::XR::OpenXR::NativeTypes::XrFutureStateEXT::Pending{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureStateEXT UnityEngine::XR::OpenXR::NativeTypes::XrFutureStateEXT::Ready{ static_cast<int32_t>(0x2) };
