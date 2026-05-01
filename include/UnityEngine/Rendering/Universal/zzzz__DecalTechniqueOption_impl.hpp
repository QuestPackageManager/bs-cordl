#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalTechniqueOption.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalTechniqueOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DecalTechniqueOption::DecalTechniqueOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalTechniqueOption::DecalTechniqueOption() {}
constexpr ::UnityEngine::Rendering::Universal::DecalTechniqueOption UnityEngine::Rendering::Universal::DecalTechniqueOption::Automatic{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DecalTechniqueOption UnityEngine::Rendering::Universal::DecalTechniqueOption::DBuffer{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DecalTechniqueOption UnityEngine::Rendering::Universal::DecalTechniqueOption::ScreenSpace{ static_cast<int32_t>(0x2) };
