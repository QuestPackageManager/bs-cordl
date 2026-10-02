#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/GeoPoolVertex.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeoPoolVertex_def.hpp"
// Ctor Parameters [CppParam { name: "pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv0", ty: "::UnityEngine::Vector2", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "uv1", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "N", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolVertex::GeoPoolVertex(::UnityEngine::Vector3 pos, ::UnityEngine::Vector2 uv0, ::UnityEngine::Vector2 uv1,
                                                                                    ::UnityEngine::Vector3 N) noexcept {
  this->pos = pos;
  this->uv0 = uv0;
  this->uv1 = uv1;
  this->N = N;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolVertex::GeoPoolVertex() {}
