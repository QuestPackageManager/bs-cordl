#pragma once
// IWYU pragma private; include "System/Xml/XmlBinaryNodeWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlStreamNodeWriter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlBinaryNodeWriter)
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
namespace System::Xml {
class IXmlDictionary;
}
namespace System::Xml {
class UniqueId;
}
namespace System::Xml {
struct XmlBinaryNodeType;
}
namespace System::Xml {
struct XmlBinaryNodeWriter_AttributeValue;
}
namespace System::Xml {
class XmlBinaryWriterSession;
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
class XmlBinaryNodeWriter;
}
namespace System::Xml {
struct XmlBinaryNodeWriter_AttributeValue;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlBinaryNodeWriter*);
MARK_VAL_T(::System::Xml::XmlBinaryNodeWriter_AttributeValue);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlBinaryNodeWriter*, "System.Xml", "XmlBinaryNodeWriter");
DEFINE_IL2CPP_CLASS(::System::Xml::XmlBinaryNodeWriter_AttributeValue, "System.Xml", "XmlBinaryNodeWriter/AttributeValue");
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlBinaryNodeWriter/AttributeValue
struct CORDL_TYPE XmlBinaryNodeWriter_AttributeValue {
public:
  // Declarations
  /// @brief Method Clear, addr 0x6538c64, size 0xc, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method WriteBase64Text, addr 0x653a060, size 0x1b0, virtual false, abstract: false, final false
  inline void WriteBase64Text(::ArrayW<uint8_t> trailBytes, int32_t trailByteCount, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteText, addr 0x653a300, size 0x118, virtual false, abstract: false, final false
  inline void WriteText(::StringW s);

  /// @brief Method WriteText, addr 0x653a29c, size 0x2c, virtual false, abstract: false, final false
  inline void WriteText(::System::Xml::XmlDictionaryString* s);

  /// @brief Method WriteTo, addr 0x653962c, size 0xf0, virtual false, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlBinaryNodeWriter* writer);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBinaryNodeWriter_AttributeValue();

  // Ctor Parameters [CppParam { name: "captureText", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "captureXText", ty: "::System::Xml::XmlDictionaryString*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "captureStream", ty: "::System::IO::MemoryStream*", modifiers: "", def_value: None, comment: None }]
  constexpr XmlBinaryNodeWriter_AttributeValue(::StringW captureText, ::System::Xml::XmlDictionaryString* captureXText, ::System::IO::MemoryStream* captureStream) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16343 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field captureText, offset: 0x0, size: 0x8, def value: None
  ::StringW captureText;

  /// @brief Field captureXText, offset: 0x8, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryString* captureXText;

  /// @brief Field captureStream, offset: 0x10, size: 0x8, def value: None
  ::System::IO::MemoryStream* captureStream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBinaryNodeWriter_AttributeValue, captureText) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBinaryNodeWriter_AttributeValue, captureXText) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBinaryNodeWriter_AttributeValue, captureStream) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlBinaryNodeWriter_AttributeValue) == 0x18, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlBinaryNodeWriter::AttributeValue, System.Xml.XmlStreamNodeWriter
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBinaryNodeWriter
class CORDL_TYPE XmlBinaryNodeWriter : public ::System::Xml::XmlStreamNodeWriter {
public:
  // Declarations
  using AttributeValue = ::System::Xml::XmlBinaryNodeWriter_AttributeValue;

  /// @brief Field attributeValue, offset 0x48, size 0x18
  __declspec(property(get = __cordl_internal_get_attributeValue, put = __cordl_internal_set_attributeValue)) ::System::Xml::XmlBinaryNodeWriter_AttributeValue attributeValue;

  /// @brief Field dictionary, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_dictionary, put = __cordl_internal_set_dictionary)) ::System::Xml::IXmlDictionary* dictionary;

  /// @brief Field inAttribute, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_inAttribute, put = __cordl_internal_set_inAttribute)) bool inAttribute;

