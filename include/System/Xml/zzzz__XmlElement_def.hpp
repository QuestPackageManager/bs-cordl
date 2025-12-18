#pragma once
// IWYU pragma private; include "System/Xml/XmlElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlElement)
namespace System::Xml::Schema {
class IXmlSchemaInfo;
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
class XmlLinkedNode;
}
namespace System::Xml {
class XmlName;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlElement);
// Dependencies System.Xml.XmlLinkedNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlElement
class CORDL_TYPE XmlElement : public ::System::Xml::XmlLinkedNode {
public:
  // Declarations
  __declspec(property(get = get_Attributes)) ::System::Xml::XmlAttributeCollection* Attributes;

  __declspec(property(get = get_HasAttributes)) bool HasAttributes;

  __declspec(property(get = get_InnerText, put = set_InnerText)) ::StringW InnerText;

  __declspec(property(put = set_InnerXml)) ::StringW InnerXml;

  __declspec(property(get = get_IsContainer)) bool IsContainer;

  __declspec(property(get = get_IsEmpty, put = set_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_LastNode, put = set_LastNode)) ::System::Xml::XmlLinkedNode* LastNode;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NamespaceURI)) ::StringW NamespaceURI;

  __declspec(property(get = get_NextSibling)) ::System::Xml::XmlNode* NextSibling;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_OwnerDocument)) ::System::Xml::XmlDocument* OwnerDocument;

  __declspec(property(get = get_ParentNode)) ::System::Xml::XmlNode* ParentNode;

  __declspec(property(get = get_Prefix, put = set_Prefix)) ::StringW Prefix;

  __declspec(property(get = get_SchemaInfo)) ::System::Xml::Schema::IXmlSchemaInfo* SchemaInfo;

  __declspec(property(get = get_XPLocalName)) ::StringW XPLocalName;

  __declspec(property(get = get_XPNodeType)) ::System::Xml::XPath::XPathNodeType XPNodeType;

  __declspec(property(get = get_XmlName, put = set_XmlName)) ::System::Xml::XmlName* XmlName;

  /// @brief Field attributes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes)) ::System::Xml::XmlAttributeCollection* attributes;

  /// @brief Field lastChild, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_lastChild, put = __cordl_internal_set_lastChild)) ::System::Xml::XmlLinkedNode* lastChild;

  /// @brief Field name, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::System::Xml::XmlName* name;

  /// @brief Method AppendChildForLoad, addr 0x610c084, size 0x168, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* newChild, ::System::Xml::XmlDocument* doc);

  /// @brief Method CloneNode, addr 0x610b9e8, size 0x52c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method GetAttribute, addr 0x610c5d0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW localName, ::StringW namespaceURI);

  /// @brief Method GetAttribute, addr 0x610c374, size 0x40, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name);

  /// @brief Method GetAttributeNode, addr 0x610c6e4, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlAttribute* GetAttributeNode(::StringW localName, ::StringW namespaceURI);

  /// @brief Method GetAttributeNode, addr 0x610c458, size 0x64, virtual true, abstract: false, final false
  inline ::System::Xml::XmlAttribute* GetAttributeNode(::StringW name);

  /// @brief Method HasAttribute, addr 0x610c7fc, size 0x24, virtual true, abstract: false, final false
  inline bool HasAttribute(::StringW name);

  /// @brief Method IsValidChildType, addr 0x610c208, size 0x18, virtual true, abstract: false, final false
  inline bool IsValidChildType(::System::Xml::XmlNodeType type);

  static inline ::System::Xml::XmlElement* New_ctor(::System::Xml::XmlName* name, bool empty, ::System::Xml::XmlDocument* doc);

  static inline ::System::Xml::XmlElement* New_ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::XmlDocument* doc);

  /// @brief Method RemoveAll, addr 0x610cca0, size 0x24, virtual true, abstract: false, final false
  inline void RemoveAll();

  /// @brief Method RemoveAllAttributes, addr 0x610cc68, size 0x38, virtual true, abstract: false, final false
  inline void RemoveAllAttributes();

  /// @brief Method RemoveAllChildren, addr 0x610c1ec, size 0x4, virtual false, abstract: false, final false
  inline void RemoveAllChildren();

  /// @brief Method SetAttribute, addr 0x610c610, size 0xd4, virtual true, abstract: false, final false
  inline ::StringW SetAttribute(::StringW localName, ::StringW namespaceURI, ::StringW value);

  /// @brief Method SetAttribute, addr 0x610c3b4, size 0xa4, virtual true, abstract: false, final false
  inline void SetAttribute(::StringW name, ::StringW value);

  /// @brief Method SetAttributeNode, addr 0x610c750, size 0xac, virtual true, abstract: false, final false
  inline ::System::Xml::XmlAttribute* SetAttributeNode(::StringW localName, ::StringW namespaceURI);

  /// @brief Method SetAttributeNode, addr 0x610c4bc, size 0x114, virtual true, abstract: false, final false
  inline ::System::Xml::XmlAttribute* SetAttributeNode(::System::Xml::XmlAttribute* newAttr);

  /// @brief Method SetParent, addr 0x610cf10, size 0x8, virtual true, abstract: false, final false
  inline void SetParent(::System::Xml::XmlNode* node);

  /// @brief Method WriteContentTo, addr 0x610cc00, size 0x68, virtual true, abstract: false, final false
  inline void WriteContentTo(::System::Xml::XmlWriter* w);

  /// @brief Method WriteElementTo, addr 0x610c91c, size 0x1cc, virtual false, abstract: false, final false
  static inline void WriteElementTo(::System::Xml::XmlWriter* writer, ::System::Xml::XmlElement* e);

  /// @brief Method WriteStartElement, addr 0x610cae8, size 0x118, virtual false, abstract: false, final false
  inline void WriteStartElement(::System::Xml::XmlWriter* w);

  /// @brief Method WriteTo, addr 0x610c820, size 0xfc, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* w);

  constexpr ::System::Xml::XmlAttributeCollection* const& __cordl_internal_get_attributes() const;

  constexpr ::System::Xml::XmlAttributeCollection*& __cordl_internal_get_attributes();

  constexpr ::System::Xml::XmlLinkedNode* const& __cordl_internal_get_lastChild() const;

  constexpr ::System::Xml::XmlLinkedNode*& __cordl_internal_get_lastChild();

  constexpr ::System::Xml::XmlName* const& __cordl_internal_get_name() const;

  constexpr ::System::Xml::XmlName*& __cordl_internal_get_name();

  constexpr void __cordl_internal_set_attributes(::System::Xml::XmlAttributeCollection* value);

  constexpr void __cordl_internal_set_lastChild(::System::Xml::XmlLinkedNode* value);

  constexpr void __cordl_internal_set_name(::System::Xml::XmlName* value);

  /// @brief Method .ctor, addr 0x6109a10, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlName* name, bool empty, ::System::Xml::XmlDocument* doc);

  /// @brief Method .ctor, addr 0x610b994, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_Attributes, addr 0x610c220, size 0x12c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlAttributeCollection* get_Attributes();

  /// @brief Method get_HasAttributes, addr 0x610c34c, size 0x28, virtual true, abstract: false, final false
  inline bool get_HasAttributes();

  /// @brief Method get_InnerText, addr 0x610ce18, size 0x4, virtual true, abstract: false, final false
  inline ::StringW get_InnerText();

  /// @brief Method get_IsContainer, addr 0x610c07c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsContainer();

  /// @brief Method get_IsEmpty, addr 0x610bf14, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_LastNode, addr 0x610c1f0, size 0x10, virtual true, abstract: false, final false
  inline ::System::Xml::XmlLinkedNode* get_LastNode();

  /// @brief Method get_LocalName, addr 0x610bf74, size 0x18, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x610bf60, size 0x14, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NamespaceURI, addr 0x610bf8c, size 0x18, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_NextSibling, addr 0x610ced4, size 0x3c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_NextSibling();

  /// @brief Method get_NodeType, addr 0x610c054, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_OwnerDocument, addr 0x610c064, size 0x18, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDocument* get_OwnerDocument();

  /// @brief Method get_ParentNode, addr 0x610c05c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_ParentNode();

  /// @brief Method get_Prefix, addr 0x610bfa4, size 0x18, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_SchemaInfo, addr 0x610cd2c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo();

  /// @brief Method get_XPLocalName, addr 0x610cf20, size 0x10, virtual true, abstract: false, final false
  inline ::StringW get_XPLocalName();

  /// @brief Method get_XPNodeType, addr 0x610cf18, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XPath::XPathNodeType get_XPNodeType();

  /// @brief Method get_XmlName, addr 0x610b9d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlName* get_XmlName();

  /// @brief Method set_InnerText, addr 0x610ce1c, size 0xb8, virtual true, abstract: false, final false
  inline void set_InnerText(::StringW value);

  /// @brief Method set_InnerXml, addr 0x610cd34, size 0x70, virtual true, abstract: false, final false
  inline void set_InnerXml(::StringW value);

  /// @brief Method set_IsEmpty, addr 0x610bf24, size 0x3c, virtual false, abstract: false, final false
  inline void set_IsEmpty(bool value);

  /// @brief Method set_LastNode, addr 0x610c200, size 0x8, virtual true, abstract: false, final false
  inline void set_LastNode(::System::Xml::XmlLinkedNode* value);

  /// @brief Method set_Prefix, addr 0x610bfbc, size 0x98, virtual true, abstract: false, final false
  inline void set_Prefix(::StringW value);

  /// @brief Method set_XmlName, addr 0x610b9e0, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlName(::System::Xml::XmlName* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlElement(XmlElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlElement(XmlElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9366 };

  /// @brief Field name, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlName* ___name;

  /// @brief Field attributes, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlAttributeCollection* ___attributes;

  /// @brief Field lastChild, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::XmlLinkedNode* ___lastChild;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlElement, ___name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlElement, ___attributes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlElement, ___lastChild) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlElement, 0x38>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlElement*, "System.Xml", "XmlElement");
