#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/ColorGradientMode.hpp"
#include "UnityEngine/TextCore/Text/zzzz__ColorGradientMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::ColorGradientMode::ColorGradientMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::ColorGradientMode::ColorGradientMode()   {
}
constexpr ::UnityEngine::TextCore::Text::ColorGradientMode  UnityEngine::TextCore::Text::ColorGradientMode::Single{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextCore::Text::ColorGradientMode  UnityEngine::TextCore::Text::ColorGradientMode::HorizontalGradient{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TextCore::Text::ColorGradientMode  UnityEngine::TextCore::Text::ColorGradientMode::VerticalGradient{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TextCore::Text::ColorGradientMode  UnityEngine::TextCore::Text::ColorGradientMode::FourCornersGradient{static_cast<int32_t>(0x3)};
