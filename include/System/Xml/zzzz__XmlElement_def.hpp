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
// Type: System.Xml::XmlElement
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlElement*
class CORDL_TYPE XmlElement : public ::System::Xml::XmlLinkedNode {
public:
  // Declarations
  __declspec(property(get = get_Attributes))::System::Xml::XmlAttributeCollection* Attributes;

  __declspec(property(get = get_HasAttributes)) bool HasAttributes;

  __declspec(property(get = get_InnerText, put = set_InnerText))::StringW InnerText;

  __declspec(property(put = set_InnerXml))::StringW InnerXml;

  __declspec(property(get = get_IsContainer)) bool IsContainer;

  __declspec(property(get = get_IsEmpty, put = set_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_LastNode, put = set_LastNode))::System::Xml::XmlLinkedNode* LastNode;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_NamespaceURI))::StringW NamespaceURI;

  __declspec(property(get = get_NextSibling))::System::Xml::XmlNode* NextSibling;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_OwnerDocument))::System::Xml::XmlDocument* OwnerDocument;

  __declspec(property(get = get_ParentNode))::System::Xml::XmlNode* ParentNode;

  __declspec(property(get = get_Prefix, put = set_Prefix))::StringW Prefix;

  __declspec(property(get = get_SchemaInfo))::System::Xml::Schema::IXmlSchemaInfo* SchemaInfo;

  __declspec(property(get = get_XmlName, put = set_XmlName))::System::Xml::XmlName* XmlName;

  /// @brief Field attributes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes))::System::Xml::XmlAttributeCollection* attributes;

  /// @brief Field lastChild, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_lastChild, put = __cordl_internal_set_lastChild))::System::Xml::XmlLinkedNode* lastChild;

  /// @brief Field name, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::System::Xml::XmlName* name;

  /// @brief Method AppendChildForLoad, addr 0x2eb68f8, size 0x170, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* newChild, ::System::Xml::XmlDocument* doc);

  /// @brief Method CloneNode, addr 0x2eb61e4, size 0x58c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method GetAttribute, addr 0x2eb6eb8, size 0x94, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW localName, ::StringW namespaceURI);

  /// @brief Method GetAttribute, addr 0x2eb6c18, size 0x80, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name);

  /// @brief Method GetAttributeNode, addr 0x2eb7050, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlAttribute* GetAttributeNode(::StringW localName, ::StringW namespaceURI);

  /// @brief Method GetAttributeNode, addr 0x2eb6d3c, size 0x64, virtual true, abstract: false, final false
  inline ::System::Xml::XmlAttribute* GetAttributeNode(::StringW name);

  /// @brief Method HasAttribute, addr 0x2eb7198, size 0x24, virtual true, abstract: false, final false
  inline bool HasAttribute(::StringW name);

  /// @brief Method IsValidChildType, addr 0x2eb6a88, size 0x24, virtual true, abstract: false, final false
  inline bool IsValidChildType(::System::Xml::XmlNodeType type);

  static inline ::System::Xml::XmlElement* New_ctor(::System::Xml::XmlName* name, bool empty, ::System::Xml::XmlDocument* doc);

  static inline ::System::Xml::XmlElement* New_ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::XmlDocument* doc);

  /// @brief Method RemoveAll, addr 0x2eb7678, size 0x28, virtual true, abstract: false, final false
  inline void RemoveAll();

  /// @brief Method RemoveAllAttributes, addr 0x2eb7640, size 0x38, virtual true, abstract: false, final false
  inline void RemoveAllAttributes();

  /// @brief Method RemoveAllChildren, addr 0x2eb6a68, size 0x8, virtual false, abstract: false, final false
  inline void RemoveAllChildren();

  /// @brief Method SetAttribute, addr 0x2eb6f4c, size 0x104, virtual true, abstract: false, final false
  inline ::StringW SetAttribute(::StringW localName, ::StringW namespaceURI, ::StringW value);

  /// @brief Method SetAttribute, addr 0x2eb6c98, size 0xa4, virtual true, abstract: false, final false
  inline void SetAttribute(::StringW name, ::StringW value);

  /// @brief Method SetAttributeNode, addr 0x2eb70bc, size 0xdc, virtual true, abstract: false, final false
  inline ::System::Xml::XmlAttribute* SetAttributeNode(::StringW localName, ::StringW namespaceURI);

  /// @brief Method SetAttributeNode, addr 0x2eb6da0, size 0x118, virtual true, abstract: false, final false
  inline ::System::Xml::XmlAttribute* SetAttributeNode(::System::Xml::XmlAttribute* newAttr);

  /// @brief Method SetParent, addr 0x2eb789c, size 0x8, virtual true, abstract: false, final false
  inline void SetParent(::System::Xml::XmlNode* node);

  /// @brief Method WriteContentTo, addr 0x2eb75d8, size 0x68, virtual true, abstract: false, final false
  inline void WriteContentTo(::System::Xml::XmlWriter* w);

  /// @brief Method WriteElementTo, addr 0x2eb72d0, size 0x1f0, virtual false, abstract: false, final false
  static inline void WriteElementTo(::System::Xml::XmlWriter* writer, ::System::Xml::XmlElement* e);

  /// @brief Method WriteStartElement, addr 0x2eb74c0, size 0x118, virtual false, abstract: false, final false
  inline void WriteStartElement(::System::Xml::XmlWriter* w);

  /// @brief Method WriteTo, addr 0x2eb71bc, size 0x114, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* w);

  constexpr ::System::Xml::XmlAttributeCollection*& __cordl_internal_get_attributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlAttributeCollection*> const& __cordl_internal_get_attributes() const;

  constexpr ::System::Xml::XmlLinkedNode*& __cordl_internal_get_lastChild();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlLinkedNode*> const& __cordl_internal_get_lastChild() const;

  constexpr ::System::Xml::XmlName*& __cordl_internal_get_name();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlName*> const& __cordl_internal_get_name() const;

  constexpr void __cordl_internal_set_attributes(::System::Xml::XmlAttributeCollection* value);

  constexpr void __cordl_internal_set_lastChild(::System::Xml::XmlLinkedNode* value);

  constexpr void __cordl_internal_set_name(::System::Xml::XmlName* value);

  /// @brief Method .ctor, addr 0x2eb4200, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlName* name, bool empty, ::System::Xml::XmlDocument* doc);

  /// @brief Method .ctor, addr 0x2eb6190, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_Attributes, addr 0x2eb6aac, size 0x144, virtual true, abstract: false, final false
  inline ::System::Xml::XmlAttributeCollection* get_Attributes();

  /// @brief Method get_HasAttributes, addr 0x2eb6bf0, size 0x28, virtual true, abstract: false, final false
  inline bool get_HasAttributes();

  /// @brief Method get_InnerText, addr 0x2eb779c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_InnerText();

  /// @brief Method get_IsContainer, addr 0x2eb68f0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsContainer();

  /// @brief Method get_IsEmpty, addr 0x2eb6770, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_LastNode, addr 0x2eb6a70, size 0x10, virtual true, abstract: false, final false
  inline ::System::Xml::XmlLinkedNode* get_LastNode();

  /// @brief Method get_LocalName, addr 0x2eb67d8, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x2eb67bc, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NamespaceURI, addr 0x2eb67f4, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_NextSibling, addr 0x2eb7860, size 0x3c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_NextSibling();

  /// @brief Method get_NodeType, addr 0x2eb68c4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_OwnerDocument, addr 0x2eb68d4, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDocument* get_OwnerDocument();

  /// @brief Method get_ParentNode, addr 0x2eb68cc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_ParentNode();

  /// @brief Method get_Prefix, addr 0x2eb6810, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_SchemaInfo, addr 0x2eb76a0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo();

  /// @brief Method get_XmlName, addr 0x2eb61d4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlName* get_XmlName();

  /// @brief Method set_InnerText, addr 0x2eb77a4, size 0xbc, virtual true, abstract: false, final false
  inline void set_InnerText(::StringW value);

  /// @brief Method set_InnerXml, addr 0x2eb76a8, size 0x80, virtual true, abstract: false, final false
  inline void set_InnerXml(::StringW value);

  /// @brief Method set_IsEmpty, addr 0x2eb6780, size 0x3c, virtual false, abstract: false, final false
  inline void set_IsEmpty(bool value);

  /// @brief Method set_LastNode, addr 0x2eb6a80, size 0x8, virtual true, abstract: false, final false
  inline void set_LastNode(::System::Xml::XmlLinkedNode* value);

  /// @brief Method set_Prefix, addr 0x2eb682c, size 0x98, virtual true, abstract: false, final false
  inline void set_Prefix(::StringW value);

  /// @brief Method set_XmlName, addr 0x2eb61dc, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field name, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlName* ___name;

  /// @brief Field attributes, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlAttributeCollection* ___attributes;

  /// @brief Field lastChild, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::XmlLinkedNode* ___lastChild;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlElement, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlElement, ___name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlElement, ___attributes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlElement, ___lastChild) == 0x30, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlElement*, "System.Xml", "XmlElement");
