#pragma once
// IWYU pragma private; include "System/Xml/XmlReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlReader)
namespace System::IO {
class Stream;
}
namespace System::IO {
class StringWriter;
}
namespace System::IO {
class TextReader;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml {
class IDtdInfo;
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
class XmlParserContext;
}
namespace System::Xml {
class XmlReaderSettings;
}
namespace System::Xml {
struct XmlSpace;
}
namespace System::Xml {
class XmlTextWriter;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml {
class XmlReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlReader);
// Dependencies System.IDisposable, System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlReader
class CORDL_TYPE XmlReader : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttributeCount)) int32_t AttributeCount;

  __declspec(property(get = get_BaseURI)) ::StringW BaseURI;

  /// @brief Field CanReadContentAsBitmap, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_CanReadContentAsBitmap, put = setStaticF_CanReadContentAsBitmap)) uint32_t CanReadContentAsBitmap;

  __declspec(property(get = get_CanReadValueChunk)) bool CanReadValueChunk;

  __declspec(property(get = get_CanResolveEntity)) bool CanResolveEntity;

  __declspec(property(get = get_Depth)) int32_t Depth;

  __declspec(property(get = get_DtdInfo)) ::System::Xml::IDtdInfo* DtdInfo;

  __declspec(property(get = get_HasAttributes)) bool HasAttributes;

  /// @brief Field HasValueBitmap, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_HasValueBitmap, put = setStaticF_HasValueBitmap)) uint32_t HasValueBitmap;

  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_IsDefaultInternal)) bool IsDefaultInternal;

  __declspec(property(get = get_IsEmptyElement)) bool IsEmptyElement;

  /// @brief Field IsTextualNodeBitmap, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_IsTextualNodeBitmap, put = setStaticF_IsTextualNodeBitmap)) uint32_t IsTextualNodeBitmap;

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

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CalcBufferSize, addr 0x4316eb4, size 0x84, virtual false, abstract: false, final false
  static inline int32_t CalcBufferSize(::System::IO::Stream* input);

  /// @brief Method Close, addr 0x4315394, size 0x4, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Create, addr 0x43167b8, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlReader* Create(::System::IO::Stream* input, ::System::Xml::XmlReaderSettings* settings, ::StringW baseUri);

  /// @brief Method Create, addr 0x43169f0, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlReader* Create(::System::IO::TextReader* input, ::System::Xml::XmlReaderSettings* settings, ::StringW baseUri);

  /// @brief Method CreateSqlReader, addr 0x4316b9c, size 0x318, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlReader* CreateSqlReader(::System::IO::Stream* input, ::System::Xml::XmlReaderSettings* settings, ::System::Xml::XmlParserContext* inputContext);

  /// @brief Method CreateWriterForInnerOuterXml, addr 0x4315f64, size 0x74, virtual false, abstract: false, final false
  inline ::System::Xml::XmlWriter* CreateWriterForInnerOuterXml(::System::IO::StringWriter* sw);

  /// @brief Method Dispose, addr 0x430e0f8, size 0x14, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x4316620, size 0x44, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetAttribute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(int32_t i);

  /// @brief Method GetAttribute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name);

  /// @brief Method GetAttribute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name, ::StringW namespaceURI);

  /// @brief Method HasValueInternal, addr 0x431666c, size 0x64, virtual false, abstract: false, final false
  static inline bool HasValueInternal(::System::Xml::XmlNodeType nodeType);

  /// @brief Method IsStartElement, addr 0x4315c28, size 0x84, virtual true, abstract: false, final false
  inline bool IsStartElement(::StringW localname, ::StringW ns);

  /// @brief Method IsTextualNode, addr 0x43156dc, size 0x64, virtual false, abstract: false, final false
  static inline bool IsTextualNode(::System::Xml::XmlNodeType nodeType);

  /// @brief Method LookupNamespace, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method MoveToAttribute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW name);

  /// @brief Method MoveToAttribute, addr 0x43152c8, size 0xcc, virtual true, abstract: false, final false
  inline void MoveToAttribute(int32_t i);

  /// @brief Method MoveToContent, addr 0x4315740, size 0x84, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType MoveToContent();

  /// @brief Method MoveToElement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool MoveToElement();

  /// @brief Method MoveToFirstAttribute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool MoveToFirstAttribute();

  /// @brief Method MoveToNextAttribute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool MoveToNextAttribute();

  static inline ::System::Xml::XmlReader* New_ctor();

  /// @brief Method Read, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadAttributeValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool ReadAttributeValue();

  /// @brief Method ReadElementString, addr 0x43158b8, size 0x27c, virtual true, abstract: false, final false
  inline ::StringW ReadElementString();

  /// @brief Method ReadEndElement, addr 0x4315b34, size 0xf4, virtual true, abstract: false, final false
  inline void ReadEndElement();

  /// @brief Method ReadInnerXml, addr 0x4315cac, size 0x2b8, virtual true, abstract: false, final false
  inline ::StringW ReadInnerXml();

  /// @brief Method ReadStartElement, addr 0x43157c4, size 0xf4, virtual true, abstract: false, final false
  inline void ReadStartElement();

  /// @brief Method ReadString, addr 0x4315508, size 0x1d4, virtual true, abstract: false, final false
  inline ::StringW ReadString();

  /// @brief Method ReadValueChunk, addr 0x43154b0, size 0x58, virtual true, abstract: false, final false
  inline int32_t ReadValueChunk(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ResolveEntity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ResolveEntity();

  /// @brief Method SetNamespacesFlag, addr 0x43164f4, size 0xec, virtual false, abstract: false, final false
  inline void SetNamespacesFlag(::System::Xml::XmlTextWriter* xtw);

  /// @brief Method Skip, addr 0x4315398, size 0x34, virtual true, abstract: false, final false
  inline void Skip();

  /// @brief Method SkipSubtree, addr 0x43153cc, size 0xd4, virtual false, abstract: false, final false
  inline bool SkipSubtree();

  /// @brief Method WriteAttributeValue, addr 0x4315fd8, size 0xd4, virtual false, abstract: false, final false
  inline void WriteAttributeValue(::System::Xml::XmlWriter* xtw);

  /// @brief Method WriteNode, addr 0x43160ac, size 0x448, virtual false, abstract: false, final false
  inline void WriteNode(::System::Xml::XmlWriter* xtw, bool defattr);

  /// @brief Method .ctor, addr 0x430d69c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline uint32_t getStaticF_CanReadContentAsBitmap();

  static inline uint32_t getStaticF_HasValueBitmap();

  static inline uint32_t getStaticF_IsTextualNodeBitmap();

  /// @brief Method get_AttributeCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_AttributeCount();

  /// @brief Method get_BaseURI, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method get_CanReadValueChunk, addr 0x43154a8, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanReadValueChunk();

  /// @brief Method get_CanResolveEntity, addr 0x43154a0, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanResolveEntity();

  /// @brief Method get_Depth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_DtdInfo, addr 0x43167b0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::IDtdInfo* get_DtdInfo();

  /// @brief Method get_EOF, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_EOF();

  /// @brief Method get_HasAttributes, addr 0x43165fc, size 0x24, virtual true, abstract: false, final false
  inline bool get_HasAttributes();

  /// @brief Method get_IsDefault, addr 0x43151b4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsDefault();

  /// @brief Method get_IsDefaultInternal, addr 0x43166d0, size 0xe0, virtual false, abstract: false, final false
  inline bool get_IsDefaultInternal();

  /// @brief Method get_IsEmptyElement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsEmptyElement();

  /// @brief Method get_LocalName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x43150d0, size 0xe4, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameTable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_NamespaceManager, addr 0x4316664, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNamespaceManager* get_NamespaceManager();

  /// @brief Method get_NamespaceURI, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_NodeType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Prefix, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_QuoteChar, addr 0x43151bc, size 0x8, virtual true, abstract: false, final false
  inline char16_t get_QuoteChar();

  /// @brief Method get_ReadState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Xml::ReadState get_ReadState();

  /// @brief Method get_SchemaInfo, addr 0x4315214, size 0x48, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo();

  /// @brief Method get_Settings, addr 0x43150c8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlReaderSettings* get_Settings();

  /// @brief Method get_Value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_ValueType, addr 0x431525c, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

  /// @brief Method get_XmlLang, addr 0x43151cc, size 0x48, virtual true, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x43151c4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_CanReadContentAsBitmap(uint32_t value);

  static inline void setStaticF_HasValueBitmap(uint32_t value);

  static inline void setStaticF_IsTextualNodeBitmap(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlReader(XmlReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlReader(XmlReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7227 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlReader, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlReader*, "System.Xml", "XmlReader");
