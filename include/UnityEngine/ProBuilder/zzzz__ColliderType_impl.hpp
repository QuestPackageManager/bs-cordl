#pragma once
#include "UnityEngine/ProBuilder/zzzz__ColliderType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::ColliderType::ColliderType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ColliderType::ColliderType() {}
constexpr ::UnityEngine::ProBuilder::ColliderType UnityEngine::ProBuilder::ColliderType::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::ColliderType UnityEngine::ProBuilder::ColliderType::BoxCollider{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::ColliderType UnityEngine::ProBuilder::ColliderType::MeshCollider{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
