#pragma once
// IWYU pragma private; include "UnityEngine/FontStyle.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::FontStyle::FontStyle(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::FontStyle::FontStyle()   {
}
constexpr ::UnityEngine::FontStyle  UnityEngine::FontStyle::Normal{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::FontStyle  UnityEngine::FontStyle::Bold{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::FontStyle  UnityEngine::FontStyle::Italic{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::FontStyle  UnityEngine::FontStyle::BoldAndItalic{static_cast<int32_t>(0x3)};
