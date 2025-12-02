#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumesOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(ProbeVolumesOptions)
namespace UnityEngine::Rendering {
class APVLeakReductionModeParameter;
}
namespace UnityEngine::Rendering {
class BoolParameter;
}
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
namespace UnityEngine::Rendering {
class Vector3Parameter;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeVolumesOptions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeVolumesOptions);
// Dependencies UnityEngine.Rendering.VolumeComponent
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeVolumesOptions
class CORDL_TYPE ProbeVolumesOptions : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field animateSamplingNoise, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_animateSamplingNoise, put = __cordl_internal_set_animateSamplingNoise)) ::UnityEngine::Rendering::BoolParameter* animateSamplingNoise;

  /// @brief Field intensityMultiplier, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_intensityMultiplier, put = __cordl_internal_set_intensityMultiplier)) ::UnityEngine::Rendering::ClampedFloatParameter* intensityMultiplier;

  /// @brief Field leakReductionMode, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_leakReductionMode, put = __cordl_internal_set_leakReductionMode)) ::UnityEngine::Rendering::APVLeakReductionModeParameter* leakReductionMode;

  /// @brief Field minValidDotProductValue, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_minValidDotProductValue, put = __cordl_internal_set_minValidDotProductValue)) ::UnityEngine::Rendering::ClampedFloatParameter* minValidDotProductValue;

  /// @brief Field normalBias, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_normalBias, put = __cordl_internal_set_normalBias)) ::UnityEngine::Rendering::ClampedFloatParameter* normalBias;

  /// @brief Field occlusionOnlyReflectionNormalization, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_occlusionOnlyReflectionNormalization,
                      put = __cordl_internal_set_occlusionOnlyReflectionNormalization)) ::UnityEngine::Rendering::BoolParameter* occlusionOnlyReflectionNormalization;

  /// @brief Field samplingNoise, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_samplingNoise, put = __cordl_internal_set_samplingNoise)) ::UnityEngine::Rendering::ClampedFloatParameter* samplingNoise;

  /// @brief Field scaleBiasWithMinProbeDistance, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_scaleBiasWithMinProbeDistance,
                      put = __cordl_internal_set_scaleBiasWithMinProbeDistance)) ::UnityEngine::Rendering::BoolParameter* scaleBiasWithMinProbeDistance;

  /// @brief Field skyOcclusionIntensityMultiplier, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_skyOcclusionIntensityMultiplier,
                      put = __cordl_internal_set_skyOcclusionIntensityMultiplier)) ::UnityEngine::Rendering::ClampedFloatParameter* skyOcclusionIntensityMultiplier;

  /// @brief Field viewBias, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_viewBias, put = __cordl_internal_set_viewBias)) ::UnityEngine::Rendering::ClampedFloatParameter* viewBias;

  /// @brief Field worldOffset, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_worldOffset, put = __cordl_internal_set_worldOffset)) ::UnityEngine::Rendering::Vector3Parameter* worldOffset;

  static inline ::UnityEngine::Rendering::ProbeVolumesOptions* New_ctor();

  constexpr ::UnityEngine::Rendering::BoolParameter* const& __cordl_internal_get_animateSamplingNoise() const;

  constexpr ::UnityEngine::Rendering::BoolParameter*& __cordl_internal_get_animateSamplingNoise();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_intensityMultiplier() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_intensityMultiplier();

  constexpr ::UnityEngine::Rendering::APVLeakReductionModeParameter* const& __cordl_internal_get_leakReductionMode() const;

  constexpr ::UnityEngine::Rendering::APVLeakReductionModeParameter*& __cordl_internal_get_leakReductionMode();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_minValidDotProductValue() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_minValidDotProductValue();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_normalBias() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_normalBias();

  constexpr ::UnityEngine::Rendering::BoolParameter* const& __cordl_internal_get_occlusionOnlyReflectionNormalization() const;

  constexpr ::UnityEngine::Rendering::BoolParameter*& __cordl_internal_get_occlusionOnlyReflectionNormalization();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_samplingNoise() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_samplingNoise();

  constexpr ::UnityEngine::Rendering::BoolParameter* const& __cordl_internal_get_scaleBiasWithMinProbeDistance() const;

  constexpr ::UnityEngine::Rendering::BoolParameter*& __cordl_internal_get_scaleBiasWithMinProbeDistance();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_skyOcclusionIntensityMultiplier() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_skyOcclusionIntensityMultiplier();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_viewBias() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_viewBias();

  constexpr ::UnityEngine::Rendering::Vector3Parameter* const& __cordl_internal_get_worldOffset() const;

  constexpr ::UnityEngine::Rendering::Vector3Parameter*& __cordl_internal_get_worldOffset();

  constexpr void __cordl_internal_set_animateSamplingNoise(::UnityEngine::Rendering::BoolParameter* value);

  constexpr void __cordl_internal_set_intensityMultiplier(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_leakReductionMode(::UnityEngine::Rendering::APVLeakReductionModeParameter* value);

  constexpr void __cordl_internal_set_minValidDotProductValue(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_normalBias(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_occlusionOnlyReflectionNormalization(::UnityEngine::Rendering::BoolParameter* value);

  constexpr void __cordl_internal_set_samplingNoise(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_scaleBiasWithMinProbeDistance(::UnityEngine::Rendering::BoolParameter* value);

  constexpr void __cordl_internal_set_skyOcclusionIntensityMultiplier(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_viewBias(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_worldOffset(::UnityEngine::Rendering::Vector3Parameter* value);

  /// @brief Method .ctor, addr 0x6579f94, size 0x29c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumesOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumesOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumesOptions(ProbeVolumesOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumesOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumesOptions(ProbeVolumesOptions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12125 };

  /// @brief Field normalBias, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___normalBias;

  /// @brief Field viewBias, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___viewBias;

  /// @brief Field scaleBiasWithMinProbeDistance, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::BoolParameter* ___scaleBiasWithMinProbeDistance;

  /// @brief Field samplingNoise, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___samplingNoise;

  /// @brief Field animateSamplingNoise, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::BoolParameter* ___animateSamplingNoise;

  /// @brief Field leakReductionMode, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::APVLeakReductionModeParameter* ___leakReductionMode;

  /// @brief Field minValidDotProductValue, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___minValidDotProductValue;

  /// @brief Field occlusionOnlyReflectionNormalization, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Rendering::BoolParameter* ___occlusionOnlyReflectionNormalization;

  /// @brief Field intensityMultiplier, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___intensityMultiplier;

  /// @brief Field skyOcclusionIntensityMultiplier, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___skyOcclusionIntensityMultiplier;

  /// @brief Field worldOffset, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Rendering::Vector3Parameter* ___worldOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumesOptions, ___normalBias) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumesOptions, ___viewBias) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumesOptions, ___scaleBiasWithMinProbeDistance) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumesOptions, ___samplingNoise) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumesOptions, ___animateSamplingNoise) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumesOptions, ___leakReductionMode) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumesOptions, ___minValidDotProductValue) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumesOptions, ___occlusionOnlyReflectionNormalization) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumesOptions, ___intensityMultiplier) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumesOptions, ___skyOcclusionIntensityMultiplier) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumesOptions, ___worldOffset) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumesOptions, 0x90>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ProbeVolumesOptions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumesOptions*, "UnityEngine.Rendering", "ProbeVolumesOptions");
