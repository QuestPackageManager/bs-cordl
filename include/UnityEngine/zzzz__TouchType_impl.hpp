#pragma once
// IWYU pragma private; include "UnityEngine/TouchType.hpp"
#include "UnityEngine/zzzz__TouchType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TouchType::TouchType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TouchType::TouchType()   {
}
constexpr ::UnityEngine::TouchType  UnityEngine::TouchType::Direct{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TouchType  UnityEngine::TouchType::Indirect{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TouchType  UnityEngine::TouchType::Stylus{static_cast<int32_t>(0x2)};
