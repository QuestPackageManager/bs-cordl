#pragma once
// IWYU pragma private; include "System/Data/Common/SqlConvert.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SqlConvert)
namespace System::Data::Common {
struct StorageType;
}
namespace System::Data::SqlTypes {
struct SqlBinary;
}
namespace System::Data::SqlTypes {
struct SqlBoolean;
}
namespace System::Data::SqlTypes {
struct SqlByte;
}
namespace System::Data::SqlTypes {
class SqlBytes;
}
namespace System::Data::SqlTypes {
class SqlChars;
}
namespace System::Data::SqlTypes {
struct SqlDateTime;
}
namespace System::Data::SqlTypes {
struct SqlDecimal;
}
namespace System::Data::SqlTypes {
struct SqlDouble;
}
namespace System::Data::SqlTypes {
struct SqlGuid;
}
namespace System::Data::SqlTypes {
struct SqlInt16;
}
namespace System::Data::SqlTypes {
struct SqlInt32;
}
namespace System::Data::SqlTypes {
struct SqlInt64;
}
namespace System::Data::SqlTypes {
struct SqlMoney;
}
namespace System::Data::SqlTypes {
struct SqlSingle;
}
namespace System::Data::SqlTypes {
struct SqlString;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data::Common {
class SqlConvert;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::SqlConvert);
// Type: System.Data.Common::SqlConvert
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Data::Common {
// Is value type: false
// CS Name: ::System.Data.Common::SqlConvert*
class CORDL_TYPE SqlConvert : public ::System::Object {
public:
  // Declarations
  /// @brief Method ChangeType2, addr 0x2d45bd8, size 0x13b8, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType2(::System::Object* value, ::System::Data::Common::StorageType stype, ::System::Type* type, ::System::IFormatProvider* formatProvider);

  /// @brief Method ChangeTypeForDefaultValue, addr 0x2d459fc, size 0x1dc, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeTypeForDefaultValue(::System::Object* value, ::System::Type* type, ::System::IFormatProvider* formatProvider);

  /// @brief Method ChangeTypeForXML, addr 0x2d3e6a8, size 0x1c68, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeTypeForXML(::System::Object* value, ::System::Type* type);

  /// @brief Method ConvertStringToDateTimeOffset, addr 0x2d45994, size 0x68, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset ConvertStringToDateTimeOffset(::StringW value, ::System::IFormatProvider* formatProvider);

  /// @brief Method ConvertToSqlBinary, addr 0x2d4536c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBinary ConvertToSqlBinary(::System::Object* value);

  /// @brief Method ConvertToSqlBoolean, addr 0x2d44fd8, size 0x1c8, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean ConvertToSqlBoolean(::System::Object* value);

  /// @brief Method ConvertToSqlByte, addr 0x2d42898, size 0x1cc, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlByte ConvertToSqlByte(::System::Object* value);

  /// @brief Method ConvertToSqlBytes, addr 0x2d4584c, size 0x148, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBytes* ConvertToSqlBytes(::System::Object* value);

  /// @brief Method ConvertToSqlChars, addr 0x2d45704, size 0x148, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlChars* ConvertToSqlChars(::System::Object* value);

  /// @brief Method ConvertToSqlDateTime, addr 0x2d44e00, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlDateTime ConvertToSqlDateTime(::System::Object* value);

  /// @brief Method ConvertToSqlDecimal, addr 0x2d43bdc, size 0x628, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlDecimal ConvertToSqlDecimal(::System::Object* value);

  /// @brief Method ConvertToSqlDouble, addr 0x2d4351c, size 0x6c0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlDouble ConvertToSqlDouble(::System::Object* value);

  /// @brief Method ConvertToSqlGuid, addr 0x2d451a0, size 0x1cc, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlGuid ConvertToSqlGuid(::System::Object* value);

  /// @brief Method ConvertToSqlInt16, addr 0x2d42a64, size 0x284, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlInt16 ConvertToSqlInt16(::System::Object* value);

  /// @brief Method ConvertToSqlInt32, addr 0x2d42ce8, size 0x394, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlInt32 ConvertToSqlInt32(::System::Object* value);

  /// @brief Method ConvertToSqlInt64, addr 0x2d4307c, size 0x4a0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlInt64 ConvertToSqlInt64(::System::Object* value);

  /// @brief Method ConvertToSqlMoney, addr 0x2d44854, size 0x5ac, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney ConvertToSqlMoney(::System::Object* value);

  /// @brief Method ConvertToSqlSingle, addr 0x2d44204, size 0x650, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlSingle ConvertToSqlSingle(::System::Object* value);

  /// @brief Method ConvertToSqlString, addr 0x2d4552c, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlString ConvertToSqlString(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlConvert();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SqlConvert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SqlConvert(SqlConvert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SqlConvert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SqlConvert(SqlConvert const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Common::SqlConvert, 0x10>, "Size mismatch!");

} // namespace System::Data::Common
NEED_NO_BOX(::System::Data::Common::SqlConvert);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::SqlConvert*, "System.Data.Common", "SqlConvert");
