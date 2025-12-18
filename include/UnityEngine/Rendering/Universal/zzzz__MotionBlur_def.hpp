#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/MotionBlur.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(MotionBlur)
namespace UnityEngine::Rendering::Universal {
class MotionBlurModeParameter;
}
namespace UnityEngine::Rendering::Universal {
class MotionBlurQualityParameter;
}
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
namespace UnityEngine::Rendering {
class IPostProcessComponent;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class MotionBlur;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::MotionBlur);
// Dependencies UnityEngine.Rendering.VolumeComponent
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.MotionBlur
class CORDL_TYPE MotionBlur : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field clamp, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_clamp, put = __cordl_internal_set_clamp)) ::UnityEngine::Rendering::ClampedFloatParameter* clamp;

  /// @brief Field intensity, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity)) ::UnityEngine::Rendering::ClampedFloatParameter* intensity;

  /// @brief Field mode, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode)) ::UnityEngine::Rendering::Universal::MotionBlurModeParameter* mode;

  /// @brief Field quality, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_quality, put = __cordl_internal_set_quality)) ::UnityEngine::Rendering::Universal::MotionBlurQualityParameter* quality;

  /// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x66c6c74, size 0x30, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x66c6ca4, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::MotionBlur* New_ctor();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_clamp() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_clamp();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_intensity() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_intensity();

  constexpr ::UnityEngine::Rendering::Universal::MotionBlurModeParameter* const& __cordl_internal_get_mode() const;

  constexpr ::UnityEngine::Rendering::Universal::MotionBlurModeParameter*& __cordl_internal_get_mode();

  constexpr ::UnityEngine::Rendering::Universal::MotionBlurQualityParameter* const& __cordl_internal_get_quality() const;

  constexpr ::UnityEngine::Rendering::Universal::MotionBlurQualityParameter*& __cordl_internal_get_quality();

  constexpr void __cordl_internal_set_clamp(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_intensity(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_mode(::UnityEngine::Rendering::Universal::MotionBlurModeParameter* value);

  constexpr void __cordl_internal_set_quality(::UnityEngine::Rendering::Universal::MotionBlurQualityParameter* value);

  /// @brief Method .ctor, addr 0x66c6cac, size 0x108, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::IPostProcessComponent* i___UnityEngine__Rendering__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MotionBlur();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MotionBlur", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MotionBlur(MotionBlur&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MotionBlur", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MotionBlur(MotionBlur const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12776 };

  /// @brief Field mode, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::MotionBlurModeParameter* ___mode;

  /// @brief Field quality, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::MotionBlurQualityParameter* ___quality;

  /// @brief Field intensity, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___intensity;

  /// @brief Field clamp, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___clamp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionBlur, ___mode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionBlur, ___quality) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionBlur, ___intensity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionBlur, ___clamp) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::MotionBlur, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::MotionBlur);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::MotionBlur*, "UnityEngine.Rendering.Universal", "MotionBlur");
