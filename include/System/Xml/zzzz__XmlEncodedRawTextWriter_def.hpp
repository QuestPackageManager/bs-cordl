#pragma once
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
CORDL_MODULE_EXPORT(XmlEncodedRawTextWriter)
namespace System::IO {
class Stream;
}
namespace System::IO {
class TextWriter;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
class CharEntityEncoderFallback;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Xml {
class XmlWriterSettings;
}
// Forward declare root types
namespace System::Xml {
class XmlEncodedRawTextWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlEncodedRawTextWriter);
// Type: System.Xml::XmlEncodedRawTextWriter
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 182, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11333)), TypeDefinitionIndex(TypeDefinitionIndex(11353)), TypeDefinitionIndex(TypeDefinitionIndex(11390)),
// TypeDefinitionIndex(TypeDefinitionIndex(11392)), TypeDefinitionIndex(TypeDefinitionIndex(11442))] Self: TypeDefinitionIndex(TypeDefinitionIndex(11347)) CS Name:
// ::System.Xml::XmlEncodedRawTextWriter*
class CORDL_TYPE XmlEncodedRawTextWriter : public ::System::Xml::XmlRawWriter {
public:
  // Declarations
  /// @brief Field useAsync, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_useAsync, put = __cordl_internal_set_useAsync)) bool useAsync;

  /// @brief Field bufBytes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_bufBytes, put = __cordl_internal_set_bufBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> bufBytes;

  /// @brief Field stream, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_stream, put = __cordl_internal_set_stream))::System::IO::Stream* stream;

  /// @brief Field encoding, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_encoding, put = __cordl_internal_set_encoding))::System::Text::Encoding* encoding;

  /// @brief Field xmlCharType, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlCharType, put = __cordl_internal_set_xmlCharType))::System::Xml::XmlCharType xmlCharType;

  /// @brief Field bufPos, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_bufPos, put = __cordl_internal_set_bufPos)) int32_t bufPos;

  /// @brief Field textPos, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_textPos, put = __cordl_internal_set_textPos)) int32_t textPos;

  /// @brief Field contentPos, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_contentPos, put = __cordl_internal_set_contentPos)) int32_t contentPos;

  /// @brief Field cdataPos, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_cdataPos, put = __cordl_internal_set_cdataPos)) int32_t cdataPos;

  /// @brief Field attrEndPos, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_attrEndPos, put = __cordl_internal_set_attrEndPos)) int32_t attrEndPos;

  /// @brief Field bufLen, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_bufLen, put = __cordl_internal_set_bufLen)) int32_t bufLen;

  /// @brief Field writeToNull, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_writeToNull, put = __cordl_internal_set_writeToNull)) bool writeToNull;

  /// @brief Field hadDoubleBracket, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_hadDoubleBracket, put = __cordl_internal_set_hadDoubleBracket)) bool hadDoubleBracket;

  /// @brief Field inAttributeValue, offset 0x62, size 0x1
  __declspec(property(get = __cordl_internal_get_inAttributeValue, put = __cordl_internal_set_inAttributeValue)) bool inAttributeValue;

  /// @brief Field bufBytesUsed, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_bufBytesUsed, put = __cordl_internal_set_bufBytesUsed)) int32_t bufBytesUsed;

  /// @brief Field bufChars, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_bufChars, put = __cordl_internal_set_bufChars))::ArrayW<char16_t, ::Array<char16_t>*> bufChars;

  /// @brief Field encoder, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_encoder, put = __cordl_internal_set_encoder))::System::Text::Encoder* encoder;

  /// @brief Field writer, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_writer, put = __cordl_internal_set_writer))::System::IO::TextWriter* writer;

  /// @brief Field trackTextContent, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_trackTextContent, put = __cordl_internal_set_trackTextContent)) bool trackTextContent;

  /// @brief Field inTextContent, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get_inTextContent, put = __cordl_internal_set_inTextContent)) bool inTextContent;

  /// @brief Field lastMarkPos, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_lastMarkPos, put = __cordl_internal_set_lastMarkPos)) int32_t lastMarkPos;

  /// @brief Field textContentMarks, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_textContentMarks, put = __cordl_internal_set_textContentMarks))::ArrayW<int32_t, ::Array<int32_t>*> textContentMarks;

