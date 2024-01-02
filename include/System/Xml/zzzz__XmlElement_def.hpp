#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlElement)
namespace System::Xml {
class XmlAttributeCollection;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlLinkedNode;
}
namespace System::Xml {
class XmlName;
}
namespace System::Xml {
class XmlAttribute;
}
namespace System::Xml {
struct XmlNodeType;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11513))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11508))
// CS Name: ::System.Xml::XmlElement*
class CORDL_TYPE XmlElement : public ::System::Xml::XmlLinkedNode {
public:
  // Declarations
  /// @brief Field name, offset 0x20, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::System::Xml::XmlName* name;

  /// @brief Field attributes, offset 0x28, size 0x8
  __declspec(property(get = __get_attributes, put = __set_attributes))::System::Xml::XmlAttributeCollection* attributes;

  /// @brief Field lastChild, offset 0x30, size 0x8
  __declspec(property(get = __get_lastChild, put = __set_lastChild))::System::Xml::XmlLinkedNode* lastChild;

  __declspec(property(get = get_XmlName, put = set_XmlName))::System::Xml::XmlName* XmlName;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_NamespaceURI))::StringW NamespaceURI;

  __declspec(property(get = get_Prefix))::StringW Prefix;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_ParentNode))::System::Xml::XmlNode* ParentNode;

  __declspec(property(get = get_OwnerDocument))::System::Xml::XmlDocument* OwnerDocument;

  __declspec(property(get = get_IsContainer)) bool IsContainer;

  __declspec(property(get = get_IsEmpty, put = set_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_LastNode, put = set_LastNode))::System::Xml::XmlLinkedNode* LastNode;

  __declspec(property(get = get_Attributes))::System::Xml::XmlAttributeCollection* Attributes;

  __declspec(property(get = get_HasAttributes)) bool HasAttributes;

  __declspec(property(put = set_InnerXml))::StringW InnerXml;

  __declspec(property(get = get_InnerText, put = set_InnerText))::StringW InnerText;

  __declspec(property(get = get_NextSibling))::System::Xml::XmlNode* NextSibling;

  constexpr ::System::Xml::XmlName*& __get_name();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlName*> const& __get_name() const;

  constexpr void __set_name(::System::Xml::XmlName* value);

  constexpr ::System::Xml::XmlAttributeCollection*& __get_attributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlAttributeCollection*> const& __get_attributes() const;

  constexpr void __set_attributes(::System::Xml::XmlAttributeCollection* value);

  constexpr ::System::Xml::XmlLinkedNode*& __get_lastChild();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlLinkedNode*> const& __get_lastChild() const;

  constexpr void __set_lastChild(::System::Xml::XmlLinkedNode* value);

  static inline ::System::Xml::XmlElement* New_ctor(::System::Xml::XmlName* name, bool empty, ::System::Xml::XmlDocument* doc);

  /// @brief Method .ctor, addr 0x288821c, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlName* name, bool empty, ::System::Xml::XmlDocument* doc);

  static inline ::System::Xml::XmlElement* New_ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::XmlDocument* doc);

  /// @brief Method .ctor, addr 0x288833c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_XmlName, addr 0x2888380, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlName* get_XmlName();

  /// @brief Method set_XmlName, addr 0x2888388, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlName(::System::Xml::XmlName* value);

  /// @brief Method CloneNode, addr 0x2888390, size 0x58c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method get_Name, addr 0x2888964, size 0x18, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_LocalName, addr 0x2888b28, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NamespaceURI, addr 0x2888b44, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_Prefix, addr 0x2888b60, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_NodeType, addr 0x2888b7c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_ParentNode, addr 0x2888b84, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_ParentNode();

  /// @brief Method get_OwnerDocument, addr 0x2888b8c, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDocument* get_OwnerDocument();

  /// @brief Method get_IsContainer, addr 0x2888ba8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsContainer();

  /// @brief Method AppendChildForLoad, addr 0x2888bb0, size 0x168, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* newChild, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_IsEmpty, addr 0x288891c, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method set_IsEmpty, addr 0x288892c, size 0x38, virtual false, abstract: false, final false
  inline void set_IsEmpty(bool value);

  /// @brief Method get_LastNode, addr 0x2888d34, size 0x10, virtual true, abstract: false, final false
  inline ::System::Xml::XmlLinkedNode* get_LastNode();

  /// @brief Method set_LastNode, addr 0x2888d44, size 0x8, virtual true, abstract: false, final false
  inline void set_LastNode(::System::Xml::XmlLinkedNode* value);

  /// @brief Method IsValidChildType, addr 0x2888d4c, size 0x24, virtual true, abstract: false, final false
  inline bool IsValidChildType(::System::Xml::XmlNodeType type);

  /// @brief Method get_Attributes, addr 0x2888d70, size 0x144, virtual true, abstract: false, final false
  inline ::System::Xml::XmlAttributeCollection* get_Attributes();

  /// @brief Method get_HasAttributes, addr 0x2888eb4, size 0x28, virtual true, abstract: false, final false
  inline bool get_HasAttributes();

  /// @brief Method SetAttributeNode, addr 0x2888edc, size 0x118, virtual true, abstract: false, final false
  inline ::System::Xml::XmlAttribute* SetAttributeNode(::System::Xml::XmlAttribute* newAttr);

  /// @brief Method RemoveAllAttributes, addr 0x2888ff4, size 0x3c, virtual true, abstract: false, final false
  inline void RemoveAllAttributes();

  /// @brief Method RemoveAll, addr 0x2889030, size 0x24, virtual true, abstract: false, final false
  inline void RemoveAll();

  /// @brief Method RemoveAllChildren, addr 0x2888d30, size 0x4, virtual false, abstract: false, final false
  inline void RemoveAllChildren();

  /// @brief Method set_InnerXml, addr 0x28890bc, size 0x7c, virtual true, abstract: false, final false
  inline void set_InnerXml(::StringW value);

  /// @brief Method get_InnerText, addr 0x28891ac, size 0x4, virtual true, abstract: false, final false
  inline ::StringW get_InnerText();

  /// @brief Method set_InnerText, addr 0x28892b8, size 0xb8, virtual true, abstract: false, final false
  inline void set_InnerText(::StringW value);

  /// @brief Method get_NextSibling, addr 0x2889370, size 0x3c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_NextSibling();

  /// @brief Method SetParent, addr 0x28893ac, size 0x8, virtual true, abstract: false, final false
  inline void SetParent(::System::Xml::XmlNode* node);

  // Ctor Parameters [CppParam { name: "", ty: "XmlElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlElement(XmlElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlElement(XmlElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlElement();

public:
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