  /// @brief Field inList, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_inList, put = __cordl_internal_set_inList)) bool inList;

  /// @brief Field session, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_session, put = __cordl_internal_set_session)) ::System::Xml::XmlBinaryWriterSession* session;

  /// @brief Field textNodeOffset, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_textNodeOffset, put = __cordl_internal_set_textNodeOffset)) int32_t textNodeOffset;

  /// @brief Field wroteAttributeValue, offset 0x42, size 0x1
  __declspec(property(get = __cordl_internal_get_wroteAttributeValue, put = __cordl_internal_set_wroteAttributeValue)) bool wroteAttributeValue;

  /// @brief Method Close, addr 0x653b2c8, size 0x3c, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method FlushBuffer, addr 0x653b2a8, size 0x20, virtual true, abstract: false, final false
  inline void FlushBuffer();

  /// @brief Method GetTextNodeBuffer, addr 0x6538d44, size 0x64, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t> GetTextNodeBuffer(int32_t size, ::by_ref<int32_t> offset);

  static inline ::System::Xml::XmlBinaryNodeWriter* New_ctor();

  /// @brief Method SetOutput, addr 0x6538c3c, size 0x28, virtual false, abstract: false, final false
  inline void SetOutput(::System::IO::Stream* stream, ::System::Xml::IXmlDictionary* dictionary, ::System::Xml::XmlBinaryWriterSession* session, bool ownsStream);

  /// @brief Method TryGetKey, addr 0x6539258, size 0x160, virtual false, abstract: false, final false
  inline bool TryGetKey(::System::Xml::XmlDictionaryString* s, ::by_ref<int32_t> key);

  /// @brief Method UnsafeWriteArray, addr 0x653aed0, size 0x8, virtual false, abstract: false, final false
  inline void UnsafeWriteArray(uint8_t* array, int32_t byteCount);

  /// @brief Method UnsafeWriteArray, addr 0x653ae78, size 0x58, virtual false, abstract: false, final false
  inline void UnsafeWriteArray(::System::Xml::XmlBinaryNodeType nodeType, int32_t count, uint8_t* array, uint8_t* arrayMax);

  /// @brief Method UnsafeWriteName, addr 0x6539a3c, size 0xf0, virtual false, abstract: false, final false
  inline void UnsafeWriteName(char16_t* chars, int32_t charCount);

  /// @brief Method UnsafeWriteText, addr 0x653a418, size 0x1e0, virtual false, abstract: false, final false
  inline void UnsafeWriteText(char16_t* chars, int32_t charCount);

  /// @brief Method WriteArrayInfo, addr 0x653ae44, size 0x34, virtual false, abstract: false, final false
  inline void WriteArrayInfo(::System::Xml::XmlBinaryNodeType nodeType, int32_t count);

  /// @brief Method WriteArrayNode, addr 0x653ae20, size 0x24, virtual false, abstract: false, final false
  inline void WriteArrayNode();

  /// @brief Method WriteBase64Text, addr 0x6539ef8, size 0x168, virtual true, abstract: false, final false
  inline void WriteBase64Text(::ArrayW<uint8_t> trailBytes, int32_t trailByteCount, ::ArrayW<uint8_t> base64Buffer, int32_t base64Offset, int32_t base64Count);

  /// @brief Method WriteBoolText, addr 0x6539b7c, size 0x14, virtual true, abstract: false, final false
  inline void WriteBoolText(bool value);

  /// @brief Method WriteCData, addr 0x6539b64, size 0x10, virtual true, abstract: false, final false
  inline void WriteCData(::StringW value);

  /// @brief Method WriteCharEntity, addr 0x653a6fc, size 0xf8, virtual true, abstract: false, final false
  inline void WriteCharEntity(int32_t ch);

  /// @brief Method WriteComment, addr 0x6539b2c, size 0x38, virtual true, abstract: false, final false
  inline void WriteComment(::StringW value);

