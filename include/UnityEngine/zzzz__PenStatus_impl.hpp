#pragma once
// IWYU pragma private; include "UnityEngine/PenStatus.hpp"
#include "UnityEngine/zzzz__PenStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::PenStatus::PenStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::PenStatus::PenStatus()   {
}
constexpr ::UnityEngine::PenStatus  UnityEngine::PenStatus::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::PenStatus  UnityEngine::PenStatus::Contact{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::PenStatus  UnityEngine::PenStatus::Barrel{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::PenStatus  UnityEngine::PenStatus::Inverted{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::PenStatus  UnityEngine::PenStatus::Eraser{static_cast<int32_t>(0x8)};
