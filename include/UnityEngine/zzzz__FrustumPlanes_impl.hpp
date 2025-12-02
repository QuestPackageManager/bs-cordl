#pragma once
// IWYU pragma private; include "UnityEngine/FrustumPlanes.hpp"
#include "UnityEngine/zzzz__FrustumPlanes_def.hpp"
// Ctor Parameters [CppParam { name: "left", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "right", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "bottom", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "top", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "zNear", ty: "float_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "zFar", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::FrustumPlanes::FrustumPlanes(float_t left, float_t right, float_t bottom, float_t top, float_t zNear, float_t zFar) noexcept {
  this->left = left;
  this->right = right;
  this->bottom = bottom;
  this->top = top;
  this->zNear = zNear;
  this->zFar = zFar;
}
// Ctor Parameters []
constexpr ::UnityEngine::FrustumPlanes::FrustumPlanes() {}
