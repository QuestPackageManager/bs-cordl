#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderVariantLogLevel.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderVariantLogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShaderVariantLogLevel::ShaderVariantLogLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShaderVariantLogLevel::ShaderVariantLogLevel() {}
constexpr ::UnityEngine::Rendering::ShaderVariantLogLevel UnityEngine::Rendering::ShaderVariantLogLevel::Disabled{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::ShaderVariantLogLevel UnityEngine::Rendering::ShaderVariantLogLevel::OnlySRPShaders{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::ShaderVariantLogLevel UnityEngine::Rendering::ShaderVariantLogLevel::AllShaders{ static_cast<int32_t>(0x2) };
