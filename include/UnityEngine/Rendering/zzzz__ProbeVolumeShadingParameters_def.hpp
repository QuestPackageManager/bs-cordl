#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeShadingParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__uint4_def.hpp"
#include "UnityEngine/Rendering/zzzz__APVLeakReductionMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeShadingParameters)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ProbeVolumeShadingParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ProbeVolumeShadingParameters);
// Dependencies Unity.Mathematics.uint4, UnityEngine.Rendering.APVLeakReductionMode, UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumeShadingParameters
struct CORDL_TYPE ProbeVolumeShadingParameters {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeShadingParameters();

  // Ctor Parameters [CppParam { name: "normalBias", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "viewBias", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "scaleBiasByMinDistanceBetweenProbes", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "samplingNoise", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "weight",
  // ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "leakReductionMode", ty: "::UnityEngine::Rendering::APVLeakReductionMode", modifiers: "", def_value: None }, CppParam { name:
  // "frameIndexForNoise", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "reflNormalizationLowerClamp", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "reflNormalizationUpperClamp", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "skyOcclusionIntensity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "skyOcclusionShadingDirection", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "regionCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "regionLayerMasks",
  // ty: "::Unity::Mathematics::uint4", modifiers: "", def_value: None }, CppParam { name: "worldOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr ProbeVolumeShadingParameters(float_t normalBias, float_t viewBias, bool scaleBiasByMinDistanceBetweenProbes, float_t samplingNoise, float_t weight,
                                         ::UnityEngine::Rendering::APVLeakReductionMode leakReductionMode, int32_t frameIndexForNoise, float_t reflNormalizationLowerClamp,
                                         float_t reflNormalizationUpperClamp, float_t skyOcclusionIntensity, bool skyOcclusionShadingDirection, int32_t regionCount,
                                         ::Unity::Mathematics::uint4 regionLayerMasks, ::UnityEngine::Vector3 worldOffset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12086 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4c };

  /// @brief Field normalBias, offset: 0x0, size: 0x4, def value: None
  float_t normalBias;

  /// @brief Field viewBias, offset: 0x4, size: 0x4, def value: None
  float_t viewBias;

  /// @brief Field scaleBiasByMinDistanceBetweenProbes, offset: 0x8, size: 0x1, def value: None
  bool scaleBiasByMinDistanceBetweenProbes;

  /// @brief Field samplingNoise, offset: 0xc, size: 0x4, def value: None
  float_t samplingNoise;

  /// @brief Field weight, offset: 0x10, size: 0x4, def value: None
  float_t weight;

  /// @brief Field leakReductionMode, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::Rendering::APVLeakReductionMode leakReductionMode;

  /// @brief Field frameIndexForNoise, offset: 0x18, size: 0x4, def value: None
  int32_t frameIndexForNoise;

  /// @brief Field reflNormalizationLowerClamp, offset: 0x1c, size: 0x4, def value: None
  float_t reflNormalizationLowerClamp;

  /// @brief Field reflNormalizationUpperClamp, offset: 0x20, size: 0x4, def value: None
  float_t reflNormalizationUpperClamp;

  /// @brief Field skyOcclusionIntensity, offset: 0x24, size: 0x4, def value: None
  float_t skyOcclusionIntensity;

  /// @brief Field skyOcclusionShadingDirection, offset: 0x28, size: 0x1, def value: None
  bool skyOcclusionShadingDirection;

  /// @brief Field regionCount, offset: 0x2c, size: 0x4, def value: None
  int32_t regionCount;

  /// @brief Field regionLayerMasks, offset: 0x30, size: 0x10, def value: None
  ::Unity::Mathematics::uint4 regionLayerMasks;

  /// @brief Field worldOffset, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 worldOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeShadingParameters, normalBias) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeShadingParameters, viewBias) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeShadingParameters, scaleBiasByMinDistanceBetweenProbes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeShadingParameters, samplingNoise) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeShadingParameters, weight) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeShadingParameters, leakReductionMode) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeShadingParameters, frameIndexForNoise) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeShadingParameters, reflNormalizationLowerClamp) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeShadingParameters, reflNormalizationUpperClamp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeShadingParameters, skyOcclusionIntensity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeShadingParameters, skyOcclusionShadingDirection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeShadingParameters, regionCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeShadingParameters, regionLayerMasks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeShadingParameters, worldOffset) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeShadingParameters, 0x4c>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeShadingParameters, "UnityEngine.Rendering", "ProbeVolumeShadingParameters");
