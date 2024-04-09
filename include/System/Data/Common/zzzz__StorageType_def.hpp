#pragma once
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
// Type: System.Data.Common::StorageType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Data::Common {
// Is value type: true
// CS Name: ::System.Data.Common::StorageType
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BigInteger value: static_cast<int32_t>(0x18)
  static ::System::Data::Common::StorageType const BigInteger;

  /// @brief Field Boolean value: static_cast<int32_t>(0x3)
  static ::System::Data::Common::StorageType const Boolean;

  /// @brief Field Byte value: static_cast<int32_t>(0x6)
  static ::System::Data::Common::StorageType const Byte;

  /// @brief Field ByteArray value: static_cast<int32_t>(0x14)
  static ::System::Data::Common::StorageType const ByteArray;

  /// @brief Field Char value: static_cast<int32_t>(0x4)
  static ::System::Data::Common::StorageType const Char;

  /// @brief Field CharArray value: static_cast<int32_t>(0x15)
  static ::System::Data::Common::StorageType const CharArray;

  /// @brief Field DBNull value: static_cast<int32_t>(0x2)
  static ::System::Data::Common::StorageType const DBNull;

  /// @brief Field DateTime value: static_cast<int32_t>(0x10)
  static ::System::Data::Common::StorageType const DateTime;

  /// @brief Field DateTimeOffset value: static_cast<int32_t>(0x17)
  static ::System::Data::Common::StorageType const DateTimeOffset;

  /// @brief Field Decimal value: static_cast<int32_t>(0xf)
  static ::System::Data::Common::StorageType const Decimal;

  /// @brief Field Double value: static_cast<int32_t>(0xe)
  static ::System::Data::Common::StorageType const Double;

  /// @brief Field Empty value: static_cast<int32_t>(0x0)
  static ::System::Data::Common::StorageType const Empty;

  /// @brief Field Guid value: static_cast<int32_t>(0x13)
  static ::System::Data::Common::StorageType const Guid;

  /// @brief Field Int16 value: static_cast<int32_t>(0x7)
  static ::System::Data::Common::StorageType const Int16;

  /// @brief Field Int32 value: static_cast<int32_t>(0x9)
  static ::System::Data::Common::StorageType const Int32;

  /// @brief Field Int64 value: static_cast<int32_t>(0xb)
  static ::System::Data::Common::StorageType const Int64;

  /// @brief Field Object value: static_cast<int32_t>(0x1)
  static ::System::Data::Common::StorageType const Object;

  /// @brief Field SByte value: static_cast<int32_t>(0x5)
  static ::System::Data::Common::StorageType const SByte;

  /// @brief Field Single value: static_cast<int32_t>(0xd)
  static ::System::Data::Common::StorageType const Single;

  /// @brief Field SqlBinary value: static_cast<int32_t>(0x1a)
  static ::System::Data::Common::StorageType const SqlBinary;

  /// @brief Field SqlBoolean value: static_cast<int32_t>(0x1b)
  static ::System::Data::Common::StorageType const SqlBoolean;

  /// @brief Field SqlByte value: static_cast<int32_t>(0x1c)
  static ::System::Data::Common::StorageType const SqlByte;

  /// @brief Field SqlBytes value: static_cast<int32_t>(0x1d)
  static ::System::Data::Common::StorageType const SqlBytes;

  /// @brief Field SqlChars value: static_cast<int32_t>(0x1e)
  static ::System::Data::Common::StorageType const SqlChars;

  /// @brief Field SqlDateTime value: static_cast<int32_t>(0x1f)
  static ::System::Data::Common::StorageType const SqlDateTime;

  /// @brief Field SqlDecimal value: static_cast<int32_t>(0x20)
  static ::System::Data::Common::StorageType const SqlDecimal;

  /// @brief Field SqlDouble value: static_cast<int32_t>(0x21)
  static ::System::Data::Common::StorageType const SqlDouble;

  /// @brief Field SqlGuid value: static_cast<int32_t>(0x22)
  static ::System::Data::Common::StorageType const SqlGuid;

  /// @brief Field SqlInt16 value: static_cast<int32_t>(0x23)
  static ::System::Data::Common::StorageType const SqlInt16;

  /// @brief Field SqlInt32 value: static_cast<int32_t>(0x24)
  static ::System::Data::Common::StorageType const SqlInt32;

  /// @brief Field SqlInt64 value: static_cast<int32_t>(0x25)
  static ::System::Data::Common::StorageType const SqlInt64;

  /// @brief Field SqlMoney value: static_cast<int32_t>(0x26)
  static ::System::Data::Common::StorageType const SqlMoney;

  /// @brief Field SqlSingle value: static_cast<int32_t>(0x27)
  static ::System::Data::Common::StorageType const SqlSingle;

  /// @brief Field SqlString value: static_cast<int32_t>(0x28)
  static ::System::Data::Common::StorageType const SqlString;

  /// @brief Field String value: static_cast<int32_t>(0x12)
  static ::System::Data::Common::StorageType const String;

  /// @brief Field TimeSpan value: static_cast<int32_t>(0x11)
  static ::System::Data::Common::StorageType const TimeSpan;

  /// @brief Field Type value: static_cast<int32_t>(0x16)
  static ::System::Data::Common::StorageType const Type;

  /// @brief Field UInt16 value: static_cast<int32_t>(0x8)
  static ::System::Data::Common::StorageType const UInt16;

  /// @brief Field UInt32 value: static_cast<int32_t>(0xa)
  static ::System::Data::Common::StorageType const UInt32;

  /// @brief Field UInt64 value: static_cast<int32_t>(0xc)
  static ::System::Data::Common::StorageType const UInt64;

  /// @brief Field Uri value: static_cast<int32_t>(0x19)
  static ::System::Data::Common::StorageType const Uri;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Common::StorageType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Data::Common::StorageType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Data::Common
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::StorageType, "System.Data.Common", "StorageType");
