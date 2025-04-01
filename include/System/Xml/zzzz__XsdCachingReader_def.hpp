#pragma once
// IWYU pragma private; include "System/Xml/XsdCachingReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__IXmlLineInfo_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XsdCachingReader)
namespace System::Xml {
class CachingEventHandler;
}
namespace System::Xml {
class IXmlLineInfo;
}
namespace System::Xml {
struct ReadState;
}
namespace System::Xml {
class ValidatingReaderNodeData;
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
namespace System::Xml {
struct XsdCachingReader_CachingReaderState;
}
// Forward declare root types
namespace System::Xml {
struct XsdCachingReader_CachingReaderState;
}
namespace System::Xml {
class XsdCachingReader;
}
// Write type traits
MARK_VAL_T(::System::Xml::XsdCachingReader_CachingReaderState);
MARK_REF_PTR_T(::System::Xml::XsdCachingReader);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XsdCachingReader/CachingReaderState
struct CORDL_TYPE XsdCachingReader_CachingReaderState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XsdCachingReader_CachingReaderState_Unwrapped
  enum struct __XsdCachingReader_CachingReaderState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Init = static_cast<int32_t>(0x1),
    __E_Record = static_cast<int32_t>(0x2),
    __E_Replay = static_cast<int32_t>(0x3),
    __E_ReaderClosed = static_cast<int32_t>(0x4),
    __E_Error = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XsdCachingReader_CachingReaderState_Unwrapped() const noexcept {
    return static_cast<__XsdCachingReader_CachingReaderState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XsdCachingReader_CachingReaderState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XsdCachingReader_CachingReaderState(int32_t value__) noexcept;

  /// @brief Field Error value: I32(5)
  static ::System::Xml::XsdCachingReader_CachingReaderState const Error;

  /// @brief Field Init value: I32(1)
  static ::System::Xml::XsdCachingReader_CachingReaderState const Init;

  /// @brief Field None value: I32(0)
  static ::System::Xml::XsdCachingReader_CachingReaderState const None;

  /// @brief Field ReaderClosed value: I32(4)
  static ::System::Xml::XsdCachingReader_CachingReaderState const ReaderClosed;

  /// @brief Field Record value: I32(2)
  static ::System::Xml::XsdCachingReader_CachingReaderState const Record;

  /// @brief Field Replay value: I32(3)
  static ::System::Xml::XsdCachingReader_CachingReaderState const Replay;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7280 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XsdCachingReader_CachingReaderState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XsdCachingReader_CachingReaderState, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.IXmlLineInfo, System.Xml.XmlReader, System.Xml.XsdCachingReader::CachingReaderState
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XsdCachingReader
class CORDL_TYPE XsdCachingReader : public ::System::Xml::XmlReader {
public:
  // Declarations
  using CachingReaderState = ::System::Xml::XsdCachingReader_CachingReaderState;

  __declspec(property(get = get_AttributeCount)) int32_t AttributeCount;

  __declspec(property(get = get_BaseURI)) ::StringW BaseURI;

  __declspec(property(get = get_Depth)) int32_t Depth;

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

  __declspec(property(get = get_Settings)) ::System::Xml::XmlReaderSettings* Settings;

  __declspec(property(get = System_Xml_IXmlLineInfo_get_LineNumber)) int32_t System_Xml_IXmlLineInfo_LineNumber;

  __declspec(property(get = System_Xml_IXmlLineInfo_get_LinePosition)) int32_t System_Xml_IXmlLineInfo_LinePosition;

  __declspec(property(get = get_Value)) ::StringW Value;

  __declspec(property(get = get_XmlLang)) ::StringW XmlLang;

  __declspec(property(get = get_XmlSpace)) ::System::Xml::XmlSpace XmlSpace;

  __declspec(property(get = get_EOF)) bool _cordl_EOF;

  /// @brief Field attributeCount, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_attributeCount, put = __cordl_internal_set_attributeCount)) int32_t attributeCount;

  /// @brief Field attributeEvents, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeEvents,
                      put = __cordl_internal_set_attributeEvents)) ::ArrayW<::System::Xml::ValidatingReaderNodeData*, ::Array<::System::Xml::ValidatingReaderNodeData*>*>
      attributeEvents;

