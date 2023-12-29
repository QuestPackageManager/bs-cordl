#pragma once
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSessionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::XrSessionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::XrSessionState() {}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::Idle{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::Ready{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::Synchronized{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::Visible{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::Focused{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::Stopping{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::LossPending{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::Exiting{ static_cast<int32_t>(0x8) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
