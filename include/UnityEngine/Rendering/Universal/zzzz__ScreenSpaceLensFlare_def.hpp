#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceLensFlare.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(ScreenSpaceLensFlare)
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceLensFlareResolutionParameter;
}
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
namespace UnityEngine::Rendering {
class ClampedIntParameter;
}
namespace UnityEngine::Rendering {
class ColorParameter;
}
namespace UnityEngine::Rendering {
class FloatParameter;
}
namespace UnityEngine::Rendering {
class IPostProcessComponent;
}
namespace UnityEngine::Rendering {
class MinFloatParameter;
}
namespace UnityEngine::Rendering {
class Vector2Parameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceLensFlare;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare);
// Dependencies UnityEngine.Rendering.VolumeComponent
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceLensFlare
class CORDL_TYPE ScreenSpaceLensFlare : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field bloomMip, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_bloomMip, put = __cordl_internal_set_bloomMip)) ::UnityEngine::Rendering::ClampedIntParameter* bloomMip;

  /// @brief Field chromaticAbberationIntensity, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_chromaticAbberationIntensity,
                      put = __cordl_internal_set_chromaticAbberationIntensity)) ::UnityEngine::Rendering::ClampedFloatParameter* chromaticAbberationIntensity;

  /// @brief Field firstFlareIntensity, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_firstFlareIntensity, put = __cordl_internal_set_firstFlareIntensity)) ::UnityEngine::Rendering::MinFloatParameter* firstFlareIntensity;

  /// @brief Field intensity, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity)) ::UnityEngine::Rendering::MinFloatParameter* intensity;

  /// @brief Field resolution, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_resolution, put = __cordl_internal_set_resolution)) ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter* resolution;

  /// @brief Field sampleDimmer, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_sampleDimmer, put = __cordl_internal_set_sampleDimmer)) ::UnityEngine::Rendering::ClampedFloatParameter* sampleDimmer;

  /// @brief Field samples, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_samples, put = __cordl_internal_set_samples)) ::UnityEngine::Rendering::ClampedIntParameter* samples;

  /// @brief Field scale, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_scale, put = __cordl_internal_set_scale)) ::UnityEngine::Rendering::ClampedFloatParameter* scale;

  /// @brief Field secondaryFlareIntensity, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_secondaryFlareIntensity, put = __cordl_internal_set_secondaryFlareIntensity)) ::UnityEngine::Rendering::MinFloatParameter* secondaryFlareIntensity;

  /// @brief Field startingPosition, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_startingPosition, put = __cordl_internal_set_startingPosition)) ::UnityEngine::Rendering::ClampedFloatParameter* startingPosition;

  /// @brief Field streaksIntensity, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_streaksIntensity, put = __cordl_internal_set_streaksIntensity)) ::UnityEngine::Rendering::MinFloatParameter* streaksIntensity;

  /// @brief Field streaksLength, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_streaksLength, put = __cordl_internal_set_streaksLength)) ::UnityEngine::Rendering::ClampedFloatParameter* streaksLength;

  /// @brief Field streaksOrientation, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_streaksOrientation, put = __cordl_internal_set_streaksOrientation)) ::UnityEngine::Rendering::FloatParameter* streaksOrientation;

  /// @brief Field streaksThreshold, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_streaksThreshold, put = __cordl_internal_set_streaksThreshold)) ::UnityEngine::Rendering::ClampedFloatParameter* streaksThreshold;

  /// @brief Field tintColor, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_tintColor, put = __cordl_internal_set_tintColor)) ::UnityEngine::Rendering::ColorParameter* tintColor;

  /// @brief Field vignetteEffect, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_vignetteEffect, put = __cordl_internal_set_vignetteEffect)) ::UnityEngine::Rendering::ClampedFloatParameter* vignetteEffect;

  /// @brief Field warpedFlareIntensity, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_warpedFlareIntensity, put = __cordl_internal_set_warpedFlareIntensity)) ::UnityEngine::Rendering::MinFloatParameter* warpedFlareIntensity;

  /// @brief Field warpedFlareScale, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_warpedFlareScale, put = __cordl_internal_set_warpedFlareScale)) ::UnityEngine::Rendering::Vector2Parameter* warpedFlareScale;

  /// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x665f7b4, size 0x30, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsStreaksActive, addr 0x665f7e4, size 0x30, virtual false, abstract: false, final false
  inline bool IsStreaksActive();

  /// @brief Method IsTileCompatible, addr 0x665f814, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare* New_ctor();

  constexpr ::UnityEngine::Rendering::ClampedIntParameter* const& __cordl_internal_get_bloomMip() const;

  constexpr ::UnityEngine::Rendering::ClampedIntParameter*& __cordl_internal_get_bloomMip();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_chromaticAbberationIntensity() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_chromaticAbberationIntensity();

  constexpr ::UnityEngine::Rendering::MinFloatParameter* const& __cordl_internal_get_firstFlareIntensity() const;

  constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_firstFlareIntensity();

  constexpr ::UnityEngine::Rendering::MinFloatParameter* const& __cordl_internal_get_intensity() const;

  constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_intensity();

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter* const& __cordl_internal_get_resolution() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter*& __cordl_internal_get_resolution();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_sampleDimmer() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_sampleDimmer();

  constexpr ::UnityEngine::Rendering::ClampedIntParameter* const& __cordl_internal_get_samples() const;

  constexpr ::UnityEngine::Rendering::ClampedIntParameter*& __cordl_internal_get_samples();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_scale() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_scale();

  constexpr ::UnityEngine::Rendering::MinFloatParameter* const& __cordl_internal_get_secondaryFlareIntensity() const;

  constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_secondaryFlareIntensity();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_startingPosition() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_startingPosition();

  constexpr ::UnityEngine::Rendering::MinFloatParameter* const& __cordl_internal_get_streaksIntensity() const;

  constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_streaksIntensity();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_streaksLength() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_streaksLength();

  constexpr ::UnityEngine::Rendering::FloatParameter* const& __cordl_internal_get_streaksOrientation() const;

  constexpr ::UnityEngine::Rendering::FloatParameter*& __cordl_internal_get_streaksOrientation();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_streaksThreshold() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_streaksThreshold();

  constexpr ::UnityEngine::Rendering::ColorParameter* const& __cordl_internal_get_tintColor() const;

  constexpr ::UnityEngine::Rendering::ColorParameter*& __cordl_internal_get_tintColor();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_vignetteEffect() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_vignetteEffect();

  constexpr ::UnityEngine::Rendering::MinFloatParameter* const& __cordl_internal_get_warpedFlareIntensity() const;

  constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_warpedFlareIntensity();

  constexpr ::UnityEngine::Rendering::Vector2Parameter* const& __cordl_internal_get_warpedFlareScale() const;

  constexpr ::UnityEngine::Rendering::Vector2Parameter*& __cordl_internal_get_warpedFlareScale();

  constexpr void __cordl_internal_set_bloomMip(::UnityEngine::Rendering::ClampedIntParameter* value);

  constexpr void __cordl_internal_set_chromaticAbberationIntensity(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_firstFlareIntensity(::UnityEngine::Rendering::MinFloatParameter* value);

  constexpr void __cordl_internal_set_intensity(::UnityEngine::Rendering::MinFloatParameter* value);

  constexpr void __cordl_internal_set_resolution(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter* value);

  constexpr void __cordl_internal_set_sampleDimmer(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_samples(::UnityEngine::Rendering::ClampedIntParameter* value);

  constexpr void __cordl_internal_set_scale(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_secondaryFlareIntensity(::UnityEngine::Rendering::MinFloatParameter* value);

  constexpr void __cordl_internal_set_startingPosition(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_streaksIntensity(::UnityEngine::Rendering::MinFloatParameter* value);

  constexpr void __cordl_internal_set_streaksLength(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_streaksOrientation(::UnityEngine::Rendering::FloatParameter* value);

  constexpr void __cordl_internal_set_streaksThreshold(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_tintColor(::UnityEngine::Rendering::ColorParameter* value);

  constexpr void __cordl_internal_set_vignetteEffect(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_warpedFlareIntensity(::UnityEngine::Rendering::MinFloatParameter* value);

  constexpr void __cordl_internal_set_warpedFlareScale(::UnityEngine::Rendering::Vector2Parameter* value);

  /// @brief Method .ctor, addr 0x665f3c4, size 0x38c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::IPostProcessComponent* i___UnityEngine__Rendering__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceLensFlare();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceLensFlare", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceLensFlare(ScreenSpaceLensFlare&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceLensFlare", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceLensFlare(ScreenSpaceLensFlare const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12777 };

  /// @brief Field intensity, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::MinFloatParameter* ___intensity;

  /// @brief Field tintColor, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::ColorParameter* ___tintColor;

  /// @brief Field bloomMip, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedIntParameter* ___bloomMip;

  /// @brief Field firstFlareIntensity, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::MinFloatParameter* ___firstFlareIntensity;

  /// @brief Field secondaryFlareIntensity, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::MinFloatParameter* ___secondaryFlareIntensity;

  /// @brief Field warpedFlareIntensity, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::MinFloatParameter* ___warpedFlareIntensity;

  /// @brief Field warpedFlareScale, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Rendering::Vector2Parameter* ___warpedFlareScale;

  /// @brief Field samples, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedIntParameter* ___samples;

  /// @brief Field sampleDimmer, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___sampleDimmer;

  /// @brief Field vignetteEffect, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___vignetteEffect;

  /// @brief Field startingPosition, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___startingPosition;

  /// @brief Field scale, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___scale;

  /// @brief Field streaksIntensity, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::Rendering::MinFloatParameter* ___streaksIntensity;

  /// @brief Field streaksLength, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___streaksLength;

  /// @brief Field streaksOrientation, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::Rendering::FloatParameter* ___streaksOrientation;

  /// @brief Field streaksThreshold, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___streaksThreshold;

  /// @brief Field resolution, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter* ___resolution;

  /// @brief Field chromaticAbberationIntensity, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___chromaticAbberationIntensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare, ___intensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare, ___tintColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare, ___bloomMip) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare, ___firstFlareIntensity) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare, ___secondaryFlareIntensity) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare, ___warpedFlareIntensity) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare, ___warpedFlareScale) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare, ___samples) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare, ___sampleDimmer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare, ___vignetteEffect) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare, ___startingPosition) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare, ___scale) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare, ___streaksIntensity) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare, ___streaksLength) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare, ___streaksOrientation) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare, ___streaksThreshold) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare, ___resolution) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare, ___chromaticAbberationIntensity) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare, 0xc8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare*, "UnityEngine.Rendering.Universal", "ScreenSpaceLensFlare");
