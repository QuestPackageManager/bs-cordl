#pragma once
// IWYU pragma private; include "System/Xml/XmlSigningNodeWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNodeWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSigningNodeWriter)
namespace System::Xml {
class UniqueId;
}
namespace System::Xml {
class XmlCanonicalWriter;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System::Xml {
class XmlNodeWriter;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Xml {
class XmlSigningNodeWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlSigningNodeWriter);
// Dependencies System.Xml.XmlNodeWriter
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlSigningNodeWriter
class CORDL_TYPE XmlSigningNodeWriter : public ::System::Xml::XmlNodeWriter {
public:
// Declarations
/// @brief Field base64Chars, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_base64Chars, put=__cordl_internal_set_base64Chars)) ::ArrayW<uint8_t,::Array<uint8_t>*>  base64Chars;

/// @brief Field chars, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_chars, put=__cordl_internal_set_chars)) ::ArrayW<uint8_t,::Array<uint8_t>*>  chars;

/// @brief Field signingWriter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_signingWriter, put=__cordl_internal_set_signingWriter)) ::System::Xml::XmlCanonicalWriter*  signingWriter;

/// @brief Field text, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) bool  text;

/// @brief Field writer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_writer, put=__cordl_internal_set_writer)) ::System::Xml::XmlNodeWriter*  writer;

/// @brief Method Close, addr 0x5f73d84, size 0x30, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Flush, addr 0x5f73d3c, size 0x48, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method WriteBase64Text, addr 0x5f74de8, size 0x248, virtual false, abstract: false, final false
inline void WriteBase64Text(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteBase64Text, addr 0x5f74d34, size 0xb4, virtual true, abstract: false, final false
inline void WriteBase64Text(::ArrayW<uint8_t,::Array<uint8_t>*>  trailBytes, int32_t  trailByteCount, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteBoolText, addr 0x5f74580, size 0xe0, virtual true, abstract: false, final false
inline void WriteBoolText(bool  value) ;

/// @brief Method WriteCData, addr 0x5f73e24, size 0x40, virtual true, abstract: false, final false
inline void WriteCData(::StringW  text) ;

/// @brief Method WriteCharEntity, addr 0x5f740f4, size 0x44, virtual true, abstract: false, final false
inline void WriteCharEntity(int32_t  ch) ;

/// @brief Method WriteComment, addr 0x5f73de4, size 0x40, virtual true, abstract: false, final false
inline void WriteComment(::StringW  text) ;

/// @brief Method WriteDateTimeText, addr 0x5f749ec, size 0xe0, virtual true, abstract: false, final false
inline void WriteDateTimeText(::System::DateTime  value) ;

/// @brief Method WriteDecimalText, addr 0x5f74900, size 0xec, virtual true, abstract: false, final false
inline void WriteDecimalText(::System::Decimal  value) ;

/// @brief Method WriteDeclaration, addr 0x5f73db4, size 0x30, virtual true, abstract: false, final false
inline void WriteDeclaration() ;

/// @brief Method WriteDoubleText, addr 0x5f74820, size 0xe0, virtual true, abstract: false, final false
inline void WriteDoubleText(double_t  value) ;

/// @brief Method WriteEndAttribute, addr 0x5f740c0, size 0x34, virtual true, abstract: false, final false
inline void WriteEndAttribute() ;

/// @brief Method WriteEndElement, addr 0x5f73f3c, size 0x4c, virtual true, abstract: false, final false
inline void WriteEndElement(::StringW  prefix, ::StringW  localName) ;

/// @brief Method WriteEndStartElement, addr 0x5f73ef8, size 0x44, virtual true, abstract: false, final false
inline void WriteEndStartElement(bool  isEmpty) ;

/// @brief Method WriteEscapedText, addr 0x5f7417c, size 0x5c, virtual true, abstract: false, final false
inline void WriteEscapedText(::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  offset, int32_t  count) ;

/// @brief Method WriteEscapedText, addr 0x5f74220, size 0x5c, virtual true, abstract: false, final false
inline void WriteEscapedText(::ArrayW<uint8_t,::Array<uint8_t>*>  chars, int32_t  offset, int32_t  count) ;

/// @brief Method WriteEscapedText, addr 0x5f74138, size 0x44, virtual true, abstract: false, final false
inline void WriteEscapedText(::StringW  value) ;

/// @brief Method WriteEscapedText, addr 0x5f741d8, size 0x48, virtual true, abstract: false, final false
inline void WriteEscapedText(::System::Xml::XmlDictionaryString*  value) ;

/// @brief Method WriteFloatText, addr 0x5f74740, size 0xe0, virtual true, abstract: false, final false
inline void WriteFloatText(float_t  value) ;

/// @brief Method WriteGuidText, addr 0x5f74c58, size 0xdc, virtual true, abstract: false, final false
inline void WriteGuidText(::System::Guid  value) ;

/// @brief Method WriteInt32Text, addr 0x5f743c0, size 0xe0, virtual true, abstract: false, final false
inline void WriteInt32Text(int32_t  value) ;

/// @brief Method WriteInt64Text, addr 0x5f744a0, size 0xe0, virtual true, abstract: false, final false
inline void WriteInt64Text(int64_t  value) ;

/// @brief Method WriteQualifiedName, addr 0x5f75030, size 0xb4, virtual true, abstract: false, final false
inline void WriteQualifiedName(::StringW  prefix, ::System::Xml::XmlDictionaryString*  localName) ;

/// @brief Method WriteStartAttribute, addr 0x5f74024, size 0x4c, virtual true, abstract: false, final false
inline void WriteStartAttribute(::StringW  prefix, ::StringW  localName) ;

/// @brief Method WriteStartAttribute, addr 0x5f74070, size 0x50, virtual true, abstract: false, final false
inline void WriteStartAttribute(::StringW  prefix, ::System::Xml::XmlDictionaryString*  localName) ;

/// @brief Method WriteStartElement, addr 0x5f73e64, size 0x48, virtual true, abstract: false, final false
inline void WriteStartElement(::StringW  prefix, ::StringW  localName) ;

/// @brief Method WriteStartElement, addr 0x5f73eac, size 0x4c, virtual true, abstract: false, final false
inline void WriteStartElement(::StringW  prefix, ::System::Xml::XmlDictionaryString*  localName) ;

/// @brief Method WriteText, addr 0x5f742c0, size 0x5c, virtual true, abstract: false, final false
inline void WriteText(::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  offset, int32_t  count) ;

/// @brief Method WriteText, addr 0x5f7431c, size 0x5c, virtual true, abstract: false, final false
inline void WriteText(::ArrayW<uint8_t,::Array<uint8_t>*>  chars, int32_t  offset, int32_t  count) ;

/// @brief Method WriteText, addr 0x5f7427c, size 0x44, virtual true, abstract: false, final false
inline void WriteText(::StringW  value) ;

/// @brief Method WriteText, addr 0x5f74378, size 0x48, virtual true, abstract: false, final false
inline void WriteText(::System::Xml::XmlDictionaryString*  value) ;

/// @brief Method WriteTimeSpanText, addr 0x5f74b98, size 0xc0, virtual true, abstract: false, final false
inline void WriteTimeSpanText(::System::TimeSpan  value) ;

/// @brief Method WriteUInt64Text, addr 0x5f74660, size 0xe0, virtual true, abstract: false, final false
inline void WriteUInt64Text(uint64_t  value) ;

/// @brief Method WriteUniqueIdText, addr 0x5f74acc, size 0xcc, virtual true, abstract: false, final false
inline void WriteUniqueIdText(::System::Xml::UniqueId*  value) ;

/// @brief Method WriteXmlnsAttribute, addr 0x5f73f88, size 0x4c, virtual true, abstract: false, final false
inline void WriteXmlnsAttribute(::StringW  prefix, ::StringW  ns) ;

/// @brief Method WriteXmlnsAttribute, addr 0x5f73fd4, size 0x50, virtual true, abstract: false, final false
inline void WriteXmlnsAttribute(::StringW  prefix, ::System::Xml::XmlDictionaryString*  ns) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_base64Chars() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_base64Chars() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_chars() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_chars() ;

constexpr ::System::Xml::XmlCanonicalWriter* const& __cordl_internal_get_signingWriter() const;

constexpr ::System::Xml::XmlCanonicalWriter*& __cordl_internal_get_signingWriter() ;

constexpr bool const& __cordl_internal_get_text() const;

constexpr bool& __cordl_internal_get_text() ;

constexpr ::System::Xml::XmlNodeWriter* const& __cordl_internal_get_writer() const;

constexpr ::System::Xml::XmlNodeWriter*& __cordl_internal_get_writer() ;

constexpr void __cordl_internal_set_base64Chars(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_chars(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_signingWriter(::System::Xml::XmlCanonicalWriter*  value) ;

constexpr void __cordl_internal_set_text(bool  value) ;

constexpr void __cordl_internal_set_writer(::System::Xml::XmlNodeWriter*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSigningNodeWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSigningNodeWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSigningNodeWriter(XmlSigningNodeWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSigningNodeWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSigningNodeWriter(XmlSigningNodeWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16963};

/// @brief Field writer, offset: 0x10, size: 0x8, def value: None
 ::System::Xml::XmlNodeWriter*  ___writer;

/// @brief Field signingWriter, offset: 0x18, size: 0x8, def value: None
 ::System::Xml::XmlCanonicalWriter*  ___signingWriter;

/// @brief Field chars, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___chars;

/// @brief Field base64Chars, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___base64Chars;

/// @brief Field text, offset: 0x30, size: 0x1, def value: None
 bool  ___text;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlSigningNodeWriter, ___writer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSigningNodeWriter, ___signingWriter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSigningNodeWriter, ___chars) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSigningNodeWriter, ___base64Chars) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlSigningNodeWriter, ___text) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlSigningNodeWriter, 0x38>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlSigningNodeWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlSigningNodeWriter*, "System.Xml", "XmlSigningNodeWriter");
