#pragma once
// IWYU pragma private; include "System/Data/Common/StorageType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StorageType)
// Forward declare root types
namespace System::Data::Common {
struct StorageType;
}
// Write type traits
MARK_VAL_T(::System::Data::Common::StorageType);
// Dependencies
namespace System::Data::Common {
// Is value type: true
// CS Name: System.Data.Common.StorageType
struct CORDL_TYPE StorageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StorageType_Unwrapped
  enum struct __StorageType_Unwrapped : int32_t {
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
    __E_TimeSpan = static_cast<int32_t>(0x11),
    __E_String = static_cast<int32_t>(0x12),
    __E_Guid = static_cast<int32_t>(0x13),
    __E_ByteArray = static_cast<int32_t>(0x14),
    __E_CharArray = static_cast<int32_t>(0x15),
    __E_Type = static_cast<int32_t>(0x16),
    __E_DateTimeOffset = static_cast<int32_t>(0x17),
    __E_BigInteger = static_cast<int32_t>(0x18),
    __E_Uri = static_cast<int32_t>(0x19),
    __E_SqlBinary = static_cast<int32_t>(0x1a),
    __E_SqlBoolean = static_cast<int32_t>(0x1b),
    __E_SqlByte = static_cast<int32_t>(0x1c),
    __E_SqlBytes = static_cast<int32_t>(0x1d),
    __E_SqlChars = static_cast<int32_t>(0x1e),
    __E_SqlDateTime = static_cast<int32_t>(0x1f),
    __E_SqlDecimal = static_cast<int32_t>(0x20),
    __E_SqlDouble = static_cast<int32_t>(0x21),
    __E_SqlGuid = static_cast<int32_t>(0x22),
    __E_SqlInt16 = static_cast<int32_t>(0x23),
    __E_SqlInt32 = static_cast<int32_t>(0x24),
    __E_SqlInt64 = static_cast<int32_t>(0x25),
    __E_SqlMoney = static_cast<int32_t>(0x26),
    __E_SqlSingle = static_cast<int32_t>(0x27),
    __E_SqlString = static_cast<int32_t>(0x28),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StorageType_Unwrapped() const noexcept {
    return static_cast<__StorageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StorageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StorageType(int32_t value__) noexcept;

  /// @brief Field BigInteger value: I32(24)
  static ::System::Data::Common::StorageType const BigInteger;

  /// @brief Field Boolean value: I32(3)
  static ::System::Data::Common::StorageType const Boolean;

  /// @brief Field Byte value: I32(6)
  static ::System::Data::Common::StorageType const Byte;

  /// @brief Field ByteArray value: I32(20)
  static ::System::Data::Common::StorageType const ByteArray;

  /// @brief Field Char value: I32(4)
  static ::System::Data::Common::StorageType const Char;

  /// @brief Field CharArray value: I32(21)
  static ::System::Data::Common::StorageType const CharArray;

  /// @brief Field DBNull value: I32(2)
  static ::System::Data::Common::StorageType const DBNull;

  /// @brief Field DateTime value: I32(16)
  static ::System::Data::Common::StorageType const DateTime;

  /// @brief Field DateTimeOffset value: I32(23)
  static ::System::Data::Common::StorageType const DateTimeOffset;

  /// @brief Field Decimal value: I32(15)
  static ::System::Data::Common::StorageType const Decimal;

  /// @brief Field Double value: I32(14)
  static ::System::Data::Common::StorageType const Double;

  /// @brief Field Empty value: I32(0)
  static ::System::Data::Common::StorageType const Empty;

  /// @brief Field Guid value: I32(19)
  static ::System::Data::Common::StorageType const Guid;

  /// @brief Field Int16 value: I32(7)
  static ::System::Data::Common::StorageType const Int16;

  /// @brief Field Int32 value: I32(9)
  static ::System::Data::Common::StorageType const Int32;

  /// @brief Field Int64 value: I32(11)
  static ::System::Data::Common::StorageType const Int64;

  /// @brief Field Object value: I32(1)
  static ::System::Data::Common::StorageType const Object;

  /// @brief Field SByte value: I32(5)
  static ::System::Data::Common::StorageType const SByte;

  /// @brief Field Single value: I32(13)
  static ::System::Data::Common::StorageType const Single;

  /// @brief Field SqlBinary value: I32(26)
  static ::System::Data::Common::StorageType const SqlBinary;

  /// @brief Field SqlBoolean value: I32(27)
  static ::System::Data::Common::StorageType const SqlBoolean;

  /// @brief Field SqlByte value: I32(28)
  static ::System::Data::Common::StorageType const SqlByte;

  /// @brief Field SqlBytes value: I32(29)
  static ::System::Data::Common::StorageType const SqlBytes;

  /// @brief Field SqlChars value: I32(30)
  static ::System::Data::Common::StorageType const SqlChars;

  /// @brief Field SqlDateTime value: I32(31)
  static ::System::Data::Common::StorageType const SqlDateTime;

  /// @brief Field SqlDecimal value: I32(32)
  static ::System::Data::Common::StorageType const SqlDecimal;

  /// @brief Field SqlDouble value: I32(33)
  static ::System::Data::Common::StorageType const SqlDouble;

  /// @brief Field SqlGuid value: I32(34)
  static ::System::Data::Common::StorageType const SqlGuid;

  /// @brief Field SqlInt16 value: I32(35)
  static ::System::Data::Common::StorageType const SqlInt16;

  /// @brief Field SqlInt32 value: I32(36)
  static ::System::Data::Common::StorageType const SqlInt32;

  /// @brief Field SqlInt64 value: I32(37)
  static ::System::Data::Common::StorageType const SqlInt64;

  /// @brief Field SqlMoney value: I32(38)
  static ::System::Data::Common::StorageType const SqlMoney;

  /// @brief Field SqlSingle value: I32(39)
  static ::System::Data::Common::StorageType const SqlSingle;

  /// @brief Field SqlString value: I32(40)
  static ::System::Data::Common::StorageType const SqlString;

  /// @brief Field String value: I32(18)
  static ::System::Data::Common::StorageType const String;

  /// @brief Field TimeSpan value: I32(17)
  static ::System::Data::Common::StorageType const TimeSpan;

  /// @brief Field Type value: I32(22)
  static ::System::Data::Common::StorageType const Type;

  /// @brief Field UInt16 value: I32(8)
  static ::System::Data::Common::StorageType const UInt16;

  /// @brief Field UInt32 value: I32(10)
  static ::System::Data::Common::StorageType const UInt32;

  /// @brief Field UInt64 value: I32(12)
  static ::System::Data::Common::StorageType const UInt64;

  /// @brief Field Uri value: I32(25)
  static ::System::Data::Common::StorageType const Uri;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11527 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Common::StorageType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::Common::StorageType, 0x4>, "Size mismatch!");

} // namespace System::Data::Common
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::StorageType, "System.Data.Common", "StorageType");
