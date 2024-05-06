#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNodeReaderNavigator)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml {
class XmlDeclaration;
}
namespace System::Xml {
class XmlDocumentType;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlElement;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
struct XmlNamespaceScope;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
struct XmlSpace;
}
namespace System::Xml {
struct __XmlNodeReaderNavigator__VirtualAttribute;
}
// Forward declare root types
namespace System::Xml {
class XmlNodeReaderNavigator;
}
namespace System::Xml {
struct __XmlNodeReaderNavigator__VirtualAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlNodeReaderNavigator);
MARK_VAL_T(::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute);
// Type: ::VirtualAttribute
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// CS Name: ::XmlNodeReaderNavigator::VirtualAttribute
struct CORDL_TYPE __XmlNodeReaderNavigator__VirtualAttribute {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2e9f58c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlNodeReaderNavigator__VirtualAttribute();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __XmlNodeReaderNavigator__VirtualAttribute(::StringW name, ::StringW value) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field value, offset: 0x8, size: 0x8, def value: None
  ::StringW value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute, value) == 0x8, "Offset mismatch!");

} // namespace System::Xml
// Type: System.Xml::XmlNodeReaderNavigator
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 105, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlNodeReaderNavigator*
class CORDL_TYPE XmlNodeReaderNavigator : public ::System::Object {
public:
  // Declarations
  using VirtualAttribute = ::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute;

  __declspec(property(get = get_AttributeCount)) int32_t AttributeCount;

  __declspec(property(get = get_BaseURI))::StringW BaseURI;

  __declspec(property(get = get_CreatedOnAttribute)) bool CreatedOnAttribute;

