#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ScrollerVisibility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScrollerVisibility)
// Forward declare root types
namespace UnityEngine::UIElements {
struct ScrollerVisibility;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::ScrollerVisibility);
// Type: UnityEngine.UIElements::ScrollerVisibility
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::ScrollerVisibility
struct CORDL_TYPE ScrollerVisibility {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScrollerVisibility_Unwrapped
  enum struct __ScrollerVisibility_Unwrapped : int32_t {
    __E_Auto = static_cast<int32_t>(0x0),
    __E_AlwaysVisible = static_cast<int32_t>(0x1),
    __E_Hidden = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScrollerVisibility_Unwrapped() const noexcept {
    return static_cast<__ScrollerVisibility_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollerVisibility();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScrollerVisibility(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AlwaysVisible value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::ScrollerVisibility const AlwaysVisible;

  /// @brief Field Auto value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::ScrollerVisibility const Auto;

  /// @brief Field Hidden value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::ScrollerVisibility const Hidden;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5655 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ScrollerVisibility, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollerVisibility, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ScrollerVisibility, "UnityEngine.UIElements", "ScrollerVisibility");
