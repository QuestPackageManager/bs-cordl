#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXCameraBufferTypes.hpp"
#include "UnityEngine/VFX/zzzz__VFXCameraBufferTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::VFXCameraBufferTypes::VFXCameraBufferTypes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXCameraBufferTypes::VFXCameraBufferTypes() {}
constexpr ::UnityEngine::VFX::VFXCameraBufferTypes UnityEngine::VFX::VFXCameraBufferTypes::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::VFX::VFXCameraBufferTypes UnityEngine::VFX::VFXCameraBufferTypes::Depth{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::VFX::VFXCameraBufferTypes UnityEngine::VFX::VFXCameraBufferTypes::Color{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::VFX::VFXCameraBufferTypes UnityEngine::VFX::VFXCameraBufferTypes::Normal{ static_cast<int32_t>(0x4) };
