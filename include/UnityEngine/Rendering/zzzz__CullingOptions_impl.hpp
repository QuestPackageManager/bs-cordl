#pragma once
#include "UnityEngine/Rendering/zzzz__CullingOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CullingOptions::CullingOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CullingOptions::CullingOptions() {}
constexpr ::UnityEngine::Rendering::CullingOptions UnityEngine::Rendering::CullingOptions::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::CullingOptions UnityEngine::Rendering::CullingOptions::ForceEvenIfCameraIsNotActive{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::CullingOptions UnityEngine::Rendering::CullingOptions::OcclusionCull{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::CullingOptions UnityEngine::Rendering::CullingOptions::NeedsLighting{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::CullingOptions UnityEngine::Rendering::CullingOptions::NeedsReflectionProbes{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Rendering::CullingOptions UnityEngine::Rendering::CullingOptions::Stereo{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::Rendering::CullingOptions UnityEngine::Rendering::CullingOptions::DisablePerObjectCulling{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::Rendering::CullingOptions UnityEngine::Rendering::CullingOptions::ShadowCasters{ static_cast<int32_t>(0x40) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
