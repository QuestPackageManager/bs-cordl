#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PerObjectData.hpp"
#include "UnityEngine/Rendering/zzzz__PerObjectData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PerObjectData::PerObjectData(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PerObjectData::PerObjectData() {}
constexpr ::UnityEngine::Rendering::PerObjectData UnityEngine::Rendering::PerObjectData::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::PerObjectData UnityEngine::Rendering::PerObjectData::LightProbe{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::PerObjectData UnityEngine::Rendering::PerObjectData::ReflectionProbes{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::PerObjectData UnityEngine::Rendering::PerObjectData::LightProbeProxyVolume{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::PerObjectData UnityEngine::Rendering::PerObjectData::Lightmaps{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Rendering::PerObjectData UnityEngine::Rendering::PerObjectData::LightData{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::Rendering::PerObjectData UnityEngine::Rendering::PerObjectData::MotionVectors{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::Rendering::PerObjectData UnityEngine::Rendering::PerObjectData::LightIndices{ static_cast<int32_t>(0x40) };
constexpr ::UnityEngine::Rendering::PerObjectData UnityEngine::Rendering::PerObjectData::ReflectionProbeData{ static_cast<int32_t>(0x80) };
constexpr ::UnityEngine::Rendering::PerObjectData UnityEngine::Rendering::PerObjectData::OcclusionProbe{ static_cast<int32_t>(0x100) };
constexpr ::UnityEngine::Rendering::PerObjectData UnityEngine::Rendering::PerObjectData::OcclusionProbeProxyVolume{ static_cast<int32_t>(0x200) };
constexpr ::UnityEngine::Rendering::PerObjectData UnityEngine::Rendering::PerObjectData::ShadowMask{ static_cast<int32_t>(0x400) };
