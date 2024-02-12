#pragma once
#include "UnityEngine/Rendering/zzzz__AmbientMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::AmbientMode::AmbientMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AmbientMode::AmbientMode() {}
constexpr ::UnityEngine::Rendering::AmbientMode UnityEngine::Rendering::AmbientMode::Skybox{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::AmbientMode UnityEngine::Rendering::AmbientMode::Trilight{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::AmbientMode UnityEngine::Rendering::AmbientMode::Flat{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::AmbientMode UnityEngine::Rendering::AmbientMode::Custom{ static_cast<int32_t>(0x4) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
