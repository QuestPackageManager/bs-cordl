#pragma once
#include "UnityEngine/zzzz__RigidbodyConstraints_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RigidbodyConstraints::RigidbodyConstraints(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::RigidbodyConstraints::RigidbodyConstraints() {}
constexpr ::UnityEngine::RigidbodyConstraints UnityEngine::RigidbodyConstraints::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::RigidbodyConstraints UnityEngine::RigidbodyConstraints::FreezePositionX{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::RigidbodyConstraints UnityEngine::RigidbodyConstraints::FreezePositionY{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::RigidbodyConstraints UnityEngine::RigidbodyConstraints::FreezePositionZ{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::RigidbodyConstraints UnityEngine::RigidbodyConstraints::FreezeRotationX{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::RigidbodyConstraints UnityEngine::RigidbodyConstraints::FreezeRotationY{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::RigidbodyConstraints UnityEngine::RigidbodyConstraints::FreezeRotationZ{ static_cast<int32_t>(0x40) };
constexpr ::UnityEngine::RigidbodyConstraints UnityEngine::RigidbodyConstraints::FreezePosition{ static_cast<int32_t>(0xe) };
constexpr ::UnityEngine::RigidbodyConstraints UnityEngine::RigidbodyConstraints::FreezeRotation{ static_cast<int32_t>(0x70) };
constexpr ::UnityEngine::RigidbodyConstraints UnityEngine::RigidbodyConstraints::FreezeAll{ static_cast<int32_t>(0x7e) };
