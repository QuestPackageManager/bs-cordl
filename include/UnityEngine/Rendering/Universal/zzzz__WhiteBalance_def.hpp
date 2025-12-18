#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/WhiteBalance.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(WhiteBalance)
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
namespace UnityEngine::Rendering {
class IPostProcessComponent;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class WhiteBalance;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WhiteBalance);
// Dependencies UnityEngine.Rendering.VolumeComponent
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.WhiteBalance
class CORDL_TYPE WhiteBalance : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field temperature, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_temperature, put = __cordl_internal_set_temperature)) ::UnityEngine::Rendering::ClampedFloatParameter* temperature;

  /// @brief Field tint, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_tint, put = __cordl_internal_set_tint)) ::UnityEngine::Rendering::ClampedFloatParameter* tint;

  /// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x66c7c50, size 0x5c, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x66c7cac, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::WhiteBalance* New_ctor();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_temperature() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_temperature();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_tint() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_tint();

  constexpr void __cordl_internal_set_temperature(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_tint(::UnityEngine::Rendering::ClampedFloatParameter* value);

  /// @brief Method .ctor, addr 0x66c7cb4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::IPostProcessComponent* i___UnityEngine__Rendering__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WhiteBalance();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WhiteBalance", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WhiteBalance(WhiteBalance&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WhiteBalance", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WhiteBalance(WhiteBalance const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12793 };

  /// @brief Field temperature, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___temperature;

  /// @brief Field tint, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___tint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WhiteBalance, ___temperature) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::WhiteBalance, ___tint) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WhiteBalance, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WhiteBalance);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WhiteBalance*, "UnityEngine.Rendering.Universal", "WhiteBalance");
