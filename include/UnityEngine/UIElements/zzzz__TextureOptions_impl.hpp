#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextureOptions.hpp"
#include "UnityEngine/UIElements/zzzz__TextureOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::TextureOptions::TextureOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextureOptions::TextureOptions() {}
constexpr ::UnityEngine::UIElements::TextureOptions UnityEngine::UIElements::TextureOptions::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::TextureOptions UnityEngine::UIElements::TextureOptions::SkipDynamicAtlas{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::TextureOptions UnityEngine::UIElements::TextureOptions::PremultipliedAlpha{ static_cast<int32_t>(0x2) };
