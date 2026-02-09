#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/TouchFlags.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::TouchFlags::TouchFlags(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::TouchFlags::TouchFlags()   {
}
constexpr ::UnityEngine::InputSystem::LowLevel::TouchFlags  UnityEngine::InputSystem::LowLevel::TouchFlags::IndirectTouch{static_cast<uint8_t>(0x1u)};
constexpr ::UnityEngine::InputSystem::LowLevel::TouchFlags  UnityEngine::InputSystem::LowLevel::TouchFlags::PrimaryTouch{static_cast<uint8_t>(0x8u)};
constexpr ::UnityEngine::InputSystem::LowLevel::TouchFlags  UnityEngine::InputSystem::LowLevel::TouchFlags::TapPress{static_cast<uint8_t>(0x10u)};
constexpr ::UnityEngine::InputSystem::LowLevel::TouchFlags  UnityEngine::InputSystem::LowLevel::TouchFlags::TapRelease{static_cast<uint8_t>(0x20u)};
constexpr ::UnityEngine::InputSystem::LowLevel::TouchFlags  UnityEngine::InputSystem::LowLevel::TouchFlags::OrphanedPrimaryTouch{static_cast<uint8_t>(0x40u)};
constexpr ::UnityEngine::InputSystem::LowLevel::TouchFlags  UnityEngine::InputSystem::LowLevel::TouchFlags::BeganInSameFrame{static_cast<uint8_t>(0x80u)};