  __declspec(property(get = get_Document))::System::Xml::XmlDocument* Document;

  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_IsEmptyElement)) bool IsEmptyElement;

  __declspec(property(get = get_IsOnDeclOrDocType)) bool IsOnDeclOrDocType;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_NameTable))::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_NamespaceURI))::StringW NamespaceURI;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Prefix))::StringW Prefix;

  __declspec(property(get = get_SchemaInfo))::System::Xml::Schema::IXmlSchemaInfo* SchemaInfo;

  __declspec(property(get = get_Value))::StringW Value;

  __declspec(property(get = get_XmlLang))::StringW XmlLang;

  __declspec(property(get = get_XmlSpace))::System::Xml::XmlSpace XmlSpace;

  /// @brief Field attrIndex, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_attrIndex, put = __cordl_internal_set_attrIndex)) int32_t attrIndex;

  /// @brief Field bCreatedOnAttribute, offset 0x55, size 0x1
  __declspec(property(get = __cordl_internal_get_bCreatedOnAttribute, put = __cordl_internal_set_bCreatedOnAttribute)) bool bCreatedOnAttribute;

  /// @brief Field bLogOnAttrVal, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get_bLogOnAttrVal, put = __cordl_internal_set_bLogOnAttrVal)) bool bLogOnAttrVal;

  /// @brief Field bOnAttrVal, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_bOnAttrVal, put = __cordl_internal_set_bOnAttrVal)) bool bOnAttrVal;

  /// @brief Field curNode, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_curNode, put = __cordl_internal_set_curNode))::System::Xml::XmlNode* curNode;

  /// @brief Field decNodeAttributes, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_decNodeAttributes,
                      put = __cordl_internal_set_decNodeAttributes))::ArrayW<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute,
                                                                             ::Array<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute>*> decNodeAttributes;

  /// @brief Field doc, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_doc, put = __cordl_internal_set_doc))::System::Xml::XmlDocument* doc;

  /// @brief Field docTypeNodeAttributes, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_docTypeNodeAttributes,
                      put = __cordl_internal_set_docTypeNodeAttributes))::ArrayW<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute,
                                                                                 ::Array<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute>*> docTypeNodeAttributes;

  /// @brief Field elemNode, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_elemNode, put = __cordl_internal_set_elemNode))::System::Xml::XmlNode* elemNode;

  /// @brief Field logAttrIndex, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_logAttrIndex, put = __cordl_internal_set_logAttrIndex)) int32_t logAttrIndex;

  /// @brief Field logNode, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_logNode, put = __cordl_internal_set_logNode))::System::Xml::XmlNode* logNode;

  /// @brief Field nAttrInd, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_nAttrInd, put = __cordl_internal_set_nAttrInd)) int32_t nAttrInd;

  /// @brief Field nDeclarationAttrCount, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_nDeclarationAttrCount, put = __cordl_internal_set_nDeclarationAttrCount)) int32_t nDeclarationAttrCount;

  /// @brief Field nDocTypeAttrCount, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_nDocTypeAttrCount, put = __cordl_internal_set_nDocTypeAttrCount)) int32_t nDocTypeAttrCount;

  /// @brief Field nLogAttrInd, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_nLogAttrInd, put = __cordl_internal_set_nLogAttrInd)) int32_t nLogAttrInd;

  /// @brief Field nLogLevel, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_nLogLevel, put = __cordl_internal_set_nLogLevel)) int32_t nLogLevel;

  /// @brief Field nameTable, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_nameTable, put = __cordl_internal_set_nameTable))::System::Xml::XmlNameTable* nameTable;

  /// @brief Method CheckIndexCondition, addr 0x2e9ffec, size 0x6c, virtual false, abstract: false, final false
  inline void CheckIndexCondition(int32_t attributeIndex);

  /// @brief Method DefaultLookupNamespace, addr 0x2ea16b4, size 0x138, virtual false, abstract: false, final false
  inline ::StringW DefaultLookupNamespace(::StringW prefix);

  /// @brief Method GetAttribute, addr 0x2ea07b4, size 0x1d4, virtual false, abstract: false, final false
  inline ::StringW GetAttribute(int32_t attributeIndex);

  /// @brief Method GetAttribute, addr 0x2ea0400, size 0x19c, virtual false, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name);

  /// @brief Method GetAttribute, addr 0x2ea05e4, size 0x1d0, virtual false, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name, ::StringW ns);

  /// @brief Method GetAttributeFromElement, addr 0x2ea03bc, size 0x44, virtual false, abstract: false, final false
  inline ::StringW GetAttributeFromElement(::System::Xml::XmlElement* elem, ::StringW name);

  /// @brief Method GetAttributeFromElement, addr 0x2ea059c, size 0x48, virtual false, abstract: false, final false
  inline ::StringW GetAttributeFromElement(::System::Xml::XmlElement* elem, ::StringW name, ::StringW ns);

  /// @brief Method GetDecAttrInd, addr 0x2ea018c, size 0x98, virtual false, abstract: false, final false
  inline int32_t GetDecAttrInd(::StringW name);

  /// @brief Method GetDeclarationAttr, addr 0x2ea0058, size 0xe0, virtual false, abstract: false, final false
  inline ::StringW GetDeclarationAttr(::System::Xml::XmlDeclaration* decl, ::StringW name);

  /// @brief Method GetDeclarationAttr, addr 0x2ea0138, size 0x54, virtual false, abstract: false, final false
  inline ::StringW GetDeclarationAttr(int32_t i);

  /// @brief Method GetDocTypeAttrInd, addr 0x2ea0324, size 0x98, virtual false, abstract: false, final false
  inline int32_t GetDocTypeAttrInd(::StringW name);

  /// @brief Method GetDocumentTypeAttr, addr 0x2ea0224, size 0xac, virtual false, abstract: false, final false
  inline ::StringW GetDocumentTypeAttr(::System::Xml::XmlDocumentType* docType, ::StringW name);

  /// @brief Method GetDocumentTypeAttr, addr 0x2ea02d0, size 0x54, virtual false, abstract: false, final false
  inline ::StringW GetDocumentTypeAttr(int32_t i);

  /// @brief Method GetNamespacesInScope, addr 0x2ea1bb0, size 0x4b4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope);

  /// @brief Method InitDecAttr, addr 0x2e9fa60, size 0x134, virtual false, abstract: false, final false
  inline void InitDecAttr();

  /// @brief Method InitDocTypeAttr, addr 0x2e9ff18, size 0xd4, virtual false, abstract: false, final false
  inline void InitDocTypeAttr();

  /// @brief Method IsLocalNameEmpty, addr 0x2e9f6ec, size 0x24, virtual false, abstract: false, final false
  inline bool IsLocalNameEmpty(::System::Xml::XmlNodeType nt);

  /// @brief Method LogMove, addr 0x2ea0988, size 0x24, virtual false, abstract: false, final false
  inline void LogMove(int32_t level);

  /// @brief Method LookupNamespace, addr 0x2ea1408, size 0x2ac, virtual false, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method LookupPrefix, addr 0x2ea17ec, size 0x3c4, virtual false, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW namespaceName);

  /// @brief Method MoveToAttribute, addr 0x2ea0c74, size 0x60, virtual false, abstract: false, final false
  inline bool MoveToAttribute(::StringW name);

  /// @brief Method MoveToAttribute, addr 0x2ea0cd4, size 0x158, virtual false, abstract: false, final false
  inline bool MoveToAttribute(::StringW name, ::StringW namespaceURI);

  /// @brief Method MoveToAttribute, addr 0x2ea0ee4, size 0x1cc, virtual false, abstract: false, final false
  inline void MoveToAttribute(int32_t attributeIndex);

  /// @brief Method MoveToAttributeFromElement, addr 0x2ea0e2c, size 0xb8, virtual false, abstract: false, final false
  inline bool MoveToAttributeFromElement(::System::Xml::XmlElement* elem, ::StringW name, ::StringW ns);

  /// @brief Method MoveToElement, addr 0x2ea1388, size 0x80, virtual false, abstract: false, final false
  inline bool MoveToElement();

  /// @brief Method MoveToFirstChild, addr 0x2ea12b4, size 0x48, virtual false, abstract: false, final false
  inline bool MoveToFirstChild();

  /// @brief Method MoveToNext, addr 0x2ea1348, size 0x40, virtual false, abstract: false, final false
  inline bool MoveToNext();

  /// @brief Method MoveToNextAttribute, addr 0x2ea10b0, size 0x1c4, virtual false, abstract: false, final false
  inline bool MoveToNextAttribute(ByRef<int32_t> level);

  /// @brief Method MoveToNextSibling, addr 0x2ea12fc, size 0x4c, virtual false, abstract: false, final false
  inline bool MoveToNextSibling(::System::Xml::XmlNode* node);

  /// @brief Method MoveToParent, addr 0x2ea1274, size 0x40, virtual false, abstract: false, final false
  inline bool MoveToParent();

  static inline ::System::Xml::XmlNodeReaderNavigator* New_ctor(::System::Xml::XmlNode* node);

  /// @brief Method ReadAttributeValue, addr 0x2ea2064, size 0x1c0, virtual false, abstract: false, final false
  inline bool ReadAttributeValue(ByRef<int32_t> level, ByRef<bool> bResolveEntity, ByRef<::System::Xml::XmlNodeType> nt);

  /// @brief Method ResetMove, addr 0x2ea0aa8, size 0x1cc, virtual false, abstract: false, final false
  inline void ResetMove(ByRef<int32_t> level, ByRef<::System::Xml::XmlNodeType> nt);

  /// @brief Method ResetToAttribute, addr 0x2ea0a10, size 0x98, virtual false, abstract: false, final false
  inline void ResetToAttribute(ByRef<int32_t> level);

  /// @brief Method RollBackMove, addr 0x2ea09ac, size 0x2c, virtual false, abstract: false, final false
  inline void RollBackMove(ByRef<int32_t> level);

  constexpr int32_t const& __cordl_internal_get_attrIndex() const;

  constexpr int32_t& __cordl_internal_get_attrIndex();

  constexpr bool const& __cordl_internal_get_bCreatedOnAttribute() const;

  constexpr bool& __cordl_internal_get_bCreatedOnAttribute();

  constexpr bool const& __cordl_internal_get_bLogOnAttrVal() const;

  constexpr bool& __cordl_internal_get_bLogOnAttrVal();

  constexpr bool const& __cordl_internal_get_bOnAttrVal() const;

  constexpr bool& __cordl_internal_get_bOnAttrVal();

  constexpr ::System::Xml::XmlNode*& __cordl_internal_get_curNode();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> const& __cordl_internal_get_curNode() const;

  constexpr ::ArrayW<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute, ::Array<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute>*> const&
  __cordl_internal_get_decNodeAttributes() const;

  constexpr ::ArrayW<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute, ::Array<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute>*>& __cordl_internal_get_decNodeAttributes();

  constexpr ::System::Xml::XmlDocument*& __cordl_internal_get_doc();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlDocument*> const& __cordl_internal_get_doc() const;

  constexpr ::ArrayW<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute, ::Array<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute>*> const&
  __cordl_internal_get_docTypeNodeAttributes() const;

  constexpr ::ArrayW<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute, ::Array<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute>*>& __cordl_internal_get_docTypeNodeAttributes();

  constexpr ::System::Xml::XmlNode*& __cordl_internal_get_elemNode();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> const& __cordl_internal_get_elemNode() const;

  constexpr int32_t const& __cordl_internal_get_logAttrIndex() const;

  constexpr int32_t& __cordl_internal_get_logAttrIndex();

  constexpr ::System::Xml::XmlNode*& __cordl_internal_get_logNode();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> const& __cordl_internal_get_logNode() const;

  constexpr int32_t const& __cordl_internal_get_nAttrInd() const;

  constexpr int32_t& __cordl_internal_get_nAttrInd();

  constexpr int32_t const& __cordl_internal_get_nDeclarationAttrCount() const;

  constexpr int32_t& __cordl_internal_get_nDeclarationAttrCount();

  constexpr int32_t const& __cordl_internal_get_nDocTypeAttrCount() const;

  constexpr int32_t& __cordl_internal_get_nDocTypeAttrCount();

  constexpr int32_t const& __cordl_internal_get_nLogAttrInd() const;

  constexpr int32_t& __cordl_internal_get_nLogAttrInd();

  constexpr int32_t const& __cordl_internal_get_nLogLevel() const;

  constexpr int32_t& __cordl_internal_get_nLogLevel();

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_nameTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& __cordl_internal_get_nameTable() const;

  constexpr void __cordl_internal_set_attrIndex(int32_t value);

  constexpr void __cordl_internal_set_bCreatedOnAttribute(bool value);

  constexpr void __cordl_internal_set_bLogOnAttrVal(bool value);

  constexpr void __cordl_internal_set_bOnAttrVal(bool value);

  constexpr void __cordl_internal_set_curNode(::System::Xml::XmlNode* value);

  constexpr void __cordl_internal_set_decNodeAttributes(::ArrayW<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute, ::Array<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute>*> value);

  constexpr void __cordl_internal_set_doc(::System::Xml::XmlDocument* value);

  constexpr void
  __cordl_internal_set_docTypeNodeAttributes(::ArrayW<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute, ::Array<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute>*> value);

  constexpr void __cordl_internal_set_elemNode(::System::Xml::XmlNode* value);

  constexpr void __cordl_internal_set_logAttrIndex(int32_t value);

  constexpr void __cordl_internal_set_logNode(::System::Xml::XmlNode* value);

  constexpr void __cordl_internal_set_nAttrInd(int32_t value);

  constexpr void __cordl_internal_set_nDeclarationAttrCount(int32_t value);

  constexpr void __cordl_internal_set_nDocTypeAttrCount(int32_t value);

  constexpr void __cordl_internal_set_nLogAttrInd(int32_t value);

  constexpr void __cordl_internal_set_nLogLevel(int32_t value);

  constexpr void __cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value);

  /// @brief Method .ctor, addr 0x2e9f3bc, size 0x1d0, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNode* node);

  /// @brief Method get_AttributeCount, addr 0x2e9fdb4, size 0x164, virtual false, abstract: false, final false
  inline int32_t get_AttributeCount();

  /// @brief Method get_BaseURI, addr 0x2e9fb94, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method get_CreatedOnAttribute, addr 0x2e9f7bc, size 0x8, virtual false, abstract: false, final false
  inline bool get_CreatedOnAttribute();

  /// @brief Method get_Document, addr 0x2ea2224, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDocument* get_Document();

  /// @brief Method get_IsDefault, addr 0x2e9fcac, size 0xdc, virtual false, abstract: false, final false
  inline bool get_IsDefault();

  /// @brief Method get_IsEmptyElement, addr 0x2e9fc00, size 0xac, virtual false, abstract: false, final false
  inline bool get_IsEmptyElement();

  /// @brief Method get_IsOnDeclOrDocType, addr 0x2ea09d8, size 0x38, virtual false, abstract: false, final false
  inline bool get_IsOnDeclOrDocType();

  /// @brief Method get_LocalName, addr 0x2e9f710, size 0xac, virtual false, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x2e9f5fc, size 0xf0, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameTable, addr 0x2e9fdac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_NamespaceURI, addr 0x2e9f5d8, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_NodeType, addr 0x2e9f594, size 0x44, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Prefix, addr 0x2e9f7c4, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_SchemaInfo, addr 0x2e9fd88, size 0x24, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo();

  /// @brief Method get_Value, addr 0x2e9f7e8, size 0x278, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_XmlLang, addr 0x2e9fbdc, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x2e9fbb8, size 0x24, virtual false, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNodeReaderNavigator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeReaderNavigator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNodeReaderNavigator(XmlNodeReaderNavigator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeReaderNavigator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNodeReaderNavigator(XmlNodeReaderNavigator const&) = delete;

  /// @brief Field curNode, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlNode* ___curNode;

  /// @brief Field elemNode, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlNode* ___elemNode;

  /// @brief Field logNode, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlNode* ___logNode;

  /// @brief Field attrIndex, offset: 0x28, size: 0x4, def value: None
  int32_t ___attrIndex;

  /// @brief Field logAttrIndex, offset: 0x2c, size: 0x4, def value: None
  int32_t ___logAttrIndex;

  /// @brief Field nameTable, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  /// @brief Field doc, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::XmlDocument* ___doc;

  /// @brief Field nAttrInd, offset: 0x40, size: 0x4, def value: None
  int32_t ___nAttrInd;

  /// @brief Field nDeclarationAttrCount, offset: 0x44, size: 0x4, def value: None
  int32_t ___nDeclarationAttrCount;

  /// @brief Field nDocTypeAttrCount, offset: 0x48, size: 0x4, def value: None
  int32_t ___nDocTypeAttrCount;

  /// @brief Field nLogLevel, offset: 0x4c, size: 0x4, def value: None
  int32_t ___nLogLevel;

  /// @brief Field nLogAttrInd, offset: 0x50, size: 0x4, def value: None
  int32_t ___nLogAttrInd;

  /// @brief Field bLogOnAttrVal, offset: 0x54, size: 0x1, def value: None
  bool ___bLogOnAttrVal;

  /// @brief Field bCreatedOnAttribute, offset: 0x55, size: 0x1, def value: None
  bool ___bCreatedOnAttribute;

  /// @brief Field decNodeAttributes, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute, ::Array<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute>*> ___decNodeAttributes;

  /// @brief Field docTypeNodeAttributes, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute, ::Array<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute>*> ___docTypeNodeAttributes;

  /// @brief Field bOnAttrVal, offset: 0x68, size: 0x1, def value: None
  bool ___bOnAttrVal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlNodeReaderNavigator, 0x70>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___curNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___elemNode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___logNode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___attrIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___logAttrIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___nameTable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___doc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___nAttrInd) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___nDeclarationAttrCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___nDocTypeAttrCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___nLogLevel) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___nLogAttrInd) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___bLogOnAttrVal) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___bCreatedOnAttribute) == 0x55, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___decNodeAttributes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___docTypeNodeAttributes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeReaderNavigator, ___bOnAttrVal) == 0x68, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlNodeReaderNavigator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNodeReaderNavigator*, "System.Xml", "XmlNodeReaderNavigator");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute, "System.Xml", "XmlNodeReaderNavigator/VirtualAttribute");
