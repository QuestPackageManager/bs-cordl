#pragma once
// IWYU pragma private; include "System/Xml/DocumentXPathNavigator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/XPath/zzzz__XPathNavigator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DocumentXPathNavigator)
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml::XPath {
struct XPathNamespaceScope;
}
namespace System::Xml::XPath {
class XPathNavigator;
}
namespace System::Xml::XPath {
struct XPathNodeType;
}
namespace System::Xml {
class XmlAttributeCollection;
}
namespace System::Xml {
class XmlAttribute;
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
class XmlNode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class DocumentXPathNavigator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::DocumentXPathNavigator);
// Dependencies System.Xml.XPath.XPathNavigator
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.DocumentXPathNavigator
class CORDL_TYPE DocumentXPathNavigator : public ::System::Xml::XPath::XPathNavigator {
public:
  // Declarations
  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_NameTable)) ::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_NamespaceURI)) ::StringW NamespaceURI;

  __declspec(property(get = get_NodeType)) ::System::Xml::XPath::XPathNodeType NodeType;

  __declspec(property(get = get_Prefix)) ::StringW Prefix;

  __declspec(property(get = get_SchemaInfo)) ::System::Xml::Schema::IXmlSchemaInfo* SchemaInfo;

  __declspec(property(get = get_UnderlyingObject)) ::System::Object* UnderlyingObject;

  __declspec(property(get = get_Value)) ::StringW Value;

  __declspec(property(get = get_ValueDocument)) ::StringW ValueDocument;

  __declspec(property(get = get_ValueText)) ::StringW ValueText;

  /// @brief Field attributeIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_attributeIndex, put = __cordl_internal_set_attributeIndex)) int32_t attributeIndex;

  /// @brief Field document, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_document, put = __cordl_internal_set_document)) ::System::Xml::XmlDocument* document;

  /// @brief Field namespaceParent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_namespaceParent, put = __cordl_internal_set_namespaceParent)) ::System::Xml::XmlElement* namespaceParent;

  /// @brief Field source, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::System::Xml::XmlNode* source;

  /// @brief Method CalibrateText, addr 0x60978a0, size 0x48, virtual false, abstract: false, final false
  inline void CalibrateText();

  /// @brief Method CheckAttributePosition, addr 0x6098954, size 0x94, virtual false, abstract: false, final false
  static inline bool CheckAttributePosition(::System::Xml::XmlAttribute* attribute, ::ByRef<::System::Xml::XmlAttributeCollection*> attributes, int32_t index);

  /// @brief Method Clone, addr 0x60977dc, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Xml::XPath::XPathNavigator* Clone();

  /// @brief Method IsSamePosition, addr 0x6098d70, size 0x9c, virtual true, abstract: false, final false
  inline bool IsSamePosition(::System::Xml::XPath::XPathNavigator* other);

  /// @brief Method LookupNamespace, addr 0x6098bc8, size 0x5c, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method MoveToFirstNamespace, addr 0x6098090, size 0x200, virtual true, abstract: false, final false
  inline bool MoveToFirstNamespace(::System::Xml::XPath::XPathNamespaceScope scope);

  /// @brief Method MoveToFirstNamespaceGlobal, addr 0x6098438, size 0x144, virtual false, abstract: false, final false
  static inline bool MoveToFirstNamespaceGlobal(::ByRef<::System::Xml::XmlAttributeCollection*> attributes, ::ByRef<int32_t> index);

  /// @brief Method MoveToFirstNamespaceLocal, addr 0x6098290, size 0x60, virtual false, abstract: false, final false
  static inline bool MoveToFirstNamespaceLocal(::System::Xml::XmlAttributeCollection* attributes, ::ByRef<int32_t> index);

  /// @brief Method MoveToNamespace, addr 0x6097db4, size 0x238, virtual true, abstract: false, final false
  inline bool MoveToNamespace(::StringW name);

  /// @brief Method MoveToNextNamespace, addr 0x60986c0, size 0x294, virtual true, abstract: false, final false
  inline bool MoveToNextNamespace(::System::Xml::XPath::XPathNamespaceScope scope);

  /// @brief Method MoveToNextNamespaceGlobal, addr 0x609857c, size 0x144, virtual false, abstract: false, final false
  static inline bool MoveToNextNamespaceGlobal(::ByRef<::System::Xml::XmlAttributeCollection*> attributes, ::ByRef<int32_t> index);

  /// @brief Method MoveToNextNamespaceLocal, addr 0x6098a7c, size 0x54, virtual false, abstract: false, final false
  static inline bool MoveToNextNamespaceLocal(::System::Xml::XmlAttributeCollection* attributes, ::ByRef<int32_t> index);

  /// @brief Method MoveToParent, addr 0x6098c24, size 0xd4, virtual true, abstract: false, final false
  inline bool MoveToParent();

  static inline ::System::Xml::DocumentXPathNavigator* New_ctor(::System::Xml::XmlDocument* document, ::System::Xml::XmlNode* node);

  static inline ::System::Xml::DocumentXPathNavigator* New_ctor(::System::Xml::DocumentXPathNavigator* other);

  /// @brief Method NextSibling, addr 0x6097d40, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNode* NextSibling(::System::Xml::XmlNode* node);

  /// @brief Method NextSiblingTail, addr 0x6098ed0, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNode* NextSiblingTail(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* sibling);

  /// @brief Method ParentNode, addr 0x6098cf8, size 0x78, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNode* ParentNode(::System::Xml::XmlNode* node);

  /// @brief Method ParentNodeTail, addr 0x6098e88, size 0x48, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNode* ParentNodeTail(::System::Xml::XmlNode* parent);

  /// @brief Method PathHasDuplicateNamespace, addr 0x6098ad0, size 0xf8, virtual false, abstract: false, final false
  inline bool PathHasDuplicateNamespace(::System::Xml::XmlElement* top, ::System::Xml::XmlElement* bottom, ::StringW localName);

  /// @brief Method PreviousText, addr 0x6098e2c, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNode* PreviousText(::System::Xml::XmlNode* node);

  /// @brief Method PreviousTextTail, addr 0x6098f84, size 0x104, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNode* PreviousTextTail(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* text);

  /// @brief Method ResetAttributePosition, addr 0x60989e8, size 0x94, virtual false, abstract: false, final false
  static inline bool ResetAttributePosition(::System::Xml::XmlAttribute* attribute, ::System::Xml::XmlAttributeCollection* attributes, ::ByRef<int32_t> index);

  /// @brief Method ResetPosition, addr 0x609768c, size 0xd0, virtual false, abstract: false, final false
  inline void ResetPosition(::System::Xml::XmlNode* node);

  constexpr int32_t const& __cordl_internal_get_attributeIndex() const;

  constexpr int32_t& __cordl_internal_get_attributeIndex();

  constexpr ::System::Xml::XmlDocument* const& __cordl_internal_get_document() const;

  constexpr ::System::Xml::XmlDocument*& __cordl_internal_get_document();

  constexpr ::System::Xml::XmlElement* const& __cordl_internal_get_namespaceParent() const;

  constexpr ::System::Xml::XmlElement*& __cordl_internal_get_namespaceParent();

  constexpr ::System::Xml::XmlNode* const& __cordl_internal_get_source() const;

  constexpr ::System::Xml::XmlNode*& __cordl_internal_get_source();

  constexpr void __cordl_internal_set_attributeIndex(int32_t value);

  constexpr void __cordl_internal_set_document(::System::Xml::XmlDocument* value);

  constexpr void __cordl_internal_set_namespaceParent(::System::Xml::XmlElement* value);

  constexpr void __cordl_internal_set_source(::System::Xml::XmlNode* value);

  /// @brief Method .ctor, addr 0x609761c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlDocument* document, ::System::Xml::XmlNode* node);

  /// @brief Method .ctor, addr 0x609775c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::DocumentXPathNavigator* other);

  /// @brief Method get_LocalName, addr 0x60978e8, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NameTable, addr 0x6097838, size 0x24, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_NamespaceURI, addr 0x6097908, size 0xb4, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_NodeType, addr 0x6097874, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Xml::XPath::XPathNodeType get_NodeType();

  /// @brief Method get_Prefix, addr 0x60979ec, size 0xb4, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_SchemaInfo, addr 0x6098e0c, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo();

  /// @brief Method get_UnderlyingObject, addr 0x6097d9c, size 0x18, virtual true, abstract: false, final false
  inline ::System::Object* get_UnderlyingObject();

  /// @brief Method get_Value, addr 0x6097aa0, size 0x98, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_ValueDocument, addr 0x6097b38, size 0x44, virtual false, abstract: false, final false
  inline ::StringW get_ValueDocument();

  /// @brief Method get_ValueText, addr 0x6097b7c, size 0x134, virtual false, abstract: false, final false
  inline ::StringW get_ValueText();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DocumentXPathNavigator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DocumentXPathNavigator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DocumentXPathNavigator(DocumentXPathNavigator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DocumentXPathNavigator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DocumentXPathNavigator(DocumentXPathNavigator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9349 };

  /// @brief Field document, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlDocument* ___document;

  /// @brief Field source, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlNode* ___source;

  /// @brief Field attributeIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ___attributeIndex;

  /// @brief Field namespaceParent, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlElement* ___namespaceParent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::DocumentXPathNavigator, ___document) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DocumentXPathNavigator, ___source) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DocumentXPathNavigator, ___attributeIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DocumentXPathNavigator, ___namespaceParent) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::DocumentXPathNavigator, 0x30>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::DocumentXPathNavigator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::DocumentXPathNavigator*, "System.Xml", "DocumentXPathNavigator");
