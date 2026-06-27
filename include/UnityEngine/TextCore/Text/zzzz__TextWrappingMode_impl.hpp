#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextWrappingMode.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextWrappingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::TextWrappingMode::TextWrappingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextWrappingMode::TextWrappingMode()   {
}
constexpr ::UnityEngine::TextCore::Text::TextWrappingMode  UnityEngine::TextCore::Text::TextWrappingMode::NoWrap{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextCore::Text::TextWrappingMode  UnityEngine::TextCore::Text::TextWrappingMode::Normal{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TextCore::Text::TextWrappingMode  UnityEngine::TextCore::Text::TextWrappingMode::PreserveWhitespace{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TextCore::Text::TextWrappingMode  UnityEngine::TextCore::Text::TextWrappingMode::PreserveWhitespaceNoWrap{static_cast<int32_t>(0x3)};
