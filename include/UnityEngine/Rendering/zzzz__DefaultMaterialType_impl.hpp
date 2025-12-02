#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DefaultMaterialType.hpp"
#include "UnityEngine/Rendering/zzzz__DefaultMaterialType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DefaultMaterialType::DefaultMaterialType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DefaultMaterialType::DefaultMaterialType() {}
constexpr ::UnityEngine::Rendering::DefaultMaterialType UnityEngine::Rendering::DefaultMaterialType::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::DefaultMaterialType UnityEngine::Rendering::DefaultMaterialType::Particle{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::DefaultMaterialType UnityEngine::Rendering::DefaultMaterialType::Line{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::DefaultMaterialType UnityEngine::Rendering::DefaultMaterialType::Terrain{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::DefaultMaterialType UnityEngine::Rendering::DefaultMaterialType::Sprite{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::DefaultMaterialType UnityEngine::Rendering::DefaultMaterialType::SpriteMask{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Rendering::DefaultMaterialType UnityEngine::Rendering::DefaultMaterialType::UGUI{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Rendering::DefaultMaterialType UnityEngine::Rendering::DefaultMaterialType::UGUI_Overdraw{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::Rendering::DefaultMaterialType UnityEngine::Rendering::DefaultMaterialType::UGUI_ETC1Supported{ static_cast<int32_t>(0x8) };
