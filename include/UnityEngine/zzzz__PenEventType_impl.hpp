#pragma once
// IWYU pragma private; include "UnityEngine/PenEventType.hpp"
#include "UnityEngine/zzzz__PenEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::PenEventType::PenEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::PenEventType::PenEventType()   {
}
constexpr ::UnityEngine::PenEventType  UnityEngine::PenEventType::NoContact{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::PenEventType  UnityEngine::PenEventType::PenDown{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::PenEventType  UnityEngine::PenEventType::PenUp{static_cast<int32_t>(0x2)};
