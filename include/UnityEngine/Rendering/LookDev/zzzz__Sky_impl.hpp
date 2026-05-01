#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LookDev/Sky.hpp"
#include "UnityEngine/Rendering/LookDev/zzzz__Sky_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
// Ctor Parameters [CppParam { name: "cubemap", ty: "::UnityW<::UnityEngine::Cubemap>", modifiers: "", def_value: Some("{}") }, CppParam { name: "longitudeOffset", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "exposure", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LookDev::Sky::Sky(::UnityW<::UnityEngine::Cubemap> cubemap, float_t longitudeOffset, float_t exposure) noexcept {
  this->cubemap = cubemap;
  this->longitudeOffset = longitudeOffset;
  this->exposure = exposure;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LookDev::Sky::Sky() {}
