#pragma once
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
// Type: Newtonsoft.Json.Utilities::PrimitiveTypeCode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11870))
// CS Name: ::Newtonsoft.Json.Utilities::PrimitiveTypeCode
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PrimitiveTypeCode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimitiveTypeCode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Empty value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Empty;

  /// @brief Field Object value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Object;

  /// @brief Field Char value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Char;

  /// @brief Field CharNullable value: static_cast<int32_t>(0x3)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const CharNullable;

  /// @brief Field Boolean value: static_cast<int32_t>(0x4)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Boolean;

  /// @brief Field BooleanNullable value: static_cast<int32_t>(0x5)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const BooleanNullable;

  /// @brief Field SByte value: static_cast<int32_t>(0x6)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const SByte;

  /// @brief Field SByteNullable value: static_cast<int32_t>(0x7)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const SByteNullable;

  /// @brief Field Int16 value: static_cast<int32_t>(0x8)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Int16;

  /// @brief Field Int16Nullable value: static_cast<int32_t>(0x9)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Int16Nullable;

  /// @brief Field UInt16 value: static_cast<int32_t>(0xa)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const UInt16;

  /// @brief Field UInt16Nullable value: static_cast<int32_t>(0xb)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const UInt16Nullable;

  /// @brief Field Int32 value: static_cast<int32_t>(0xc)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Int32;

  /// @brief Field Int32Nullable value: static_cast<int32_t>(0xd)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Int32Nullable;

  /// @brief Field Byte value: static_cast<int32_t>(0xe)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Byte;

  /// @brief Field ByteNullable value: static_cast<int32_t>(0xf)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const ByteNullable;

  /// @brief Field UInt32 value: static_cast<int32_t>(0x10)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const UInt32;

  /// @brief Field UInt32Nullable value: static_cast<int32_t>(0x11)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const UInt32Nullable;

  /// @brief Field Int64 value: static_cast<int32_t>(0x12)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Int64;

  /// @brief Field Int64Nullable value: static_cast<int32_t>(0x13)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Int64Nullable;

  /// @brief Field UInt64 value: static_cast<int32_t>(0x14)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const UInt64;

  /// @brief Field UInt64Nullable value: static_cast<int32_t>(0x15)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const UInt64Nullable;

  /// @brief Field Single value: static_cast<int32_t>(0x16)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Single;

  /// @brief Field SingleNullable value: static_cast<int32_t>(0x17)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const SingleNullable;

  /// @brief Field Double value: static_cast<int32_t>(0x18)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Double;

  /// @brief Field DoubleNullable value: static_cast<int32_t>(0x19)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const DoubleNullable;

  /// @brief Field DateTime value: static_cast<int32_t>(0x1a)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const DateTime;

  /// @brief Field DateTimeNullable value: static_cast<int32_t>(0x1b)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const DateTimeNullable;

  /// @brief Field DateTimeOffset value: static_cast<int32_t>(0x1c)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const DateTimeOffset;

  /// @brief Field DateTimeOffsetNullable value: static_cast<int32_t>(0x1d)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const DateTimeOffsetNullable;

  /// @brief Field Decimal value: static_cast<int32_t>(0x1e)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Decimal;

  /// @brief Field DecimalNullable value: static_cast<int32_t>(0x1f)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const DecimalNullable;

  /// @brief Field Guid value: static_cast<int32_t>(0x20)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Guid;

  /// @brief Field GuidNullable value: static_cast<int32_t>(0x21)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const GuidNullable;

  /// @brief Field TimeSpan value: static_cast<int32_t>(0x22)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const TimeSpan;

  /// @brief Field TimeSpanNullable value: static_cast<int32_t>(0x23)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const TimeSpanNullable;

  /// @brief Field BigInteger value: static_cast<int32_t>(0x24)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const BigInteger;

  /// @brief Field BigIntegerNullable value: static_cast<int32_t>(0x25)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const BigIntegerNullable;

  /// @brief Field Uri value: static_cast<int32_t>(0x26)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Uri;

  /// @brief Field String value: static_cast<int32_t>(0x27)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const String;

  /// @brief Field Bytes value: static_cast<int32_t>(0x28)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const Bytes;

  /// @brief Field DBNull value: static_cast<int32_t>(0x29)
  static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const DBNull;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::PrimitiveTypeCode, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::PrimitiveTypeCode, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::PrimitiveTypeCode, "Newtonsoft.Json.Utilities", "PrimitiveTypeCode");
