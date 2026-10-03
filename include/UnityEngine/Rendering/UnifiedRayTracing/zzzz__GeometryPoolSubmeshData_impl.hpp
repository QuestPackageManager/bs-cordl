#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/GeometryPoolSubmeshData.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPoolSubmeshData_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "submeshIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData::GeometryPoolSubmeshData(int32_t submeshIndex, ::UnityW<::UnityEngine::Material> material) noexcept {
  this->submeshIndex = submeshIndex;
  this->material = material;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData::GeometryPoolSubmeshData() {}
