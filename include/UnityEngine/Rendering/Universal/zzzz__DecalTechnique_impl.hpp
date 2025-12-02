#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalTechnique.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalTechnique_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DecalTechnique::DecalTechnique(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalTechnique::DecalTechnique() {}
constexpr ::UnityEngine::Rendering::Universal::DecalTechnique UnityEngine::Rendering::Universal::DecalTechnique::Invalid{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DecalTechnique UnityEngine::Rendering::Universal::DecalTechnique::DBuffer{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DecalTechnique UnityEngine::Rendering::Universal::DecalTechnique::ScreenSpace{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::DecalTechnique UnityEngine::Rendering::Universal::DecalTechnique::GBuffer{ static_cast<int32_t>(0x3) };
