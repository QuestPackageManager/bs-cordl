#pragma once
// IWYU pragma private; include "UnityEngine/LightBakingOutput.hpp"
#include "UnityEngine/zzzz__LightmapBakeType_impl.hpp"
#include "UnityEngine/zzzz__MixedLightingMode_impl.hpp"
#include "UnityEngine/zzzz__LightBakingOutput_def.hpp"
// Ctor Parameters [CppParam { name: "probeOcclusionLightIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "occlusionMaskChannel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightmapBakeType", ty: "::UnityEngine::LightmapBakeType", modifiers: "", def_value: Some("{}") }, CppParam { name: "mixedLightingMode", ty: "::UnityEngine::MixedLightingMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "isBaked", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LightBakingOutput::LightBakingOutput(int32_t  probeOcclusionLightIndex, int32_t  occlusionMaskChannel, ::UnityEngine::LightmapBakeType  lightmapBakeType, ::UnityEngine::MixedLightingMode  mixedLightingMode, bool  isBaked) noexcept  {
this->probeOcclusionLightIndex = probeOcclusionLightIndex;
this->occlusionMaskChannel = occlusionMaskChannel;
this->lightmapBakeType = lightmapBakeType;
this->mixedLightingMode = mixedLightingMode;
this->isBaked = isBaked;
}
// Ctor Parameters []
constexpr ::UnityEngine::LightBakingOutput::LightBakingOutput()   {
}
