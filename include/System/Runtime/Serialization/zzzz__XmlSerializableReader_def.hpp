#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlSerializableReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSerializableReader)
namespace System::Runtime::Serialization {
class XmlReaderDelegator;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml::Serialization {
class IXmlTextParser;
}
namespace System::Xml {
class IXmlLineInfo;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
struct ReadState;
}
namespace System::Xml {
struct WhitespaceHandling;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlReaderSettings;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
struct XmlSpace;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class XmlSerializableReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlSerializableReader);
// Dependencies System.Xml.XmlReader
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlSerializableReader
class CORDL_TYPE XmlSerializableReader : public ::System::Xml::XmlReader {
public:
  // Declarations
  __declspec(property(get = get_AttributeCount)) int32_t AttributeCount;

  __declspec(property(get = get_BaseURI)) ::StringW BaseURI;

  __declspec(property(get = get_CanReadValueChunk)) bool CanReadValueChunk;

  __declspec(property(get = get_CanResolveEntity)) bool CanResolveEntity;

  __declspec(property(get = get_Depth)) int32_t Depth;

  __declspec(property(get = get_HasAttributes)) bool HasAttributes;

  __declspec(property(get = get_InnerReader)) ::System::Xml::XmlReader* InnerReader;

  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_IsEmptyElement)) bool IsEmptyElement;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NameTable)) ::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_NamespaceURI)) ::StringW NamespaceURI;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Prefix)) ::StringW Prefix;

  __declspec(property(get = get_QuoteChar)) char16_t QuoteChar;

  __declspec(property(get = get_ReadState)) ::System::Xml::ReadState ReadState;

  __declspec(property(get = get_SchemaInfo)) ::System::Xml::Schema::IXmlSchemaInfo* SchemaInfo;

  __declspec(property(get = get_Settings)) ::System::Xml::XmlReaderSettings* Settings;

  __declspec(property(get = System_Xml_IXmlLineInfo_get_LineNumber)) int32_t System_Xml_IXmlLineInfo_LineNumber;

  __declspec(property(get = System_Xml_IXmlLineInfo_get_LinePosition)) int32_t System_Xml_IXmlLineInfo_LinePosition;

  __declspec(property(get = System_Xml_Serialization_IXmlTextParser_get_Normalized,
                      put = System_Xml_Serialization_IXmlTextParser_set_Normalized)) bool System_Xml_Serialization_IXmlTextParser_Normalized;

  __declspec(property(get = System_Xml_Serialization_IXmlTextParser_get_WhitespaceHandling,
                      put = System_Xml_Serialization_IXmlTextParser_set_WhitespaceHandling)) ::System::Xml::WhitespaceHandling System_Xml_Serialization_IXmlTextParser_WhitespaceHandling;

  __declspec(property(get = get_Value)) ::StringW Value;

  __declspec(property(get = get_ValueType)) ::System::Type* ValueType;

  __declspec(property(get = get_XmlLang)) ::StringW XmlLang;

  __declspec(property(get = get_XmlSpace)) ::System::Xml::XmlSpace XmlSpace;

  __declspec(property(get = get_EOF)) bool _cordl_EOF;

  /// @brief Field innerReader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_innerReader, put = __cordl_internal_set_innerReader)) ::System::Xml::XmlReader* innerReader;

  /// @brief Field isRootEmptyElement, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_isRootEmptyElement, put = __cordl_internal_set_isRootEmptyElement)) bool isRootEmptyElement;

  /// @brief Field startDepth, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_startDepth, put = __cordl_internal_set_startDepth)) int32_t startDepth;

  /// @brief Field xmlReader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlReader, put = __cordl_internal_set_xmlReader)) ::System::Runtime::Serialization::XmlReaderDelegator* xmlReader;

  /// @brief Convert operator to "::System::Xml::IXmlLineInfo"
  constexpr operator ::System::Xml::IXmlLineInfo*() noexcept;

  /// @brief Convert operator to "::System::Xml::Serialization::IXmlTextParser"
  constexpr operator ::System::Xml::Serialization::IXmlTextParser*() noexcept;

  /// @brief Method BeginRead, addr 0x5fc29e4, size 0xa4, virtual false, abstract: false, final false
  inline void BeginRead(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader);

  /// @brief Method Close, addr 0x5fc2c00, size 0x34, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method EndRead, addr 0x5fc2a88, size 0xd0, virtual false, abstract: false, final false
  inline void EndRead();

  /// @brief Method GetAttribute, addr 0x5fc2f34, size 0x20, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(int32_t i);

  /// @brief Method GetAttribute, addr 0x5fc2ef4, size 0x20, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name);

  /// @brief Method GetAttribute, addr 0x5fc2f14, size 0x20, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name, ::StringW namespaceURI);

  /// @brief Method IsStartElement, addr 0x5fc3074, size 0x20, virtual true, abstract: false, final false
  inline bool IsStartElement();

  /// @brief Method IsStartElement, addr 0x5fc3094, size 0x20, virtual true, abstract: false, final false
  inline bool IsStartElement(::StringW localname, ::StringW ns);

  /// @brief Method LookupNamespace, addr 0x5fc3014, size 0x20, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method MoveToAttribute, addr 0x5fc2f54, size 0x20, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW name);

  /// @brief Method MoveToAttribute, addr 0x5fc2f74, size 0x20, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW name, ::StringW ns);

  /// @brief Method MoveToAttribute, addr 0x5fc2f94, size 0x20, virtual true, abstract: false, final false
  inline void MoveToAttribute(int32_t i);

  /// @brief Method MoveToContent, addr 0x5fc30b4, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType MoveToContent();

  /// @brief Method MoveToElement, addr 0x5fc2ff4, size 0x20, virtual true, abstract: false, final false
  inline bool MoveToElement();

  /// @brief Method MoveToFirstAttribute, addr 0x5fc2fb4, size 0x20, virtual true, abstract: false, final false
  inline bool MoveToFirstAttribute();

  /// @brief Method MoveToNextAttribute, addr 0x5fc2fd4, size 0x20, virtual true, abstract: false, final false
  inline bool MoveToNextAttribute();

  static inline ::System::Runtime::Serialization::XmlSerializableReader* New_ctor();

  /// @brief Method Read, addr 0x5fc2b58, size 0xa8, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadAttributeValue, addr 0x5fc3034, size 0x20, virtual true, abstract: false, final false
  inline bool ReadAttributeValue();

  /// @brief Method ReadContentAs, addr 0x5fc31b4, size 0x20, virtual true, abstract: false, final false
  inline ::System::Object* ReadContentAs(::System::Type* returnType, ::System::Xml::IXmlNamespaceResolver* namespaceResolver);

  /// @brief Method ReadContentAsBase64, addr 0x5fc31d4, size 0x20, virtual true, abstract: false, final false
  inline int32_t ReadContentAsBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadContentAsBinHex, addr 0x5fc31f4, size 0x20, virtual true, abstract: false, final false
  inline int32_t ReadContentAsBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadContentAsBoolean, addr 0x5fc30f4, size 0x20, virtual true, abstract: false, final false
  inline bool ReadContentAsBoolean();

  /// @brief Method ReadContentAsDateTime, addr 0x5fc3114, size 0x20, virtual true, abstract: false, final false
  inline ::System::DateTime ReadContentAsDateTime();

  /// @brief Method ReadContentAsDouble, addr 0x5fc3134, size 0x20, virtual true, abstract: false, final false
  inline double_t ReadContentAsDouble();

  /// @brief Method ReadContentAsInt, addr 0x5fc3154, size 0x20, virtual true, abstract: false, final false
  inline int32_t ReadContentAsInt();

  /// @brief Method ReadContentAsLong, addr 0x5fc3174, size 0x20, virtual true, abstract: false, final false
  inline int64_t ReadContentAsLong();

  /// @brief Method ReadContentAsObject, addr 0x5fc30d4, size 0x20, virtual true, abstract: false, final false
  inline ::System::Object* ReadContentAsObject();

  /// @brief Method ReadContentAsString, addr 0x5fc3194, size 0x20, virtual true, abstract: false, final false
  inline ::StringW ReadContentAsString();

  /// @brief Method ReadString, addr 0x5fc3234, size 0x20, virtual true, abstract: false, final false
  inline ::StringW ReadString();

  /// @brief Method ReadValueChunk, addr 0x5fc3214, size 0x20, virtual true, abstract: false, final false
  inline int32_t ReadValueChunk(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ResolveEntity, addr 0x5fc3054, size 0x20, virtual true, abstract: false, final false
  inline void ResolveEntity();

  /// @brief Method System.Xml.IXmlLineInfo.HasLineInfo, addr 0x5fc35a0, size 0xc4, virtual true, abstract: false, final true
  inline bool System_Xml_IXmlLineInfo_HasLineInfo();

  /// @brief Method System.Xml.IXmlLineInfo.get_LineNumber, addr 0x5fc3664, size 0xc8, virtual true, abstract: false, final true
  inline int32_t System_Xml_IXmlLineInfo_get_LineNumber();

  /// @brief Method System.Xml.IXmlLineInfo.get_LinePosition, addr 0x5fc372c, size 0xc8, virtual true, abstract: false, final true
  inline int32_t System_Xml_IXmlLineInfo_get_LinePosition();

  /// @brief Method System.Xml.Serialization.IXmlTextParser.get_Normalized, addr 0x5fc3254, size 0xc4, virtual true, abstract: false, final true
  inline bool System_Xml_Serialization_IXmlTextParser_get_Normalized();

  /// @brief Method System.Xml.Serialization.IXmlTextParser.get_WhitespaceHandling, addr 0x5fc33f8, size 0xc8, virtual true, abstract: false, final true
  inline ::System::Xml::WhitespaceHandling System_Xml_Serialization_IXmlTextParser_get_WhitespaceHandling();

  /// @brief Method System.Xml.Serialization.IXmlTextParser.set_Normalized, addr 0x5fc3318, size 0xe0, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlTextParser_set_Normalized(bool value);

  /// @brief Method System.Xml.Serialization.IXmlTextParser.set_WhitespaceHandling, addr 0x5fc34c0, size 0xe0, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlTextParser_set_WhitespaceHandling(::System::Xml::WhitespaceHandling value);

  constexpr ::System::Xml::XmlReader* const& __cordl_internal_get_innerReader() const;

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get_innerReader();

  constexpr bool const& __cordl_internal_get_isRootEmptyElement() const;

  constexpr bool& __cordl_internal_get_isRootEmptyElement();

  constexpr int32_t const& __cordl_internal_get_startDepth() const;

  constexpr int32_t& __cordl_internal_get_startDepth();

  constexpr ::System::Runtime::Serialization::XmlReaderDelegator* const& __cordl_internal_get_xmlReader() const;

  constexpr ::System::Runtime::Serialization::XmlReaderDelegator*& __cordl_internal_get_xmlReader();

  constexpr void __cordl_internal_set_innerReader(::System::Xml::XmlReader* value);

  constexpr void __cordl_internal_set_isRootEmptyElement(bool value);

  constexpr void __cordl_internal_set_startDepth(int32_t value);

  constexpr void __cordl_internal_set_xmlReader(::System::Runtime::Serialization::XmlReaderDelegator* value);

  /// @brief Method .ctor, addr 0x5fc37f4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AttributeCount, addr 0x5fc2e14, size 0x20, virtual true, abstract: false, final false
  inline int32_t get_AttributeCount();

  /// @brief Method get_BaseURI, addr 0x5fc2d14, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method get_CanReadValueChunk, addr 0x5fc2eb4, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanReadValueChunk();

  /// @brief Method get_CanResolveEntity, addr 0x5fc2e94, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanResolveEntity();

  /// @brief Method get_Depth, addr 0x5fc2cf8, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_EOF, addr 0x5fc2e34, size 0x20, virtual true, abstract: false, final false
  inline bool get_EOF();

  /// @brief Method get_HasAttributes, addr 0x5fc2ed4, size 0x20, virtual true, abstract: false, final false
  inline bool get_HasAttributes();

  /// @brief Method get_InnerReader, addr 0x5fc29dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlReader* get_InnerReader();

  /// @brief Method get_IsDefault, addr 0x5fc2d54, size 0x20, virtual true, abstract: false, final false
  inline bool get_IsDefault();

  /// @brief Method get_IsEmptyElement, addr 0x5fc2d34, size 0x20, virtual true, abstract: false, final false
  inline bool get_IsEmptyElement();

  /// @brief Method get_LocalName, addr 0x5fc2c88, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x5fc2c6c, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameTable, addr 0x5fc2e74, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_NamespaceURI, addr 0x5fc2ca4, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_NodeType, addr 0x5fc2c50, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Prefix, addr 0x5fc2cc0, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_QuoteChar, addr 0x5fc2d74, size 0x20, virtual true, abstract: false, final false
  inline char16_t get_QuoteChar();

  /// @brief Method get_ReadState, addr 0x5fc2e54, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::ReadState get_ReadState();

  /// @brief Method get_SchemaInfo, addr 0x5fc2dd4, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo();

  /// @brief Method get_Settings, addr 0x5fc2c34, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlReaderSettings* get_Settings();

  /// @brief Method get_Value, addr 0x5fc2cdc, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_ValueType, addr 0x5fc2df4, size 0x20, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

  /// @brief Method get_XmlLang, addr 0x5fc2db4, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x5fc2d94, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

  /// @brief Convert to "::System::Xml::IXmlLineInfo"
  constexpr ::System::Xml::IXmlLineInfo* i___System__Xml__IXmlLineInfo() noexcept;

  /// @brief Convert to "::System::Xml::Serialization::IXmlTextParser"
  constexpr ::System::Xml::Serialization::IXmlTextParser* i___System__Xml__Serialization__IXmlTextParser() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializableReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializableReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializableReader(XmlSerializableReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializableReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializableReader(XmlSerializableReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17114 };

  /// @brief Field xmlReader, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::XmlReaderDelegator* ___xmlReader;

  /// @brief Field startDepth, offset: 0x18, size: 0x4, def value: None
  int32_t ___startDepth;

  /// @brief Field isRootEmptyElement, offset: 0x1c, size: 0x1, def value: None
  bool ___isRootEmptyElement;

  /// @brief Field innerReader, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlReader* ___innerReader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlSerializableReader, ___xmlReader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlSerializableReader, ___startDepth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlSerializableReader, ___isRootEmptyElement) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlSerializableReader, ___innerReader) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlSerializableReader, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::XmlSerializableReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlSerializableReader*, "System.Runtime.Serialization", "XmlSerializableReader");
