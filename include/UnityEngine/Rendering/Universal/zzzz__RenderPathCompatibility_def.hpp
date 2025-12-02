#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderPathCompatibility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderPathCompatibility)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct RenderPathCompatibility;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::RenderPathCompatibility);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.RenderPathCompatibility
struct CORDL_TYPE RenderPathCompatibility {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderPathCompatibility_Unwrapped
  enum struct __RenderPathCompatibility_Unwrapped : int32_t {
    __E_Forward = static_cast<int32_t>(0x1),
    __E_Deferred = static_cast<int32_t>(0x2),
    __E_ForwardPlus = static_cast<int32_t>(0x4),
    __E_All = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderPathCompatibility_Unwrapped() const noexcept {
    return static_cast<__RenderPathCompatibility_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPathCompatibility();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderPathCompatibility(int32_t value__) noexcept;

  /// @brief Field All value: I32(7)
  static ::UnityEngine::Rendering::Universal::RenderPathCompatibility const All;

  /// @brief Field Deferred value: I32(2)
  static ::UnityEngine::Rendering::Universal::RenderPathCompatibility const Deferred;

  /// @brief Field Forward value: I32(1)
  static ::UnityEngine::Rendering::Universal::RenderPathCompatibility const Forward;

  /// @brief Field ForwardPlus value: I32(4)
  static ::UnityEngine::Rendering::Universal::RenderPathCompatibility const ForwardPlus;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12980 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderPathCompatibility, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderPathCompatibility, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderPathCompatibility, "UnityEngine.Rendering.Universal", "RenderPathCompatibility");
