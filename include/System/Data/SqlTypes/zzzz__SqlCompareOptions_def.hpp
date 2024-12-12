#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlCompareOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SqlCompareOptions)
// Forward declare root types
namespace System::Data::SqlTypes {
struct SqlCompareOptions;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::SqlCompareOptions);
// Dependencies
namespace System::Data::SqlTypes {
// Is value type: true
// CS Name: System.Data.SqlTypes.SqlCompareOptions
struct CORDL_TYPE SqlCompareOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SqlCompareOptions_Unwrapped
  enum struct __SqlCompareOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_IgnoreCase = static_cast<int32_t>(0x1),
    __E_IgnoreNonSpace = static_cast<int32_t>(0x2),
    __E_IgnoreKanaType = static_cast<int32_t>(0x8),
    __E_IgnoreWidth = static_cast<int32_t>(0x10),
    __E_BinarySort = static_cast<int32_t>(0x8000),
    __E_BinarySort2 = static_cast<int32_t>(0x4000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SqlCompareOptions_Unwrapped() const noexcept {
    return static_cast<__SqlCompareOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlCompareOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SqlCompareOptions(int32_t value__) noexcept;

  /// @brief Field BinarySort value: I32(32768)
  static ::System::Data::SqlTypes::SqlCompareOptions const BinarySort;

  /// @brief Field BinarySort2 value: I32(16384)
  static ::System::Data::SqlTypes::SqlCompareOptions const BinarySort2;

  /// @brief Field IgnoreCase value: I32(1)
  static ::System::Data::SqlTypes::SqlCompareOptions const IgnoreCase;

  /// @brief Field IgnoreKanaType value: I32(8)
  static ::System::Data::SqlTypes::SqlCompareOptions const IgnoreKanaType;

  /// @brief Field IgnoreNonSpace value: I32(2)
  static ::System::Data::SqlTypes::SqlCompareOptions const IgnoreNonSpace;

  /// @brief Field IgnoreWidth value: I32(16)
  static ::System::Data::SqlTypes::SqlCompareOptions const IgnoreWidth;

  /// @brief Field None value: I32(0)
  static ::System::Data::SqlTypes::SqlCompareOptions const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11507 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::SqlTypes::SqlCompareOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlCompareOptions, 0x4>, "Size mismatch!");

} // namespace System::Data::SqlTypes
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlCompareOptions, "System.Data.SqlTypes", "SqlCompareOptions");
