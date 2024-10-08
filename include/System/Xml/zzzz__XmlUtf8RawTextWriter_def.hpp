#pragma once
// IWYU pragma private; include "System/Xml/XmlUtf8RawTextWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__NewLineHandling_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/Xml/zzzz__XmlOutputMethod_def.hpp"
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
#include "System/Xml/zzzz__XmlStandalone_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlUtf8RawTextWriter)
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Xml {
class XmlWriterSettings;
}
// Forward declare root types
namespace System::Xml {
class XmlUtf8RawTextWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlUtf8RawTextWriter);
// Type: System.Xml::XmlUtf8RawTextWriter
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 142, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlUtf8RawTextWriter*
class CORDL_TYPE XmlUtf8RawTextWriter : public ::System::Xml::XmlRawWriter {
public:
  // Declarations
  __declspec(property(get = get_SupportsNamespaceDeclarationInChunks)) bool SupportsNamespaceDeclarationInChunks;

  /// @brief Field attrEndPos, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_attrEndPos, put = __cordl_internal_set_attrEndPos)) int32_t attrEndPos;

  /// @brief Field autoXmlDeclaration, offset 0x8c, size 0x1
  __declspec(property(get = __cordl_internal_get_autoXmlDeclaration, put = __cordl_internal_set_autoXmlDeclaration)) bool autoXmlDeclaration;

  /// @brief Field bufBytes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_bufBytes, put = __cordl_internal_set_bufBytes)) ::ArrayW<uint8_t, ::Array<uint8_t>*> bufBytes;

  /// @brief Field bufLen, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_bufLen, put = __cordl_internal_set_bufLen)) int32_t bufLen;

  /// @brief Field bufPos, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_bufPos, put = __cordl_internal_set_bufPos)) int32_t bufPos;

  /// @brief Field cdataPos, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_cdataPos, put = __cordl_internal_set_cdataPos)) int32_t cdataPos;

  /// @brief Field checkCharacters, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_checkCharacters, put = __cordl_internal_set_checkCharacters)) bool checkCharacters;

  /// @brief Field closeOutput, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_closeOutput, put = __cordl_internal_set_closeOutput)) bool closeOutput;

  /// @brief Field contentPos, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_contentPos, put = __cordl_internal_set_contentPos)) int32_t contentPos;

  /// @brief Field encoding, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_encoding, put = __cordl_internal_set_encoding)) ::System::Text::Encoding* encoding;

  /// @brief Field hadDoubleBracket, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_hadDoubleBracket, put = __cordl_internal_set_hadDoubleBracket)) bool hadDoubleBracket;

  /// @brief Field inAttributeValue, offset 0x6a, size 0x1
  __declspec(property(get = __cordl_internal_get_inAttributeValue, put = __cordl_internal_set_inAttributeValue)) bool inAttributeValue;

  /// @brief Field mergeCDataSections, offset 0x8d, size 0x1
  __declspec(property(get = __cordl_internal_get_mergeCDataSections, put = __cordl_internal_set_mergeCDataSections)) bool mergeCDataSections;

  /// @brief Field newLineChars, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_newLineChars, put = __cordl_internal_set_newLineChars)) ::StringW newLineChars;

  /// @brief Field newLineHandling, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_newLineHandling, put = __cordl_internal_set_newLineHandling)) ::System::Xml::NewLineHandling newLineHandling;

  /// @brief Field omitXmlDeclaration, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get_omitXmlDeclaration, put = __cordl_internal_set_omitXmlDeclaration)) bool omitXmlDeclaration;

  /// @brief Field outputMethod, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_outputMethod, put = __cordl_internal_set_outputMethod)) ::System::Xml::XmlOutputMethod outputMethod;

  /// @brief Field standalone, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_standalone, put = __cordl_internal_set_standalone)) ::System::Xml::XmlStandalone standalone;

  /// @brief Field stream, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_stream, put = __cordl_internal_set_stream)) ::System::IO::Stream* stream;

  /// @brief Field textPos, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_textPos, put = __cordl_internal_set_textPos)) int32_t textPos;

  /// @brief Field useAsync, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_useAsync, put = __cordl_internal_set_useAsync)) bool useAsync;

  /// @brief Field writeToNull, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_writeToNull, put = __cordl_internal_set_writeToNull)) bool writeToNull;

  /// @brief Field xmlCharType, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlCharType, put = __cordl_internal_set_xmlCharType)) ::System::Xml::XmlCharType xmlCharType;

  /// @brief Method AmpEntity, addr 0x42ab200, size 0x20, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<uint8_t> AmpEntity(::cordl_internals::Ptr<uint8_t> pDst);

  /// @brief Method CarriageReturnEntity, addr 0x42ab280, size 0x20, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<uint8_t> CarriageReturnEntity(::cordl_internals::Ptr<uint8_t> pDst);

  /// @brief Method CharEntity, addr 0x42ab768, size 0xac, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<uint8_t> CharEntity(::cordl_internals::Ptr<uint8_t> pDst, char16_t ch);

  /// @brief Method CharToUTF8, addr 0x42ab8f0, size 0xd0, virtual false, abstract: false, final false
  static inline void CharToUTF8(ByRef<::cordl_internals::Ptr<char16_t>> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd, ByRef<::cordl_internals::Ptr<uint8_t>> pDst);

  /// @brief Method Close, addr 0x42aaee4, size 0x164, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method EncodeChar, addr 0x42ab814, size 0xdc, virtual false, abstract: false, final false
  inline void EncodeChar(ByRef<::cordl_internals::Ptr<char16_t>> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd, ByRef<::cordl_internals::Ptr<uint8_t>> pDst);

  /// @brief Method EncodeMultibyteUTF8, addr 0x42ab504, size 0x40, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<uint8_t> EncodeMultibyteUTF8(int32_t ch, ::cordl_internals::Ptr<uint8_t> pDst);

  /// @brief Method EncodeSurrogate, addr 0x42ab2c0, size 0x190, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<uint8_t> EncodeSurrogate(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd, ::cordl_internals::Ptr<uint8_t> pDst);

  /// @brief Method Flush, addr 0x42ab04c, size 0x3c, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method FlushBuffer, addr 0x42ab088, size 0x178, virtual true, abstract: false, final false
  inline void FlushBuffer();

  /// @brief Method FlushEncoder, addr 0x42ab048, size 0x4, virtual false, abstract: false, final false
  inline void FlushEncoder();

  /// @brief Method GtEntity, addr 0x42ab230, size 0x10, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<uint8_t> GtEntity(::cordl_internals::Ptr<uint8_t> pDst);

  /// @brief Method InvalidXmlChar, addr 0x42ab450, size 0xb4, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<uint8_t> InvalidXmlChar(int32_t ch, ::cordl_internals::Ptr<uint8_t> pDst, bool entitize);

  /// @brief Method IsSurrogateByte, addr 0x42ab758, size 0x10, virtual false, abstract: false, final false
  static inline bool IsSurrogateByte(uint8_t b);

  /// @brief Method LineFeedEntity, addr 0x42ab2a0, size 0x20, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<uint8_t> LineFeedEntity(::cordl_internals::Ptr<uint8_t> pDst);

  /// @brief Method LtEntity, addr 0x42ab220, size 0x10, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<uint8_t> LtEntity(::cordl_internals::Ptr<uint8_t> pDst);

  static inline ::System::Xml::XmlUtf8RawTextWriter* New_ctor(::System::Xml::XmlWriterSettings* settings);

  static inline ::System::Xml::XmlUtf8RawTextWriter* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method QuoteEntity, addr 0x42ab240, size 0x20, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<uint8_t> QuoteEntity(::cordl_internals::Ptr<uint8_t> pDst);

  /// @brief Method RawEndCData, addr 0x42ab714, size 0x1c, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<uint8_t> RawEndCData(::cordl_internals::Ptr<uint8_t> pDst);

  /// @brief Method RawStartCData, addr 0x42ab730, size 0x28, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<uint8_t> RawStartCData(::cordl_internals::Ptr<uint8_t> pDst);

