#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderPathCompatibility.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPathCompatibility_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::RenderPathCompatibility::RenderPathCompatibility(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderPathCompatibility::RenderPathCompatibility() {}
constexpr ::UnityEngine::Rendering::Universal::RenderPathCompatibility UnityEngine::Rendering::Universal::RenderPathCompatibility::Forward{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::RenderPathCompatibility UnityEngine::Rendering::Universal::RenderPathCompatibility::Deferred{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::RenderPathCompatibility UnityEngine::Rendering::Universal::RenderPathCompatibility::ForwardPlus{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::Universal::RenderPathCompatibility UnityEngine::Rendering::Universal::RenderPathCompatibility::All{ static_cast<int32_t>(0x7) };
