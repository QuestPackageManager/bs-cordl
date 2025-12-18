#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeSystemParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBlendingTextureMemoryBudget_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSHBands_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ProbeVolumeSystemParameters)
namespace UnityEngine::Rendering {
class ProbeVolumeSceneData;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ProbeVolumeSystemParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ProbeVolumeSystemParameters);
// Dependencies UnityEngine.Rendering.ProbeVolumeBlendingTextureMemoryBudget, UnityEngine.Rendering.ProbeVolumeSHBands, UnityEngine.Rendering.ProbeVolumeTextureMemoryBudget
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumeSystemParameters
struct CORDL_TYPE ProbeVolumeSystemParameters {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeSystemParameters();

  // Ctor Parameters [CppParam { name: "memoryBudget", ty: "::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget", modifiers: "", def_value: None }, CppParam { name: "blendingMemoryBudget", ty:
  // "::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget", modifiers: "", def_value: None }, CppParam { name: "shBands", ty: "::UnityEngine::Rendering::ProbeVolumeSHBands", modifiers:
  // "", def_value: None }, CppParam { name: "supportScenarios", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "supportScenarioBlending", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "supportGPUStreaming", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "supportDiskStreaming", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "probeDebugShader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: None }, CppParam { name: "probeSamplingDebugShader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "",
  // def_value: None }, CppParam { name: "probeSamplingDebugTexture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "probeSamplingDebugMesh", ty:
  // "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None }, CppParam { name: "offsetDebugShader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: None }, CppParam { name:
  // "fragmentationDebugShader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: None }, CppParam { name: "scenarioBlendingShader", ty: "::UnityW<::UnityEngine::ComputeShader>",
  // modifiers: "", def_value: None }, CppParam { name: "streamingUploadShader", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: None }, CppParam { name: "sceneData", ty:
  // "::UnityEngine::Rendering::ProbeVolumeSceneData*", modifiers: "", def_value: None }, CppParam { name: "supportsRuntimeDebug", ty: "bool", modifiers: "", def_value: None }]
  constexpr ProbeVolumeSystemParameters(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget, ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget blendingMemoryBudget,
                                        ::UnityEngine::Rendering::ProbeVolumeSHBands shBands, bool supportScenarios, bool supportScenarioBlending, bool supportGPUStreaming, bool supportDiskStreaming,
                                        ::UnityW<::UnityEngine::Shader> probeDebugShader, ::UnityW<::UnityEngine::Shader> probeSamplingDebugShader,
                                        ::UnityW<::UnityEngine::Texture> probeSamplingDebugTexture, ::UnityW<::UnityEngine::Mesh> probeSamplingDebugMesh,
                                        ::UnityW<::UnityEngine::Shader> offsetDebugShader, ::UnityW<::UnityEngine::Shader> fragmentationDebugShader,
                                        ::UnityW<::UnityEngine::ComputeShader> scenarioBlendingShader, ::UnityW<::UnityEngine::ComputeShader> streamingUploadShader,
                                        ::UnityEngine::Rendering::ProbeVolumeSceneData* sceneData, bool supportsRuntimeDebug) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12089 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field memoryBudget, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget;

  /// @brief Field blendingMemoryBudget, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget blendingMemoryBudget;

  /// @brief Field shBands, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeVolumeSHBands shBands;

  /// @brief Field supportScenarios, offset: 0xc, size: 0x1, def value: None
  bool supportScenarios;

  /// @brief Field supportScenarioBlending, offset: 0xd, size: 0x1, def value: None
  bool supportScenarioBlending;

  /// @brief Field supportGPUStreaming, offset: 0xe, size: 0x1, def value: None
  bool supportGPUStreaming;

  /// @brief Field supportDiskStreaming, offset: 0xf, size: 0x1, def value: None
  bool supportDiskStreaming;

  /// @brief Field probeDebugShader, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> probeDebugShader;

  /// @brief Field probeSamplingDebugShader, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> probeSamplingDebugShader;

  /// @brief Field probeSamplingDebugTexture, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> probeSamplingDebugTexture;

  /// @brief Field probeSamplingDebugMesh, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> probeSamplingDebugMesh;

  /// @brief Field offsetDebugShader, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> offsetDebugShader;

  /// @brief Field fragmentationDebugShader, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> fragmentationDebugShader;

  /// @brief Field scenarioBlendingShader, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> scenarioBlendingShader;

  /// @brief Field streamingUploadShader, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> streamingUploadShader;

  /// @brief Field sceneData, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeVolumeSceneData* sceneData;

  /// @brief Field supportsRuntimeDebug, offset: 0x58, size: 0x1, def value: None
  bool supportsRuntimeDebug;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeSystemParameters, memoryBudget) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeSystemParameters, blendingMemoryBudget) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeSystemParameters, shBands) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeSystemParameters, supportScenarios) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeSystemParameters, supportScenarioBlending) == 0xd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeSystemParameters, supportGPUStreaming) == 0xe, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeSystemParameters, supportDiskStreaming) == 0xf, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeSystemParameters, probeDebugShader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeSystemParameters, probeSamplingDebugShader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeSystemParameters, probeSamplingDebugTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeSystemParameters, probeSamplingDebugMesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeSystemParameters, offsetDebugShader) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeSystemParameters, fragmentationDebugShader) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeSystemParameters, scenarioBlendingShader) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeSystemParameters, streamingUploadShader) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeSystemParameters, sceneData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeSystemParameters, supportsRuntimeDebug) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeSystemParameters, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeSystemParameters, "UnityEngine.Rendering", "ProbeVolumeSystemParameters");
