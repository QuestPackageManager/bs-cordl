#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ReflectionProbeUsage.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeUsage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ReflectionProbeUsage::ReflectionProbeUsage(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ReflectionProbeUsage::ReflectionProbeUsage()   {
}
constexpr ::UnityEngine::Rendering::ReflectionProbeUsage  UnityEngine::Rendering::ReflectionProbeUsage::Off{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::ReflectionProbeUsage  UnityEngine::Rendering::ReflectionProbeUsage::BlendProbes{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::ReflectionProbeUsage  UnityEngine::Rendering::ReflectionProbeUsage::BlendProbesAndSkybox{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::ReflectionProbeUsage  UnityEngine::Rendering::ReflectionProbeUsage::Simple{static_cast<int32_t>(0x3)};
