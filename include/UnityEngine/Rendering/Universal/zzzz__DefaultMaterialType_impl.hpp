#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DefaultMaterialType.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DefaultMaterialType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DefaultMaterialType::DefaultMaterialType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DefaultMaterialType::DefaultMaterialType() {}
constexpr ::UnityEngine::Rendering::Universal::DefaultMaterialType UnityEngine::Rendering::Universal::DefaultMaterialType::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DefaultMaterialType UnityEngine::Rendering::Universal::DefaultMaterialType::Particle{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DefaultMaterialType UnityEngine::Rendering::Universal::DefaultMaterialType::Terrain{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::DefaultMaterialType UnityEngine::Rendering::Universal::DefaultMaterialType::Sprite{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::Universal::DefaultMaterialType UnityEngine::Rendering::Universal::DefaultMaterialType::SpriteMask{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::Universal::DefaultMaterialType UnityEngine::Rendering::Universal::DefaultMaterialType::Decal{ static_cast<int32_t>(0x5) };
