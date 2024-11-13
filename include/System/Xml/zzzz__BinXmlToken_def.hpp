#pragma once
// IWYU pragma private; include "System/Xml/BinXmlToken.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BinXmlToken)
// Forward declare root types
namespace System::Xml {
struct BinXmlToken;
}
// Write type traits
MARK_VAL_T(::System::Xml::BinXmlToken);
// Type: System.Xml::BinXmlToken
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// CS Name: ::System.Xml::BinXmlToken
struct CORDL_TYPE BinXmlToken {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BinXmlToken_Unwrapped
  enum struct __BinXmlToken_Unwrapped : int32_t {
    __E_Error = static_cast<int32_t>(0x0),
    __E_NotImpl = static_cast<int32_t>(0xfffffffe),
    __E_EOF = static_cast<int32_t>(0xffffffff),
    __E_XmlDecl = static_cast<int32_t>(0xfe),
    __E_Encoding = static_cast<int32_t>(0xfd),
    __E_DocType = static_cast<int32_t>(0xfc),
    __E_System = static_cast<int32_t>(0xfb),
    __E_Public = static_cast<int32_t>(0xfa),
    __E_Subset = static_cast<int32_t>(0xf9),
    __E_Element = static_cast<int32_t>(0xf8),
    __E_EndElem = static_cast<int32_t>(0xf7),
    __E_Attr = static_cast<int32_t>(0xf6),
    __E_EndAttrs = static_cast<int32_t>(0xf5),
    __E_PI = static_cast<int32_t>(0xf4),
    __E_Comment = static_cast<int32_t>(0xf3),
    __E_CData = static_cast<int32_t>(0xf2),
    __E_EndCData = static_cast<int32_t>(0xf1),
    __E_Name = static_cast<int32_t>(0xf0),
    __E_QName = static_cast<int32_t>(0xef),
    __E_XmlText = static_cast<int32_t>(0xed),
    __E_Nest = static_cast<int32_t>(0xec),
    __E_EndNest = static_cast<int32_t>(0xeb),
    __E_Extn = static_cast<int32_t>(0xea),
    __E_NmFlush = static_cast<int32_t>(0xe9),
    __E_SQL_BIT = static_cast<int32_t>(0x6),
    __E_SQL_TINYINT = static_cast<int32_t>(0x7),
    __E_SQL_SMALLINT = static_cast<int32_t>(0x1),
    __E_SQL_INT = static_cast<int32_t>(0x2),
    __E_SQL_BIGINT = static_cast<int32_t>(0x8),
    __E_SQL_REAL = static_cast<int32_t>(0x3),
    __E_SQL_FLOAT = static_cast<int32_t>(0x4),
    __E_SQL_MONEY = static_cast<int32_t>(0x5),
    __E_SQL_SMALLMONEY = static_cast<int32_t>(0x14),
    __E_SQL_DATETIME = static_cast<int32_t>(0x12),
    __E_SQL_SMALLDATETIME = static_cast<int32_t>(0x13),
    __E_SQL_DECIMAL = static_cast<int32_t>(0xa),
    __E_SQL_NUMERIC = static_cast<int32_t>(0xb),
    __E_SQL_UUID = static_cast<int32_t>(0x9),
    __E_SQL_VARBINARY = static_cast<int32_t>(0xf),
    __E_SQL_BINARY = static_cast<int32_t>(0xc),
    __E_SQL_IMAGE = static_cast<int32_t>(0x17),
    __E_SQL_CHAR = static_cast<int32_t>(0xd),
    __E_SQL_VARCHAR = static_cast<int32_t>(0x10),
    __E_SQL_TEXT = static_cast<int32_t>(0x16),
    __E_SQL_NVARCHAR = static_cast<int32_t>(0x11),
    __E_SQL_NCHAR = static_cast<int32_t>(0xe),
    __E_SQL_NTEXT = static_cast<int32_t>(0x18),
    __E_SQL_UDT = static_cast<int32_t>(0x1b),
    __E_XSD_KATMAI_DATE = static_cast<int32_t>(0x7f),
    __E_XSD_KATMAI_DATETIME = static_cast<int32_t>(0x7e),
    __E_XSD_KATMAI_TIME = static_cast<int32_t>(0x7d),
    __E_XSD_KATMAI_DATEOFFSET = static_cast<int32_t>(0x7c),
    __E_XSD_KATMAI_DATETIMEOFFSET = static_cast<int32_t>(0x7b),
    __E_XSD_KATMAI_TIMEOFFSET = static_cast<int32_t>(0x7a),
    __E_XSD_BOOLEAN = static_cast<int32_t>(0x86),
    __E_XSD_TIME = static_cast<int32_t>(0x81),
    __E_XSD_DATETIME = static_cast<int32_t>(0x82),
    __E_XSD_DATE = static_cast<int32_t>(0x83),
    __E_XSD_BINHEX = static_cast<int32_t>(0x84),
    __E_XSD_BASE64 = static_cast<int32_t>(0x85),
    __E_XSD_DECIMAL = static_cast<int32_t>(0x87),
    __E_XSD_BYTE = static_cast<int32_t>(0x88),
    __E_XSD_UNSIGNEDSHORT = static_cast<int32_t>(0x89),
    __E_XSD_UNSIGNEDINT = static_cast<int32_t>(0x8a),
    __E_XSD_UNSIGNEDLONG = static_cast<int32_t>(0x8b),
    __E_XSD_QNAME = static_cast<int32_t>(0x8c),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BinXmlToken_Unwrapped() const noexcept {
    return static_cast<__BinXmlToken_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BinXmlToken();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BinXmlToken(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Attr value: static_cast<int32_t>(0xf6)
  static ::System::Xml::BinXmlToken const Attr;

  /// @brief Field CData value: static_cast<int32_t>(0xf2)
  static ::System::Xml::BinXmlToken const CData;

  /// @brief Field Comment value: static_cast<int32_t>(0xf3)
  static ::System::Xml::BinXmlToken const Comment;

  /// @brief Field DocType value: static_cast<int32_t>(0xfc)
  static ::System::Xml::BinXmlToken const DocType;

  /// @brief Field Element value: static_cast<int32_t>(0xf8)
  static ::System::Xml::BinXmlToken const Element;

  /// @brief Field Encoding value: static_cast<int32_t>(0xfd)
  static ::System::Xml::BinXmlToken const Encoding;

  /// @brief Field EndAttrs value: static_cast<int32_t>(0xf5)
  static ::System::Xml::BinXmlToken const EndAttrs;

  /// @brief Field EndCData value: static_cast<int32_t>(0xf1)
  static ::System::Xml::BinXmlToken const EndCData;

  /// @brief Field EndElem value: static_cast<int32_t>(0xf7)
  static ::System::Xml::BinXmlToken const EndElem;

  /// @brief Field EndNest value: static_cast<int32_t>(0xeb)
  static ::System::Xml::BinXmlToken const EndNest;

  /// @brief Field Error value: static_cast<int32_t>(0x0)
  static ::System::Xml::BinXmlToken const Error;

  /// @brief Field Extn value: static_cast<int32_t>(0xea)
  static ::System::Xml::BinXmlToken const Extn;

  /// @brief Field Name value: static_cast<int32_t>(0xf0)
  static ::System::Xml::BinXmlToken const Name;

  /// @brief Field Nest value: static_cast<int32_t>(0xec)
  static ::System::Xml::BinXmlToken const Nest;

  /// @brief Field NmFlush value: static_cast<int32_t>(0xe9)
  static ::System::Xml::BinXmlToken const NmFlush;

  /// @brief Field NotImpl value: static_cast<int32_t>(0xfffffffe)
  static ::System::Xml::BinXmlToken const NotImpl;

  /// @brief Field PI value: static_cast<int32_t>(0xf4)
  static ::System::Xml::BinXmlToken const PI;

  /// @brief Field Public value: static_cast<int32_t>(0xfa)
  static ::System::Xml::BinXmlToken const Public;

  /// @brief Field QName value: static_cast<int32_t>(0xef)
  static ::System::Xml::BinXmlToken const QName;

  /// @brief Field SQL_BIGINT value: static_cast<int32_t>(0x8)
  static ::System::Xml::BinXmlToken const SQL_BIGINT;

  /// @brief Field SQL_BINARY value: static_cast<int32_t>(0xc)
  static ::System::Xml::BinXmlToken const SQL_BINARY;

  /// @brief Field SQL_BIT value: static_cast<int32_t>(0x6)
  static ::System::Xml::BinXmlToken const SQL_BIT;

  /// @brief Field SQL_CHAR value: static_cast<int32_t>(0xd)
  static ::System::Xml::BinXmlToken const SQL_CHAR;

  /// @brief Field SQL_DATETIME value: static_cast<int32_t>(0x12)
  static ::System::Xml::BinXmlToken const SQL_DATETIME;

  /// @brief Field SQL_DECIMAL value: static_cast<int32_t>(0xa)
  static ::System::Xml::BinXmlToken const SQL_DECIMAL;

  /// @brief Field SQL_FLOAT value: static_cast<int32_t>(0x4)
  static ::System::Xml::BinXmlToken const SQL_FLOAT;

  /// @brief Field SQL_IMAGE value: static_cast<int32_t>(0x17)
  static ::System::Xml::BinXmlToken const SQL_IMAGE;

  /// @brief Field SQL_INT value: static_cast<int32_t>(0x2)
  static ::System::Xml::BinXmlToken const SQL_INT;

  /// @brief Field SQL_MONEY value: static_cast<int32_t>(0x5)
  static ::System::Xml::BinXmlToken const SQL_MONEY;

  /// @brief Field SQL_NCHAR value: static_cast<int32_t>(0xe)
  static ::System::Xml::BinXmlToken const SQL_NCHAR;

  /// @brief Field SQL_NTEXT value: static_cast<int32_t>(0x18)
  static ::System::Xml::BinXmlToken const SQL_NTEXT;

  /// @brief Field SQL_NUMERIC value: static_cast<int32_t>(0xb)
  static ::System::Xml::BinXmlToken const SQL_NUMERIC;

  /// @brief Field SQL_NVARCHAR value: static_cast<int32_t>(0x11)
  static ::System::Xml::BinXmlToken const SQL_NVARCHAR;

  /// @brief Field SQL_REAL value: static_cast<int32_t>(0x3)
  static ::System::Xml::BinXmlToken const SQL_REAL;

  /// @brief Field SQL_SMALLDATETIME value: static_cast<int32_t>(0x13)
  static ::System::Xml::BinXmlToken const SQL_SMALLDATETIME;

  /// @brief Field SQL_SMALLINT value: static_cast<int32_t>(0x1)
  static ::System::Xml::BinXmlToken const SQL_SMALLINT;

  /// @brief Field SQL_SMALLMONEY value: static_cast<int32_t>(0x14)
  static ::System::Xml::BinXmlToken const SQL_SMALLMONEY;

  /// @brief Field SQL_TEXT value: static_cast<int32_t>(0x16)
  static ::System::Xml::BinXmlToken const SQL_TEXT;

  /// @brief Field SQL_TINYINT value: static_cast<int32_t>(0x7)
  static ::System::Xml::BinXmlToken const SQL_TINYINT;

  /// @brief Field SQL_UDT value: static_cast<int32_t>(0x1b)
  static ::System::Xml::BinXmlToken const SQL_UDT;

  /// @brief Field SQL_UUID value: static_cast<int32_t>(0x9)
  static ::System::Xml::BinXmlToken const SQL_UUID;

  /// @brief Field SQL_VARBINARY value: static_cast<int32_t>(0xf)
  static ::System::Xml::BinXmlToken const SQL_VARBINARY;

  /// @brief Field SQL_VARCHAR value: static_cast<int32_t>(0x10)
  static ::System::Xml::BinXmlToken const SQL_VARCHAR;

  /// @brief Field Subset value: static_cast<int32_t>(0xf9)
  static ::System::Xml::BinXmlToken const Subset;

  /// @brief Field System value: static_cast<int32_t>(0xfb)
  static ::System::Xml::BinXmlToken const System;

  /// @brief Field XSD_BASE64 value: static_cast<int32_t>(0x85)
  static ::System::Xml::BinXmlToken const XSD_BASE64;

  /// @brief Field XSD_BINHEX value: static_cast<int32_t>(0x84)
  static ::System::Xml::BinXmlToken const XSD_BINHEX;

  /// @brief Field XSD_BOOLEAN value: static_cast<int32_t>(0x86)
  static ::System::Xml::BinXmlToken const XSD_BOOLEAN;

  /// @brief Field XSD_BYTE value: static_cast<int32_t>(0x88)
  static ::System::Xml::BinXmlToken const XSD_BYTE;

  /// @brief Field XSD_DATE value: static_cast<int32_t>(0x83)
  static ::System::Xml::BinXmlToken const XSD_DATE;

  /// @brief Field XSD_DATETIME value: static_cast<int32_t>(0x82)
  static ::System::Xml::BinXmlToken const XSD_DATETIME;

  /// @brief Field XSD_DECIMAL value: static_cast<int32_t>(0x87)
  static ::System::Xml::BinXmlToken const XSD_DECIMAL;

  /// @brief Field XSD_KATMAI_DATE value: static_cast<int32_t>(0x7f)
  static ::System::Xml::BinXmlToken const XSD_KATMAI_DATE;

  /// @brief Field XSD_KATMAI_DATEOFFSET value: static_cast<int32_t>(0x7c)
  static ::System::Xml::BinXmlToken const XSD_KATMAI_DATEOFFSET;

  /// @brief Field XSD_KATMAI_DATETIME value: static_cast<int32_t>(0x7e)
  static ::System::Xml::BinXmlToken const XSD_KATMAI_DATETIME;

  /// @brief Field XSD_KATMAI_DATETIMEOFFSET value: static_cast<int32_t>(0x7b)
  static ::System::Xml::BinXmlToken const XSD_KATMAI_DATETIMEOFFSET;

  /// @brief Field XSD_KATMAI_TIME value: static_cast<int32_t>(0x7d)
  static ::System::Xml::BinXmlToken const XSD_KATMAI_TIME;

  /// @brief Field XSD_KATMAI_TIMEOFFSET value: static_cast<int32_t>(0x7a)
  static ::System::Xml::BinXmlToken const XSD_KATMAI_TIMEOFFSET;

  /// @brief Field XSD_QNAME value: static_cast<int32_t>(0x8c)
  static ::System::Xml::BinXmlToken const XSD_QNAME;

  /// @brief Field XSD_TIME value: static_cast<int32_t>(0x81)
  static ::System::Xml::BinXmlToken const XSD_TIME;

  /// @brief Field XSD_UNSIGNEDINT value: static_cast<int32_t>(0x8a)
  static ::System::Xml::BinXmlToken const XSD_UNSIGNEDINT;

  /// @brief Field XSD_UNSIGNEDLONG value: static_cast<int32_t>(0x8b)
  static ::System::Xml::BinXmlToken const XSD_UNSIGNEDLONG;

  /// @brief Field XSD_UNSIGNEDSHORT value: static_cast<int32_t>(0x89)
  static ::System::Xml::BinXmlToken const XSD_UNSIGNEDSHORT;

  /// @brief Field XmlDecl value: static_cast<int32_t>(0xfe)
  static ::System::Xml::BinXmlToken const XmlDecl;

  /// @brief Field XmlText value: static_cast<int32_t>(0xed)
  static ::System::Xml::BinXmlToken const XmlText;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7129 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field EOF value: static_cast<int32_t>(0xffffffff)
  static ::System::Xml::BinXmlToken const _cordl_EOF;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::BinXmlToken, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::BinXmlToken, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::BinXmlToken, "System.Xml", "BinXmlToken");
