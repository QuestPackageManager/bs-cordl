#pragma once
// IWYU pragma private; include "System/Xml/XmlReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
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
class IXmlLineInfo;
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
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Exception;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
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
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlReader
class CORDL_TYPE XmlReader : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AttributeCount)) int32_t  AttributeCount;

 __declspec(property(get=get_BaseURI)) ::StringW  BaseURI;

/// @brief Field CanReadContentAsBitmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_CanReadContentAsBitmap, put=setStaticF_CanReadContentAsBitmap)) uint32_t  CanReadContentAsBitmap;

 __declspec(property(get=get_CanReadValueChunk)) bool  CanReadValueChunk;

 __declspec(property(get=get_CanResolveEntity)) bool  CanResolveEntity;

 __declspec(property(get=get_Depth)) int32_t  Depth;

 __declspec(property(get=get_DtdInfo)) ::System::Xml::IDtdInfo*  DtdInfo;

 __declspec(property(get=get_HasAttributes)) bool  HasAttributes;

/// @brief Field HasValueBitmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_HasValueBitmap, put=setStaticF_HasValueBitmap)) uint32_t  HasValueBitmap;

 __declspec(property(get=get_IsDefault)) bool  IsDefault;

 __declspec(property(get=get_IsDefaultInternal)) bool  IsDefaultInternal;

 __declspec(property(get=get_IsEmptyElement)) bool  IsEmptyElement;

/// @brief Field IsTextualNodeBitmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_IsTextualNodeBitmap, put=setStaticF_IsTextualNodeBitmap)) uint32_t  IsTextualNodeBitmap;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NameTable)) ::System::Xml::XmlNameTable*  NameTable;

 __declspec(property(get=get_NamespaceManager)) ::System::Xml::XmlNamespaceManager*  NamespaceManager;

 __declspec(property(get=get_NamespaceURI)) ::StringW  NamespaceURI;

 __declspec(property(get=get_NodeType)) ::System::Xml::XmlNodeType  NodeType;

 __declspec(property(get=get_Prefix)) ::StringW  Prefix;

 __declspec(property(get=get_QuoteChar)) char16_t  QuoteChar;

 __declspec(property(get=get_ReadState)) ::System::Xml::ReadState  ReadState;

 __declspec(property(get=get_SchemaInfo)) ::System::Xml::Schema::IXmlSchemaInfo*  SchemaInfo;

 __declspec(property(get=get_Settings)) ::System::Xml::XmlReaderSettings*  Settings;

 __declspec(property(get=get_Value)) ::StringW  Value;

 __declspec(property(get=get_ValueType)) ::System::Type*  ValueType;

 __declspec(property(get=get_XmlLang)) ::StringW  XmlLang;

 __declspec(property(get=get_XmlSpace)) ::System::Xml::XmlSpace  XmlSpace;

 __declspec(property(get=get_EOF)) bool  _cordl_EOF;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AddLineInfo, addr 0x6152760, size 0x224, virtual false, abstract: false, final false
static inline ::StringW AddLineInfo(::StringW  message, ::System::Xml::IXmlLineInfo*  lineInfo) ;

/// @brief Method CalcBufferSize, addr 0x6153144, size 0x8c, virtual false, abstract: false, final false
static inline int32_t CalcBufferSize(::System::IO::Stream*  input) ;

/// @brief Method CanReadContentAs, addr 0x614f270, size 0x70, virtual false, abstract: false, final false
inline bool CanReadContentAs() ;

/// @brief Method CanReadContentAs, addr 0x6152300, size 0x68, virtual false, abstract: false, final false
static inline bool CanReadContentAs(::System::Xml::XmlNodeType  nodeType) ;

/// @brief Method Close, addr 0x6150cfc, size 0x4, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Create, addr 0x6152a70, size 0x88, virtual false, abstract: false, final false
static inline ::System::Xml::XmlReader* Create(::System::IO::Stream*  input, ::System::Xml::XmlReaderSettings*  settings, ::StringW  baseUri) ;

/// @brief Method Create, addr 0x6152c90, size 0x84, virtual false, abstract: false, final false
static inline ::System::Xml::XmlReader* Create(::System::IO::TextReader*  input, ::System::Xml::XmlReaderSettings*  settings, ::StringW  baseUri) ;

