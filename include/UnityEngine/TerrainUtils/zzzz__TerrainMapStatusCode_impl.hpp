#pragma once
#include "UnityEngine/TerrainUtils/zzzz__TerrainMapStatusCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TerrainUtils::TerrainMapStatusCode::TerrainMapStatusCode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainUtils::TerrainMapStatusCode::TerrainMapStatusCode() {}
constexpr ::UnityEngine::TerrainUtils::TerrainMapStatusCode UnityEngine::TerrainUtils::TerrainMapStatusCode::OK{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TerrainUtils::TerrainMapStatusCode UnityEngine::TerrainUtils::TerrainMapStatusCode::Overlapping{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::TerrainUtils::TerrainMapStatusCode UnityEngine::TerrainUtils::TerrainMapStatusCode::SizeMismatch{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::TerrainUtils::TerrainMapStatusCode UnityEngine::TerrainUtils::TerrainMapStatusCode::EdgeAlignmentMismatch{ static_cast<int32_t>(0x8) };
