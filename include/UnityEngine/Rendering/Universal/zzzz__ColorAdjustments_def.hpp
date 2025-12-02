#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ColorAdjustments.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(ColorAdjustments)
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
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
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ColorAdjustments;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ColorAdjustments);
// Dependencies UnityEngine.Rendering.VolumeComponent
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ColorAdjustments
class CORDL_TYPE ColorAdjustments : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field colorFilter, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_colorFilter, put = __cordl_internal_set_colorFilter)) ::UnityEngine::Rendering::ColorParameter* colorFilter;

  /// @brief Field contrast, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_contrast, put = __cordl_internal_set_contrast)) ::UnityEngine::Rendering::ClampedFloatParameter* contrast;

  /// @brief Field hueShift, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_hueShift, put = __cordl_internal_set_hueShift)) ::UnityEngine::Rendering::ClampedFloatParameter* hueShift;

  /// @brief Field postExposure, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_postExposure, put = __cordl_internal_set_postExposure)) ::UnityEngine::Rendering::FloatParameter* postExposure;

  /// @brief Field saturation, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_saturation, put = __cordl_internal_set_saturation)) ::UnityEngine::Rendering::ClampedFloatParameter* saturation;

  /// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x665ddd8, size 0xf0, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x665dec8, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::ColorAdjustments* New_ctor();

  constexpr ::UnityEngine::Rendering::ColorParameter* const& __cordl_internal_get_colorFilter() const;

  constexpr ::UnityEngine::Rendering::ColorParameter*& __cordl_internal_get_colorFilter();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_contrast() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_contrast();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_hueShift() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_hueShift();

  constexpr ::UnityEngine::Rendering::FloatParameter* const& __cordl_internal_get_postExposure() const;

  constexpr ::UnityEngine::Rendering::FloatParameter*& __cordl_internal_get_postExposure();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_saturation() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_saturation();

  constexpr void __cordl_internal_set_colorFilter(::UnityEngine::Rendering::ColorParameter* value);

  constexpr void __cordl_internal_set_contrast(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_hueShift(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_postExposure(::UnityEngine::Rendering::FloatParameter* value);

  constexpr void __cordl_internal_set_saturation(::UnityEngine::Rendering::ClampedFloatParameter* value);

  /// @brief Method .ctor, addr 0x665ded0, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::IPostProcessComponent* i___UnityEngine__Rendering__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorAdjustments();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorAdjustments", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorAdjustments(ColorAdjustments&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorAdjustments", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorAdjustments(ColorAdjustments const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12759 };

  /// @brief Field postExposure, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::FloatParameter* ___postExposure;

  /// @brief Field contrast, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___contrast;

  /// @brief Field colorFilter, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::ColorParameter* ___colorFilter;

  /// @brief Field hueShift, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___hueShift;

  /// @brief Field saturation, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___saturation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ColorAdjustments, ___postExposure) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ColorAdjustments, ___contrast) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ColorAdjustments, ___colorFilter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ColorAdjustments, ___hueShift) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ColorAdjustments, ___saturation) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ColorAdjustments, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ColorAdjustments);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ColorAdjustments*, "UnityEngine.Rendering.Universal", "ColorAdjustments");
