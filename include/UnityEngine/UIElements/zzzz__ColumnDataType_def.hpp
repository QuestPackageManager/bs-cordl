#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ColumnDataType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColumnDataType)
// Forward declare root types
namespace UnityEngine::UIElements {
struct ColumnDataType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::ColumnDataType);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.ColumnDataType
struct CORDL_TYPE ColumnDataType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ColumnDataType_Unwrapped
  enum struct __ColumnDataType_Unwrapped : int32_t {
    __E_Name = static_cast<int32_t>(0x0),
    __E_Title = static_cast<int32_t>(0x1),
    __E_Icon = static_cast<int32_t>(0x2),
    __E_Visibility = static_cast<int32_t>(0x3),
    __E_Width = static_cast<int32_t>(0x4),
    __E_MaxWidth = static_cast<int32_t>(0x5),
    __E_MinWidth = static_cast<int32_t>(0x6),
    __E_Stretchable = static_cast<int32_t>(0x7),
    __E_Sortable = static_cast<int32_t>(0x8),
    __E_Optional = static_cast<int32_t>(0x9),
    __E_Resizable = static_cast<int32_t>(0xa),
    __E_HeaderTemplate = static_cast<int32_t>(0xb),
    __E_CellTemplate = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ColumnDataType_Unwrapped() const noexcept {
    return static_cast<__ColumnDataType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColumnDataType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ColumnDataType(int32_t value__) noexcept;

  /// @brief Field CellTemplate value: I32(12)
  static ::UnityEngine::UIElements::ColumnDataType const CellTemplate;

  /// @brief Field HeaderTemplate value: I32(11)
  static ::UnityEngine::UIElements::ColumnDataType const HeaderTemplate;

  /// @brief Field Icon value: I32(2)
  static ::UnityEngine::UIElements::ColumnDataType const Icon;

  /// @brief Field MaxWidth value: I32(5)
  static ::UnityEngine::UIElements::ColumnDataType const MaxWidth;

  /// @brief Field MinWidth value: I32(6)
  static ::UnityEngine::UIElements::ColumnDataType const MinWidth;

  /// @brief Field Name value: I32(0)
  static ::UnityEngine::UIElements::ColumnDataType const Name;

  /// @brief Field Optional value: I32(9)
  static ::UnityEngine::UIElements::ColumnDataType const Optional;

  /// @brief Field Resizable value: I32(10)
  static ::UnityEngine::UIElements::ColumnDataType const Resizable;

  /// @brief Field Sortable value: I32(8)
  static ::UnityEngine::UIElements::ColumnDataType const Sortable;

  /// @brief Field Stretchable value: I32(7)
  static ::UnityEngine::UIElements::ColumnDataType const Stretchable;

  /// @brief Field Title value: I32(1)
  static ::UnityEngine::UIElements::ColumnDataType const Title;

  /// @brief Field Visibility value: I32(3)
  static ::UnityEngine::UIElements::ColumnDataType const Visibility;

  /// @brief Field Width value: I32(4)
  static ::UnityEngine::UIElements::ColumnDataType const Width;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5637 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ColumnDataType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ColumnDataType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ColumnDataType, "UnityEngine.UIElements", "ColumnDataType");
