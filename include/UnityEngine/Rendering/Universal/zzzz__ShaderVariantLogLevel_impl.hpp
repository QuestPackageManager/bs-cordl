#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShaderVariantLogLevel.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShaderVariantLogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ShaderVariantLogLevel::ShaderVariantLogLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShaderVariantLogLevel::ShaderVariantLogLevel() {}
constexpr ::UnityEngine::Rendering::Universal::ShaderVariantLogLevel UnityEngine::Rendering::Universal::ShaderVariantLogLevel::Disabled{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::ShaderVariantLogLevel UnityEngine::Rendering::Universal::ShaderVariantLogLevel::OnlyUniversalRPShaders{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::ShaderVariantLogLevel UnityEngine::Rendering::Universal::ShaderVariantLogLevel::AllShaders{ static_cast<int32_t>(0x2) };