  /// @brief Field charEntityFallback, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_charEntityFallback, put = __cordl_internal_set_charEntityFallback))::System::Xml::CharEntityEncoderFallback* charEntityFallback;

  /// @brief Field newLineHandling, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_newLineHandling, put = __cordl_internal_set_newLineHandling))::System::Xml::NewLineHandling newLineHandling;

  /// @brief Field closeOutput, offset 0x9c, size 0x1
  __declspec(property(get = __cordl_internal_get_closeOutput, put = __cordl_internal_set_closeOutput)) bool closeOutput;

  /// @brief Field omitXmlDeclaration, offset 0x9d, size 0x1
  __declspec(property(get = __cordl_internal_get_omitXmlDeclaration, put = __cordl_internal_set_omitXmlDeclaration)) bool omitXmlDeclaration;

  /// @brief Field newLineChars, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_newLineChars, put = __cordl_internal_set_newLineChars))::StringW newLineChars;

  /// @brief Field checkCharacters, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get_checkCharacters, put = __cordl_internal_set_checkCharacters)) bool checkCharacters;

  /// @brief Field standalone, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get_standalone, put = __cordl_internal_set_standalone))::System::Xml::XmlStandalone standalone;

  /// @brief Field outputMethod, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_outputMethod, put = __cordl_internal_set_outputMethod))::System::Xml::XmlOutputMethod outputMethod;

  /// @brief Field autoXmlDeclaration, offset 0xb4, size 0x1
  __declspec(property(get = __cordl_internal_get_autoXmlDeclaration, put = __cordl_internal_set_autoXmlDeclaration)) bool autoXmlDeclaration;

  /// @brief Field mergeCDataSections, offset 0xb5, size 0x1
  __declspec(property(get = __cordl_internal_get_mergeCDataSections, put = __cordl_internal_set_mergeCDataSections)) bool mergeCDataSections;

  __declspec(property(get = get_SupportsNamespaceDeclarationInChunks)) bool SupportsNamespaceDeclarationInChunks;

  constexpr bool& __cordl_internal_get_useAsync();

  constexpr bool const& __cordl_internal_get_useAsync() const;

