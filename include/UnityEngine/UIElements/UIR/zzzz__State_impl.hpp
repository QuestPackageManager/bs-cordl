#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/State.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__State_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
// Ctor Parameters [CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "font", ty: "::UnityW<::UnityEngine::Texture>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "fontTexSDFScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "texture", ty:
// "::UnityEngine::UIElements::TextureId", modifiers: "", def_value: Some("{}") }, CppParam { name: "stencilRef", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::State::State(::UnityW<::UnityEngine::Material> material, ::UnityW<::UnityEngine::Texture> font, float_t fontTexSDFScale,
                                                       ::UnityEngine::UIElements::TextureId texture, int32_t stencilRef) noexcept {
  this->material = material;
  this->font = font;
  this->fontTexSDFScale = fontTexSDFScale;
  this->texture = texture;
  this->stencilRef = stencilRef;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::State::State() {}
