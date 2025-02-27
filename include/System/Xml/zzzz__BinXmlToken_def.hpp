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
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.BinXmlToken
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

  /// @brief Field Attr value: I32(246)
  static ::System::Xml::BinXmlToken const Attr;

  /// @brief Field CData value: I32(242)
  static ::System::Xml::BinXmlToken const CData;

  /// @brief Field Comment value: I32(243)
  static ::System::Xml::BinXmlToken const Comment;

  /// @brief Field DocType value: I32(252)
  static ::System::Xml::BinXmlToken const DocType;

  /// @brief Field Element value: I32(248)
  static ::System::Xml::BinXmlToken const Element;

  /// @brief Field Encoding value: I32(253)
  static ::System::Xml::BinXmlToken const Encoding;

  /// @brief Field EndAttrs value: I32(245)
  static ::System::Xml::BinXmlToken const EndAttrs;

  /// @brief Field EndCData value: I32(241)
  static ::System::Xml::BinXmlToken const EndCData;

  /// @brief Field EndElem value: I32(247)
  static ::System::Xml::BinXmlToken const EndElem;

  /// @brief Field EndNest value: I32(235)
  static ::System::Xml::BinXmlToken const EndNest;

  /// @brief Field Error value: I32(0)
  static ::System::Xml::BinXmlToken const Error;

  /// @brief Field Extn value: I32(234)
  static ::System::Xml::BinXmlToken const Extn;

  /// @brief Field Name value: I32(240)
  static ::System::Xml::BinXmlToken const Name;

  /// @brief Field Nest value: I32(236)
  static ::System::Xml::BinXmlToken const Nest;

  /// @brief Field NmFlush value: I32(233)
  static ::System::Xml::BinXmlToken const NmFlush;

  /// @brief Field NotImpl value: I32(-2)
  static ::System::Xml::BinXmlToken const NotImpl;

  /// @brief Field PI value: I32(244)
  static ::System::Xml::BinXmlToken const PI;

  /// @brief Field Public value: I32(250)
  static ::System::Xml::BinXmlToken const Public;

  /// @brief Field QName value: I32(239)
  static ::System::Xml::BinXmlToken const QName;

  /// @brief Field SQL_BIGINT value: I32(8)
  static ::System::Xml::BinXmlToken const SQL_BIGINT;

  /// @brief Field SQL_BINARY value: I32(12)
  static ::System::Xml::BinXmlToken const SQL_BINARY;

  /// @brief Field SQL_BIT value: I32(6)
  static ::System::Xml::BinXmlToken const SQL_BIT;

  /// @brief Field SQL_CHAR value: I32(13)
  static ::System::Xml::BinXmlToken const SQL_CHAR;

  /// @brief Field SQL_DATETIME value: I32(18)
  static ::System::Xml::BinXmlToken const SQL_DATETIME;

  /// @brief Field SQL_DECIMAL value: I32(10)
  static ::System::Xml::BinXmlToken const SQL_DECIMAL;

  /// @brief Field SQL_FLOAT value: I32(4)
  static ::System::Xml::BinXmlToken const SQL_FLOAT;

  /// @brief Field SQL_IMAGE value: I32(23)
  static ::System::Xml::BinXmlToken const SQL_IMAGE;

  /// @brief Field SQL_INT value: I32(2)
  static ::System::Xml::BinXmlToken const SQL_INT;

  /// @brief Field SQL_MONEY value: I32(5)
  static ::System::Xml::BinXmlToken const SQL_MONEY;

  /// @brief Field SQL_NCHAR value: I32(14)
  static ::System::Xml::BinXmlToken const SQL_NCHAR;

  /// @brief Field SQL_NTEXT value: I32(24)
  static ::System::Xml::BinXmlToken const SQL_NTEXT;

  /// @brief Field SQL_NUMERIC value: I32(11)
  static ::System::Xml::BinXmlToken const SQL_NUMERIC;

  /// @brief Field SQL_NVARCHAR value: I32(17)
  static ::System::Xml::BinXmlToken const SQL_NVARCHAR;

  /// @brief Field SQL_REAL value: I32(3)
  static ::System::Xml::BinXmlToken const SQL_REAL;

  /// @brief Field SQL_SMALLDATETIME value: I32(19)
  static ::System::Xml::BinXmlToken const SQL_SMALLDATETIME;

  /// @brief Field SQL_SMALLINT value: I32(1)
  static ::System::Xml::BinXmlToken const SQL_SMALLINT;

  /// @brief Field SQL_SMALLMONEY value: I32(20)
  static ::System::Xml::BinXmlToken const SQL_SMALLMONEY;

  /// @brief Field SQL_TEXT value: I32(22)
  static ::System::Xml::BinXmlToken const SQL_TEXT;

  /// @brief Field SQL_TINYINT value: I32(7)
  static ::System::Xml::BinXmlToken const SQL_TINYINT;

  /// @brief Field SQL_UDT value: I32(27)
  static ::System::Xml::BinXmlToken const SQL_UDT;

  /// @brief Field SQL_UUID value: I32(9)
  static ::System::Xml::BinXmlToken const SQL_UUID;

  /// @brief Field SQL_VARBINARY value: I32(15)
  static ::System::Xml::BinXmlToken const SQL_VARBINARY;

  /// @brief Field SQL_VARCHAR value: I32(16)
  static ::System::Xml::BinXmlToken const SQL_VARCHAR;

  /// @brief Field Subset value: I32(249)
  static ::System::Xml::BinXmlToken const Subset;

  /// @brief Field System value: I32(251)
  static ::System::Xml::BinXmlToken const System;

  /// @brief Field XSD_BASE64 value: I32(133)
  static ::System::Xml::BinXmlToken const XSD_BASE64;

  /// @brief Field XSD_BINHEX value: I32(132)
  static ::System::Xml::BinXmlToken const XSD_BINHEX;

  /// @brief Field XSD_BOOLEAN value: I32(134)
  static ::System::Xml::BinXmlToken const XSD_BOOLEAN;

  /// @brief Field XSD_BYTE value: I32(136)
  static ::System::Xml::BinXmlToken const XSD_BYTE;

  /// @brief Field XSD_DATE value: I32(131)
  static ::System::Xml::BinXmlToken const XSD_DATE;

  /// @brief Field XSD_DATETIME value: I32(130)
  static ::System::Xml::BinXmlToken const XSD_DATETIME;

  /// @brief Field XSD_DECIMAL value: I32(135)
  static ::System::Xml::BinXmlToken const XSD_DECIMAL;

  /// @brief Field XSD_KATMAI_DATE value: I32(127)
  static ::System::Xml::BinXmlToken const XSD_KATMAI_DATE;

  /// @brief Field XSD_KATMAI_DATEOFFSET value: I32(124)
  static ::System::Xml::BinXmlToken const XSD_KATMAI_DATEOFFSET;

  /// @brief Field XSD_KATMAI_DATETIME value: I32(126)
  static ::System::Xml::BinXmlToken const XSD_KATMAI_DATETIME;

  /// @brief Field XSD_KATMAI_DATETIMEOFFSET value: I32(123)
  static ::System::Xml::BinXmlToken const XSD_KATMAI_DATETIMEOFFSET;

  /// @brief Field XSD_KATMAI_TIME value: I32(125)
  static ::System::Xml::BinXmlToken const XSD_KATMAI_TIME;

  /// @brief Field XSD_KATMAI_TIMEOFFSET value: I32(122)
  static ::System::Xml::BinXmlToken const XSD_KATMAI_TIMEOFFSET;

  /// @brief Field XSD_QNAME value: I32(140)
  static ::System::Xml::BinXmlToken const XSD_QNAME;

  /// @brief Field XSD_TIME value: I32(129)
  static ::System::Xml::BinXmlToken const XSD_TIME;

  /// @brief Field XSD_UNSIGNEDINT value: I32(138)
  static ::System::Xml::BinXmlToken const XSD_UNSIGNEDINT;

  /// @brief Field XSD_UNSIGNEDLONG value: I32(139)
  static ::System::Xml::BinXmlToken const XSD_UNSIGNEDLONG;

  /// @brief Field XSD_UNSIGNEDSHORT value: I32(137)
  static ::System::Xml::BinXmlToken const XSD_UNSIGNEDSHORT;

  /// @brief Field XmlDecl value: I32(254)
  static ::System::Xml::BinXmlToken const XmlDecl;

  /// @brief Field XmlText value: I32(237)
  static ::System::Xml::BinXmlToken const XmlText;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7159 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field EOF value: I32(-1)
  static ::System::Xml::BinXmlToken const _cordl_EOF;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::BinXmlToken, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::BinXmlToken, 0x4>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::BinXmlToken, "System.Xml", "BinXmlToken");