/// @brief Method CreateReadContentAsException, addr 0x614f2e0, size 0xa8, virtual false, abstract: false, final false
inline ::System::Exception* CreateReadContentAsException(::StringW  methodName) ;

/// @brief Method CreateReadContentAsException, addr 0x61523d0, size 0x174, virtual false, abstract: false, final false
static inline ::System::Exception* CreateReadContentAsException(::StringW  methodName, ::System::Xml::XmlNodeType  nodeType, ::System::Xml::IXmlLineInfo*  lineInfo) ;

/// @brief Method CreateReadElementContentAsException, addr 0x6152544, size 0xa8, virtual false, abstract: false, final false
inline ::System::Exception* CreateReadElementContentAsException(::StringW  methodName) ;

/// @brief Method CreateReadElementContentAsException, addr 0x61525ec, size 0x174, virtual false, abstract: false, final false
static inline ::System::Exception* CreateReadElementContentAsException(::StringW  methodName, ::System::Xml::XmlNodeType  nodeType, ::System::Xml::IXmlLineInfo*  lineInfo) ;

/// @brief Method CreateSqlReader, addr 0x6152e38, size 0x30c, virtual false, abstract: false, final false
static inline ::System::Xml::XmlReader* CreateSqlReader(::System::IO::Stream*  input, ::System::Xml::XmlReaderSettings*  settings, ::System::Xml::XmlParserContext*  inputContext) ;

/// @brief Method CreateWriterForInnerOuterXml, addr 0x61519d4, size 0x74, virtual false, abstract: false, final false
inline ::System::Xml::XmlWriter* CreateWriterForInnerOuterXml(::System::IO::StringWriter*  sw) ;

/// @brief Method Dispose, addr 0x61522a0, size 0x14, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x61522b4, size 0x44, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FinishReadElementContentAsXxx, addr 0x6150604, size 0xc8, virtual false, abstract: false, final false
inline void FinishReadElementContentAsXxx() ;

/// @brief Method GetAttribute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetAttribute(int32_t  i) ;

/// @brief Method GetAttribute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetAttribute(::StringW  name) ;

/// @brief Method GetAttribute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetAttribute(::StringW  name, ::StringW  namespaceURI) ;

/// @brief Method HasValueInternal, addr 0x6152368, size 0x68, virtual false, abstract: false, final false
static inline bool HasValueInternal(::System::Xml::XmlNodeType  nodeType) ;

/// @brief Method InternalReadContentAsString, addr 0x614f388, size 0x1cc, virtual false, abstract: false, final false
inline ::StringW InternalReadContentAsString() ;

/// @brief Method IsStartElement, addr 0x6151698, size 0x24, virtual true, abstract: false, final false
inline bool IsStartElement() ;

/// @brief Method IsStartElement, addr 0x61516bc, size 0x7c, virtual true, abstract: false, final false
inline bool IsStartElement(::StringW  localname, ::StringW  ns) ;

/// @brief Method IsTextualNode, addr 0x615117c, size 0x68, virtual false, abstract: false, final false
static inline bool IsTextualNode(::System::Xml::XmlNodeType  nodeType) ;

/// @brief Method LookupNamespace, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW LookupNamespace(::StringW  prefix) ;

/// @brief Method MoveToAttribute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool MoveToAttribute(::StringW  name) ;

/// @brief Method MoveToAttribute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool MoveToAttribute(::StringW  name, ::StringW  ns) ;

/// @brief Method MoveToAttribute, addr 0x6150c34, size 0xc8, virtual true, abstract: false, final false
inline void MoveToAttribute(int32_t  i) ;

/// @brief Method MoveToContent, addr 0x61511e4, size 0x80, virtual true, abstract: false, final false
inline ::System::Xml::XmlNodeType MoveToContent() ;

/// @brief Method MoveToElement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool MoveToElement() ;

/// @brief Method MoveToFirstAttribute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool MoveToFirstAttribute() ;

/// @brief Method MoveToNextAttribute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool MoveToNextAttribute() ;

static inline ::System::Xml::XmlReader* New_ctor() ;

/// @brief Method Read, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Read() ;

/// @brief Method ReadAttributeValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ReadAttributeValue() ;

/// @brief Method ReadContentAs, addr 0x6150180, size 0x270, virtual true, abstract: false, final false
inline ::System::Object* ReadContentAs(::System::Type*  returnType, ::System::Xml::IXmlNamespaceResolver*  namespaceResolver) ;

