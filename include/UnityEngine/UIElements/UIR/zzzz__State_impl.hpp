#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/State.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__State_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}") }, CppParam { name: "texture", ty:
// "::UnityEngine::UIElements::TextureId", modifiers: "", def_value: Some("{}") }, CppParam { name: "stencilRef", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sdfScale",
// ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sharpness", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::State::State(::UnityW<::UnityEngine::Material> material, ::UnityEngine::UIElements::TextureId texture, int32_t stencilRef, float_t sdfScale,
                                                       float_t sharpness) noexcept {
  this->material = material;
  this->texture = texture;
  this->stencilRef = stencilRef;
  this->sdfScale = sdfScale;
  this->sharpness = sharpness;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::State::State() {}
