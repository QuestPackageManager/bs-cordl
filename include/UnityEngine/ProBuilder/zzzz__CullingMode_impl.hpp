#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/CullingMode.hpp"
#include "UnityEngine/ProBuilder/zzzz__CullingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::CullingMode::CullingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::CullingMode::CullingMode() {}
constexpr ::UnityEngine::ProBuilder::CullingMode UnityEngine::ProBuilder::CullingMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::CullingMode UnityEngine::ProBuilder::CullingMode::Back{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::CullingMode UnityEngine::ProBuilder::CullingMode::Front{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ProBuilder::CullingMode UnityEngine::ProBuilder::CullingMode::FrontBack{ static_cast<int32_t>(0x3) };
