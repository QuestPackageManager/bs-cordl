#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternalPrimitiveTypeE)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE);
// Dependencies
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// CS Name: System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE
struct CORDL_TYPE InternalPrimitiveTypeE {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InternalPrimitiveTypeE_Unwrapped
  enum struct __InternalPrimitiveTypeE_Unwrapped : int32_t {
    __E_Invalid = static_cast<int32_t>(0x0),
    __E_Boolean = static_cast<int32_t>(0x1),
    __E_Byte = static_cast<int32_t>(0x2),
    __E_Char = static_cast<int32_t>(0x3),
    __E_Currency = static_cast<int32_t>(0x4),
    __E_Decimal = static_cast<int32_t>(0x5),
    __E_Double = static_cast<int32_t>(0x6),
    __E_Int16 = static_cast<int32_t>(0x7),
    __E_Int32 = static_cast<int32_t>(0x8),
    __E_Int64 = static_cast<int32_t>(0x9),
    __E_SByte = static_cast<int32_t>(0xa),
    __E_Single = static_cast<int32_t>(0xb),
    __E_TimeSpan = static_cast<int32_t>(0xc),
    __E_DateTime = static_cast<int32_t>(0xd),
    __E_UInt16 = static_cast<int32_t>(0xe),
    __E_UInt32 = static_cast<int32_t>(0xf),
    __E_UInt64 = static_cast<int32_t>(0x10),
    __E_Null = static_cast<int32_t>(0x11),
    __E_String = static_cast<int32_t>(0x12),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InternalPrimitiveTypeE_Unwrapped() const noexcept {
    return static_cast<__InternalPrimitiveTypeE_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalPrimitiveTypeE();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InternalPrimitiveTypeE(int32_t value__) noexcept;

  /// @brief Field Boolean value: I32(1)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Boolean;

  /// @brief Field Byte value: I32(2)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Byte;

  /// @brief Field Char value: I32(3)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Char;

  /// @brief Field Currency value: I32(4)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Currency;

  /// @brief Field DateTime value: I32(13)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const DateTime;

  /// @brief Field Decimal value: I32(5)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Decimal;

  /// @brief Field Double value: I32(6)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Double;

  /// @brief Field Int16 value: I32(7)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Int16;

  /// @brief Field Int32 value: I32(8)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Int32;

  /// @brief Field Int64 value: I32(9)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Int64;

  /// @brief Field Invalid value: I32(0)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Invalid;

  /// @brief Field Null value: I32(17)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Null;

  /// @brief Field SByte value: I32(10)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const SByte;

  /// @brief Field Single value: I32(11)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Single;

  /// @brief Field String value: I32(18)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const String;

  /// @brief Field TimeSpan value: I32(12)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const TimeSpan;

  /// @brief Field UInt16 value: I32(14)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const UInt16;

  /// @brief Field UInt32 value: I32(15)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const UInt32;

  /// @brief Field UInt64 value: I32(16)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const UInt64;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3253 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, 0x4>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, "System.Runtime.Serialization.Formatters.Binary", "InternalPrimitiveTypeE");
