#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HDREncoding.hpp"
#include "UnityEngine/Rendering/zzzz__HDREncoding_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::HDREncoding::HDREncoding(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::HDREncoding::HDREncoding() {}
constexpr ::UnityEngine::Rendering::HDREncoding UnityEngine::Rendering::HDREncoding::Linear{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::HDREncoding UnityEngine::Rendering::HDREncoding::PQ{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::HDREncoding UnityEngine::Rendering::HDREncoding::Gamma22{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::HDREncoding UnityEngine::Rendering::HDREncoding::sRGB{ static_cast<int32_t>(0x0) };