  /// @brief Field cacheHandler, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_cacheHandler, put = __cordl_internal_set_cacheHandler)) ::System::Xml::CachingEventHandler* cacheHandler;

  /// @brief Field cacheState, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_cacheState, put = __cordl_internal_set_cacheState)) ::System::Xml::XsdCachingReader_CachingReaderState cacheState;

  /// @brief Field cachedNode, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_cachedNode, put = __cordl_internal_set_cachedNode)) ::System::Xml::ValidatingReaderNodeData* cachedNode;

  /// @brief Field contentEvents, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_contentEvents,
                      put = __cordl_internal_set_contentEvents)) ::ArrayW<::System::Xml::ValidatingReaderNodeData*, ::Array<::System::Xml::ValidatingReaderNodeData*>*>
      contentEvents;

  /// @brief Field contentIndex, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_contentIndex, put = __cordl_internal_set_contentIndex)) int32_t contentIndex;

  /// @brief Field coreReader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_coreReader, put = __cordl_internal_set_coreReader)) ::System::Xml::XmlReader* coreReader;

  /// @brief Field coreReaderNameTable, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_coreReaderNameTable, put = __cordl_internal_set_coreReaderNameTable)) ::System::Xml::XmlNameTable* coreReaderNameTable;

  /// @brief Field currentAttrIndex, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_currentAttrIndex, put = __cordl_internal_set_currentAttrIndex)) int32_t currentAttrIndex;

  /// @brief Field currentContentIndex, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_currentContentIndex, put = __cordl_internal_set_currentContentIndex)) int32_t currentContentIndex;

  /// @brief Field lineInfo, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_lineInfo, put = __cordl_internal_set_lineInfo)) ::System::Xml::IXmlLineInfo* lineInfo;

  /// @brief Field readAhead, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_readAhead, put = __cordl_internal_set_readAhead)) bool readAhead;

  /// @brief Field returnOriginalStringValues, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_returnOriginalStringValues, put = __cordl_internal_set_returnOriginalStringValues)) bool returnOriginalStringValues;

  /// @brief Field textNode, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_textNode, put = __cordl_internal_set_textNode)) ::System::Xml::ValidatingReaderNodeData* textNode;

  /// @brief Convert operator to "::System::Xml::IXmlLineInfo"
  constexpr operator ::System::Xml::IXmlLineInfo*() noexcept;

  /// @brief Method AddAttribute, addr 0x4329f00, size 0x15c, virtual false, abstract: false, final false
  inline ::System::Xml::ValidatingReaderNodeData* AddAttribute(int32_t attIndex);

  /// @brief Method AddContent, addr 0x4328c0c, size 0x174, virtual false, abstract: false, final false
  inline ::System::Xml::ValidatingReaderNodeData* AddContent(::System::Xml::XmlNodeType nodeType);

  /// @brief Method ClearAttributesInfo, addr 0x43298f8, size 0x10, virtual false, abstract: false, final false
  inline void ClearAttributesInfo();

  /// @brief Method Close, addr 0x4329bec, size 0x34, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method CreateDummyTextNode, addr 0x4329e08, size 0x88, virtual false, abstract: false, final false
  inline ::System::Xml::ValidatingReaderNodeData* CreateDummyTextNode(::StringW attributeValue, int32_t depth);

  /// @brief Method GetAttribute, addr 0x432939c, size 0x90, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(int32_t i);

  /// @brief Method GetAttribute, addr 0x43290a8, size 0x8c, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name);

  /// @brief Method GetAttribute, addr 0x4329284, size 0x118, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name, ::StringW namespaceURI);

  /// @brief Method GetAttributeIndexWithPrefix, addr 0x43291e4, size 0xa0, virtual false, abstract: false, final false
  inline int32_t GetAttributeIndexWithPrefix(::StringW name);

  /// @brief Method GetAttributeIndexWithoutPrefix, addr 0x4329134, size 0xb0, virtual false, abstract: false, final false
  inline int32_t GetAttributeIndexWithoutPrefix(::StringW name);

  /// @brief Method GetCoreReader, addr 0x4329ef0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlReader* GetCoreReader();

  /// @brief Method GetLineInfo, addr 0x4329ef8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::IXmlLineInfo* GetLineInfo();

  /// @brief Method Init, addr 0x4328abc, size 0x150, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method LookupNamespace, addr 0x4329d60, size 0x24, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method MoveToAttribute, addr 0x432942c, size 0x90, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW name);

  /// @brief Method MoveToAttribute, addr 0x43294bc, size 0x90, virtual true, abstract: false, final false
  inline void MoveToAttribute(int32_t i);

  /// @brief Method MoveToElement, addr 0x43295e0, size 0x54, virtual true, abstract: false, final false
  inline bool MoveToElement();

  /// @brief Method MoveToFirstAttribute, addr 0x432954c, size 0x40, virtual true, abstract: false, final false
  inline bool MoveToFirstAttribute();

  /// @brief Method MoveToNextAttribute, addr 0x432958c, size 0x54, virtual true, abstract: false, final false
  inline bool MoveToNextAttribute();

  static inline ::System::Xml::XsdCachingReader* New_ctor(::System::Xml::XmlReader* reader, ::System::Xml::IXmlLineInfo* lineInfo, ::System::Xml::CachingEventHandler* handlerMethod);

  /// @brief Method Read, addr 0x4329634, size 0x2c4, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadAttributeValue, addr 0x4329dbc, size 0x4c, virtual true, abstract: false, final false
  inline bool ReadAttributeValue();

  /// @brief Method RecordAttributes, addr 0x4328d80, size 0x178, virtual false, abstract: false, final false
  inline void RecordAttributes();

  /// @brief Method RecordEndElementNode, addr 0x4329a80, size 0x130, virtual false, abstract: false, final false
  inline void RecordEndElementNode();

  /// @brief Method RecordTextNode, addr 0x4329908, size 0x78, virtual false, abstract: false, final false
  inline ::System::Xml::ValidatingReaderNodeData* RecordTextNode(::StringW textValue, ::StringW originalStringValue, int32_t depth, int32_t lineNo, int32_t linePos);

  /// @brief Method Reset, addr 0x4328ef8, size 0x8, virtual false, abstract: false, final false
  inline void Reset(::System::Xml::XmlReader* reader);

  /// @brief Method ResolveEntity, addr 0x4329d84, size 0x38, virtual true, abstract: false, final false
  inline void ResolveEntity();

  /// @brief Method SetToReplayMode, addr 0x4329ed0, size 0x20, virtual false, abstract: false, final false
  inline void SetToReplayMode();

  /// @brief Method Skip, addr 0x4329c44, size 0x114, virtual true, abstract: false, final false
  inline void Skip();

  /// @brief Method SwitchTextNodeAndEndElement, addr 0x4329980, size 0x100, virtual false, abstract: false, final false
  inline void SwitchTextNodeAndEndElement(::StringW textValue, ::StringW originalStringValue);

  /// @brief Method System.Xml.IXmlLineInfo.HasLineInfo, addr 0x4329e90, size 0x8, virtual true, abstract: false, final true
  inline bool System_Xml_IXmlLineInfo_HasLineInfo();

  /// @brief Method System.Xml.IXmlLineInfo.get_LineNumber, addr 0x4329e98, size 0x1c, virtual true, abstract: false, final true
  inline int32_t System_Xml_IXmlLineInfo_get_LineNumber();

  /// @brief Method System.Xml.IXmlLineInfo.get_LinePosition, addr 0x4329eb4, size 0x1c, virtual true, abstract: false, final true
  inline int32_t System_Xml_IXmlLineInfo_get_LinePosition();

  constexpr int32_t const& __cordl_internal_get_attributeCount() const;

  constexpr int32_t& __cordl_internal_get_attributeCount();

  constexpr ::ArrayW<::System::Xml::ValidatingReaderNodeData*, ::Array<::System::Xml::ValidatingReaderNodeData*>*> const& __cordl_internal_get_attributeEvents() const;

  constexpr ::ArrayW<::System::Xml::ValidatingReaderNodeData*, ::Array<::System::Xml::ValidatingReaderNodeData*>*>& __cordl_internal_get_attributeEvents();

  constexpr ::System::Xml::CachingEventHandler* const& __cordl_internal_get_cacheHandler() const;

  constexpr ::System::Xml::CachingEventHandler*& __cordl_internal_get_cacheHandler();

  constexpr ::System::Xml::XsdCachingReader_CachingReaderState const& __cordl_internal_get_cacheState() const;

  constexpr ::System::Xml::XsdCachingReader_CachingReaderState& __cordl_internal_get_cacheState();

  constexpr ::System::Xml::ValidatingReaderNodeData* const& __cordl_internal_get_cachedNode() const;

  constexpr ::System::Xml::ValidatingReaderNodeData*& __cordl_internal_get_cachedNode();

  constexpr ::ArrayW<::System::Xml::ValidatingReaderNodeData*, ::Array<::System::Xml::ValidatingReaderNodeData*>*> const& __cordl_internal_get_contentEvents() const;

  constexpr ::ArrayW<::System::Xml::ValidatingReaderNodeData*, ::Array<::System::Xml::ValidatingReaderNodeData*>*>& __cordl_internal_get_contentEvents();

  constexpr int32_t const& __cordl_internal_get_contentIndex() const;

  constexpr int32_t& __cordl_internal_get_contentIndex();

  constexpr ::System::Xml::XmlReader* const& __cordl_internal_get_coreReader() const;

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get_coreReader();

  constexpr ::System::Xml::XmlNameTable* const& __cordl_internal_get_coreReaderNameTable() const;

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_coreReaderNameTable();

  constexpr int32_t const& __cordl_internal_get_currentAttrIndex() const;

  constexpr int32_t& __cordl_internal_get_currentAttrIndex();

  constexpr int32_t const& __cordl_internal_get_currentContentIndex() const;

  constexpr int32_t& __cordl_internal_get_currentContentIndex();

  constexpr ::System::Xml::IXmlLineInfo* const& __cordl_internal_get_lineInfo() const;

  constexpr ::System::Xml::IXmlLineInfo*& __cordl_internal_get_lineInfo();

  constexpr bool const& __cordl_internal_get_readAhead() const;

  constexpr bool& __cordl_internal_get_readAhead();

  constexpr bool const& __cordl_internal_get_returnOriginalStringValues() const;

  constexpr bool& __cordl_internal_get_returnOriginalStringValues();

  constexpr ::System::Xml::ValidatingReaderNodeData* const& __cordl_internal_get_textNode() const;

  constexpr ::System::Xml::ValidatingReaderNodeData*& __cordl_internal_get_textNode();

  constexpr void __cordl_internal_set_attributeCount(int32_t value);

  constexpr void __cordl_internal_set_attributeEvents(::ArrayW<::System::Xml::ValidatingReaderNodeData*, ::Array<::System::Xml::ValidatingReaderNodeData*>*> value);

  constexpr void __cordl_internal_set_cacheHandler(::System::Xml::CachingEventHandler* value);

  constexpr void __cordl_internal_set_cacheState(::System::Xml::XsdCachingReader_CachingReaderState value);

  constexpr void __cordl_internal_set_cachedNode(::System::Xml::ValidatingReaderNodeData* value);

  constexpr void __cordl_internal_set_contentEvents(::ArrayW<::System::Xml::ValidatingReaderNodeData*, ::Array<::System::Xml::ValidatingReaderNodeData*>*> value);

  constexpr void __cordl_internal_set_contentIndex(int32_t value);

  constexpr void __cordl_internal_set_coreReader(::System::Xml::XmlReader* value);

  constexpr void __cordl_internal_set_coreReaderNameTable(::System::Xml::XmlNameTable* value);

  constexpr void __cordl_internal_set_currentAttrIndex(int32_t value);

  constexpr void __cordl_internal_set_currentContentIndex(int32_t value);

  constexpr void __cordl_internal_set_lineInfo(::System::Xml::IXmlLineInfo* value);

  constexpr void __cordl_internal_set_readAhead(bool value);

  constexpr void __cordl_internal_set_returnOriginalStringValues(bool value);

  constexpr void __cordl_internal_set_textNode(::System::Xml::ValidatingReaderNodeData* value);

  /// @brief Method .ctor, addr 0x4328a00, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlReader* reader, ::System::Xml::IXmlLineInfo* lineInfo, ::System::Xml::CachingEventHandler* handlerMethod);

  /// @brief Method get_AttributeCount, addr 0x43290a0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_AttributeCount();

  /// @brief Method get_BaseURI, addr 0x4329000, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method get_Depth, addr 0x4328fe4, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_EOF, addr 0x4329bb0, size 0x3c, virtual true, abstract: false, final false
  inline bool get_EOF();

  /// @brief Method get_IsDefault, addr 0x432902c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsDefault();

  /// @brief Method get_IsEmptyElement, addr 0x4329024, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsEmptyElement();

  /// @brief Method get_LocalName, addr 0x4328f60, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x4328f3c, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameTable, addr 0x4329d58, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_NamespaceURI, addr 0x4328f7c, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_NodeType, addr 0x4328f20, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Prefix, addr 0x4328f98, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_QuoteChar, addr 0x4329034, size 0x24, virtual true, abstract: false, final false
  inline char16_t get_QuoteChar();

  /// @brief Method get_ReadState, addr 0x4329c20, size 0x24, virtual true, abstract: false, final false
  inline ::System::Xml::ReadState get_ReadState();

  /// @brief Method get_Settings, addr 0x4328f00, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlReaderSettings* get_Settings();

  /// @brief Method get_Value, addr 0x4328fb4, size 0x30, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_XmlLang, addr 0x432907c, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x4329058, size 0x24, virtual true, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

  /// @brief Convert to "::System::Xml::IXmlLineInfo"
  constexpr ::System::Xml::IXmlLineInfo* i___System__Xml__IXmlLineInfo() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XsdCachingReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XsdCachingReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XsdCachingReader(XsdCachingReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XsdCachingReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XsdCachingReader(XsdCachingReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7281 };

  /// @brief Field coreReader, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlReader* ___coreReader;

  /// @brief Field coreReaderNameTable, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___coreReaderNameTable;

  /// @brief Field contentEvents, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Xml::ValidatingReaderNodeData*, ::Array<::System::Xml::ValidatingReaderNodeData*>*> ___contentEvents;

  /// @brief Field attributeEvents, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Xml::ValidatingReaderNodeData*, ::Array<::System::Xml::ValidatingReaderNodeData*>*> ___attributeEvents;

  /// @brief Field cachedNode, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::ValidatingReaderNodeData* ___cachedNode;

  /// @brief Field cacheState, offset: 0x38, size: 0x4, def value: None
  ::System::Xml::XsdCachingReader_CachingReaderState ___cacheState;

  /// @brief Field contentIndex, offset: 0x3c, size: 0x4, def value: None
  int32_t ___contentIndex;

  /// @brief Field attributeCount, offset: 0x40, size: 0x4, def value: None
  int32_t ___attributeCount;

  /// @brief Field returnOriginalStringValues, offset: 0x44, size: 0x1, def value: None
  bool ___returnOriginalStringValues;

  /// @brief Field cacheHandler, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::CachingEventHandler* ___cacheHandler;

  /// @brief Field currentAttrIndex, offset: 0x50, size: 0x4, def value: None
  int32_t ___currentAttrIndex;

  /// @brief Field currentContentIndex, offset: 0x54, size: 0x4, def value: None
  int32_t ___currentContentIndex;

  /// @brief Field readAhead, offset: 0x58, size: 0x1, def value: None
  bool ___readAhead;

  /// @brief Field lineInfo, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::IXmlLineInfo* ___lineInfo;

  /// @brief Field textNode, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::ValidatingReaderNodeData* ___textNode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XsdCachingReader, ___coreReader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___coreReaderNameTable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___contentEvents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___attributeEvents) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___cachedNode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___cacheState) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___contentIndex) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___attributeCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___returnOriginalStringValues) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___cacheHandler) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___currentAttrIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___currentContentIndex) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___readAhead) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___lineInfo) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XsdCachingReader, ___textNode) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XsdCachingReader, 0x70>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XsdCachingReader_CachingReaderState, "System.Xml", "XsdCachingReader/CachingReaderState");
NEED_NO_BOX(::System::Xml::XsdCachingReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XsdCachingReader*, "System.Xml", "XsdCachingReader");
