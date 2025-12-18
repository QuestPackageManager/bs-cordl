#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PaniniProjection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(PaniniProjection)
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
namespace UnityEngine::Rendering {
class IPostProcessComponent;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class PaniniProjection;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PaniniProjection);
// Dependencies UnityEngine.Rendering.VolumeComponent
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PaniniProjection
class CORDL_TYPE PaniniProjection : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field cropToFit, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_cropToFit, put = __cordl_internal_set_cropToFit)) ::UnityEngine::Rendering::ClampedFloatParameter* cropToFit;

  /// @brief Field distance, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_distance, put = __cordl_internal_set_distance)) ::UnityEngine::Rendering::ClampedFloatParameter* distance;

  /// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x66c6e7c, size 0x30, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x66c6eac, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::PaniniProjection* New_ctor();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_cropToFit() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_cropToFit();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_distance() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_distance();

  constexpr void __cordl_internal_set_cropToFit(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_distance(::UnityEngine::Rendering::ClampedFloatParameter* value);

  /// @brief Method .ctor, addr 0x66c6eb4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::IPostProcessComponent* i___UnityEngine__Rendering__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PaniniProjection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PaniniProjection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PaniniProjection(PaniniProjection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PaniniProjection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PaniniProjection(PaniniProjection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12779 };

  /// @brief Field distance, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___distance;

  /// @brief Field cropToFit, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___cropToFit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PaniniProjection, ___distance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PaniniProjection, ___cropToFit) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PaniniProjection, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PaniniProjection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PaniniProjection*, "UnityEngine.Rendering.Universal", "PaniniProjection");
