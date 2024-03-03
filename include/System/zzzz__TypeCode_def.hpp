#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeCode)
// Forward declare root types
namespace System {
struct TypeCode;
}
// Write type traits
MARK_VAL_T(::System::TypeCode);
// Type: System::TypeCode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::TypeCode
struct CORDL_TYPE TypeCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TypeCode_Unwrapped
  enum struct __TypeCode_Unwrapped : int32_t {
    __E_Empty = static_cast<int32_t>(0x0),
    __E_Object = static_cast<int32_t>(0x1),
    __E_DBNull = static_cast<int32_t>(0x2),
    __E_Boolean = static_cast<int32_t>(0x3),
    __E_Char = static_cast<int32_t>(0x4),
    __E_SByte = static_cast<int32_t>(0x5),
    __E_Byte = static_cast<int32_t>(0x6),
    __E_Int16 = static_cast<int32_t>(0x7),
    __E_UInt16 = static_cast<int32_t>(0x8),
    __E_Int32 = static_cast<int32_t>(0x9),
    __E_UInt32 = static_cast<int32_t>(0xa),
    __E_Int64 = static_cast<int32_t>(0xb),
    __E_UInt64 = static_cast<int32_t>(0xc),
    __E_Single = static_cast<int32_t>(0xd),
    __E_Double = static_cast<int32_t>(0xe),
    __E_Decimal = static_cast<int32_t>(0xf),
    __E_DateTime = static_cast<int32_t>(0x10),
    __E_String = static_cast<int32_t>(0x12),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TypeCode_Unwrapped() const noexcept {
    return static_cast<__TypeCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TypeCode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Boolean value: static_cast<int32_t>(0x3)
  static ::System::TypeCode const Boolean;

  /// @brief Field Byte value: static_cast<int32_t>(0x6)
  static ::System::TypeCode const Byte;

  /// @brief Field Char value: static_cast<int32_t>(0x4)
  static ::System::TypeCode const Char;

  /// @brief Field DBNull value: static_cast<int32_t>(0x2)
  static ::System::TypeCode const DBNull;

  /// @brief Field DateTime value: static_cast<int32_t>(0x10)
  static ::System::TypeCode const DateTime;

  /// @brief Field Decimal value: static_cast<int32_t>(0xf)
  static ::System::TypeCode const Decimal;

  /// @brief Field Double value: static_cast<int32_t>(0xe)
  static ::System::TypeCode const Double;

  /// @brief Field Empty value: static_cast<int32_t>(0x0)
  static ::System::TypeCode const Empty;

  /// @brief Field Int16 value: static_cast<int32_t>(0x7)
  static ::System::TypeCode const Int16;

  /// @brief Field Int32 value: static_cast<int32_t>(0x9)
  static ::System::TypeCode const Int32;

  /// @brief Field Int64 value: static_cast<int32_t>(0xb)
  static ::System::TypeCode const Int64;

  /// @brief Field Object value: static_cast<int32_t>(0x1)
  static ::System::TypeCode const Object;

  /// @brief Field SByte value: static_cast<int32_t>(0x5)
  static ::System::TypeCode const SByte;

  /// @brief Field Single value: static_cast<int32_t>(0xd)
  static ::System::TypeCode const Single;

  /// @brief Field String value: static_cast<int32_t>(0x12)
  static ::System::TypeCode const String;

  /// @brief Field UInt16 value: static_cast<int32_t>(0x8)
  static ::System::TypeCode const UInt16;

  /// @brief Field UInt32 value: static_cast<int32_t>(0xa)
  static ::System::TypeCode const UInt32;

  /// @brief Field UInt64 value: static_cast<int32_t>(0xc)
  static ::System::TypeCode const UInt64;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TypeCode, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::TypeCode, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::TypeCode, "System", "TypeCode");
