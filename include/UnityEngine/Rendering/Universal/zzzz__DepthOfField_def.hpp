#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DepthOfField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(DepthOfField)
namespace UnityEngine::Rendering::Universal {
class DepthOfFieldModeParameter;
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
class IPostProcessComponent;
}
namespace UnityEngine::Rendering {
class MinFloatParameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DepthOfField;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DepthOfField);
// Dependencies UnityEngine.Rendering.VolumeComponent
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DepthOfField
class CORDL_TYPE DepthOfField : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field aperture, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_aperture, put = __cordl_internal_set_aperture)) ::UnityEngine::Rendering::ClampedFloatParameter* aperture;

  /// @brief Field bladeCount, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_bladeCount, put = __cordl_internal_set_bladeCount)) ::UnityEngine::Rendering::ClampedIntParameter* bladeCount;

  /// @brief Field bladeCurvature, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_bladeCurvature, put = __cordl_internal_set_bladeCurvature)) ::UnityEngine::Rendering::ClampedFloatParameter* bladeCurvature;

  /// @brief Field bladeRotation, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_bladeRotation, put = __cordl_internal_set_bladeRotation)) ::UnityEngine::Rendering::ClampedFloatParameter* bladeRotation;

  /// @brief Field focalLength, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_focalLength, put = __cordl_internal_set_focalLength)) ::UnityEngine::Rendering::ClampedFloatParameter* focalLength;

  /// @brief Field focusDistance, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_focusDistance, put = __cordl_internal_set_focusDistance)) ::UnityEngine::Rendering::MinFloatParameter* focusDistance;

  /// @brief Field gaussianEnd, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_gaussianEnd, put = __cordl_internal_set_gaussianEnd)) ::UnityEngine::Rendering::MinFloatParameter* gaussianEnd;

  /// @brief Field gaussianMaxRadius, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_gaussianMaxRadius, put = __cordl_internal_set_gaussianMaxRadius)) ::UnityEngine::Rendering::ClampedFloatParameter* gaussianMaxRadius;

  /// @brief Field gaussianStart, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_gaussianStart, put = __cordl_internal_set_gaussianStart)) ::UnityEngine::Rendering::MinFloatParameter* gaussianStart;

  /// @brief Field highQualitySampling, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_highQualitySampling, put = __cordl_internal_set_highQualitySampling)) ::UnityEngine::Rendering::BoolParameter* highQualitySampling;

  /// @brief Field mode, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode)) ::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter* mode;

  /// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x665e7e8, size 0xb8, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x665e8a0, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::DepthOfField* New_ctor();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_aperture() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_aperture();

  constexpr ::UnityEngine::Rendering::ClampedIntParameter* const& __cordl_internal_get_bladeCount() const;

  constexpr ::UnityEngine::Rendering::ClampedIntParameter*& __cordl_internal_get_bladeCount();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_bladeCurvature() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_bladeCurvature();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_bladeRotation() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_bladeRotation();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_focalLength() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_focalLength();

  constexpr ::UnityEngine::Rendering::MinFloatParameter* const& __cordl_internal_get_focusDistance() const;

  constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_focusDistance();

  constexpr ::UnityEngine::Rendering::MinFloatParameter* const& __cordl_internal_get_gaussianEnd() const;

  constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_gaussianEnd();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_gaussianMaxRadius() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_gaussianMaxRadius();

  constexpr ::UnityEngine::Rendering::MinFloatParameter* const& __cordl_internal_get_gaussianStart() const;

  constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_gaussianStart();

  constexpr ::UnityEngine::Rendering::BoolParameter* const& __cordl_internal_get_highQualitySampling() const;

  constexpr ::UnityEngine::Rendering::BoolParameter*& __cordl_internal_get_highQualitySampling();

  constexpr ::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter* const& __cordl_internal_get_mode() const;

  constexpr ::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter*& __cordl_internal_get_mode();

  constexpr void __cordl_internal_set_aperture(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_bladeCount(::UnityEngine::Rendering::ClampedIntParameter* value);

  constexpr void __cordl_internal_set_bladeCurvature(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_bladeRotation(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_focalLength(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_focusDistance(::UnityEngine::Rendering::MinFloatParameter* value);

  constexpr void __cordl_internal_set_gaussianEnd(::UnityEngine::Rendering::MinFloatParameter* value);

  constexpr void __cordl_internal_set_gaussianMaxRadius(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_gaussianStart(::UnityEngine::Rendering::MinFloatParameter* value);

  constexpr void __cordl_internal_set_highQualitySampling(::UnityEngine::Rendering::BoolParameter* value);

  constexpr void __cordl_internal_set_mode(::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter* value);

  /// @brief Method .ctor, addr 0x665e8a8, size 0x250, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::IPostProcessComponent* i___UnityEngine__Rendering__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DepthOfField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DepthOfField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DepthOfField(DepthOfField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DepthOfField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DepthOfField(DepthOfField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12763 };

  /// @brief Field mode, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter* ___mode;

  /// @brief Field gaussianStart, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::MinFloatParameter* ___gaussianStart;

  /// @brief Field gaussianEnd, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::MinFloatParameter* ___gaussianEnd;

  /// @brief Field gaussianMaxRadius, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___gaussianMaxRadius;

  /// @brief Field highQualitySampling, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::BoolParameter* ___highQualitySampling;

  /// @brief Field focusDistance, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::MinFloatParameter* ___focusDistance;

  /// @brief Field aperture, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___aperture;

  /// @brief Field focalLength, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___focalLength;

  /// @brief Field bladeCount, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedIntParameter* ___bladeCount;

  /// @brief Field bladeCurvature, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___bladeCurvature;

  /// @brief Field bladeRotation, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___bladeRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DepthOfField, ___mode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DepthOfField, ___gaussianStart) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DepthOfField, ___gaussianEnd) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DepthOfField, ___gaussianMaxRadius) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DepthOfField, ___highQualitySampling) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DepthOfField, ___focusDistance) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DepthOfField, ___aperture) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DepthOfField, ___focalLength) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DepthOfField, ___bladeCount) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DepthOfField, ___bladeCurvature) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DepthOfField, ___bladeRotation) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DepthOfField, 0x90>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DepthOfField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DepthOfField*, "UnityEngine.Rendering.Universal", "DepthOfField");
