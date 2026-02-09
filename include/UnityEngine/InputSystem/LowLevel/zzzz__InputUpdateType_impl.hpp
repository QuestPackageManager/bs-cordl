#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputUpdateType.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType::InputUpdateType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType::InputUpdateType()   {
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::Dynamic{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::Fixed{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::BeforeRender{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::Editor{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::Manual{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::Default{static_cast<int32_t>(0xb)};
