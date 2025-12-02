#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Tonemapping.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(Tonemapping)
namespace UnityEngine::Rendering::Universal {
class HDRACESPresetParameter;
}
namespace UnityEngine::Rendering::Universal {
class NeutralRangeReductionModeParameter;
}
namespace UnityEngine::Rendering::Universal {
class TonemappingModeParameter;
}
namespace UnityEngine::Rendering {
class BoolParameter;
}
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
namespace UnityEngine::Rendering {
class IPostProcessComponent;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class Tonemapping;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Tonemapping);
// Dependencies UnityEngine.Rendering.VolumeComponent
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Tonemapping
class CORDL_TYPE Tonemapping : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field acesPreset, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_acesPreset, put = __cordl_internal_set_acesPreset)) ::UnityEngine::Rendering::Universal::HDRACESPresetParameter* acesPreset;

  /// @brief Field detectBrightnessLimits, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_detectBrightnessLimits, put = __cordl_internal_set_detectBrightnessLimits)) ::UnityEngine::Rendering::BoolParameter* detectBrightnessLimits;

  /// @brief Field detectPaperWhite, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_detectPaperWhite, put = __cordl_internal_set_detectPaperWhite)) ::UnityEngine::Rendering::BoolParameter* detectPaperWhite;

  /// @brief Field hueShiftAmount, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_hueShiftAmount, put = __cordl_internal_set_hueShiftAmount)) ::UnityEngine::Rendering::ClampedFloatParameter* hueShiftAmount;

  /// @brief Field maxNits, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_maxNits, put = __cordl_internal_set_maxNits)) ::UnityEngine::Rendering::ClampedFloatParameter* maxNits;

  /// @brief Field minNits, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_minNits, put = __cordl_internal_set_minNits)) ::UnityEngine::Rendering::ClampedFloatParameter* minNits;

  /// @brief Field mode, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode)) ::UnityEngine::Rendering::Universal::TonemappingModeParameter* mode;

  /// @brief Field neutralHDRRangeReductionMode, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_neutralHDRRangeReductionMode,
                      put = __cordl_internal_set_neutralHDRRangeReductionMode)) ::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter* neutralHDRRangeReductionMode;

  /// @brief Field paperWhite, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_paperWhite, put = __cordl_internal_set_paperWhite)) ::UnityEngine::Rendering::ClampedFloatParameter* paperWhite;

  /// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x665fbd0, size 0x30, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x665fc00, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::Tonemapping* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::HDRACESPresetParameter* const& __cordl_internal_get_acesPreset() const;

  constexpr ::UnityEngine::Rendering::Universal::HDRACESPresetParameter*& __cordl_internal_get_acesPreset();

  constexpr ::UnityEngine::Rendering::BoolParameter* const& __cordl_internal_get_detectBrightnessLimits() const;

  constexpr ::UnityEngine::Rendering::BoolParameter*& __cordl_internal_get_detectBrightnessLimits();

  constexpr ::UnityEngine::Rendering::BoolParameter* const& __cordl_internal_get_detectPaperWhite() const;

  constexpr ::UnityEngine::Rendering::BoolParameter*& __cordl_internal_get_detectPaperWhite();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_hueShiftAmount() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_hueShiftAmount();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_maxNits() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_maxNits();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_minNits() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_minNits();

  constexpr ::UnityEngine::Rendering::Universal::TonemappingModeParameter* const& __cordl_internal_get_mode() const;

  constexpr ::UnityEngine::Rendering::Universal::TonemappingModeParameter*& __cordl_internal_get_mode();

  constexpr ::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter* const& __cordl_internal_get_neutralHDRRangeReductionMode() const;

  constexpr ::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter*& __cordl_internal_get_neutralHDRRangeReductionMode();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_paperWhite() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_paperWhite();

  constexpr void __cordl_internal_set_acesPreset(::UnityEngine::Rendering::Universal::HDRACESPresetParameter* value);

  constexpr void __cordl_internal_set_detectBrightnessLimits(::UnityEngine::Rendering::BoolParameter* value);

  constexpr void __cordl_internal_set_detectPaperWhite(::UnityEngine::Rendering::BoolParameter* value);

  constexpr void __cordl_internal_set_hueShiftAmount(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_maxNits(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_minNits(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_mode(::UnityEngine::Rendering::Universal::TonemappingModeParameter* value);

  constexpr void __cordl_internal_set_neutralHDRRangeReductionMode(::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter* value);

  constexpr void __cordl_internal_set_paperWhite(::UnityEngine::Rendering::ClampedFloatParameter* value);

  /// @brief Method .ctor, addr 0x665fc08, size 0x1f4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::IPostProcessComponent* i___UnityEngine__Rendering__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tonemapping();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tonemapping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tonemapping(Tonemapping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tonemapping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tonemapping(Tonemapping const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12784 };

  /// @brief Field mode, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::TonemappingModeParameter* ___mode;

  /// @brief Field neutralHDRRangeReductionMode, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter* ___neutralHDRRangeReductionMode;

  /// @brief Field acesPreset, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::HDRACESPresetParameter* ___acesPreset;

  /// @brief Field hueShiftAmount, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___hueShiftAmount;

  /// @brief Field detectPaperWhite, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::BoolParameter* ___detectPaperWhite;

  /// @brief Field paperWhite, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___paperWhite;

  /// @brief Field detectBrightnessLimits, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Rendering::BoolParameter* ___detectBrightnessLimits;

  /// @brief Field minNits, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___minNits;

  /// @brief Field maxNits, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___maxNits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Tonemapping, ___mode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Tonemapping, ___neutralHDRRangeReductionMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Tonemapping, ___acesPreset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Tonemapping, ___hueShiftAmount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Tonemapping, ___detectPaperWhite) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Tonemapping, ___paperWhite) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Tonemapping, ___detectBrightnessLimits) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Tonemapping, ___minNits) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Tonemapping, ___maxNits) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Tonemapping, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Tonemapping);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Tonemapping*, "UnityEngine.Rendering.Universal", "Tonemapping");
