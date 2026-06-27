#pragma once
// IWYU pragma private; include "System/Xml/BinXmlToken.hpp"
#include "System/Xml/zzzz__BinXmlToken_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::BinXmlToken::BinXmlToken(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::BinXmlToken::BinXmlToken()   {
}
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::Error{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::NotImpl{static_cast<int32_t>(0xfffffffe)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::_cordl_EOF{static_cast<int32_t>(0xffffffff)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::XmlDecl{static_cast<int32_t>(0xfe)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::Encoding{static_cast<int32_t>(0xfd)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::DocType{static_cast<int32_t>(0xfc)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::System{static_cast<int32_t>(0xfb)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::Public{static_cast<int32_t>(0xfa)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::Subset{static_cast<int32_t>(0xf9)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::Element{static_cast<int32_t>(0xf8)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::EndElem{static_cast<int32_t>(0xf7)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::Attr{static_cast<int32_t>(0xf6)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::EndAttrs{static_cast<int32_t>(0xf5)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::PI{static_cast<int32_t>(0xf4)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::Comment{static_cast<int32_t>(0xf3)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::CData{static_cast<int32_t>(0xf2)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::EndCData{static_cast<int32_t>(0xf1)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::Name{static_cast<int32_t>(0xf0)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::QName{static_cast<int32_t>(0xef)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::XmlText{static_cast<int32_t>(0xed)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::Nest{static_cast<int32_t>(0xec)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::EndNest{static_cast<int32_t>(0xeb)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::Extn{static_cast<int32_t>(0xea)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::NmFlush{static_cast<int32_t>(0xe9)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_BIT{static_cast<int32_t>(0x6)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_TINYINT{static_cast<int32_t>(0x7)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_SMALLINT{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_INT{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_BIGINT{static_cast<int32_t>(0x8)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_REAL{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_FLOAT{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_MONEY{static_cast<int32_t>(0x5)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_SMALLMONEY{static_cast<int32_t>(0x14)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_DATETIME{static_cast<int32_t>(0x12)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_SMALLDATETIME{static_cast<int32_t>(0x13)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_DECIMAL{static_cast<int32_t>(0xa)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_NUMERIC{static_cast<int32_t>(0xb)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_UUID{static_cast<int32_t>(0x9)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_VARBINARY{static_cast<int32_t>(0xf)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_BINARY{static_cast<int32_t>(0xc)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_IMAGE{static_cast<int32_t>(0x17)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_CHAR{static_cast<int32_t>(0xd)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_VARCHAR{static_cast<int32_t>(0x10)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_TEXT{static_cast<int32_t>(0x16)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_NVARCHAR{static_cast<int32_t>(0x11)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_NCHAR{static_cast<int32_t>(0xe)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_NTEXT{static_cast<int32_t>(0x18)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::SQL_UDT{static_cast<int32_t>(0x1b)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::XSD_KATMAI_DATE{static_cast<int32_t>(0x7f)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::XSD_KATMAI_DATETIME{static_cast<int32_t>(0x7e)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::XSD_KATMAI_TIME{static_cast<int32_t>(0x7d)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::XSD_KATMAI_DATEOFFSET{static_cast<int32_t>(0x7c)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::XSD_KATMAI_DATETIMEOFFSET{static_cast<int32_t>(0x7b)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::XSD_KATMAI_TIMEOFFSET{static_cast<int32_t>(0x7a)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::XSD_BOOLEAN{static_cast<int32_t>(0x86)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::XSD_TIME{static_cast<int32_t>(0x81)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::XSD_DATETIME{static_cast<int32_t>(0x82)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::XSD_DATE{static_cast<int32_t>(0x83)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::XSD_BINHEX{static_cast<int32_t>(0x84)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::XSD_BASE64{static_cast<int32_t>(0x85)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::XSD_DECIMAL{static_cast<int32_t>(0x87)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::XSD_BYTE{static_cast<int32_t>(0x88)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::XSD_UNSIGNEDSHORT{static_cast<int32_t>(0x89)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::XSD_UNSIGNEDINT{static_cast<int32_t>(0x8a)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::XSD_UNSIGNEDLONG{static_cast<int32_t>(0x8b)};
constexpr ::System::Xml::BinXmlToken  System::Xml::BinXmlToken::XSD_QNAME{static_cast<int32_t>(0x8c)};
