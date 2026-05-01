#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutUnit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutUnit)
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutUnit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutUnit);
// Dependencies
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutUnit
struct CORDL_TYPE LayoutUnit {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LayoutUnit_Unwrapped
  enum struct __LayoutUnit_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_Point = static_cast<int32_t>(0x1),
    __E_Percent = static_cast<int32_t>(0x2),
    __E_Auto = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LayoutUnit_Unwrapped() const noexcept {
    return static_cast<__LayoutUnit_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutUnit();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LayoutUnit(int32_t value__) noexcept;

  /// @brief Field Auto value: I32(3)
  static ::UnityEngine::UIElements::Layout::LayoutUnit const Auto;

  /// @brief Field Percent value: I32(2)
  static ::UnityEngine::UIElements::Layout::LayoutUnit const Percent;

  /// @brief Field Point value: I32(1)
  static ::UnityEngine::UIElements::Layout::LayoutUnit const Point;

  /// @brief Field Undefined value: I32(0)
  static ::UnityEngine::UIElements::Layout::LayoutUnit const Undefined;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5436 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutUnit, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutUnit, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutUnit, "UnityEngine.UIElements.Layout", "LayoutUnit");
