#pragma once
// IWYU pragma private; include "UnityEngine/BoundingSphere.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::BoundingSphere::BoundingSphere(::UnityEngine::Vector3 position, float_t radius) noexcept {
  this->position = position;
  this->radius = radius;
}
// Ctor Parameters []
constexpr ::UnityEngine::BoundingSphere::BoundingSphere() {}
