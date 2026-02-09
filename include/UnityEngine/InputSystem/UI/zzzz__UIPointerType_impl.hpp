#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/UIPointerType.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::UI::UIPointerType::UIPointerType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::UIPointerType::UIPointerType()   {
}
constexpr ::UnityEngine::InputSystem::UI::UIPointerType  UnityEngine::InputSystem::UI::UIPointerType::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::UI::UIPointerType  UnityEngine::InputSystem::UI::UIPointerType::MouseOrPen{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::UI::UIPointerType  UnityEngine::InputSystem::UI::UIPointerType::Touch{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::UI::UIPointerType  UnityEngine::InputSystem::UI::UIPointerType::Tracked{static_cast<int32_t>(0x3)};
