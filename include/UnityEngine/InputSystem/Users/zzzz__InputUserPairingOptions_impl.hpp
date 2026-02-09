#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Users/InputUserPairingOptions.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserPairingOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Users::InputUserPairingOptions::InputUserPairingOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Users::InputUserPairingOptions::InputUserPairingOptions()   {
}
constexpr ::UnityEngine::InputSystem::Users::InputUserPairingOptions  UnityEngine::InputSystem::Users::InputUserPairingOptions::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::Users::InputUserPairingOptions  UnityEngine::InputSystem::Users::InputUserPairingOptions::ForcePlatformUserAccountSelection{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::Users::InputUserPairingOptions  UnityEngine::InputSystem::Users::InputUserPairingOptions::ForceNoPlatformUserAccountSelection{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::Users::InputUserPairingOptions  UnityEngine::InputSystem::Users::InputUserPairingOptions::UnpairCurrentDevicesFromUser{static_cast<int32_t>(0x8)};
