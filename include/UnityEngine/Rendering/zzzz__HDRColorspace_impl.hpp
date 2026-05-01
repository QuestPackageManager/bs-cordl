#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HDRColorspace.hpp"
#include "UnityEngine/Rendering/zzzz__HDRColorspace_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::HDRColorspace::HDRColorspace(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::HDRColorspace::HDRColorspace() {}
constexpr ::UnityEngine::Rendering::HDRColorspace UnityEngine::Rendering::HDRColorspace::Rec709{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::HDRColorspace UnityEngine::Rendering::HDRColorspace::Rec2020{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::HDRColorspace UnityEngine::Rendering::HDRColorspace::P3D65{ static_cast<int32_t>(0x2) };
