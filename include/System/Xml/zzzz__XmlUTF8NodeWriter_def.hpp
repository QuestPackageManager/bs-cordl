#pragma once
// IWYU pragma private; include "System/Xml/XmlUTF8NodeWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlStreamNodeWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlUTF8NodeWriter)
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
class UniqueId;
}
namespace System::Xml {
class XmlDictionaryString;
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
class XmlUTF8NodeWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlUTF8NodeWriter);
// Dependencies System.Xml.XmlStreamNodeWriter
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlUTF8NodeWriter
class CORDL_TYPE XmlUTF8NodeWriter : public ::System::Xml::XmlStreamNodeWriter {
public:
  // Declarations
  /// @brief Field chars, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_chars, put = __cordl_internal_set_chars)) ::ArrayW<char16_t, ::Array<char16_t>*> chars;

  /// @brief Field defaultIsEscapedAttributeChar, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_defaultIsEscapedAttributeChar, put = setStaticF_defaultIsEscapedAttributeChar)) ::ArrayW<bool, ::Array<bool>*> defaultIsEscapedAttributeChar;

  /// @brief Field defaultIsEscapedElementChar, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_defaultIsEscapedElementChar, put = setStaticF_defaultIsEscapedElementChar)) ::ArrayW<bool, ::Array<bool>*> defaultIsEscapedElementChar;

  /// @brief Field digits, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_digits, put = setStaticF_digits)) ::ArrayW<uint8_t, ::Array<uint8_t>*> digits;

  /// @brief Field encoding, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_encoding, put = __cordl_internal_set_encoding)) ::System::Text::Encoding* encoding;

  /// @brief Field endDecl, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_endDecl, put = setStaticF_endDecl)) ::ArrayW<uint8_t, ::Array<uint8_t>*> endDecl;

  /// @brief Field entityChars, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_entityChars, put = __cordl_internal_set_entityChars)) ::ArrayW<uint8_t, ::Array<uint8_t>*> entityChars;

  /// @brief Field inAttribute, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_inAttribute, put = __cordl_internal_set_inAttribute)) bool inAttribute;

  /// @brief Field isEscapedAttributeChar, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_isEscapedAttributeChar, put = __cordl_internal_set_isEscapedAttributeChar)) ::ArrayW<bool, ::Array<bool>*> isEscapedAttributeChar;

  /// @brief Field isEscapedElementChar, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_isEscapedElementChar, put = __cordl_internal_set_isEscapedElementChar)) ::ArrayW<bool, ::Array<bool>*> isEscapedElementChar;

  /// @brief Field startDecl, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_startDecl, put = setStaticF_startDecl)) ::ArrayW<uint8_t, ::Array<uint8_t>*> startDecl;

  /// @brief Field utf8Decl, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_utf8Decl, put = setStaticF_utf8Decl)) ::ArrayW<uint8_t, ::Array<uint8_t>*> utf8Decl;

  /// @brief Method GetCharBuffer, addr 0x5f10cf4, size 0x98, virtual false, abstract: false, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> GetCharBuffer(int32_t charCount);

  /// @brief Method GetCharEntityBuffer, addr 0x5f10c98, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetCharEntityBuffer();

