#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ExtensionDataReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExtensionDataReader)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Runtime::Serialization {
class ClassDataNode;
}
namespace System::Runtime::Serialization {
class CollectionDataNode;
}
namespace System::Runtime::Serialization {
class ElementData;
}
namespace System::Runtime::Serialization {
struct ExtensionDataReader_ExtensionDataNodeType;
}
namespace System::Runtime::Serialization {
class IDataNode;
}
namespace System::Runtime::Serialization {
class ISerializableDataNode;
}
namespace System::Runtime::Serialization {
class XmlDataNode;
}
namespace System::Runtime::Serialization {
class XmlObjectSerializerReadContext;
}
namespace System::Xml {
struct ReadState;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlNodeReader;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
struct XmlSpace;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
struct ExtensionDataReader_ExtensionDataNodeType;
}
namespace System::Runtime::Serialization {
class ExtensionDataReader;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType);
MARK_REF_PTR_T(::System::Runtime::Serialization::ExtensionDataReader);
// Dependencies
namespace System::Runtime::Serialization {
// Is value type: true
// CS Name: System.Runtime.Serialization.ExtensionDataReader/ExtensionDataNodeType
struct CORDL_TYPE ExtensionDataReader_ExtensionDataNodeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ExtensionDataReader_ExtensionDataNodeType_Unwrapped
  enum struct __ExtensionDataReader_ExtensionDataNodeType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Element = static_cast<int32_t>(0x1),
    __E_EndElement = static_cast<int32_t>(0x2),
    __E_Text = static_cast<int32_t>(0x3),
    __E_Xml = static_cast<int32_t>(0x4),
    __E_ReferencedElement = static_cast<int32_t>(0x5),
    __E_NullElement = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ExtensionDataReader_ExtensionDataNodeType_Unwrapped() const noexcept {
    return static_cast<__ExtensionDataReader_ExtensionDataNodeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtensionDataReader_ExtensionDataNodeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ExtensionDataReader_ExtensionDataNodeType(int32_t value__) noexcept;

  /// @brief Field Element value: I32(1)
  static ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType const Element;

  /// @brief Field EndElement value: I32(2)
  static ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType const EndElement;

  /// @brief Field None value: I32(0)
  static ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType const None;

  /// @brief Field NullElement value: I32(6)
  static ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType const NullElement;

  /// @brief Field ReferencedElement value: I32(5)
  static ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType const ReferencedElement;

  /// @brief Field Text value: I32(3)
  static ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType const Text;

  /// @brief Field Xml value: I32(4)
  static ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType const Xml;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17010 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType, 0x4>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Runtime.Serialization.ExtensionDataReader::ExtensionDataNodeType, System.Xml.ReadState, System.Xml.XmlNodeType, System.Xml.XmlReader
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.ExtensionDataReader
class CORDL_TYPE ExtensionDataReader : public ::System::Xml::XmlReader {
public:
  // Declarations
  using ExtensionDataNodeType = ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType;

  __declspec(property(get = get_AttributeCount)) int32_t AttributeCount;

  __declspec(property(get = get_BaseURI)) ::StringW BaseURI;

  __declspec(property(get = get_Depth)) int32_t Depth;

  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_IsEmptyElement)) bool IsEmptyElement;