  /// @brief Method WriteDateTimeArray, addr 0x653aed8, size 0xf8, virtual false, abstract: false, final false
  inline void WriteDateTimeArray(::ArrayW<::System::DateTime> array, int32_t offset, int32_t count);

  /// @brief Method WriteDateTimeText, addr 0x653ab98, size 0x78, virtual true, abstract: false, final false
  inline void WriteDateTimeText(::System::DateTime dt);

  /// @brief Method WriteDecimalText, addr 0x653aabc, size 0xdc, virtual true, abstract: false, final false
  inline void WriteDecimalText(::System::Decimal d);

  /// @brief Method WriteDeclaration, addr 0x653905c, size 0x4, virtual true, abstract: false, final false
  inline void WriteDeclaration();

  /// @brief Method WriteDictionaryString, addr 0x65393b8, size 0x8, virtual false, abstract: false, final false
  inline void WriteDictionaryString(::System::Xml::XmlDictionaryString* s, int32_t key);

  /// @brief Method WriteDoubleText, addr 0x653a920, size 0x19c, virtual true, abstract: false, final false
  inline void WriteDoubleText(double_t d);

  /// @brief Method WriteEmptyText, addr 0x6539b74, size 0x8, virtual false, abstract: false, final false
  inline void WriteEmptyText();

  /// @brief Method WriteEndAttribute, addr 0x65395fc, size 0x30, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndElement, addr 0x65393cc, size 0x64, virtual false, abstract: false, final false
  inline void WriteEndElement();

  /// @brief Method WriteEndElement, addr 0x6539430, size 0x4, virtual true, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName);

  /// @brief Method WriteEndListText, addr 0x653adf4, size 0x2c, virtual true, abstract: false, final false
  inline void WriteEndListText();

  /// @brief Method WriteEndStartElement, addr 0x65393c0, size 0xc, virtual true, abstract: false, final false
  inline void WriteEndStartElement(bool isEmpty);

  /// @brief Method WriteEscapedText, addr 0x653a6dc, size 0x10, virtual true, abstract: false, final false
  inline void WriteEscapedText(::ArrayW<char16_t> chars, int32_t offset, int32_t count);

  /// @brief Method WriteEscapedText, addr 0x653a6ec, size 0x10, virtual true, abstract: false, final false
  inline void WriteEscapedText(::ArrayW<uint8_t> chars, int32_t offset, int32_t count);

  /// @brief Method WriteEscapedText, addr 0x653a6bc, size 0x10, virtual true, abstract: false, final false
  inline void WriteEscapedText(::StringW value);

  /// @brief Method WriteEscapedText, addr 0x653a6cc, size 0x10, virtual true, abstract: false, final false
  inline void WriteEscapedText(::System::Xml::XmlDictionaryString* value);

  /// @brief Method WriteFloatText, addr 0x653a7f4, size 0x12c, virtual true, abstract: false, final false
  inline void WriteFloatText(float_t f);

  /// @brief Method WriteGuidArray, addr 0x653afd0, size 0xbc, virtual false, abstract: false, final false
  inline void WriteGuidArray(::ArrayW<::System::Guid> array, int32_t offset, int32_t count);

  /// @brief Method WriteGuidText, addr 0x653acc8, size 0x90, virtual true, abstract: false, final false
  inline void WriteGuidText(::System::Guid guid);

  /// @brief Method WriteInt32Text, addr 0x6539b90, size 0x1dc, virtual true, abstract: false, final false
  inline void WriteInt32Text(int32_t value);

  /// @brief Method WriteInt64, addr 0x6539dc0, size 0x138, virtual false, abstract: false, final false
  inline void WriteInt64(int64_t value);

  /// @brief Method WriteInt64Text, addr 0x6539d6c, size 0x2c, virtual true, abstract: false, final false
  inline void WriteInt64Text(int64_t value);

  /// @brief Method WriteListSeparator, addr 0x653adf0, size 0x4, virtual true, abstract: false, final false
  inline void WriteListSeparator();