  /// @brief Method InternalWriteBase64Text, addr 0x5f128e4, size 0x1a8, virtual false, abstract: false, final false
  inline void InternalWriteBase64Text(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  static inline ::System::Xml::XmlUTF8NodeWriter* New_ctor();

  static inline ::System::Xml::XmlUTF8NodeWriter* New_ctor(::ArrayW<bool, ::Array<bool>*> isEscapedAttributeChar, ::ArrayW<bool, ::Array<bool>*> isEscapedElementChar);

  /// @brief Method SetOutput, addr 0x5f10b30, size 0x98, virtual false, abstract: false, final false
  inline void SetOutput(::System::IO::Stream* stream, bool ownsStream, ::System::Text::Encoding* encoding);

  /// @brief Method ToBase16, addr 0x5f12114, size 0xd0, virtual false, abstract: false, final false
  inline int32_t ToBase16(::ArrayW<uint8_t, ::Array<uint8_t>*> chars, int32_t offset, uint32_t value);

  /// @brief Method UnsafeWriteEscapedText, addr 0x5f11894, size 0x110, virtual false, abstract: false, final false
  inline void UnsafeWriteEscapedText(char16_t* chars, int32_t count);

  /// @brief Method WriteAmpersandCharEntity, addr 0x5f11d88, size 0xdc, virtual false, abstract: false, final false
  inline void WriteAmpersandCharEntity();

  /// @brief Method WriteApostropheCharEntity, addr 0x5f11e64, size 0xf8, virtual false, abstract: false, final false
  inline void WriteApostropheCharEntity();

  /// @brief Method WriteBase64Text, addr 0x5f12890, size 0x54, virtual true, abstract: false, final false
  inline void WriteBase64Text(::ArrayW<uint8_t, ::Array<uint8_t>*> trailBytes, int32_t trailByteCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteBoolText, addr 0x5f1222c, size 0xac, virtual true, abstract: false, final false
  inline void WriteBoolText(bool value);

  /// @brief Method WriteCData, addr 0x5f10ed4, size 0x1ec, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteCharEntity, addr 0x5f121e4, size 0x48, virtual true, abstract: false, final false
  inline void WriteCharEntity(int32_t ch);

  /// @brief Method WriteComment, addr 0x5f1121c, size 0x30, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteDateTimeText, addr 0x5f124e4, size 0xac, virtual true, abstract: false, final false
  inline void WriteDateTimeText(::System::DateTime value);

  /// @brief Method WriteDecimalText, addr 0x5f122d8, size 0xb4, virtual true, abstract: false, final false
  inline void WriteDecimalText(::System::Decimal value);

  /// @brief Method WriteDeclaration, addr 0x5f10d8c, size 0x148, virtual true, abstract: false, final false
  inline void WriteDeclaration();

  /// @brief Method WriteDoubleText, addr 0x5f1238c, size 0xac, virtual true, abstract: false, final false
  inline void WriteDoubleText(double_t value);

  /// @brief Method WriteEndAttribute, addr 0x5f11834, size 0x1c, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndComment, addr 0x5f1117c, size 0xa0, virtual false, abstract: false, final false
  inline void WriteEndComment();

  /// @brief Method WriteEndElement, addr 0x5f113c8, size 0x68, virtual true, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName);

  /// @brief Method WriteEndElement, addr 0x5f11430, size 0x8c, virtual true, abstract: false, final false
  inline void WriteEndElement(::ArrayW<uint8_t, ::Array<uint8_t>*> prefixBuffer, int32_t prefixOffset, int32_t prefixLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> localNameBuffer,
                              int32_t localNameOffset, int32_t localNameLength);

  /// @brief Method WriteEndStartElement, addr 0x5f113b0, size 0x18, virtual true, abstract: false, final false
  inline void WriteEndStartElement(bool isEmpty);

  /// @brief Method WriteEscapedText, addr 0x5f119e4, size 0x1c4, virtual true, abstract: false, final false
  inline void WriteEscapedText(::ArrayW<uint8_t, ::Array<uint8_t>*> chars, int32_t offset, int32_t count);

  /// @brief Method WriteEscapedText, addr 0x5f119a4, size 0x40, virtual true, abstract: false, final false
  inline void WriteEscapedText(::ArrayW<char16_t, ::Array<char16_t>*> s, int32_t offset, int32_t count);

  /// @brief Method WriteEscapedText, addr 0x5f11870, size 0x24, virtual true, abstract: false, final false
  inline void WriteEscapedText(::StringW s);

  /// @brief Method WriteEscapedText, addr 0x5f11850, size 0x20, virtual true, abstract: false, final false
  inline void WriteEscapedText(::System::Xml::XmlDictionaryString* s);

  /// @brief Method WriteFloatText, addr 0x5f12438, size 0xac, virtual true, abstract: false, final false
  inline void WriteFloatText(float_t value);

  /// @brief Method WriteGreaterThanCharEntity, addr 0x5f11cc8, size 0xc0, virtual false, abstract: false, final false
  inline void WriteGreaterThanCharEntity();

  /// @brief Method WriteGuidText, addr 0x5f12854, size 0x3c, virtual true, abstract: false, final false
  inline void WriteGuidText(::System::Guid value);

  /// @brief Method WriteHexCharEntity, addr 0x5f12054, size 0xc0, virtual false, abstract: false, final false
  inline void WriteHexCharEntity(int32_t ch);

  /// @brief Method WriteInt32Text, addr 0x5f12650, size 0xac, virtual true, abstract: false, final false
  inline void WriteInt32Text(int32_t value);

  /// @brief Method WriteInt64Text, addr 0x5f126fc, size 0xac, virtual true, abstract: false, final false
  inline void WriteInt64Text(int64_t value);

  /// @brief Method WriteLessThanCharEntity, addr 0x5f11c08, size 0xc0, virtual false, abstract: false, final false
  inline void WriteLessThanCharEntity();

  /// @brief Method WriteLocalName, addr 0x5f112d4, size 0x4, virtual false, abstract: false, final false
  inline void WriteLocalName(::StringW localName);

  /// @brief Method WriteLocalName, addr 0x5f113ac, size 0x4, virtual false, abstract: false, final false
  inline void WriteLocalName(::ArrayW<uint8_t, ::Array<uint8_t>*> localNameBuffer, int32_t localNameOffset, int32_t localNameLength);

  /// @brief Method WritePrefix, addr 0x5f112a4, size 0x30, virtual false, abstract: false, final false
  inline void WritePrefix(::StringW prefix);

  /// @brief Method WritePrefix, addr 0x5f11370, size 0x3c, virtual false, abstract: false, final false
  inline void WritePrefix(::ArrayW<uint8_t, ::Array<uint8_t>*> prefixBuffer, int32_t prefixOffset, int32_t prefixLength);

  /// @brief Method WriteQualifiedName, addr 0x5f1302c, size 0x54, virtual true, abstract: false, final false
  inline void WriteQualifiedName(::StringW prefix, ::System::Xml::XmlDictionaryString* localName);

  /// @brief Method WriteQuoteCharEntity, addr 0x5f11f5c, size 0xf8, virtual false, abstract: false, final false
  inline void WriteQuoteCharEntity();

  /// @brief Method WriteStartAttribute, addr 0x5f11708, size 0x74, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName);

  /// @brief Method WriteStartAttribute, addr 0x5f1177c, size 0x20, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* localName);

  /// @brief Method WriteStartAttribute, addr 0x5f1179c, size 0x98, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::ArrayW<uint8_t, ::Array<uint8_t>*> prefixBuffer, int32_t prefixOffset, int32_t prefixLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> localNameBuffer,
                                  int32_t localNameOffset, int32_t localNameLength);

  /// @brief Method WriteStartComment, addr 0x5f110c0, size 0xbc, virtual false, abstract: false, final false
  inline void WriteStartComment();

  /// @brief Method WriteStartElement, addr 0x5f1124c, size 0x58, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName);

  /// @brief Method WriteStartElement, addr 0x5f112d8, size 0x1c, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::System::Xml::XmlDictionaryString* localName);

  /// @brief Method WriteStartElement, addr 0x5f112f4, size 0x7c, virtual true, abstract: false, final false
  inline void WriteStartElement(::ArrayW<uint8_t, ::Array<uint8_t>*> prefixBuffer, int32_t prefixOffset, int32_t prefixLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> localNameBuffer,
                                int32_t localNameOffset, int32_t localNameLength);

  /// @brief Method WriteStartXmlnsAttribute, addr 0x5f114bc, size 0x100, virtual false, abstract: false, final false
  inline void WriteStartXmlnsAttribute();

  /// @brief Method WriteText, addr 0x5f11ba8, size 0x4, virtual false, abstract: false, final false
  inline void WriteText(int32_t ch);

  /// @brief Method WriteText, addr 0x5f11bb0, size 0x40, virtual true, abstract: false, final false
  inline void WriteText(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t offset, int32_t count);

  /// @brief Method WriteText, addr 0x5f11bac, size 0x4, virtual true, abstract: false, final false
  inline void WriteText(::ArrayW<uint8_t, ::Array<uint8_t>*> chars, int32_t offset, int32_t count);

  /// @brief Method WriteText, addr 0x5f11bf0, size 0x4, virtual true, abstract: false, final false
  inline void WriteText(::StringW value);

  /// @brief Method WriteText, addr 0x5f11bf4, size 0x14, virtual true, abstract: false, final false
  inline void WriteText(::System::Xml::XmlDictionaryString* value);

  /// @brief Method WriteTimeSpanText, addr 0x5f12f88, size 0xa4, virtual true, abstract: false, final false
  inline void WriteTimeSpanText(::System::TimeSpan value);

  /// @brief Method WriteUInt64Text, addr 0x5f127a8, size 0xac, virtual true, abstract: false, final false
  inline void WriteUInt64Text(uint64_t value);

  /// @brief Method WriteUniqueIdText, addr 0x5f12590, size 0xc0, virtual true, abstract: false, final false
  inline void WriteUniqueIdText(::System::Xml::UniqueId* value);

  /// @brief Method WriteXmlnsAttribute, addr 0x5f115bc, size 0x84, virtual true, abstract: false, final false
  inline void WriteXmlnsAttribute(::StringW prefix, ::StringW ns);

  /// @brief Method WriteXmlnsAttribute, addr 0x5f11640, size 0x20, virtual true, abstract: false, final false
  inline void WriteXmlnsAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteXmlnsAttribute, addr 0x5f11660, size 0xa8, virtual true, abstract: false, final false
  inline void WriteXmlnsAttribute(::ArrayW<uint8_t, ::Array<uint8_t>*> prefixBuffer, int32_t prefixOffset, int32_t prefixLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> nsBuffer, int32_t nsOffset,
                                  int32_t nsLength);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_chars() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_chars();

  constexpr ::System::Text::Encoding* const& __cordl_internal_get_encoding() const;

  constexpr ::System::Text::Encoding*& __cordl_internal_get_encoding();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_entityChars() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_entityChars();

  constexpr bool const& __cordl_internal_get_inAttribute() const;

  constexpr bool& __cordl_internal_get_inAttribute();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_isEscapedAttributeChar() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_isEscapedAttributeChar();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_isEscapedElementChar() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_isEscapedElementChar();

  constexpr void __cordl_internal_set_chars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_encoding(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set_entityChars(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_inAttribute(bool value);

  constexpr void __cordl_internal_set_isEscapedAttributeChar(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_isEscapedElementChar(::ArrayW<bool, ::Array<bool>*> value);

  /// @brief Method .ctor, addr 0x5f10acc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5f10c24, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<bool, ::Array<bool>*> isEscapedAttributeChar, ::ArrayW<bool, ::Array<bool>*> isEscapedElementChar);

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_defaultIsEscapedAttributeChar();

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_defaultIsEscapedElementChar();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_digits();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_endDecl();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_startDecl();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_utf8Decl();

  static inline void setStaticF_defaultIsEscapedAttributeChar(::ArrayW<bool, ::Array<bool>*> value);

  static inline void setStaticF_defaultIsEscapedElementChar(::ArrayW<bool, ::Array<bool>*> value);

  static inline void setStaticF_digits(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_endDecl(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_startDecl(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_utf8Decl(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlUTF8NodeWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlUTF8NodeWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlUTF8NodeWriter(XmlUTF8NodeWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlUTF8NodeWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlUTF8NodeWriter(XmlUTF8NodeWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16949 };

  /// @brief Field entityChars, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___entityChars;

  /// @brief Field isEscapedAttributeChar, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___isEscapedAttributeChar;

  /// @brief Field isEscapedElementChar, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___isEscapedElementChar;

  /// @brief Field inAttribute, offset: 0x48, size: 0x1, def value: None
  bool ___inAttribute;

  /// @brief Field encoding, offset: 0x50, size: 0x8, def value: None
  ::System::Text::Encoding* ___encoding;

  /// @brief Field chars, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___chars;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlUTF8NodeWriter, ___entityChars) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUTF8NodeWriter, ___isEscapedAttributeChar) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUTF8NodeWriter, ___isEscapedElementChar) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUTF8NodeWriter, ___inAttribute) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUTF8NodeWriter, ___encoding) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUTF8NodeWriter, ___chars) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlUTF8NodeWriter, 0x60>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlUTF8NodeWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlUTF8NodeWriter*, "System.Xml", "XmlUTF8NodeWriter");
