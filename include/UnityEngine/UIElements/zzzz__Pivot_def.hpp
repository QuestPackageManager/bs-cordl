#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Pivot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Pivot)
// Forward declare root types
namespace UnityEngine::UIElements {
struct Pivot;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Pivot);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Pivot, "UnityEngine.UIElements", "Pivot");
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Pivot
struct CORDL_TYPE Pivot {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Pivot_Unwrapped
  enum struct __Pivot_Unwrapped : int32_t {
    __E_Center = static_cast<int32_t>(0x0),
    __E_TopLeft = static_cast<int32_t>(0x1),
    __E_TopCenter = static_cast<int32_t>(0x2),
    __E_TopRight = static_cast<int32_t>(0x3),
    __E_LeftCenter = static_cast<int32_t>(0x4),
    __E_RightCenter = static_cast<int32_t>(0x5),
    __E_BottomLeft = static_cast<int32_t>(0x6),
    __E_BottomCenter = static_cast<int32_t>(0x7),
    __E_BottomRight = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Pivot_Unwrapped() const noexcept {
    return static_cast<__Pivot_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Pivot();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr Pivot(int32_t value__) noexcept;

  /// @brief Field BottomCenter value: I32(7)
  static ::UnityEngine::UIElements::Pivot const BottomCenter;

  /// @brief Field BottomLeft value: I32(6)
  static ::UnityEngine::UIElements::Pivot const BottomLeft;

  /// @brief Field BottomRight value: I32(8)
  static ::UnityEngine::UIElements::Pivot const BottomRight;

  /// @brief Field Center value: I32(0)
  static ::UnityEngine::UIElements::Pivot const Center;

  /// @brief Field LeftCenter value: I32(4)
  static ::UnityEngine::UIElements::Pivot const LeftCenter;

  /// @brief Field RightCenter value: I32(5)
  static ::UnityEngine::UIElements::Pivot const RightCenter;

  /// @brief Field TopCenter value: I32(2)
  static ::UnityEngine::UIElements::Pivot const TopCenter;

  /// @brief Field TopLeft value: I32(1)
  static ::UnityEngine::UIElements::Pivot const TopLeft;

  /// @brief Field TopRight value: I32(3)
  static ::UnityEngine::UIElements::Pivot const TopRight;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4636 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Pivot, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Pivot) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements
