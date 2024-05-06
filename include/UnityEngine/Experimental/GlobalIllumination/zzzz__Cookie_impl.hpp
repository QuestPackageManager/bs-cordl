#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/GlobalIllumination/Cookie.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__Cookie_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "sizes", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::GlobalIllumination::Cookie::Cookie(int32_t instanceID, float_t scale, ::UnityEngine::Vector2 sizes) noexcept {
  this->instanceID = instanceID;
  this->scale = scale;
  this->sizes = sizes;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::GlobalIllumination::Cookie::Cookie() {}
