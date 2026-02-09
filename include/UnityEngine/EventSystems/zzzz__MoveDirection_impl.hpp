#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/MoveDirection.hpp"
#include "UnityEngine/EventSystems/zzzz__MoveDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EventSystems::MoveDirection::MoveDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::MoveDirection::MoveDirection()   {
}
constexpr ::UnityEngine::EventSystems::MoveDirection  UnityEngine::EventSystems::MoveDirection::Left{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::EventSystems::MoveDirection  UnityEngine::EventSystems::MoveDirection::Up{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::EventSystems::MoveDirection  UnityEngine::EventSystems::MoveDirection::Right{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::EventSystems::MoveDirection  UnityEngine::EventSystems::MoveDirection::Down{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::EventSystems::MoveDirection  UnityEngine::EventSystems::MoveDirection::None{static_cast<int32_t>(0x4)};
