#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeSystemParameters.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBlendingTextureMemoryBudget_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSHBands_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSystemParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSceneData_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
// Ctor Parameters [CppParam { name: "memoryBudget", ty: "::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget", modifiers: "", def_value: Some("{}") }, CppParam { name: "blendingMemoryBudget",
// ty: "::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget", modifiers: "", def_value: Some("{}") }, CppParam { name: "shBands", ty: "::UnityEngine::Rendering::ProbeVolumeSHBands",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "supportScenarios", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "supportScenarioBlending", ty: "bool", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "supportGPUStreaming", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "supportDiskStreaming", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "probeDebugShader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: Some("{}") }, CppParam { name: "probeSamplingDebugShader", ty:
// "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: Some("{}") }, CppParam { name: "probeSamplingDebugTexture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "probeSamplingDebugMesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: Some("{}") }, CppParam { name: "offsetDebugShader", ty:
// "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: Some("{}") }, CppParam { name: "fragmentationDebugShader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "scenarioBlendingShader", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: Some("{}") }, CppParam { name: "streamingUploadShader", ty:
// "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: Some("{}") }, CppParam { name: "sceneData", ty: "::UnityEngine::Rendering::ProbeVolumeSceneData*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "supportsRuntimeDebug", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeVolumeSystemParameters::ProbeVolumeSystemParameters(
    ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget, ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget blendingMemoryBudget,
    ::UnityEngine::Rendering::ProbeVolumeSHBands shBands, bool supportScenarios, bool supportScenarioBlending, bool supportGPUStreaming, bool supportDiskStreaming,
    ::UnityW<::UnityEngine::Shader> probeDebugShader, ::UnityW<::UnityEngine::Shader> probeSamplingDebugShader, ::UnityW<::UnityEngine::Texture> probeSamplingDebugTexture,
    ::UnityW<::UnityEngine::Mesh> probeSamplingDebugMesh, ::UnityW<::UnityEngine::Shader> offsetDebugShader, ::UnityW<::UnityEngine::Shader> fragmentationDebugShader,
    ::UnityW<::UnityEngine::ComputeShader> scenarioBlendingShader, ::UnityW<::UnityEngine::ComputeShader> streamingUploadShader, ::UnityEngine::Rendering::ProbeVolumeSceneData* sceneData,
    bool supportsRuntimeDebug) noexcept {
  this->memoryBudget = memoryBudget;
  this->blendingMemoryBudget = blendingMemoryBudget;
  this->shBands = shBands;
  this->supportScenarios = supportScenarios;
  this->supportScenarioBlending = supportScenarioBlending;
  this->supportGPUStreaming = supportGPUStreaming;
  this->supportDiskStreaming = supportDiskStreaming;
  this->probeDebugShader = probeDebugShader;
  this->probeSamplingDebugShader = probeSamplingDebugShader;
  this->probeSamplingDebugTexture = probeSamplingDebugTexture;
  this->probeSamplingDebugMesh = probeSamplingDebugMesh;
  this->offsetDebugShader = offsetDebugShader;
  this->fragmentationDebugShader = fragmentationDebugShader;
  this->scenarioBlendingShader = scenarioBlendingShader;
  this->streamingUploadShader = streamingUploadShader;
  this->sceneData = sceneData;
  this->supportsRuntimeDebug = supportsRuntimeDebug;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeSystemParameters::ProbeVolumeSystemParameters() {}
