#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputDeviceChange.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputDeviceChange::InputDeviceChange(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputDeviceChange::InputDeviceChange()   {
}
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Added{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Removed{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Disconnected{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Reconnected{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Enabled{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Disabled{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::UsageChanged{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::ConfigurationChanged{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::SoftReset{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::HardReset{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Destroyed{static_cast<int32_t>(0xa)};
