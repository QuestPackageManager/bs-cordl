#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShadowCascadesOption.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowCascadesOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ShadowCascadesOption::ShadowCascadesOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShadowCascadesOption::ShadowCascadesOption() {}
constexpr ::UnityEngine::Rendering::Universal::ShadowCascadesOption UnityEngine::Rendering::Universal::ShadowCascadesOption::NoCascades{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::ShadowCascadesOption UnityEngine::Rendering::Universal::ShadowCascadesOption::TwoCascades{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::ShadowCascadesOption UnityEngine::Rendering::Universal::ShadowCascadesOption::FourCascades{ static_cast<int32_t>(0x2) };
