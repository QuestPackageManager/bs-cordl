#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ControlFunction.hpp"
#include "UnityEngine/Audio/zzzz__ControlFunction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::ControlFunction::ControlFunction(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ControlFunction::ControlFunction() {}
constexpr ::UnityEngine::Audio::ControlFunction UnityEngine::Audio::ControlFunction::Dispose{ static_cast<uint32_t>(0x100u) };
constexpr ::UnityEngine::Audio::ControlFunction UnityEngine::Audio::ControlFunction::Configure{ static_cast<uint32_t>(0x101u) };
constexpr ::UnityEngine::Audio::ControlFunction UnityEngine::Audio::ControlFunction::Update{ static_cast<uint32_t>(0x102u) };
constexpr ::UnityEngine::Audio::ControlFunction UnityEngine::Audio::ControlFunction::Message{ static_cast<uint32_t>(0x103u) };
