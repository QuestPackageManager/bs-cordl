#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/EntityType.hpp"
#include "UnityEngine/ProBuilder/zzzz__EntityType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::EntityType::EntityType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::EntityType::EntityType() {}
constexpr ::UnityEngine::ProBuilder::EntityType UnityEngine::ProBuilder::EntityType::Detail{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::EntityType UnityEngine::ProBuilder::EntityType::Occluder{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::EntityType UnityEngine::ProBuilder::EntityType::Trigger{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ProBuilder::EntityType UnityEngine::ProBuilder::EntityType::Collider{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::ProBuilder::EntityType UnityEngine::ProBuilder::EntityType::Mover{ static_cast<int32_t>(0x4) };
