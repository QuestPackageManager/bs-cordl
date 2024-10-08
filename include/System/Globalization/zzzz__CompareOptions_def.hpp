#pragma once
// IWYU pragma private; include "System/Globalization/CompareOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompareOptions)
// Forward declare root types
namespace System::Globalization {
struct CompareOptions;
}
// Write type traits
MARK_VAL_T(::System::Globalization::CompareOptions);
// Type: System.Globalization::CompareOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// CS Name: ::System.Globalization::CompareOptions
struct CORDL_TYPE CompareOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CompareOptions_Unwrapped
  enum struct __CompareOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_IgnoreCase = static_cast<int32_t>(0x1),
    __E_IgnoreNonSpace = static_cast<int32_t>(0x2),
    __E_IgnoreSymbols = static_cast<int32_t>(0x4),
    __E_IgnoreKanaType = static_cast<int32_t>(0x8),
    __E_IgnoreWidth = static_cast<int32_t>(0x10),
    __E_OrdinalIgnoreCase = static_cast<int32_t>(0x10000000),
    __E_StringSort = static_cast<int32_t>(0x20000000),
    __E_Ordinal = static_cast<int32_t>(0x40000000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CompareOptions_Unwrapped() const noexcept {
    return static_cast<__CompareOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CompareOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CompareOptions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field IgnoreCase value: static_cast<int32_t>(0x1)
  static ::System::Globalization::CompareOptions const IgnoreCase;

  /// @brief Field IgnoreKanaType value: static_cast<int32_t>(0x8)
  static ::System::Globalization::CompareOptions const IgnoreKanaType;

  /// @brief Field IgnoreNonSpace value: static_cast<int32_t>(0x2)
  static ::System::Globalization::CompareOptions const IgnoreNonSpace;

  /// @brief Field IgnoreSymbols value: static_cast<int32_t>(0x4)
  static ::System::Globalization::CompareOptions const IgnoreSymbols;

  /// @brief Field IgnoreWidth value: static_cast<int32_t>(0x10)
  static ::System::Globalization::CompareOptions const IgnoreWidth;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Globalization::CompareOptions const None;

  /// @brief Field Ordinal value: static_cast<int32_t>(0x40000000)
  static ::System::Globalization::CompareOptions const Ordinal;

  /// @brief Field OrdinalIgnoreCase value: static_cast<int32_t>(0x10000000)
  static ::System::Globalization::CompareOptions const OrdinalIgnoreCase;

  /// @brief Field StringSort value: static_cast<int32_t>(0x20000000)
  static ::System::Globalization::CompareOptions const StringSort;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3665 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::CompareOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::CompareOptions, value__) == 0x0, "Offset mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CompareOptions, "System.Globalization", "CompareOptions");