  /// @brief Method WriteMultiByteInt32, addr 0x6539978, size 0xc4, virtual false, abstract: false, final false
  inline void WriteMultiByteInt32(int32_t i);

  /// @brief Method WriteName, addr 0x6539110, size 0x28, virtual false, abstract: false, final false
  inline void WriteName(::StringW s);

  /// @brief Method WriteNode, addr 0x6538c70, size 0x20, virtual false, abstract: false, final false
  inline void WriteNode(::System::Xml::XmlBinaryNodeType nodeType);

  /// @brief Method WritePrefixNode, addr 0x6539138, size 0x24, virtual false, abstract: false, final false
  inline void WritePrefixNode(::System::Xml::XmlBinaryNodeType nodeType, int32_t ch);

  /// @brief Method WriteQualifiedName, addr 0x653b17c, size 0x12c, virtual true, abstract: false, final false
  inline void WriteQualifiedName(::StringW prefix, ::System::Xml::XmlDictionaryString* localName);

  /// @brief Method WriteStartAttribute, addr 0x6539434, size 0xc0, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName);

  /// @brief Method WriteStartAttribute, addr 0x65394f4, size 0x108, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* localName);

  /// @brief Method WriteStartElement, addr 0x6539060, size 0xb0, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName);

  /// @brief Method WriteStartElement, addr 0x653915c, size 0xfc, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::System::Xml::XmlDictionaryString* localName);

  /// @brief Method WriteStartListText, addr 0x653adc4, size 0x2c, virtual true, abstract: false, final false
  inline void WriteStartListText();

  /// @brief Method WriteText, addr 0x653a5f8, size 0x78, virtual true, abstract: false, final false
  inline void WriteText(::ArrayW<char16_t> chars, int32_t offset, int32_t count);

  /// @brief Method WriteText, addr 0x653a670, size 0x4c, virtual true, abstract: false, final false
  inline void WriteText(::ArrayW<uint8_t> chars, int32_t charOffset, int32_t charCount);

  /// @brief Method WriteText, addr 0x653a2c8, size 0x38, virtual true, abstract: false, final false
  inline void WriteText(::StringW value);

  /// @brief Method WriteText, addr 0x653a210, size 0x8c, virtual true, abstract: false, final false
  inline void WriteText(::System::Xml::XmlDictionaryString* value);

  /// @brief Method WriteTextNode, addr 0x6538cfc, size 0x48, virtual false, abstract: false, final false
  inline void WriteTextNode(::System::Xml::XmlBinaryNodeType nodeType);

  /// @brief Method WriteTextNodeWithInt64, addr 0x6538f18, size 0x144, virtual false, abstract: false, final false
  inline void WriteTextNodeWithInt64(::System::Xml::XmlBinaryNodeType nodeType, int64_t value);

  /// @brief Method WriteTextNodeWithLength, addr 0x6538da8, size 0x170, virtual false, abstract: false, final false
  inline void WriteTextNodeWithLength(::System::Xml::XmlBinaryNodeType nodeType, int32_t length);

  /// @brief Method WriteTimeSpanArray, addr 0x653b08c, size 0xf0, virtual false, abstract: false, final false
  inline void WriteTimeSpanArray(::ArrayW<::System::TimeSpan> array, int32_t offset, int32_t count);

  /// @brief Method WriteTimeSpanText, addr 0x653ad58, size 0x6c, virtual true, abstract: false, final false
  inline void WriteTimeSpanText(::System::TimeSpan value);

  /// @brief Method WriteUInt64Text, addr 0x6539d98, size 0x28, virtual true, abstract: false, final false
  inline void WriteUInt64Text(uint64_t value);

  /// @brief Method WriteUniqueIdText, addr 0x653ac10, size 0xb8, virtual true, abstract: false, final false
  inline void WriteUniqueIdText(::System::Xml::UniqueId* value);

