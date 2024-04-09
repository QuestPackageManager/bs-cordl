#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SqlBytesCharsState)
// Forward declare root types
namespace System::Data::SqlTypes {
struct SqlBytesCharsState;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::SqlBytesCharsState);
// Type: System.Data.SqlTypes::SqlBytesCharsState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Data::SqlTypes {
// Is value type: true
// CS Name: ::System.Data.SqlTypes::SqlBytesCharsState
struct CORDL_TYPE SqlBytesCharsState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SqlBytesCharsState_Unwrapped
  enum struct __SqlBytesCharsState_Unwrapped : int32_t {
    __E_Null = static_cast<int32_t>(0x0),
    __E_Buffer = static_cast<int32_t>(0x1),
    __E_Stream = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SqlBytesCharsState_Unwrapped() const noexcept {
    return static_cast<__SqlBytesCharsState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlBytesCharsState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SqlBytesCharsState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Buffer value: static_cast<int32_t>(0x1)
  static ::System::Data::SqlTypes::SqlBytesCharsState const Buffer;

  /// @brief Field Null value: static_cast<int32_t>(0x0)
  static ::System::Data::SqlTypes::SqlBytesCharsState const Null;

  /// @brief Field Stream value: static_cast<int32_t>(0x3)
  static ::System::Data::SqlTypes::SqlBytesCharsState const Stream;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlBytesCharsState, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlBytesCharsState, value__) == 0x0, "Offset mismatch!");

} // namespace System::Data::SqlTypes
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlBytesCharsState, "System.Data.SqlTypes", "SqlBytesCharsState");