/// @brief Method ReadContentAsBase64, addr 0x6150e10, size 0xac, virtual true, abstract: false, final false
inline int32_t ReadContentAsBase64(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method ReadContentAsBinHex, addr 0x6150ebc, size 0xac, virtual true, abstract: false, final false
inline int32_t ReadContentAsBinHex(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method ReadContentAsBoolean, addr 0x614f554, size 0x1b0, virtual true, abstract: false, final false
inline bool ReadContentAsBoolean() ;

/// @brief Method ReadContentAsDateTime, addr 0x614f704, size 0x1b0, virtual true, abstract: false, final false
inline ::System::DateTime ReadContentAsDateTime() ;

/// @brief Method ReadContentAsDecimal, addr 0x614fc0c, size 0x1ac, virtual true, abstract: false, final false
inline ::System::Decimal ReadContentAsDecimal() ;

/// @brief Method ReadContentAsDouble, addr 0x614f8b4, size 0x1ac, virtual true, abstract: false, final false
inline double_t ReadContentAsDouble() ;

/// @brief Method ReadContentAsFloat, addr 0x614fa60, size 0x1ac, virtual true, abstract: false, final false
inline float_t ReadContentAsFloat() ;

/// @brief Method ReadContentAsInt, addr 0x614fdb8, size 0x1bc, virtual true, abstract: false, final false
inline int32_t ReadContentAsInt() ;

/// @brief Method ReadContentAsLong, addr 0x614ff74, size 0x1bc, virtual true, abstract: false, final false
inline int64_t ReadContentAsLong() ;

/// @brief Method ReadContentAsObject, addr 0x614f220, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* ReadContentAsObject() ;

/// @brief Method ReadContentAsString, addr 0x6150130, size 0x50, virtual true, abstract: false, final false
inline ::StringW ReadContentAsString() ;

/// @brief Method ReadElementContentAsBoolean, addr 0x61503f0, size 0xc4, virtual true, abstract: false, final false
inline bool ReadElementContentAsBoolean() ;

/// @brief Method ReadElementContentAsDateTime, addr 0x61506cc, size 0xc8, virtual true, abstract: false, final false
inline ::System::DateTime ReadElementContentAsDateTime() ;

/// @brief Method ReadElementContentAsDecimal, addr 0x6150934, size 0xcc, virtual true, abstract: false, final false
inline ::System::Decimal ReadElementContentAsDecimal() ;

/// @brief Method ReadElementContentAsDouble, addr 0x6150794, size 0xd0, virtual true, abstract: false, final false
inline double_t ReadElementContentAsDouble() ;

/// @brief Method ReadElementContentAsFloat, addr 0x6150864, size 0xd0, virtual true, abstract: false, final false
inline float_t ReadElementContentAsFloat() ;

/// @brief Method ReadElementContentAsInt, addr 0x6150a00, size 0xd4, virtual true, abstract: false, final false
inline int32_t ReadElementContentAsInt() ;

/// @brief Method ReadElementContentAsLong, addr 0x6150ad4, size 0xd4, virtual true, abstract: false, final false
inline int64_t ReadElementContentAsLong() ;

/// @brief Method ReadElementContentAsString, addr 0x6150ba8, size 0x8c, virtual true, abstract: false, final false
inline ::StringW ReadElementContentAsString() ;

/// @brief Method ReadElementString, addr 0x6151358, size 0x24c, virtual true, abstract: false, final false
inline ::StringW ReadElementString() ;

/// @brief Method ReadEndElement, addr 0x61515a4, size 0xf4, virtual true, abstract: false, final false
inline void ReadEndElement() ;

/// @brief Method ReadInnerXml, addr 0x6151738, size 0x29c, virtual true, abstract: false, final false
inline ::StringW ReadInnerXml() ;

/// @brief Method ReadStartElement, addr 0x6151264, size 0xf4, virtual true, abstract: false, final false
inline void ReadStartElement() ;

/// @brief Method ReadString, addr 0x6150fc0, size 0x1bc, virtual true, abstract: false, final false
inline ::StringW ReadString() ;

/// @brief Method ReadValueChunk, addr 0x6150f70, size 0x50, virtual true, abstract: false, final false
inline int32_t ReadValueChunk(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method ResolveEntity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ResolveEntity() ;

/// @brief Method SetNamespacesFlag, addr 0x61520e4, size 0xf8, virtual false, abstract: false, final false
inline void SetNamespacesFlag(::System::Xml::XmlTextWriter*  xtw) ;

/// @brief Method SetupReadElementContentAsXxx, addr 0x61504b4, size 0x150, virtual false, abstract: false, final false
inline bool SetupReadElementContentAsXxx(::StringW  methodName) ;

/// @brief Method Skip, addr 0x6150d00, size 0x34, virtual true, abstract: false, final false
inline void Skip() ;

/// @brief Method SkipSubtree, addr 0x6150d34, size 0xd4, virtual false, abstract: false, final false
inline bool SkipSubtree() ;

/// @brief Method WriteAttributeValue, addr 0x6151acc, size 0xd8, virtual false, abstract: false, final false
inline void WriteAttributeValue(::System::Xml::XmlWriter*  xtw) ;

/// @brief Method WriteNode, addr 0x6151ba4, size 0x490, virtual false, abstract: false, final false
inline void WriteNode(::System::Xml::XmlWriter*  xtw, bool  defattr) ;

/// @brief Method .ctor, addr 0x61532b8, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline uint32_t getStaticF_CanReadContentAsBitmap() ;

static inline uint32_t getStaticF_HasValueBitmap() ;

static inline uint32_t getStaticF_IsTextualNodeBitmap() ;

/// @brief Method get_AttributeCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_AttributeCount() ;

/// @brief Method get_BaseURI, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_BaseURI() ;

/// @brief Method get_CanReadValueChunk, addr 0x6150f68, size 0x8, virtual true, abstract: false, final false
inline bool get_CanReadValueChunk() ;

/// @brief Method get_CanResolveEntity, addr 0x6150e08, size 0x8, virtual true, abstract: false, final false
inline bool get_CanResolveEntity() ;

/// @brief Method get_Depth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_Depth() ;

/// @brief Method get_DtdInfo, addr 0x6152a68, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::IDtdInfo* get_DtdInfo() ;

/// @brief Method get_EOF, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_EOF() ;

/// @brief Method get_HasAttributes, addr 0x615227c, size 0x24, virtual true, abstract: false, final false
inline bool get_HasAttributes() ;

/// @brief Method get_IsDefault, addr 0x614f178, size 0x8, virtual true, abstract: false, final false
inline bool get_IsDefault() ;

/// @brief Method get_IsDefaultInternal, addr 0x6152984, size 0xe4, virtual false, abstract: false, final false
inline bool get_IsDefaultInternal() ;

/// @brief Method get_IsEmptyElement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsEmptyElement() ;

/// @brief Method get_LocalName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_LocalName() ;

/// @brief Method get_Name, addr 0x614f09c, size 0xdc, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NameTable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Xml::XmlNameTable* get_NameTable() ;

/// @brief Method get_NamespaceManager, addr 0x61522f8, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::XmlNamespaceManager* get_NamespaceManager() ;

/// @brief Method get_NamespaceURI, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_NamespaceURI() ;

/// @brief Method get_NodeType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Prefix, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_Prefix() ;

/// @brief Method get_QuoteChar, addr 0x614f180, size 0x8, virtual true, abstract: false, final false
inline char16_t get_QuoteChar() ;

/// @brief Method get_ReadState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Xml::ReadState get_ReadState() ;

/// @brief Method get_SchemaInfo, addr 0x614f1a4, size 0x4c, virtual true, abstract: false, final false
inline ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo() ;

/// @brief Method get_Settings, addr 0x614f094, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::XmlReaderSettings* get_Settings() ;

/// @brief Method get_Value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method get_ValueType, addr 0x614f1f0, size 0x30, virtual true, abstract: false, final false
inline ::System::Type* get_ValueType() ;

/// @brief Method get_XmlLang, addr 0x614f190, size 0x14, virtual true, abstract: false, final false
inline ::StringW get_XmlLang() ;

/// @brief Method get_XmlSpace, addr 0x614f188, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::XmlSpace get_XmlSpace() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_CanReadContentAsBitmap(uint32_t  value) ;

static inline void setStaticF_HasValueBitmap(uint32_t  value) ;

static inline void setStaticF_IsTextualNodeBitmap(uint32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlReader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlReader(XmlReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlReader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlReader(XmlReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9305};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlReader, 0x10>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlReader*, "System.Xml", "XmlReader");
