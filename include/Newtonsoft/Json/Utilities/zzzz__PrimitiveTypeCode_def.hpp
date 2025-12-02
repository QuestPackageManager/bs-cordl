#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/PrimitiveTypeCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PrimitiveTypeCode)
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
struct PrimitiveTypeCode;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Utilities::PrimitiveTypeCode);
// Dependencies
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// CS Name: Newtonsoft.Json.Utilities.PrimitiveTypeCode
struct CORDL_TYPE PrimitiveTypeCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PrimitiveTypeCode_Unwrapped
  enum struct __PrimitiveTypeCode_Unwrapped : int32_t {
    __E_Empty = static_cast<int32_t>(0x0),
    __E_Object = static_cast<int32_t>(0x1),
    __E_Char = static_cast<int32_t>(0x2),
    __E_CharNullable = static_cast<int32_t>(0x3),
    __E_Boolean = static_cast<int32_t>(0x4),
    __E_BooleanNullable = static_cast<int32_t>(0x5),
    __E_SByte = static_cast<int32_t>(0x6),
    __E_SByteNullable = static_cast<int32_t>(0x7),
    __E_Int16 = static_cast<int32_t>(0x8),
    __E_Int16Nullable = static_cast<int32_t>(0x9),
    __E_UInt16 = static_cast<int32_t>(0xa),
    __E_UInt16Nullable = static_cast<int32_t>(0xb),
    __E_Int32 = static_cast<int32_t>(0xc),
    __E_Int32Nullable = static_cast<int32_t>(0xd),
    __E_Byte = static_cast<int32_t>(0xe),
    __E_ByteNullable = static_cast<int32_t>(0xf),
    __E_UInt32 = static_cast<int32_t>(0x10),
    __E_UInt32Nullable = static_cast<int32_t>(0x11),
    __E_Int64 = static_cast<int32_t>(0x12),
    __E_Int64Nullable = static_cast<int32_t>(0x13),
    __E_UInt64 = static_cast<int32_t>(0x14),
    __E_UInt64Nullable = static_cast<int32_t>(0x15),
    __E_Single = static_cast<int32_t>(0x16),
    __E_SingleNullable = static_cast<int32_t>(0x17),
    __E_Double = static_cast<int32_t>(0x18),
    __E_DoubleNullable = static_cast<int32_t>(0x19),
    __E_DateTime = static_cast<int32_t>(0x1a),
    __E_DateTimeNullable = static_cast<int32_t>(0x1b),
    __E_DateTimeOffset = static_cast<int32_t>(0x1c),
    __E_DateTimeOffsetNullable = static_cast<int32_t>(0x1d),
    __E_Decimal = static_cast<int32_t>(0x1e),
    __E_DecimalNullable = static_cast<int32_t>(0x1f),
    __E_Guid = static_cast<int32_t>(0x20),
    __E_GuidNullable = static_cast<int32_t>(0x21),
    __E_TimeSpan = static_cast<int32_t>(0x22),
    __E_TimeSpanNullable = static_cast<int32_t>(0x23),
    __E_BigInteger = static_cast<int32_t>(0x24),
    __E_BigIntegerNullable = static_cast<int32_t>(0x25),
    __E_Uri = static_cast<int32_t>(0x26),
    __E_String = static_cast<int32_t>(0x27),
    __E_Bytes = static_cast<int32_t>(0x28),
    __E_DBNull = static_cast<int32_t>(0x29),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PrimitiveTypeCode_Unwrapped() const noexcept {
    return static_cast<__PrimitiveTypeCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimitiveTypeCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PrimitiveTypeCode(int32_t value__) noexcept;

  /// @brief Field BigInteger value: I32(36)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const BigInteger;

  /// @brief Field BigIntegerNullable value: I32(37)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const BigIntegerNullable;

  /// @brief Field Boolean value: I32(4)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Boolean;

  /// @brief Field BooleanNullable value: I32(5)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const BooleanNullable;

  /// @brief Field Byte value: I32(14)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Byte;

  /// @brief Field ByteNullable value: I32(15)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const ByteNullable;

  /// @brief Field Bytes value: I32(40)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Bytes;

  /// @brief Field Char value: I32(2)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Char;

  /// @brief Field CharNullable value: I32(3)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const CharNullable;

  /// @brief Field DBNull value: I32(41)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const DBNull;

  /// @brief Field DateTime value: I32(26)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const DateTime;

  /// @brief Field DateTimeNullable value: I32(27)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const DateTimeNullable;

  /// @brief Field DateTimeOffset value: I32(28)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const DateTimeOffset;

  /// @brief Field DateTimeOffsetNullable value: I32(29)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const DateTimeOffsetNullable;

  /// @brief Field Decimal value: I32(30)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Decimal;

  /// @brief Field DecimalNullable value: I32(31)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const DecimalNullable;

  /// @brief Field Double value: I32(24)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Double;

  /// @brief Field DoubleNullable value: I32(25)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const DoubleNullable;

  /// @brief Field Empty value: I32(0)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Empty;

  /// @brief Field Guid value: I32(32)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Guid;

  /// @brief Field GuidNullable value: I32(33)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const GuidNullable;

  /// @brief Field Int16 value: I32(8)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Int16;

  /// @brief Field Int16Nullable value: I32(9)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Int16Nullable;

  /// @brief Field Int32 value: I32(12)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Int32;

  /// @brief Field Int32Nullable value: I32(13)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Int32Nullable;

  /// @brief Field Int64 value: I32(18)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Int64;

  /// @brief Field Int64Nullable value: I32(19)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Int64Nullable;

  /// @brief Field Object value: I32(1)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Object;

  /// @brief Field SByte value: I32(6)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const SByte;

  /// @brief Field SByteNullable value: I32(7)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const SByteNullable;

  /// @brief Field Single value: I32(22)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Single;

  /// @brief Field SingleNullable value: I32(23)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const SingleNullable;

  /// @brief Field String value: I32(39)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const String;

  /// @brief Field TimeSpan value: I32(34)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const TimeSpan;

  /// @brief Field TimeSpanNullable value: I32(35)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const TimeSpanNullable;

  /// @brief Field UInt16 value: I32(10)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const UInt16;

  /// @brief Field UInt16Nullable value: I32(11)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const UInt16Nullable;

  /// @brief Field UInt32 value: I32(16)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const UInt32;

  /// @brief Field UInt32Nullable value: I32(17)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const UInt32Nullable;

  /// @brief Field UInt64 value: I32(20)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const UInt64;

  /// @brief Field UInt64Nullable value: I32(21)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const UInt64Nullable;

  /// @brief Field Uri value: I32(38)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Uri;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13349 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::PrimitiveTypeCode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::PrimitiveTypeCode, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::PrimitiveTypeCode, "Newtonsoft.Json.Utilities", "PrimitiveTypeCode");
