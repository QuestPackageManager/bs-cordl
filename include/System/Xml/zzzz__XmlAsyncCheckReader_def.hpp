#pragma once
// IWYU pragma private; include "System/Xml/XmlAsyncCheckReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAsyncCheckReader)
namespace System::Threading::Tasks {
class Task;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
struct ReadState;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlNamespaceManager;
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
struct Decimal;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml {
class XmlAsyncCheckReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlAsyncCheckReader);
// Dependencies System.Xml.XmlReader
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlAsyncCheckReader
class CORDL_TYPE XmlAsyncCheckReader : public ::System::Xml::XmlReader {
public:
  // Declarations
  __declspec(property(get = get_AttributeCount)) int32_t AttributeCount;

  __declspec(property(get = get_BaseURI)) ::StringW BaseURI;

  __declspec(property(get = get_CanReadValueChunk)) bool CanReadValueChunk;

  __declspec(property(get = get_CanResolveEntity)) bool CanResolveEntity;

  __declspec(property(get = get_CoreReader)) ::System::Xml::XmlReader* CoreReader;

  __declspec(property(get = get_Depth)) int32_t Depth;

  __declspec(property(get = get_DtdInfo)) ::System::Xml::IDtdInfo* DtdInfo;

  __declspec(property(get = get_HasAttributes)) bool HasAttributes;

  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_IsEmptyElement)) bool IsEmptyElement;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NameTable)) ::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_NamespaceManager)) ::System::Xml::XmlNamespaceManager* NamespaceManager;

  __declspec(property(get = get_NamespaceURI)) ::StringW NamespaceURI;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Prefix)) ::StringW Prefix;

  __declspec(property(get = get_QuoteChar)) char16_t QuoteChar;

  __declspec(property(get = get_ReadState)) ::System::Xml::ReadState ReadState;

  __declspec(property(get = get_SchemaInfo)) ::System::Xml::Schema::IXmlSchemaInfo* SchemaInfo;

  __declspec(property(get = get_Settings)) ::System::Xml::XmlReaderSettings* Settings;

  __declspec(property(get = get_Value)) ::StringW Value;

  __declspec(property(get = get_ValueType)) ::System::Type* ValueType;

  __declspec(property(get = get_XmlLang)) ::StringW XmlLang;

  __declspec(property(get = get_XmlSpace)) ::System::Xml::XmlSpace XmlSpace;

  __declspec(property(get = get_EOF)) bool _cordl_EOF;

  /// @brief Field coreReader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_coreReader, put = __cordl_internal_set_coreReader)) ::System::Xml::XmlReader* coreReader;

  /// @brief Field lastTask, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_lastTask, put = __cordl_internal_set_lastTask)) ::System::Threading::Tasks::Task* lastTask;

  /// @brief Method CheckAsync, addr 0x5fff0b4, size 0x74, virtual false, abstract: false, final false
  inline void CheckAsync();

  /// @brief Method Close, addr 0x5fffa20, size 0x2c, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method CreateAsyncCheckWrapper, addr 0x5ffec0c, size 0x19c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlAsyncCheckReader* CreateAsyncCheckWrapper(::System::Xml::XmlReader* reader);

  /// @brief Method Dispose, addr 0x5fffe30, size 0x30, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetAttribute, addr 0x5fff820, size 0x3c, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(int32_t i);

  /// @brief Method GetAttribute, addr 0x5fff7a0, size 0x3c, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name);

  /// @brief Method GetAttribute, addr 0x5fff7dc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name, ::StringW namespaceURI);

  /// @brief Method IsStartElement, addr 0x5fffd68, size 0x2c, virtual true, abstract: false, final false
  inline bool IsStartElement();

  /// @brief Method IsStartElement, addr 0x5fffd94, size 0x44, virtual true, abstract: false, final false
  inline bool IsStartElement(::StringW localname, ::StringW ns);

  /// @brief Method LookupNamespace, addr 0x5fffad0, size 0x3c, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method MoveToAttribute, addr 0x5fff85c, size 0x3c, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW name);

  /// @brief Method MoveToAttribute, addr 0x5fff898, size 0x44, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW name, ::StringW ns);

  /// @brief Method MoveToAttribute, addr 0x5fff8dc, size 0x3c, virtual true, abstract: false, final false
  inline void MoveToAttribute(int32_t i);

  /// @brief Method MoveToContent, addr 0x5fffcb8, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType MoveToContent();

  /// @brief Method MoveToElement, addr 0x5fff970, size 0x2c, virtual true, abstract: false, final false
  inline bool MoveToElement();

  /// @brief Method MoveToFirstAttribute, addr 0x5fff918, size 0x2c, virtual true, abstract: false, final false
  inline bool MoveToFirstAttribute();

  /// @brief Method MoveToNextAttribute, addr 0x5fff944, size 0x2c, virtual true, abstract: false, final false
  inline bool MoveToNextAttribute();

  static inline ::System::Xml::XmlAsyncCheckReader* New_ctor(::System::Xml::XmlReader* reader);

  /// @brief Method Read, addr 0x5fff9c8, size 0x2c, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadAttributeValue, addr 0x5fff99c, size 0x2c, virtual true, abstract: false, final false
  inline bool ReadAttributeValue();

  /// @brief Method ReadContentAs, addr 0x5fff5d0, size 0x44, virtual true, abstract: false, final false
  inline ::System::Object* ReadContentAs(::System::Type* returnType, ::System::Xml::IXmlNamespaceResolver* namespaceResolver);

  /// @brief Method ReadContentAsBase64, addr 0x5fffb64, size 0x54, virtual true, abstract: false, final false
  inline int32_t ReadContentAsBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadContentAsBinHex, addr 0x5fffbb8, size 0x54, virtual true, abstract: false, final false
  inline int32_t ReadContentAsBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadContentAsBoolean, addr 0x5fff470, size 0x2c, virtual true, abstract: false, final false
  inline bool ReadContentAsBoolean();

  /// @brief Method ReadContentAsDateTime, addr 0x5fff49c, size 0x2c, virtual true, abstract: false, final false
  inline ::System::DateTime ReadContentAsDateTime();

  /// @brief Method ReadContentAsDecimal, addr 0x5fff520, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Decimal ReadContentAsDecimal();

  /// @brief Method ReadContentAsDouble, addr 0x5fff4c8, size 0x2c, virtual true, abstract: false, final false
  inline double_t ReadContentAsDouble();

  /// @brief Method ReadContentAsFloat, addr 0x5fff4f4, size 0x2c, virtual true, abstract: false, final false
  inline float_t ReadContentAsFloat();

  /// @brief Method ReadContentAsInt, addr 0x5fff54c, size 0x2c, virtual true, abstract: false, final false
  inline int32_t ReadContentAsInt();

  /// @brief Method ReadContentAsLong, addr 0x5fff578, size 0x2c, virtual true, abstract: false, final false
  inline int64_t ReadContentAsLong();

  /// @brief Method ReadContentAsObject, addr 0x5fff444, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Object* ReadContentAsObject();

  /// @brief Method ReadContentAsString, addr 0x5fff5a4, size 0x2c, virtual true, abstract: false, final false
  inline ::StringW ReadContentAsString();

  /// @brief Method ReadElementContentAsBoolean, addr 0x5fff614, size 0x2c, virtual true, abstract: false, final false
  inline bool ReadElementContentAsBoolean();

  /// @brief Method ReadElementContentAsDateTime, addr 0x5fff640, size 0x2c, virtual true, abstract: false, final false
  inline ::System::DateTime ReadElementContentAsDateTime();

  /// @brief Method ReadElementContentAsDecimal, addr 0x5fff6c4, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Decimal ReadElementContentAsDecimal();

  /// @brief Method ReadElementContentAsDouble, addr 0x5fff66c, size 0x2c, virtual true, abstract: false, final false
  inline double_t ReadElementContentAsDouble();

  /// @brief Method ReadElementContentAsFloat, addr 0x5fff698, size 0x2c, virtual true, abstract: false, final false
  inline float_t ReadElementContentAsFloat();

  /// @brief Method ReadElementContentAsInt, addr 0x5fff6f0, size 0x2c, virtual true, abstract: false, final false
  inline int32_t ReadElementContentAsInt();

  /// @brief Method ReadElementContentAsLong, addr 0x5fff71c, size 0x2c, virtual true, abstract: false, final false
  inline int64_t ReadElementContentAsLong();

  /// @brief Method ReadElementContentAsString, addr 0x5fff748, size 0x2c, virtual true, abstract: false, final false
  inline ::StringW ReadElementContentAsString();

  /// @brief Method ReadElementString, addr 0x5fffd10, size 0x2c, virtual true, abstract: false, final false
  inline ::StringW ReadElementString();

  /// @brief Method ReadEndElement, addr 0x5fffd3c, size 0x2c, virtual true, abstract: false, final false
  inline void ReadEndElement();

  /// @brief Method ReadInnerXml, addr 0x5fffdd8, size 0x2c, virtual true, abstract: false, final false
  inline ::StringW ReadInnerXml();

  /// @brief Method ReadStartElement, addr 0x5fffce4, size 0x2c, virtual true, abstract: false, final false
  inline void ReadStartElement();

  /// @brief Method ReadString, addr 0x5fffc8c, size 0x2c, virtual true, abstract: false, final false
  inline ::StringW ReadString();

  /// @brief Method ReadValueChunk, addr 0x5fffc38, size 0x54, virtual true, abstract: false, final false
  inline int32_t ReadValueChunk(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ResolveEntity, addr 0x5fffb38, size 0x2c, virtual true, abstract: false, final false
  inline void ResolveEntity();

  /// @brief Method Skip, addr 0x5fffa78, size 0x2c, virtual true, abstract: false, final false
  inline void Skip();

  constexpr ::System::Xml::XmlReader* const& __cordl_internal_get_coreReader() const;

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get_coreReader();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_lastTask() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_lastTask();

  constexpr void __cordl_internal_set_coreReader(::System::Xml::XmlReader* value);

  constexpr void __cordl_internal_set_lastTask(::System::Threading::Tasks::Task* value);

  /// @brief Method .ctor, addr 0x5fff018, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlReader* reader);

  /// @brief Method get_AttributeCount, addr 0x5fff774, size 0x2c, virtual true, abstract: false, final false
  inline int32_t get_AttributeCount();

  /// @brief Method get_BaseURI, addr 0x5fff2e4, size 0x2c, virtual true, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method get_CanReadValueChunk, addr 0x5fffc0c, size 0x2c, virtual true, abstract: false, final false
  inline bool get_CanReadValueChunk();

  /// @brief Method get_CanResolveEntity, addr 0x5fffb0c, size 0x2c, virtual true, abstract: false, final false
  inline bool get_CanResolveEntity();

  /// @brief Method get_CoreReader, addr 0x5ffec04, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlReader* get_CoreReader();

  /// @brief Method get_Depth, addr 0x5fff2bc, size 0x28, virtual true, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_DtdInfo, addr 0x5fffe8c, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Xml::IDtdInfo* get_DtdInfo();

  /// @brief Method get_EOF, addr 0x5fff9f4, size 0x2c, virtual true, abstract: false, final false
  inline bool get_EOF();

  /// @brief Method get_HasAttributes, addr 0x5fffe04, size 0x2c, virtual true, abstract: false, final false
  inline bool get_HasAttributes();

  /// @brief Method get_IsDefault, addr 0x5fff33c, size 0x2c, virtual true, abstract: false, final false
  inline bool get_IsDefault();

  /// @brief Method get_IsEmptyElement, addr 0x5fff310, size 0x2c, virtual true, abstract: false, final false
  inline bool get_IsEmptyElement();

  /// @brief Method get_LocalName, addr 0x5fff21c, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x5fff1f4, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameTable, addr 0x5fffaa4, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_NamespaceManager, addr 0x5fffe60, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNamespaceManager* get_NamespaceManager();

  /// @brief Method get_NamespaceURI, addr 0x5fff244, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_NodeType, addr 0x5fff1cc, size 0x28, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Prefix, addr 0x5fff26c, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_QuoteChar, addr 0x5fff368, size 0x2c, virtual true, abstract: false, final false
  inline char16_t get_QuoteChar();

  /// @brief Method get_ReadState, addr 0x5fffa4c, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Xml::ReadState get_ReadState();

  /// @brief Method get_SchemaInfo, addr 0x5fff3ec, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo();

  /// @brief Method get_Settings, addr 0x5fff128, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Xml::XmlReaderSettings* get_Settings();

  /// @brief Method get_Value, addr 0x5fff294, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_ValueType, addr 0x5fff418, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

  /// @brief Method get_XmlLang, addr 0x5fff3c0, size 0x2c, virtual true, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x5fff394, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAsyncCheckReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlAsyncCheckReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAsyncCheckReader(XmlAsyncCheckReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAsyncCheckReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAsyncCheckReader(XmlAsyncCheckReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9280 };

  /// @brief Field coreReader, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlReader* ___coreReader;

  /// @brief Field lastTask, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___lastTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlAsyncCheckReader, ___coreReader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlAsyncCheckReader, ___lastTask) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlAsyncCheckReader, 0x20>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlAsyncCheckReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlAsyncCheckReader*, "System.Xml", "XmlAsyncCheckReader");
