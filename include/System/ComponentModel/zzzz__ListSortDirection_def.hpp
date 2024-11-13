#pragma once
// IWYU pragma private; include "System/ComponentModel/ListSortDirection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ListSortDirection)
// Forward declare root types
namespace System::ComponentModel {
struct ListSortDirection;
}
// Write type traits
MARK_VAL_T(::System::ComponentModel::ListSortDirection);
// Type: System.ComponentModel::ListSortDirection
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: true
// CS Name: ::System.ComponentModel::ListSortDirection
struct CORDL_TYPE ListSortDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ListSortDirection_Unwrapped
  enum struct __ListSortDirection_Unwrapped : int32_t {
    __E_Ascending = static_cast<int32_t>(0x0),
    __E_Descending = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ListSortDirection_Unwrapped() const noexcept {
    return static_cast<__ListSortDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ListSortDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ListSortDirection(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Ascending value: static_cast<int32_t>(0x0)
  static ::System::ComponentModel::ListSortDirection const Ascending;

  /// @brief Field Descending value: static_cast<int32_t>(0x1)
  static ::System::ComponentModel::ListSortDirection const Descending;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9375 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ListSortDirection, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::ListSortDirection, value__) == 0x0, "Offset mismatch!");

} // namespace System::ComponentModel
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ListSortDirection, "System.ComponentModel", "ListSortDirection");
