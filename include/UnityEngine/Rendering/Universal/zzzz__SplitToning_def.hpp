#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/SplitToning.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(SplitToning)
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
namespace UnityEngine::Rendering {
class ColorParameter;
}
namespace UnityEngine::Rendering {
class IPostProcessComponent;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class SplitToning;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::SplitToning);
// Dependencies UnityEngine.Rendering.VolumeComponent
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.SplitToning
class CORDL_TYPE SplitToning : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field balance, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_balance, put = __cordl_internal_set_balance)) ::UnityEngine::Rendering::ClampedFloatParameter* balance;

  /// @brief Field highlights, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_highlights, put = __cordl_internal_set_highlights)) ::UnityEngine::Rendering::ColorParameter* highlights;

  /// @brief Field shadows, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_shadows, put = __cordl_internal_set_shadows)) ::UnityEngine::Rendering::ColorParameter* shadows;

  /// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x66c75cc, size 0x8c, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x66c7658, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::SplitToning* New_ctor();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_balance() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_balance();

  constexpr ::UnityEngine::Rendering::ColorParameter* const& __cordl_internal_get_highlights() const;

  constexpr ::UnityEngine::Rendering::ColorParameter*& __cordl_internal_get_highlights();

  constexpr ::UnityEngine::Rendering::ColorParameter* const& __cordl_internal_get_shadows() const;

  constexpr ::UnityEngine::Rendering::ColorParameter*& __cordl_internal_get_shadows();

  constexpr void __cordl_internal_set_balance(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_highlights(::UnityEngine::Rendering::ColorParameter* value);

  constexpr void __cordl_internal_set_shadows(::UnityEngine::Rendering::ColorParameter* value);

  /// @brief Method .ctor, addr 0x66c7660, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::IPostProcessComponent* i___UnityEngine__Rendering__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SplitToning();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SplitToning", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SplitToning(SplitToning&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SplitToning", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SplitToning(SplitToning const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12784 };

  /// @brief Field shadows, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::ColorParameter* ___shadows;

  /// @brief Field highlights, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::ColorParameter* ___highlights;

  /// @brief Field balance, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___balance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::SplitToning, ___shadows) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SplitToning, ___highlights) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SplitToning, ___balance) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::SplitToning, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::SplitToning);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::SplitToning*, "UnityEngine.Rendering.Universal", "SplitToning");
