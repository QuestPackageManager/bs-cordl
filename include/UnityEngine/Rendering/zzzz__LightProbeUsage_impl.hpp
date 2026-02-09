#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LightProbeUsage.hpp"
#include "UnityEngine/Rendering/zzzz__LightProbeUsage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LightProbeUsage::LightProbeUsage(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LightProbeUsage::LightProbeUsage()   {
}
constexpr ::UnityEngine::Rendering::LightProbeUsage  UnityEngine::Rendering::LightProbeUsage::Off{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::LightProbeUsage  UnityEngine::Rendering::LightProbeUsage::BlendProbes{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::LightProbeUsage  UnityEngine::Rendering::LightProbeUsage::UseProxyVolume{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::LightProbeUsage  UnityEngine::Rendering::LightProbeUsage::CustomProvided{static_cast<int32_t>(0x4)};
