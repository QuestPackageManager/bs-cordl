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

  __declspec(property(get = get_XmlName, put = set_XmlName)) ::System::Xml::XmlName* XmlName;

  /// @brief Field attributes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes)) ::System::Xml::XmlAttributeCollection* attributes;

  /// @brief Field lastChild, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_lastChild, put = __cordl_internal_set_lastChild)) ::System::Xml::XmlLinkedNode* lastChild;

  /// @brief Field name, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::System::Xml::XmlName* name;

  /// @brief Method AppendChildForLoad, addr 0x433d328, size 0x170, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* newChild, ::System::Xml::XmlDocument* doc);

  /// @brief Method CloneNode, addr 0x433cc40, size 0x560, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method GetAttribute, addr 0x433d8d0, size 0x94, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW localName, ::StringW namespaceURI);

  /// @brief Method GetAttribute, addr 0x433d638, size 0x80, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name);

  /// @brief Method GetAttributeNode, addr 0x433da68, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlAttribute* GetAttributeNode(::StringW localName, ::StringW namespaceURI);

  /// @brief Method GetAttributeNode, addr 0x433d75c, size 0x64, virtual true, abstract: false, final false
  inline ::System::Xml::XmlAttribute* GetAttributeNode(::StringW name);

  /// @brief Method HasAttribute, addr 0x433dbb0, size 0x24, virtual true, abstract: false, final false
  inline bool HasAttribute(::StringW name);

  /// @brief Method IsValidChildType, addr 0x433d4b8, size 0x24, virtual true, abstract: false, final false
  inline bool IsValidChildType(::System::Xml::XmlNodeType type);

  static inline ::System::Xml::XmlElement* New_ctor(::System::Xml::XmlName* name, bool empty, ::System::Xml::XmlDocument* doc);

  static inline ::System::Xml::XmlElement* New_ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::XmlDocument* doc);

  /// @brief Method RemoveAll, addr 0x433e088, size 0x28, virtual true, abstract: false, final false
  inline void RemoveAll();

  /// @brief Method RemoveAllAttributes, addr 0x433e050, size 0x38, virtual true, abstract: false, final false
  inline void RemoveAllAttributes();

  /// @brief Method RemoveAllChildren, addr 0x433d498, size 0x8, virtual false, abstract: false, final false
  inline void RemoveAllChildren();

  /// @brief Method SetAttribute, addr 0x433d964, size 0x104, virtual true, abstract: false, final false
  inline ::StringW SetAttribute(::StringW localName, ::StringW namespaceURI, ::StringW value);

  /// @brief Method SetAttribute, addr 0x433d6b8, size 0xa4, virtual true, abstract: false, final false
  inline void SetAttribute(::StringW name, ::StringW value);

  /// @brief Method SetAttributeNode, addr 0x433dad4, size 0xdc, virtual true, abstract: false, final false
  inline ::System::Xml::XmlAttribute* SetAttributeNode(::StringW localName, ::StringW namespaceURI);

  /// @brief Method SetAttributeNode, addr 0x433d7c0, size 0x110, virtual true, abstract: false, final false
  inline ::System::Xml::XmlAttribute* SetAttributeNode(::System::Xml::XmlAttribute* newAttr);

  /// @brief Method SetParent, addr 0x433e2ac, size 0x8, virtual true, abstract: false, final false
  inline void SetParent(::System::Xml::XmlNode* node);

  /// @brief Method WriteContentTo, addr 0x433dfe8, size 0x68, virtual true, abstract: false, final false
  inline void WriteContentTo(::System::Xml::XmlWriter* w);

  /// @brief Method WriteElementTo, addr 0x433dce8, size 0x1e8, virtual false, abstract: false, final false
  static inline void WriteElementTo(::System::Xml::XmlWriter* writer, ::System::Xml::XmlElement* e);

  /// @brief Method WriteStartElement, addr 0x433ded0, size 0x118, virtual false, abstract: false, final false
  inline void WriteStartElement(::System::Xml::XmlWriter* w);

  /// @brief Method WriteTo, addr 0x433dbd4, size 0x114, virtual true, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x433ad18, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlName* name, bool empty, ::System::Xml::XmlDocument* doc);

  /// @brief Method .ctor, addr 0x433cbec, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_Attributes, addr 0x433d4dc, size 0x134, virtual true, abstract: false, final false
  inline ::System::Xml::XmlAttributeCollection* get_Attributes();

  /// @brief Method get_HasAttributes, addr 0x433d610, size 0x28, virtual true, abstract: false, final false
  inline bool get_HasAttributes();

  /// @brief Method get_InnerText, addr 0x433e1ac, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_InnerText();

  /// @brief Method get_IsContainer, addr 0x433d320, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsContainer();

  /// @brief Method get_IsEmpty, addr 0x433d1a0, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_LastNode, addr 0x433d4a0, size 0x10, virtual true, abstract: false, final false
  inline ::System::Xml::XmlLinkedNode* get_LastNode();

  /// @brief Method get_LocalName, addr 0x433d208, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x433d1ec, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NamespaceURI, addr 0x433d224, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_NextSibling, addr 0x433e270, size 0x3c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_NextSibling();

  /// @brief Method get_NodeType, addr 0x433d2f4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_OwnerDocument, addr 0x433d304, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDocument* get_OwnerDocument();

  /// @brief Method get_ParentNode, addr 0x433d2fc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_ParentNode();

  /// @brief Method get_Prefix, addr 0x433d240, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_SchemaInfo, addr 0x433e0b0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo();

  /// @brief Method get_XmlName, addr 0x433cc30, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlName* get_XmlName();

  /// @brief Method set_InnerText, addr 0x433e1b4, size 0xbc, virtual true, abstract: false, final false
  inline void set_InnerText(::StringW value);

  /// @brief Method set_InnerXml, addr 0x433e0b8, size 0x80, virtual true, abstract: false, final false
  inline void set_InnerXml(::StringW value);

  /// @brief Method set_IsEmpty, addr 0x433d1b0, size 0x3c, virtual false, abstract: false, final false
  inline void set_IsEmpty(bool value);

  /// @brief Method set_LastNode, addr 0x433d4b0, size 0x8, virtual true, abstract: false, final false
  inline void set_LastNode(::System::Xml::XmlLinkedNode* value);

  /// @brief Method set_Prefix, addr 0x433d25c, size 0x98, virtual true, abstract: false, final false
  inline void set_Prefix(::StringW value);

  /// @brief Method set_XmlName, addr 0x433cc38, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7296 };

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