  /// @brief Method WriteXmlnsAttribute, addr 0x653971c, size 0x78, virtual true, abstract: false, final false
  inline void WriteXmlnsAttribute(::StringW prefix, ::StringW ns);

  /// @brief Method WriteXmlnsAttribute, addr 0x6539794, size 0xc8, virtual true, abstract: false, final false
  inline void WriteXmlnsAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WroteAttributeValue, addr 0x6538c90, size 0x6c, virtual false, abstract: false, final false
  inline void WroteAttributeValue();

  constexpr ::System::Xml::XmlBinaryNodeWriter_AttributeValue const& __cordl_internal_get_attributeValue() const;

  constexpr ::System::Xml::XmlBinaryNodeWriter_AttributeValue& __cordl_internal_get_attributeValue();

  constexpr ::System::Xml::IXmlDictionary* const& __cordl_internal_get_dictionary() const;

  constexpr ::System::Xml::IXmlDictionary*& __cordl_internal_get_dictionary();

  constexpr bool const& __cordl_internal_get_inAttribute() const;

  constexpr bool& __cordl_internal_get_inAttribute();

  constexpr bool const& __cordl_internal_get_inList() const;

  constexpr bool& __cordl_internal_get_inList();

  constexpr ::System::Xml::XmlBinaryWriterSession* const& __cordl_internal_get_session() const;

  constexpr ::System::Xml::XmlBinaryWriterSession*& __cordl_internal_get_session();

  constexpr int32_t const& __cordl_internal_get_textNodeOffset() const;

  constexpr int32_t& __cordl_internal_get_textNodeOffset();

  constexpr bool const& __cordl_internal_get_wroteAttributeValue() const;

  constexpr bool& __cordl_internal_get_wroteAttributeValue();

  constexpr void __cordl_internal_set_attributeValue(::System::Xml::XmlBinaryNodeWriter_AttributeValue value);

  constexpr void __cordl_internal_set_dictionary(::System::Xml::IXmlDictionary* value);

  constexpr void __cordl_internal_set_inAttribute(bool value);

  constexpr void __cordl_internal_set_inList(bool value);

  constexpr void __cordl_internal_set_session(::System::Xml::XmlBinaryWriterSession* value);

  constexpr void __cordl_internal_set_textNodeOffset(int32_t value);

  constexpr void __cordl_internal_set_wroteAttributeValue(bool value);

  /// @brief Method .ctor, addr 0x6538be0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBinaryNodeWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBinaryNodeWriter", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBinaryNodeWriter(XmlBinaryNodeWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBinaryNodeWriter", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBinaryNodeWriter(XmlBinaryNodeWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16344 };

  /// @brief Field dictionary, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::IXmlDictionary* ___dictionary;

  /// @brief Field session, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::XmlBinaryWriterSession* ___session;

  /// @brief Field inAttribute, offset: 0x40, size: 0x1, def value: None
  bool ___inAttribute;

  /// @brief Field inList, offset: 0x41, size: 0x1, def value: None
  bool ___inList;

  /// @brief Field wroteAttributeValue, offset: 0x42, size: 0x1, def value: None
  bool ___wroteAttributeValue;

  /// @brief Field attributeValue, offset: 0x48, size: 0x18, def value: None
  ::System::Xml::XmlBinaryNodeWriter_AttributeValue ___attributeValue;

  /// @brief Field textNodeOffset, offset: 0x60, size: 0x4, def value: None
  int32_t ___textNodeOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBinaryNodeWriter, ___dictionary) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBinaryNodeWriter, ___session) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBinaryNodeWriter, ___inAttribute) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBinaryNodeWriter, ___inList) == 0x41, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBinaryNodeWriter, ___wroteAttributeValue) == 0x42, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBinaryNodeWriter, ___attributeValue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBinaryNodeWriter, ___textNodeOffset) == 0x60, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlBinaryNodeWriter) == 0x68, "Size mismatch!");

} // namespace System::Xml
