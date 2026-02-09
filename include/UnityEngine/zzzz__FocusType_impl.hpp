#pragma once
// IWYU pragma private; include "UnityEngine/FocusType.hpp"
#include "UnityEngine/zzzz__FocusType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::FocusType::FocusType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::FocusType::FocusType()   {
}
constexpr ::UnityEngine::FocusType  UnityEngine::FocusType::Native{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::FocusType  UnityEngine::FocusType::Keyboard{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::FocusType  UnityEngine::FocusType::Passive{static_cast<int32_t>(0x2)};
