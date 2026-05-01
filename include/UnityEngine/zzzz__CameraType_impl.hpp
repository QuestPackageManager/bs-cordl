#pragma once
// IWYU pragma private; include "UnityEngine/CameraType.hpp"
#include "UnityEngine/zzzz__CameraType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CameraType::CameraType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::CameraType::CameraType() {}
constexpr ::UnityEngine::CameraType UnityEngine::CameraType::Game{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::CameraType UnityEngine::CameraType::SceneView{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::CameraType UnityEngine::CameraType::Preview{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::CameraType UnityEngine::CameraType::VR{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::CameraType UnityEngine::CameraType::Reflection{ static_cast<int32_t>(0x10) };
