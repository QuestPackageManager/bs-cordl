#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CameraLateLatchMatrixType.hpp"
#include "UnityEngine/Rendering/zzzz__CameraLateLatchMatrixType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CameraLateLatchMatrixType::CameraLateLatchMatrixType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CameraLateLatchMatrixType::CameraLateLatchMatrixType() {}
constexpr ::UnityEngine::Rendering::CameraLateLatchMatrixType UnityEngine::Rendering::CameraLateLatchMatrixType::View{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::CameraLateLatchMatrixType UnityEngine::Rendering::CameraLateLatchMatrixType::InverseView{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::CameraLateLatchMatrixType UnityEngine::Rendering::CameraLateLatchMatrixType::ViewProjection{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::CameraLateLatchMatrixType UnityEngine::Rendering::CameraLateLatchMatrixType::InverseViewProjection{ static_cast<int32_t>(0x3) };
