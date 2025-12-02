#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeShadingParameters.hpp"
#include "Unity/Mathematics/zzzz__uint4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__APVLeakReductionMode_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeShadingParameters_def.hpp"
// Ctor Parameters [CppParam { name: "normalBias", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewBias", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "scaleBiasByMinDistanceBetweenProbes", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "samplingNoise", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "weight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "leakReductionMode", ty: "::UnityEngine::Rendering::APVLeakReductionMode", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "frameIndexForNoise", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "reflNormalizationLowerClamp", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "reflNormalizationUpperClamp", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "skyOcclusionIntensity", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "skyOcclusionShadingDirection", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "regionCount", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "regionLayerMasks", ty: "::Unity::Mathematics::uint4", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldOffset", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeVolumeShadingParameters::ProbeVolumeShadingParameters(float_t normalBias, float_t viewBias, bool scaleBiasByMinDistanceBetweenProbes, float_t samplingNoise,
                                                                                               float_t weight, ::UnityEngine::Rendering::APVLeakReductionMode leakReductionMode,
                                                                                               int32_t frameIndexForNoise, float_t reflNormalizationLowerClamp, float_t reflNormalizationUpperClamp,
                                                                                               float_t skyOcclusionIntensity, bool skyOcclusionShadingDirection, int32_t regionCount,
                                                                                               ::Unity::Mathematics::uint4 regionLayerMasks, ::UnityEngine::Vector3 worldOffset) noexcept {
  this->normalBias = normalBias;
  this->viewBias = viewBias;
  this->scaleBiasByMinDistanceBetweenProbes = scaleBiasByMinDistanceBetweenProbes;
  this->samplingNoise = samplingNoise;
  this->weight = weight;
  this->leakReductionMode = leakReductionMode;
  this->frameIndexForNoise = frameIndexForNoise;
  this->reflNormalizationLowerClamp = reflNormalizationLowerClamp;
  this->reflNormalizationUpperClamp = reflNormalizationUpperClamp;
  this->skyOcclusionIntensity = skyOcclusionIntensity;
  this->skyOcclusionShadingDirection = skyOcclusionShadingDirection;
  this->regionCount = regionCount;
  this->regionLayerMasks = regionLayerMasks;
  this->worldOffset = worldOffset;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeShadingParameters::ProbeVolumeShadingParameters() {}