  /// @brief Method RawText, addr 0x42ab598, size 0x17c, virtual false, abstract: false, final false
  inline void RawText(::cordl_internals::Ptr<char16_t> pSrcBegin, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method RawText, addr 0x42a8dd8, size 0x3c, virtual false, abstract: false, final false
  inline void RawText(::StringW s);

  /// @brief Method StartElementContent, addr 0x42a9120, size 0x48, virtual true, abstract: false, final false
  inline void StartElementContent();

  /// @brief Method TabEntity, addr 0x42ab260, size 0x20, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<uint8_t> TabEntity(::cordl_internals::Ptr<uint8_t> pDst);

  /// @brief Method ValidateContentChars, addr 0x42a87fc, size 0x340, virtual false, abstract: false, final false
  inline void ValidateContentChars(::StringW chars, ::StringW propertyName, bool allowOnlyWhitespace);

  /// @brief Method WriteAttributeTextBlock, addr 0x42aa4a0, size 0x2e8, virtual false, abstract: false, final false
  inline void WriteAttributeTextBlock(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method WriteCData, addr 0x42a96a8, size 0x25c, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteCDataSection, addr 0x42a9904, size 0x334, virtual false, abstract: false, final false
  inline void WriteCDataSection(::StringW text);

  /// @brief Method WriteCharEntity, addr 0x42aa284, size 0x1cc, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x42aabdc, size 0x40, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteComment, addr 0x42a9c38, size 0x158, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteCommentOrPi, addr 0x42a9d90, size 0x32c, virtual false, abstract: false, final false
  inline void WriteCommentOrPi(::StringW text, int32_t stopChar);

  /// @brief Method WriteDocType, addr 0x42a8e8c, size 0x1f0, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteElementTextBlock, addr 0x42aa788, size 0x2b8, virtual false, abstract: false, final false
  inline void WriteElementTextBlock(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method WriteEndAttribute, addr 0x42a94c0, size 0x4c, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndElement, addr 0x42a9168, size 0x158, virtual true, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEndNamespaceDeclaration, addr 0x42a965c, size 0x4c, virtual true, abstract: false, final false
  inline void WriteEndNamespaceDeclaration();

  /// @brief Method WriteEntityRef, addr 0x42aa1e4, size 0xa0, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteFullEndElement, addr 0x42a92c0, size 0xf4, virtual true, abstract: false, final false
  inline void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteNamespaceDeclaration, addr 0x42a950c, size 0x54, virtual true, abstract: false, final false
  inline void WriteNamespaceDeclaration(::StringW prefix, ::StringW namespaceName);

  /// @brief Method WriteNewLine, addr 0x42ab544, size 0x54, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<uint8_t> WriteNewLine(::cordl_internals::Ptr<uint8_t> pDst);

  /// @brief Method WriteProcessingInstruction, addr 0x42aa0bc, size 0x128, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteRaw, addr 0x42aac1c, size 0x40, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x42aae9c, size 0x48, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteRawWithCharChecking, addr 0x42aac5c, size 0x240, virtual false, abstract: false, final false
  inline void WriteRawWithCharChecking(::cordl_internals::Ptr<char16_t> pSrcBegin, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method WriteStartAttribute, addr 0x42a93b4, size 0x10c, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartElement, addr 0x42a907c, size 0xa4, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartNamespaceDeclaration, addr 0x42a9568, size 0xf4, virtual true, abstract: false, final false
  inline void WriteStartNamespaceDeclaration(::StringW prefix);

  /// @brief Method WriteString, addr 0x42aaa40, size 0x50, virtual true, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteSurrogateCharEntity, addr 0x42aaa90, size 0x14c, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteWhitespace, addr 0x42aa450, size 0x50, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  /// @brief Method WriteXmlDeclaration, addr 0x42a8c84, size 0x154, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone);

  /// @brief Method WriteXmlDeclaration, addr 0x42a8e14, size 0x78, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::StringW xmldecl);

  constexpr int32_t const& __cordl_internal_get_attrEndPos() const;

  constexpr int32_t& __cordl_internal_get_attrEndPos();

  constexpr bool const& __cordl_internal_get_autoXmlDeclaration() const;

  constexpr bool& __cordl_internal_get_autoXmlDeclaration();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_bufBytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_bufBytes();

  constexpr int32_t const& __cordl_internal_get_bufLen() const;

  constexpr int32_t& __cordl_internal_get_bufLen();

  constexpr int32_t const& __cordl_internal_get_bufPos() const;

  constexpr int32_t& __cordl_internal_get_bufPos();

  constexpr int32_t const& __cordl_internal_get_cdataPos() const;

  constexpr int32_t& __cordl_internal_get_cdataPos();

  constexpr bool const& __cordl_internal_get_checkCharacters() const;

  constexpr bool& __cordl_internal_get_checkCharacters();

  constexpr bool const& __cordl_internal_get_closeOutput() const;

  constexpr bool& __cordl_internal_get_closeOutput();

  constexpr int32_t const& __cordl_internal_get_contentPos() const;

  constexpr int32_t& __cordl_internal_get_contentPos();

  constexpr ::System::Text::Encoding*& __cordl_internal_get_encoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __cordl_internal_get_encoding() const;

  constexpr bool const& __cordl_internal_get_hadDoubleBracket() const;

  constexpr bool& __cordl_internal_get_hadDoubleBracket();

  constexpr bool const& __cordl_internal_get_inAttributeValue() const;

  constexpr bool& __cordl_internal_get_inAttributeValue();

  constexpr bool const& __cordl_internal_get_mergeCDataSections() const;

  constexpr bool& __cordl_internal_get_mergeCDataSections();

  constexpr ::StringW const& __cordl_internal_get_newLineChars() const;

  constexpr ::StringW& __cordl_internal_get_newLineChars();

  constexpr ::System::Xml::NewLineHandling const& __cordl_internal_get_newLineHandling() const;

  constexpr ::System::Xml::NewLineHandling& __cordl_internal_get_newLineHandling();

  constexpr bool const& __cordl_internal_get_omitXmlDeclaration() const;

  constexpr bool& __cordl_internal_get_omitXmlDeclaration();

  constexpr ::System::Xml::XmlOutputMethod const& __cordl_internal_get_outputMethod() const;

  constexpr ::System::Xml::XmlOutputMethod& __cordl_internal_get_outputMethod();

  constexpr ::System::Xml::XmlStandalone const& __cordl_internal_get_standalone() const;

  constexpr ::System::Xml::XmlStandalone& __cordl_internal_get_standalone();

  constexpr ::System::IO::Stream*& __cordl_internal_get_stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_stream() const;

  constexpr int32_t const& __cordl_internal_get_textPos() const;

  constexpr int32_t& __cordl_internal_get_textPos();

  constexpr bool const& __cordl_internal_get_useAsync() const;

  constexpr bool& __cordl_internal_get_useAsync();

  constexpr bool const& __cordl_internal_get_writeToNull() const;

  constexpr bool& __cordl_internal_get_writeToNull();

  constexpr ::System::Xml::XmlCharType const& __cordl_internal_get_xmlCharType() const;

  constexpr ::System::Xml::XmlCharType& __cordl_internal_get_xmlCharType();

  constexpr void __cordl_internal_set_attrEndPos(int32_t value);

  constexpr void __cordl_internal_set_autoXmlDeclaration(bool value);

  constexpr void __cordl_internal_set_bufBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_bufLen(int32_t value);

  constexpr void __cordl_internal_set_bufPos(int32_t value);

  constexpr void __cordl_internal_set_cdataPos(int32_t value);

  constexpr void __cordl_internal_set_checkCharacters(bool value);

  constexpr void __cordl_internal_set_closeOutput(bool value);

  constexpr void __cordl_internal_set_contentPos(int32_t value);

  constexpr void __cordl_internal_set_encoding(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set_hadDoubleBracket(bool value);

  constexpr void __cordl_internal_set_inAttributeValue(bool value);

  constexpr void __cordl_internal_set_mergeCDataSections(bool value);

  constexpr void __cordl_internal_set_newLineChars(::StringW value);

  constexpr void __cordl_internal_set_newLineHandling(::System::Xml::NewLineHandling value);

  constexpr void __cordl_internal_set_omitXmlDeclaration(bool value);

  constexpr void __cordl_internal_set_outputMethod(::System::Xml::XmlOutputMethod value);

  constexpr void __cordl_internal_set_standalone(::System::Xml::XmlStandalone value);

  constexpr void __cordl_internal_set_stream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_textPos(int32_t value);

  constexpr void __cordl_internal_set_useAsync(bool value);

  constexpr void __cordl_internal_set_writeToNull(bool value);

  constexpr void __cordl_internal_set_xmlCharType(::System::Xml::XmlCharType value);

  /// @brief Method .ctor, addr 0x42a8720, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlWriterSettings* settings);

  /// @brief Method .ctor, addr 0x42a8b3c, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method get_SupportsNamespaceDeclarationInChunks, addr 0x42a9560, size 0x8, virtual true, abstract: false, final false
  inline bool get_SupportsNamespaceDeclarationInChunks();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlUtf8RawTextWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlUtf8RawTextWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlUtf8RawTextWriter(XmlUtf8RawTextWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlUtf8RawTextWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlUtf8RawTextWriter(XmlUtf8RawTextWriter const&) = delete;

  /// @brief Field useAsync, offset: 0x28, size: 0x1, def value: None
  bool ___useAsync;

  /// @brief Field bufBytes, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___bufBytes;

  /// @brief Field stream, offset: 0x38, size: 0x8, def value: None
  ::System::IO::Stream* ___stream;

  /// @brief Field encoding, offset: 0x40, size: 0x8, def value: None
  ::System::Text::Encoding* ___encoding;

  /// @brief Field xmlCharType, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::XmlCharType ___xmlCharType;

  /// @brief Field bufPos, offset: 0x50, size: 0x4, def value: None
  int32_t ___bufPos;

  /// @brief Field textPos, offset: 0x54, size: 0x4, def value: None
  int32_t ___textPos;

  /// @brief Field contentPos, offset: 0x58, size: 0x4, def value: None
  int32_t ___contentPos;

  /// @brief Field cdataPos, offset: 0x5c, size: 0x4, def value: None
  int32_t ___cdataPos;

  /// @brief Field attrEndPos, offset: 0x60, size: 0x4, def value: None
  int32_t ___attrEndPos;

  /// @brief Field bufLen, offset: 0x64, size: 0x4, def value: None
  int32_t ___bufLen;

  /// @brief Field writeToNull, offset: 0x68, size: 0x1, def value: None
  bool ___writeToNull;

  /// @brief Field hadDoubleBracket, offset: 0x69, size: 0x1, def value: None
  bool ___hadDoubleBracket;

  /// @brief Field inAttributeValue, offset: 0x6a, size: 0x1, def value: None
  bool ___inAttributeValue;

  /// @brief Field newLineHandling, offset: 0x6c, size: 0x4, def value: None
  ::System::Xml::NewLineHandling ___newLineHandling;

  /// @brief Field closeOutput, offset: 0x70, size: 0x1, def value: None
  bool ___closeOutput;

  /// @brief Field omitXmlDeclaration, offset: 0x71, size: 0x1, def value: None
  bool ___omitXmlDeclaration;

  /// @brief Field newLineChars, offset: 0x78, size: 0x8, def value: None
  ::StringW ___newLineChars;

  /// @brief Field checkCharacters, offset: 0x80, size: 0x1, def value: None
  bool ___checkCharacters;

  /// @brief Field standalone, offset: 0x84, size: 0x4, def value: None
  ::System::Xml::XmlStandalone ___standalone;

  /// @brief Field outputMethod, offset: 0x88, size: 0x4, def value: None
  ::System::Xml::XmlOutputMethod ___outputMethod;

  /// @brief Field autoXmlDeclaration, offset: 0x8c, size: 0x1, def value: None
  bool ___autoXmlDeclaration;

  /// @brief Field mergeCDataSections, offset: 0x8d, size: 0x1, def value: None
  bool ___mergeCDataSections;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7220 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlUtf8RawTextWriter, 0x90>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___useAsync) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___bufBytes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___stream) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___encoding) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___xmlCharType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___bufPos) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___textPos) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___contentPos) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___cdataPos) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___attrEndPos) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___bufLen) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___writeToNull) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___hadDoubleBracket) == 0x69, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___inAttributeValue) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___newLineHandling) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___closeOutput) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___omitXmlDeclaration) == 0x71, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___newLineChars) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___checkCharacters) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___standalone) == 0x84, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___outputMethod) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___autoXmlDeclaration) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUtf8RawTextWriter, ___mergeCDataSections) == 0x8d, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlUtf8RawTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlUtf8RawTextWriter*, "System.Xml", "XmlUtf8RawTextWriter");
