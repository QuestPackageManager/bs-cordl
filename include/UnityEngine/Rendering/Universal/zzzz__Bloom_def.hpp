#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Bloom.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(Bloom)
namespace UnityEngine::Rendering::Universal {
class DownscaleParameter;
}
namespace UnityEngine::Rendering {
class BoolParameter;
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
class IPostProcessComponent;
}
namespace UnityEngine::Rendering {
class MinFloatParameter;
}
namespace UnityEngine::Rendering {
class TextureParameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class Bloom;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::Bloom*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Bloom*, "UnityEngine.Rendering.Universal", "Bloom");
// [VolumeComponentMenu("Post-processing/Bloom")]
// [SupportedOnRenderPipeline(typeof(UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset))]
// Dependencies UnityEngine.Rendering.VolumeComponent
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Bloom
class CORDL_TYPE Bloom : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field clamp, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_clamp, put = __cordl_internal_set_clamp)) ::UnityEngine::Rendering::MinFloatParameter* clamp;

  /// @brief Field dirtIntensity, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_dirtIntensity, put = __cordl_internal_set_dirtIntensity)) ::UnityEngine::Rendering::MinFloatParameter* dirtIntensity;

  /// @brief Field dirtTexture, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_dirtTexture, put = __cordl_internal_set_dirtTexture)) ::UnityEngine::Rendering::TextureParameter* dirtTexture;

  /// @brief Field downscale, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_downscale, put = __cordl_internal_set_downscale)) ::UnityEngine::Rendering::Universal::DownscaleParameter* downscale;

  /// @brief Field highQualityFiltering, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_highQualityFiltering, put = __cordl_internal_set_highQualityFiltering)) ::UnityEngine::Rendering::BoolParameter* highQualityFiltering;

  /// @brief Field intensity, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity)) ::UnityEngine::Rendering::MinFloatParameter* intensity;

  /// @brief Field maxIterations, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_maxIterations, put = __cordl_internal_set_maxIterations)) ::UnityEngine::Rendering::ClampedIntParameter* maxIterations;

  /// @brief Field scatter, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_scatter, put = __cordl_internal_set_scatter)) ::UnityEngine::Rendering::ClampedFloatParameter* scatter;

  /// @brief Field skipIterations, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_skipIterations, put = __cordl_internal_set_skipIterations)) ::UnityEngine::Rendering::ClampedIntParameter* skipIterations;

  /// @brief Field threshold, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_threshold, put = __cordl_internal_set_threshold)) ::UnityEngine::Rendering::MinFloatParameter* threshold;

  /// @brief Field tint, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_tint, put = __cordl_internal_set_tint)) ::UnityEngine::Rendering::ColorParameter* tint;

  /// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x6873f0c, size 0x30, virtual true, abstract: false, final true
  inline bool IsActive();

  /// [Obsolete("Unused #from(2023.1)", false)]
  /// @brief Method IsTileCompatible, addr 0x6873f3c, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::Bloom* New_ctor();

  constexpr ::UnityEngine::Rendering::MinFloatParameter* const& __cordl_internal_get_clamp() const;

  constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_clamp();

  constexpr ::UnityEngine::Rendering::MinFloatParameter* const& __cordl_internal_get_dirtIntensity() const;

  constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_dirtIntensity();

  constexpr ::UnityEngine::Rendering::TextureParameter* const& __cordl_internal_get_dirtTexture() const;

  constexpr ::UnityEngine::Rendering::TextureParameter*& __cordl_internal_get_dirtTexture();

  constexpr ::UnityEngine::Rendering::Universal::DownscaleParameter* const& __cordl_internal_get_downscale() const;

  constexpr ::UnityEngine::Rendering::Universal::DownscaleParameter*& __cordl_internal_get_downscale();

  constexpr ::UnityEngine::Rendering::BoolParameter* const& __cordl_internal_get_highQualityFiltering() const;

  constexpr ::UnityEngine::Rendering::BoolParameter*& __cordl_internal_get_highQualityFiltering();

  constexpr ::UnityEngine::Rendering::MinFloatParameter* const& __cordl_internal_get_intensity() const;

  constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_intensity();

  constexpr ::UnityEngine::Rendering::ClampedIntParameter* const& __cordl_internal_get_maxIterations() const;

  constexpr ::UnityEngine::Rendering::ClampedIntParameter*& __cordl_internal_get_maxIterations();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_scatter() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_scatter();

  constexpr ::UnityEngine::Rendering::ClampedIntParameter* const& __cordl_internal_get_skipIterations() const;

  constexpr ::UnityEngine::Rendering::ClampedIntParameter*& __cordl_internal_get_skipIterations();

  constexpr ::UnityEngine::Rendering::MinFloatParameter* const& __cordl_internal_get_threshold() const;

  constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_threshold();

  constexpr ::UnityEngine::Rendering::ColorParameter* const& __cordl_internal_get_tint() const;

  constexpr ::UnityEngine::Rendering::ColorParameter*& __cordl_internal_get_tint();

  constexpr void __cordl_internal_set_clamp(::UnityEngine::Rendering::MinFloatParameter* value);

  constexpr void __cordl_internal_set_dirtIntensity(::UnityEngine::Rendering::MinFloatParameter* value);

  constexpr void __cordl_internal_set_dirtTexture(::UnityEngine::Rendering::TextureParameter* value);

  constexpr void __cordl_internal_set_downscale(::UnityEngine::Rendering::Universal::DownscaleParameter* value);

  constexpr void __cordl_internal_set_highQualityFiltering(::UnityEngine::Rendering::BoolParameter* value);

  constexpr void __cordl_internal_set_intensity(::UnityEngine::Rendering::MinFloatParameter* value);

  constexpr void __cordl_internal_set_maxIterations(::UnityEngine::Rendering::ClampedIntParameter* value);

  constexpr void __cordl_internal_set_scatter(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_skipIterations(::UnityEngine::Rendering::ClampedIntParameter* value);

  constexpr void __cordl_internal_set_threshold(::UnityEngine::Rendering::MinFloatParameter* value);

  constexpr void __cordl_internal_set_tint(::UnityEngine::Rendering::ColorParameter* value);

  /// @brief Method .ctor, addr 0x6873f44, size 0x27c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::IPostProcessComponent* i___UnityEngine__Rendering__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Bloom();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Bloom", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Bloom(Bloom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Bloom", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Bloom(Bloomconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12740 };

  /// [Obsolete("This is obsolete, please use maxIterations instead.", true)]
  /// [Tooltip("The number of final iterations to skip in the effect processing sequence.")]
  /// @brief Field skipIterations, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedIntParameter* ___skipIterations;

  /// [Header("Bloom")]
  /// [Tooltip("Filters out pixels under this level of brightness. Value is in gamma-space.")]
  /// @brief Field threshold, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::MinFloatParameter* ___threshold;

  /// [Tooltip("Strength of the bloom filter.")]
  /// @brief Field intensity, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::MinFloatParameter* ___intensity;

  /// [Tooltip("Set the radius of the bloom effect.")]
  /// @brief Field scatter, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___scatter;

  /// [Tooltip("Set the maximum intensity that Unity uses to calculate Bloom. If pixels in your Scene are more intense than this, URP renders them at their current intensity, but uses this intensity
  /// value for the purposes of Bloom calculations.")]
  /// @brief Field clamp, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::MinFloatParameter* ___clamp;

  /// [Tooltip("Use the color picker to select a color for the Bloom effect to tint to.")]
  /// @brief Field tint, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::ColorParameter* ___tint;

  /// [Tooltip("Use bicubic sampling instead of bilinear sampling for the upsampling passes. This is slightly more expensive but helps getting smoother visuals.")]
  /// @brief Field highQualityFiltering, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Rendering::BoolParameter* ___highQualityFiltering;

  /// [Tooltip("The starting resolution that this effect begins processing.")]
  /// [AdditionalProperty]
  /// @brief Field downscale, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DownscaleParameter* ___downscale;

  /// [Tooltip("The maximum number of iterations in the effect processing sequence.")]
  /// [AdditionalProperty]
  /// @brief Field maxIterations, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedIntParameter* ___maxIterations;

  /// [Header("Lens Dirt")]
  /// [Tooltip("Dirtiness texture to add smudges or dust to the bloom effect.")]
  /// @brief Field dirtTexture, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Rendering::TextureParameter* ___dirtTexture;

  /// [Tooltip("Amount of dirtiness.")]
  /// @brief Field dirtIntensity, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Rendering::MinFloatParameter* ___dirtIntensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Bloom, ___skipIterations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Bloom, ___threshold) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Bloom, ___intensity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Bloom, ___scatter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Bloom, ___clamp) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Bloom, ___tint) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Bloom, ___highQualityFiltering) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Bloom, ___downscale) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Bloom, ___maxIterations) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Bloom, ___dirtTexture) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Bloom, ___dirtIntensity) == 0x88, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::Bloom) == 0x90, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