  constexpr void __cordl_internal_set_useAsync(bool value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_bufBytes();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_bufBytes() const;

  constexpr void __cordl_internal_set_bufBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::IO::Stream*& __cordl_internal_get_stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_stream() const;

  constexpr void __cordl_internal_set_stream(::System::IO::Stream* value);

  constexpr ::System::Text::Encoding*& __cordl_internal_get_encoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __cordl_internal_get_encoding() const;

  constexpr void __cordl_internal_set_encoding(::System::Text::Encoding* value);

  constexpr ::System::Xml::XmlCharType& __cordl_internal_get_xmlCharType();

  constexpr ::System::Xml::XmlCharType const& __cordl_internal_get_xmlCharType() const;

  constexpr void __cordl_internal_set_xmlCharType(::System::Xml::XmlCharType value);

  constexpr int32_t& __cordl_internal_get_bufPos();

  constexpr int32_t const& __cordl_internal_get_bufPos() const;

  constexpr void __cordl_internal_set_bufPos(int32_t value);

  constexpr int32_t& __cordl_internal_get_textPos();

  constexpr int32_t const& __cordl_internal_get_textPos() const;

  constexpr void __cordl_internal_set_textPos(int32_t value);

  constexpr int32_t& __cordl_internal_get_contentPos();

  constexpr int32_t const& __cordl_internal_get_contentPos() const;

  constexpr void __cordl_internal_set_contentPos(int32_t value);

  constexpr int32_t& __cordl_internal_get_cdataPos();

  constexpr int32_t const& __cordl_internal_get_cdataPos() const;

  constexpr void __cordl_internal_set_cdataPos(int32_t value);

  constexpr int32_t& __cordl_internal_get_attrEndPos();

  constexpr int32_t const& __cordl_internal_get_attrEndPos() const;

  constexpr void __cordl_internal_set_attrEndPos(int32_t value);

  constexpr int32_t& __cordl_internal_get_bufLen();

  constexpr int32_t const& __cordl_internal_get_bufLen() const;

  constexpr void __cordl_internal_set_bufLen(int32_t value);

  constexpr bool& __cordl_internal_get_writeToNull();

  constexpr bool const& __cordl_internal_get_writeToNull() const;

  constexpr void __cordl_internal_set_writeToNull(bool value);

  constexpr bool& __cordl_internal_get_hadDoubleBracket();

  constexpr bool const& __cordl_internal_get_hadDoubleBracket() const;

  constexpr void __cordl_internal_set_hadDoubleBracket(bool value);

  constexpr bool& __cordl_internal_get_inAttributeValue();

  constexpr bool const& __cordl_internal_get_inAttributeValue() const;

  constexpr void __cordl_internal_set_inAttributeValue(bool value);

  constexpr int32_t& __cordl_internal_get_bufBytesUsed();

  constexpr int32_t const& __cordl_internal_get_bufBytesUsed() const;

  constexpr void __cordl_internal_set_bufBytesUsed(int32_t value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_bufChars();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_bufChars() const;

  constexpr void __cordl_internal_set_bufChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr ::System::Text::Encoder*& __cordl_internal_get_encoder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoder*> const& __cordl_internal_get_encoder() const;

  constexpr void __cordl_internal_set_encoder(::System::Text::Encoder* value);

  constexpr ::System::IO::TextWriter*& __cordl_internal_get_writer();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::TextWriter*> const& __cordl_internal_get_writer() const;

  constexpr void __cordl_internal_set_writer(::System::IO::TextWriter* value);

  constexpr bool& __cordl_internal_get_trackTextContent();

  constexpr bool const& __cordl_internal_get_trackTextContent() const;

  constexpr void __cordl_internal_set_trackTextContent(bool value);

  constexpr bool& __cordl_internal_get_inTextContent();

  constexpr bool const& __cordl_internal_get_inTextContent() const;

  constexpr void __cordl_internal_set_inTextContent(bool value);

  constexpr int32_t& __cordl_internal_get_lastMarkPos();

  constexpr int32_t const& __cordl_internal_get_lastMarkPos() const;

  constexpr void __cordl_internal_set_lastMarkPos(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_textContentMarks();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_textContentMarks() const;

  constexpr void __cordl_internal_set_textContentMarks(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::System::Xml::CharEntityEncoderFallback*& __cordl_internal_get_charEntityFallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::CharEntityEncoderFallback*> const& __cordl_internal_get_charEntityFallback() const;

  constexpr void __cordl_internal_set_charEntityFallback(::System::Xml::CharEntityEncoderFallback* value);

  constexpr ::System::Xml::NewLineHandling& __cordl_internal_get_newLineHandling();

  constexpr ::System::Xml::NewLineHandling const& __cordl_internal_get_newLineHandling() const;

  constexpr void __cordl_internal_set_newLineHandling(::System::Xml::NewLineHandling value);

  constexpr bool& __cordl_internal_get_closeOutput();

  constexpr bool const& __cordl_internal_get_closeOutput() const;

  constexpr void __cordl_internal_set_closeOutput(bool value);

  constexpr bool& __cordl_internal_get_omitXmlDeclaration();

  constexpr bool const& __cordl_internal_get_omitXmlDeclaration() const;

  constexpr void __cordl_internal_set_omitXmlDeclaration(bool value);

  constexpr ::StringW& __cordl_internal_get_newLineChars();

  constexpr ::StringW const& __cordl_internal_get_newLineChars() const;

  constexpr void __cordl_internal_set_newLineChars(::StringW value);

  constexpr bool& __cordl_internal_get_checkCharacters();

  constexpr bool const& __cordl_internal_get_checkCharacters() const;

  constexpr void __cordl_internal_set_checkCharacters(bool value);

  constexpr ::System::Xml::XmlStandalone& __cordl_internal_get_standalone();

  constexpr ::System::Xml::XmlStandalone const& __cordl_internal_get_standalone() const;

  constexpr void __cordl_internal_set_standalone(::System::Xml::XmlStandalone value);

  constexpr ::System::Xml::XmlOutputMethod& __cordl_internal_get_outputMethod();

  constexpr ::System::Xml::XmlOutputMethod const& __cordl_internal_get_outputMethod() const;

  constexpr void __cordl_internal_set_outputMethod(::System::Xml::XmlOutputMethod value);

  constexpr bool& __cordl_internal_get_autoXmlDeclaration();

  constexpr bool const& __cordl_internal_get_autoXmlDeclaration() const;

  constexpr void __cordl_internal_set_autoXmlDeclaration(bool value);

  constexpr bool& __cordl_internal_get_mergeCDataSections();

  constexpr bool const& __cordl_internal_get_mergeCDataSections() const;

  constexpr void __cordl_internal_set_mergeCDataSections(bool value);

  static inline ::System::Xml::XmlEncodedRawTextWriter* New_ctor(::System::Xml::XmlWriterSettings* settings);

  /// @brief Method .ctor, addr 0x2859d30, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlWriterSettings* settings);

  static inline ::System::Xml::XmlEncodedRawTextWriter* New_ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method .ctor, addr 0x28526f0, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  static inline ::System::Xml::XmlEncodedRawTextWriter* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method .ctor, addr 0x2852968, size 0x288, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method WriteXmlDeclaration, addr 0x285a16c, size 0x17c, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone);

  /// @brief Method WriteXmlDeclaration, addr 0x285a2e8, size 0x78, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::StringW xmldecl);

  /// @brief Method WriteDocType, addr 0x285a360, size 0x1ec, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteStartElement, addr 0x2853114, size 0xc8, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method StartElementContent, addr 0x285a54c, size 0x44, virtual true, abstract: false, final false
  inline void StartElementContent();

  /// @brief Method WriteEndElement, addr 0x2853424, size 0x170, virtual true, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteFullEndElement, addr 0x285368c, size 0x108, virtual true, abstract: false, final false
  inline void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartAttribute, addr 0x2853904, size 0x120, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEndAttribute, addr 0x285a590, size 0x68, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteNamespaceDeclaration, addr 0x285a5f8, size 0x54, virtual true, abstract: false, final false
  inline void WriteNamespaceDeclaration(::StringW prefix, ::StringW namespaceName);

  /// @brief Method get_SupportsNamespaceDeclarationInChunks, addr 0x285a64c, size 0x8, virtual true, abstract: false, final false
  inline bool get_SupportsNamespaceDeclarationInChunks();

  /// @brief Method WriteStartNamespaceDeclaration, addr 0x285a654, size 0x124, virtual true, abstract: false, final false
  inline void WriteStartNamespaceDeclaration(::StringW prefix);

  /// @brief Method WriteEndNamespaceDeclaration, addr 0x285a778, size 0x68, virtual true, abstract: false, final false
  inline void WriteEndNamespaceDeclaration();

  /// @brief Method WriteCData, addr 0x285a7e0, size 0x1e0, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteComment, addr 0x285acd0, size 0x12c, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteProcessingInstruction, addr 0x285adfc, size 0x12c, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteEntityRef, addr 0x285af28, size 0xcc, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteCharEntity, addr 0x285aff4, size 0x1c4, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteWhitespace, addr 0x285b1b8, size 0x6c, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  /// @brief Method WriteString, addr 0x285b224, size 0x6c, virtual true, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteSurrogateCharEntity, addr 0x285b290, size 0x148, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteChars, addr 0x285b3d8, size 0x88, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x2858160, size 0x7c, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x28580b8, size 0x64, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method Close, addr 0x285b684, size 0x7c, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0x285b79c, size 0x58, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method FlushBuffer, addr 0x2855538, size 0x1f8, virtual true, abstract: false, final false
  inline void FlushBuffer();

  /// @brief Method EncodeChars, addr 0x285b7f4, size 0x134, virtual false, abstract: false, final false
  inline void EncodeChars(int32_t startOffset, int32_t endOffset, bool writeAllToStream);

  /// @brief Method FlushEncoder, addr 0x285b700, size 0x9c, virtual false, abstract: false, final false
  inline void FlushEncoder();

  /// @brief Method WriteAttributeTextBlock, addr 0x28541e8, size 0x2f4, virtual false, abstract: false, final false
  inline void WriteAttributeTextBlock(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method WriteElementTextBlock, addr 0x28544dc, size 0x2b0, virtual false, abstract: false, final false
  inline void WriteElementTextBlock(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method RawText, addr 0x2852e94, size 0x3c, virtual false, abstract: false, final false
  inline void RawText(::StringW s);

  /// @brief Method RawText, addr 0x28547b4, size 0x174, virtual false, abstract: false, final false
  inline void RawText(::cordl_internals::Ptr<char16_t> pSrcBegin, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method WriteRawWithCharChecking, addr 0x285b460, size 0x224, virtual false, abstract: false, final false
  inline void WriteRawWithCharChecking(::cordl_internals::Ptr<char16_t> pSrcBegin, ::cordl_internals::Ptr<char16_t> pSrcEnd);

  /// @brief Method WriteCommentOrPi, addr 0x2853c70, size 0x314, virtual false, abstract: false, final false
  inline void WriteCommentOrPi(::StringW text, int32_t stopChar);

  /// @brief Method WriteCDataSection, addr 0x285a9c0, size 0x310, virtual false, abstract: false, final false
  inline void WriteCDataSection(::StringW text);

  /// @brief Method EncodeSurrogate, addr 0x285b980, size 0x160, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> EncodeSurrogate(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd, ::cordl_internals::Ptr<char16_t> pDst);

  /// @brief Method InvalidXmlChar, addr 0x285bae0, size 0x6c, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<char16_t> InvalidXmlChar(int32_t ch, ::cordl_internals::Ptr<char16_t> pDst, bool entitize);

  /// @brief Method EncodeChar, addr 0x285501c, size 0xa4, virtual false, abstract: false, final false
  inline void EncodeChar(ByRef<::cordl_internals::Ptr<char16_t>> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd, ByRef<::cordl_internals::Ptr<char16_t>> pDst);

  /// @brief Method ChangeTextContentMark, addr 0x2852e20, size 0x74, virtual false, abstract: false, final false
  inline void ChangeTextContentMark(bool value);

  /// @brief Method GrowTextContentMarks, addr 0x285bcb0, size 0x80, virtual false, abstract: false, final false
  inline void GrowTextContentMarks();

  /// @brief Method WriteNewLine, addr 0x285bb4c, size 0x5c, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<char16_t> WriteNewLine(::cordl_internals::Ptr<char16_t> pDst);

  /// @brief Method LtEntity, addr 0x285b928, size 0x18, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> LtEntity(::cordl_internals::Ptr<char16_t> pDst);

  /// @brief Method GtEntity, addr 0x285b940, size 0x18, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> GtEntity(::cordl_internals::Ptr<char16_t> pDst);

  /// @brief Method AmpEntity, addr 0x2854f78, size 0x28, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> AmpEntity(::cordl_internals::Ptr<char16_t> pDst);

  /// @brief Method QuoteEntity, addr 0x2854fa0, size 0x2c, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> QuoteEntity(::cordl_internals::Ptr<char16_t> pDst);

  /// @brief Method TabEntity, addr 0x285b958, size 0x28, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> TabEntity(::cordl_internals::Ptr<char16_t> pDst);

  /// @brief Method LineFeedEntity, addr 0x2854ff4, size 0x28, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> LineFeedEntity(::cordl_internals::Ptr<char16_t> pDst);

  /// @brief Method CarriageReturnEntity, addr 0x2854fcc, size 0x28, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> CarriageReturnEntity(::cordl_internals::Ptr<char16_t> pDst);

  /// @brief Method CharEntity, addr 0x285bc00, size 0xb0, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> CharEntity(::cordl_internals::Ptr<char16_t> pDst, char16_t ch);

  /// @brief Method RawStartCData, addr 0x285bbc8, size 0x38, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> RawStartCData(::cordl_internals::Ptr<char16_t> pDst);

  /// @brief Method RawEndCData, addr 0x285bba8, size 0x20, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> RawEndCData(::cordl_internals::Ptr<char16_t> pDst);

  /// @brief Method ValidateContentChars, addr 0x2859e0c, size 0x360, virtual false, abstract: false, final false
  inline void ValidateContentChars(::StringW chars, ::StringW propertyName, bool allowOnlyWhitespace);

  // Ctor Parameters [CppParam { name: "", ty: "XmlEncodedRawTextWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlEncodedRawTextWriter(XmlEncodedRawTextWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlEncodedRawTextWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlEncodedRawTextWriter(XmlEncodedRawTextWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlEncodedRawTextWriter();

public:
  /// @brief Field useAsync, offset: 0x20, size: 0x1, def value: None
  bool ___useAsync;

  /// @brief Field bufBytes, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___bufBytes;

  /// @brief Field stream, offset: 0x30, size: 0x8, def value: None
  ::System::IO::Stream* ___stream;

  /// @brief Field encoding, offset: 0x38, size: 0x8, def value: None
  ::System::Text::Encoding* ___encoding;

  /// @brief Field xmlCharType, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::XmlCharType ___xmlCharType;

  /// @brief Field bufPos, offset: 0x48, size: 0x4, def value: None
  int32_t ___bufPos;

  /// @brief Field textPos, offset: 0x4c, size: 0x4, def value: None
  int32_t ___textPos;

  /// @brief Field contentPos, offset: 0x50, size: 0x4, def value: None
  int32_t ___contentPos;

  /// @brief Field cdataPos, offset: 0x54, size: 0x4, def value: None
  int32_t ___cdataPos;

  /// @brief Field attrEndPos, offset: 0x58, size: 0x4, def value: None
  int32_t ___attrEndPos;

  /// @brief Field bufLen, offset: 0x5c, size: 0x4, def value: None
  int32_t ___bufLen;

  /// @brief Field writeToNull, offset: 0x60, size: 0x1, def value: None
  bool ___writeToNull;

  /// @brief Field hadDoubleBracket, offset: 0x61, size: 0x1, def value: None
  bool ___hadDoubleBracket;

  /// @brief Field inAttributeValue, offset: 0x62, size: 0x1, def value: None
  bool ___inAttributeValue;

  /// @brief Field bufBytesUsed, offset: 0x64, size: 0x4, def value: None
  int32_t ___bufBytesUsed;

  /// @brief Field bufChars, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___bufChars;

  /// @brief Field encoder, offset: 0x70, size: 0x8, def value: None
  ::System::Text::Encoder* ___encoder;

  /// @brief Field writer, offset: 0x78, size: 0x8, def value: None
  ::System::IO::TextWriter* ___writer;

  /// @brief Field trackTextContent, offset: 0x80, size: 0x1, def value: None
  bool ___trackTextContent;

  /// @brief Field inTextContent, offset: 0x81, size: 0x1, def value: None
  bool ___inTextContent;

  /// @brief Field lastMarkPos, offset: 0x84, size: 0x4, def value: None
  int32_t ___lastMarkPos;

  /// @brief Field textContentMarks, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___textContentMarks;

  /// @brief Field charEntityFallback, offset: 0x90, size: 0x8, def value: None
  ::System::Xml::CharEntityEncoderFallback* ___charEntityFallback;

  /// @brief Field newLineHandling, offset: 0x98, size: 0x4, def value: None
  ::System::Xml::NewLineHandling ___newLineHandling;

  /// @brief Field closeOutput, offset: 0x9c, size: 0x1, def value: None
  bool ___closeOutput;

  /// @brief Field omitXmlDeclaration, offset: 0x9d, size: 0x1, def value: None
  bool ___omitXmlDeclaration;

  /// @brief Field newLineChars, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___newLineChars;

  /// @brief Field checkCharacters, offset: 0xa8, size: 0x1, def value: None
  bool ___checkCharacters;

  /// @brief Field standalone, offset: 0xac, size: 0x4, def value: None
  ::System::Xml::XmlStandalone ___standalone;

  /// @brief Field outputMethod, offset: 0xb0, size: 0x4, def value: None
  ::System::Xml::XmlOutputMethod ___outputMethod;

  /// @brief Field autoXmlDeclaration, offset: 0xb4, size: 0x1, def value: None
  bool ___autoXmlDeclaration;

  /// @brief Field mergeCDataSections, offset: 0xb5, size: 0x1, def value: None
  bool ___mergeCDataSections;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlEncodedRawTextWriter, 0xb8>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___useAsync) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___bufBytes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___stream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___encoding) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___xmlCharType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___bufPos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___textPos) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___contentPos) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___cdataPos) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___attrEndPos) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___bufLen) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___writeToNull) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___hadDoubleBracket) == 0x61, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___inAttributeValue) == 0x62, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___bufBytesUsed) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___bufChars) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___encoder) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___writer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___trackTextContent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___inTextContent) == 0x81, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___lastMarkPos) == 0x84, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___textContentMarks) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___charEntityFallback) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___newLineHandling) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___closeOutput) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___omitXmlDeclaration) == 0x9d, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___newLineChars) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___checkCharacters) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___standalone) == 0xac, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___outputMethod) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___autoXmlDeclaration) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEncodedRawTextWriter, ___mergeCDataSections) == 0xb5, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlEncodedRawTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlEncodedRawTextWriter*, "System.Xml", "XmlEncodedRawTextWriter");
