#pragma once
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrEnvironmentBlendMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode::XrEnvironmentBlendMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode::XrEnvironmentBlendMode() {}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode::Opaque{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode::Additive{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode::AlphaBlend{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
