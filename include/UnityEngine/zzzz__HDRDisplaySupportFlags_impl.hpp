#pragma once
// IWYU pragma private; include "UnityEngine/HDRDisplaySupportFlags.hpp"
#include "UnityEngine/zzzz__HDRDisplaySupportFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::HDRDisplaySupportFlags::HDRDisplaySupportFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::HDRDisplaySupportFlags::HDRDisplaySupportFlags() {}
constexpr ::UnityEngine::HDRDisplaySupportFlags UnityEngine::HDRDisplaySupportFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::HDRDisplaySupportFlags UnityEngine::HDRDisplaySupportFlags::Supported{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::HDRDisplaySupportFlags UnityEngine::HDRDisplaySupportFlags::RuntimeSwitchable{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::HDRDisplaySupportFlags UnityEngine::HDRDisplaySupportFlags::AutomaticTonemapping{ static_cast<int32_t>(0x4) };
