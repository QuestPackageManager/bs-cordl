#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ChromaticAberration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(ChromaticAberration)
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
namespace UnityEngine::Rendering {
class IPostProcessComponent;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ChromaticAberration;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ChromaticAberration);
// Dependencies UnityEngine.Rendering.VolumeComponent
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ChromaticAberration
class CORDL_TYPE ChromaticAberration : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field intensity, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity)) ::UnityEngine::Rendering::ClampedFloatParameter* intensity;

  /// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x665dd2c, size 0x30, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x665dd5c, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::ChromaticAberration* New_ctor();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_intensity() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_intensity();

  constexpr void __cordl_internal_set_intensity(::UnityEngine::Rendering::ClampedFloatParameter* value);

  /// @brief Method .ctor, addr 0x665dd64, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::IPostProcessComponent* i___UnityEngine__Rendering__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChromaticAberration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChromaticAberration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChromaticAberration(ChromaticAberration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChromaticAberration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChromaticAberration(ChromaticAberration const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12758 };

  /// @brief Field intensity, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___intensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ChromaticAberration, ___intensity) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ChromaticAberration, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ChromaticAberration);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ChromaticAberration*, "UnityEngine.Rendering.Universal", "ChromaticAberration");
