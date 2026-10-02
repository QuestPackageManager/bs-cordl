#pragma once
// IWYU pragma private; include "UnityEngine/LOD.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/zzzz__LOD_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
// Ctor Parameters [CppParam { name: "screenRelativeTransitionHeight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fadeTransitionWidth", ty: "float_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "renderers", ty: "::ArrayW<::UnityW<::UnityEngine::Renderer>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LOD::LOD(float_t screenRelativeTransitionHeight, float_t fadeTransitionWidth, ::ArrayW<::UnityW<::UnityEngine::Renderer>> renderers) noexcept {
  this->screenRelativeTransitionHeight = screenRelativeTransitionHeight;
  this->fadeTransitionWidth = fadeTransitionWidth;
  this->renderers = renderers;
}
// Ctor Parameters []
constexpr ::UnityEngine::LOD::LOD() {}