  __declspec(property(get = get_IsXmlDataNode)) bool IsXmlDataNode;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NameTable)) ::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_NamespaceURI)) ::StringW NamespaceURI;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Prefix)) ::StringW Prefix;

  __declspec(property(get = get_QuoteChar)) char16_t QuoteChar;

  __declspec(property(get = get_ReadState)) ::System::Xml::ReadState ReadState;

  __declspec(property(get = get_Value)) ::StringW Value;

  __declspec(property(get = get_XmlLang)) ::StringW XmlLang;

  __declspec(property(get = get_XmlSpace)) ::System::Xml::XmlSpace XmlSpace;

  __declspec(property(get = get_EOF)) bool _cordl_EOF;

  /// @brief Field attributeCount, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_attributeCount, put = __cordl_internal_set_attributeCount)) int32_t attributeCount;

  /// @brief Field attributeIndex, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_attributeIndex, put = __cordl_internal_set_attributeIndex)) int32_t attributeIndex;

  /// @brief Field cache, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cache, put = __cordl_internal_set_cache)) ::System::Collections::Hashtable* cache;

  /// @brief Field context, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context)) ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context;

  /// @brief Field depth, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) int32_t depth;

  /// @brief Field deserializedDataNodes, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_deserializedDataNodes,
                      put = __cordl_internal_set_deserializedDataNodes)) ::System::Collections::Generic::Queue_1<::System::Runtime::Serialization::IDataNode*>* deserializedDataNodes;

  /// @brief Field element, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_element, put = __cordl_internal_set_element)) ::System::Runtime::Serialization::ElementData* element;

  /// @brief Field elements, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_elements,
                      put = __cordl_internal_set_elements)) ::ArrayW<::System::Runtime::Serialization::ElementData*, ::Array<::System::Runtime::Serialization::ElementData*>*>
      elements;

  /// @brief Field internalNodeType, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_internalNodeType,
                      put = __cordl_internal_set_internalNodeType)) ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType internalNodeType;

  /// @brief Field localName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_localName, put = __cordl_internal_set_localName)) ::StringW localName;

  /// @brief Field nextElement, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_nextElement, put = __cordl_internal_set_nextElement)) ::System::Runtime::Serialization::ElementData* nextElement;

  /// @brief Field nodeType, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_nodeType, put = __cordl_internal_set_nodeType)) ::System::Xml::XmlNodeType nodeType;

  /// @brief Field ns, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns)) ::StringW ns;

  /// @brief Field nsToPrefixTable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_nsToPrefixTable, put = setStaticF_nsToPrefixTable)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* nsToPrefixTable;

  /// @brief Field prefix, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_prefix, put = __cordl_internal_set_prefix)) ::StringW prefix;

  /// @brief Field prefixToNsTable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_prefixToNsTable, put = setStaticF_prefixToNsTable)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* prefixToNsTable;

  /// @brief Field readState, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_readState, put = __cordl_internal_set_readState)) ::System::Xml::ReadState readState;

  /// @brief Field value, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::StringW value;

  /// @brief Field xmlNodeReader, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlNodeReader, put = __cordl_internal_set_xmlNodeReader)) ::System::Xml::XmlNodeReader* xmlNodeReader;

  /// @brief Method AddDeserializedDataNode, addr 0x5f9ec10, size 0x244, virtual false, abstract: false, final false
  inline void AddDeserializedDataNode(::System::Runtime::Serialization::IDataNode* node);

  /// @brief Method AddPrefix, addr 0x5f9c620, size 0xd8, virtual false, abstract: false, final false
  static inline void AddPrefix(::StringW prefix, ::StringW ns);

  /// @brief Method CheckIfNodeHandled, addr 0x5f9e958, size 0x2b8, virtual false, abstract: false, final false
  inline bool CheckIfNodeHandled(::System::Runtime::Serialization::IDataNode* node);

  /// @brief Method Close, addr 0x5f9d4c0, size 0x58, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method GetAttribute, addr 0x5f9dc68, size 0x34, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(int32_t i);

  /// @brief Method GetAttribute, addr 0x5f9dc34, size 0x34, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name);

  /// @brief Method GetAttribute, addr 0x5f9d054, size 0xd8, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name, ::StringW namespaceURI);

  /// @brief Method GetCurrentNode, addr 0x5f9c910, size 0x30, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::IDataNode* GetCurrentNode();

  /// @brief Method GetNextElement, addr 0x5f9e8d4, size 0x84, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::ElementData* GetNextElement();

  /// @brief Method GetPrefix, addr 0x5f9ee54, size 0x290, virtual false, abstract: false, final false
  static inline ::StringW GetPrefix(::StringW ns);

  /// @brief Method GrowElementsIfNeeded, addr 0x5fa0c1c, size 0xb0, virtual false, abstract: false, final false
  inline void GrowElementsIfNeeded();

  /// @brief Method IsElementNode, addr 0x5f9d4a8, size 0x18, virtual false, abstract: false, final false
  inline bool IsElementNode(::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType nodeType);

  /// @brief Method LookupNamespace, addr 0x5f9d270, size 0xe0, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method MoveNext, addr 0x5f9d6dc, size 0x3b4, virtual false, abstract: false, final false
  inline void MoveNext(::System::Runtime::Serialization::IDataNode* dataNode);

  /// @brief Method MoveNextInClass, addr 0x5f9dd34, size 0x25c, virtual false, abstract: false, final false
  inline void MoveNextInClass(::System::Runtime::Serialization::ClassDataNode* dataNode);

  /// @brief Method MoveNextInCollection, addr 0x5f9df90, size 0x258, virtual false, abstract: false, final false
  inline void MoveNextInCollection(::System::Runtime::Serialization::CollectionDataNode* dataNode);

  /// @brief Method MoveNextInISerializable, addr 0x5f9e1e8, size 0x228, virtual false, abstract: false, final false
  inline void MoveNextInISerializable(::System::Runtime::Serialization::ISerializableDataNode* dataNode);

  /// @brief Method MoveNextInXml, addr 0x5f9e410, size 0x1e0, virtual false, abstract: false, final false
  inline void MoveNextInXml(::System::Runtime::Serialization::XmlDataNode* dataNode);

  /// @brief Method MoveToAttribute, addr 0x5f9dc9c, size 0x34, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW name);

  /// @brief Method MoveToAttribute, addr 0x5f9d12c, size 0xf0, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW name, ::StringW namespaceURI);

  /// @brief Method MoveToAttribute, addr 0x5f9cf68, size 0xec, virtual true, abstract: false, final false
  inline void MoveToAttribute(int32_t index);

  /// @brief Method MoveToDeserializedObject, addr 0x5f9e5f0, size 0x2e4, virtual false, abstract: false, final false
  inline void MoveToDeserializedObject(::System::Runtime::Serialization::IDataNode* dataNode);

  /// @brief Method MoveToElement, addr 0x5f9d21c, size 0x54, virtual true, abstract: false, final false
  inline bool MoveToElement();

  /// @brief Method MoveToFirstAttribute, addr 0x5f9cea4, size 0x60, virtual true, abstract: false, final false
  inline bool MoveToFirstAttribute();

  /// @brief Method MoveToNextAttribute, addr 0x5f9cf04, size 0x64, virtual true, abstract: false, final false
  inline bool MoveToNextAttribute();

  /// @brief Method MoveToText, addr 0x5f9f0e4, size 0x1748, virtual false, abstract: false, final false
  inline bool MoveToText(::System::Type* type, ::System::Runtime::Serialization::IDataNode* dataNode, bool isTypedNode);

  static inline ::System::Runtime::Serialization::ExtensionDataReader* New_ctor(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context);

  /// @brief Method PopElement, addr 0x5f9db28, size 0x5c, virtual false, abstract: false, final false
  inline void PopElement();

  /// @brief Method PushElement, addr 0x5f9da90, size 0x98, virtual false, abstract: false, final false
  inline void PushElement();

  /// @brief Method Read, addr 0x5f9d518, size 0x1c4, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadAttributeValue, addr 0x5f9dd00, size 0x34, virtual true, abstract: false, final false
  inline bool ReadAttributeValue();

  /// @brief Method Reset, addr 0x5f9cb9c, size 0x24, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ResolveEntity, addr 0x5f9dcd0, size 0x30, virtual true, abstract: false, final false
  inline void ResolveEntity();

  /// @brief Method SetDataNode, addr 0x5f9c940, size 0x24, virtual false, abstract: false, final false
  inline void SetDataNode(::System::Runtime::Serialization::IDataNode* dataNode, ::StringW name, ::StringW ns);

  /// @brief Method SetDeserializedValue, addr 0x5f9c798, size 0x178, virtual false, abstract: false, final false
  inline void SetDeserializedValue(::System::Object* obj);

  /// @brief Method SetElement, addr 0x5f9cb54, size 0x48, virtual false, abstract: false, final false
  inline void SetElement();

  /// @brief Method SetNextElement, addr 0x5f9c964, size 0x1f0, virtual false, abstract: false, final false
  inline void SetNextElement(::System::Runtime::Serialization::IDataNode* node, ::StringW name, ::StringW ns, ::StringW prefix);

  /// @brief Method Skip, addr 0x5f9d350, size 0x158, virtual true, abstract: false, final false
  inline void Skip();

  constexpr int32_t const& __cordl_internal_get_attributeCount() const;

  constexpr int32_t& __cordl_internal_get_attributeCount();

  constexpr int32_t const& __cordl_internal_get_attributeIndex() const;

  constexpr int32_t& __cordl_internal_get_attributeIndex();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_cache() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_cache();

  constexpr ::System::Runtime::Serialization::XmlObjectSerializerReadContext* const& __cordl_internal_get_context() const;

  constexpr ::System::Runtime::Serialization::XmlObjectSerializerReadContext*& __cordl_internal_get_context();

  constexpr int32_t const& __cordl_internal_get_depth() const;

  constexpr int32_t& __cordl_internal_get_depth();

  constexpr ::System::Collections::Generic::Queue_1<::System::Runtime::Serialization::IDataNode*>* const& __cordl_internal_get_deserializedDataNodes() const;

  constexpr ::System::Collections::Generic::Queue_1<::System::Runtime::Serialization::IDataNode*>*& __cordl_internal_get_deserializedDataNodes();

  constexpr ::System::Runtime::Serialization::ElementData* const& __cordl_internal_get_element() const;

  constexpr ::System::Runtime::Serialization::ElementData*& __cordl_internal_get_element();

  constexpr ::ArrayW<::System::Runtime::Serialization::ElementData*, ::Array<::System::Runtime::Serialization::ElementData*>*> const& __cordl_internal_get_elements() const;

  constexpr ::ArrayW<::System::Runtime::Serialization::ElementData*, ::Array<::System::Runtime::Serialization::ElementData*>*>& __cordl_internal_get_elements();

  constexpr ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType const& __cordl_internal_get_internalNodeType() const;

  constexpr ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType& __cordl_internal_get_internalNodeType();

  constexpr ::StringW const& __cordl_internal_get_localName() const;

  constexpr ::StringW& __cordl_internal_get_localName();

  constexpr ::System::Runtime::Serialization::ElementData* const& __cordl_internal_get_nextElement() const;

  constexpr ::System::Runtime::Serialization::ElementData*& __cordl_internal_get_nextElement();

  constexpr ::System::Xml::XmlNodeType const& __cordl_internal_get_nodeType() const;

  constexpr ::System::Xml::XmlNodeType& __cordl_internal_get_nodeType();

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr ::StringW const& __cordl_internal_get_prefix() const;

  constexpr ::StringW& __cordl_internal_get_prefix();

  constexpr ::System::Xml::ReadState const& __cordl_internal_get_readState() const;

  constexpr ::System::Xml::ReadState& __cordl_internal_get_readState();

  constexpr ::StringW const& __cordl_internal_get_value() const;

  constexpr ::StringW& __cordl_internal_get_value();

  constexpr ::System::Xml::XmlNodeReader* const& __cordl_internal_get_xmlNodeReader() const;

  constexpr ::System::Xml::XmlNodeReader*& __cordl_internal_get_xmlNodeReader();

  constexpr void __cordl_internal_set_attributeCount(int32_t value);

  constexpr void __cordl_internal_set_attributeIndex(int32_t value);

  constexpr void __cordl_internal_set_cache(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_context(::System::Runtime::Serialization::XmlObjectSerializerReadContext* value);

  constexpr void __cordl_internal_set_depth(int32_t value);

  constexpr void __cordl_internal_set_deserializedDataNodes(::System::Collections::Generic::Queue_1<::System::Runtime::Serialization::IDataNode*>* value);

  constexpr void __cordl_internal_set_element(::System::Runtime::Serialization::ElementData* value);

  constexpr void __cordl_internal_set_elements(::ArrayW<::System::Runtime::Serialization::ElementData*, ::Array<::System::Runtime::Serialization::ElementData*>*> value);

  constexpr void __cordl_internal_set_internalNodeType(::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType value);

  constexpr void __cordl_internal_set_localName(::StringW value);

  constexpr void __cordl_internal_set_nextElement(::System::Runtime::Serialization::ElementData* value);

  constexpr void __cordl_internal_set_nodeType(::System::Xml::XmlNodeType value);

  constexpr void __cordl_internal_set_ns(::StringW value);

  constexpr void __cordl_internal_set_prefix(::StringW value);

  constexpr void __cordl_internal_set_readState(::System::Xml::ReadState value);

  constexpr void __cordl_internal_set_value(::StringW value);

  constexpr void __cordl_internal_set_xmlNodeReader(::System::Xml::XmlNodeReader* value);

  /// @brief Method .ctor, addr 0x5f9c6f8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF_nsToPrefixTable();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF_prefixToNsTable();

  /// @brief Method get_AttributeCount, addr 0x5f9ccf0, size 0x34, virtual true, abstract: false, final false
  inline int32_t get_AttributeCount();

  /// @brief Method get_BaseURI, addr 0x5f9dbc0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method get_Depth, addr 0x5f9ccc0, size 0x30, virtual true, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_EOF, addr 0x5f9cd24, size 0x3c, virtual true, abstract: false, final false
  inline bool get_EOF();

  /// @brief Method get_IsDefault, addr 0x5f9cdc8, size 0x34, virtual true, abstract: false, final false
  inline bool get_IsDefault();

  /// @brief Method get_IsEmptyElement, addr 0x5f9cd94, size 0x34, virtual true, abstract: false, final false
  inline bool get_IsEmptyElement();

  /// @brief Method get_IsXmlDataNode, addr 0x5f9cbc0, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsXmlDataNode();

  /// @brief Method get_LocalName, addr 0x5f9cc00, size 0x30, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x5f9db84, size 0x3c, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameTable, addr 0x5f9dc00, size 0x34, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_NamespaceURI, addr 0x5f9cc30, size 0x30, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_NodeType, addr 0x5f9cbd0, size 0x30, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Prefix, addr 0x5f9cc60, size 0x30, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_QuoteChar, addr 0x5f9cdfc, size 0x34, virtual true, abstract: false, final false
  inline char16_t get_QuoteChar();

  /// @brief Method get_ReadState, addr 0x5f9cd60, size 0x34, virtual true, abstract: false, final false
  inline ::System::Xml::ReadState get_ReadState();

  /// @brief Method get_Value, addr 0x5f9cc90, size 0x30, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_XmlLang, addr 0x5f9ce64, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x5f9ce30, size 0x34, virtual true, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

  static inline void setStaticF_nsToPrefixTable(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  static inline void setStaticF_prefixToNsTable(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtensionDataReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExtensionDataReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtensionDataReader(ExtensionDataReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtensionDataReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtensionDataReader(ExtensionDataReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17011 };

  /// @brief Field cache, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___cache;

  /// @brief Field elements, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Runtime::Serialization::ElementData*, ::Array<::System::Runtime::Serialization::ElementData*>*> ___elements;

  /// @brief Field element, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::Serialization::ElementData* ___element;

  /// @brief Field nextElement, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Serialization::ElementData* ___nextElement;

  /// @brief Field readState, offset: 0x30, size: 0x4, def value: None
  ::System::Xml::ReadState ___readState;

  /// @brief Field internalNodeType, offset: 0x34, size: 0x4, def value: None
  ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType ___internalNodeType;

  /// @brief Field nodeType, offset: 0x38, size: 0x4, def value: None
  ::System::Xml::XmlNodeType ___nodeType;

  /// @brief Field depth, offset: 0x3c, size: 0x4, def value: None
  int32_t ___depth;

  /// @brief Field localName, offset: 0x40, size: 0x8, def value: None
  ::StringW ___localName;

  /// @brief Field ns, offset: 0x48, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field prefix, offset: 0x50, size: 0x8, def value: None
  ::StringW ___prefix;

  /// @brief Field value, offset: 0x58, size: 0x8, def value: None
  ::StringW ___value;

  /// @brief Field attributeCount, offset: 0x60, size: 0x4, def value: None
  int32_t ___attributeCount;

  /// @brief Field attributeIndex, offset: 0x64, size: 0x4, def value: None
  int32_t ___attributeIndex;

  /// @brief Field xmlNodeReader, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::XmlNodeReader* ___xmlNodeReader;

  /// @brief Field deserializedDataNodes, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::System::Runtime::Serialization::IDataNode*>* ___deserializedDataNodes;

  /// @brief Field context, offset: 0x78, size: 0x8, def value: None
  ::System::Runtime::Serialization::XmlObjectSerializerReadContext* ___context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataReader, ___cache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataReader, ___elements) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataReader, ___element) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataReader, ___nextElement) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataReader, ___readState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataReader, ___internalNodeType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataReader, ___nodeType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataReader, ___depth) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataReader, ___localName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataReader, ___ns) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataReader, ___prefix) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataReader, ___value) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataReader, ___attributeCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataReader, ___attributeIndex) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataReader, ___xmlNodeReader) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataReader, ___deserializedDataNodes) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataReader, ___context) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ExtensionDataReader, 0x80>, "Size mismatch!");

} // namespace System::Runtime::Serialization
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType, "System.Runtime.Serialization", "ExtensionDataReader/ExtensionDataNodeType");
NEED_NO_BOX(::System::Runtime::Serialization::ExtensionDataReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ExtensionDataReader*, "System.Runtime.Serialization", "ExtensionDataReader");
