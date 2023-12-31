#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlAttribute)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlElement;
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
// Forward declare root types
namespace System::Xml {
class XmlAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlAttribute);
// Type: System.Xml::XmlAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11520))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11497))
// CS Name: ::System.Xml::XmlAttribute*
class CORDL_TYPE XmlAttribute : public ::System::Xml::XmlNode {
public:
  // Declarations
  /// @brief Field name, offset 0x18, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::System::Xml::XmlName* name;

  /// @brief Field lastChild, offset 0x20, size 0x8
  __declspec(property(get = __get_lastChild, put = __set_lastChild))::System::Xml::XmlLinkedNode* lastChild;

  __declspec(property(get = get_XmlName, put = set_XmlName))::System::Xml::XmlName* XmlName;

  __declspec(property(get = get_ParentNode))::System::Xml::XmlNode* ParentNode;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_NamespaceURI))::StringW NamespaceURI;

  __declspec(property(get = get_Prefix))::StringW Prefix;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_OwnerDocument))::System::Xml::XmlDocument* OwnerDocument;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  __declspec(property(put = set_InnerText))::StringW InnerText;

  __declspec(property(get = get_IsContainer)) bool IsContainer;

  __declspec(property(get = get_LastNode, put = set_LastNode))::System::Xml::XmlLinkedNode* LastNode;

  __declspec(property(get = get_Specified)) bool Specified;

  __declspec(property(get = get_OwnerElement))::System::Xml::XmlElement* OwnerElement;

  __declspec(property(put = set_InnerXml))::StringW InnerXml;

  __declspec(property(get = get_BaseURI))::StringW BaseURI;

  constexpr ::System::Xml::XmlName*& __get_name();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlName*> const& __get_name() const;

  constexpr void __set_name(::System::Xml::XmlName* value);

  constexpr ::System::Xml::XmlLinkedNode*& __get_lastChild();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlLinkedNode*> const& __get_lastChild() const;

  constexpr void __set_lastChild(::System::Xml::XmlLinkedNode* value);

  static inline ::System::Xml::XmlAttribute* New_ctor(::System::Xml::XmlName* name, ::System::Xml::XmlDocument* doc);

  /// @brief Method .ctor, addr 0x28819a4, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlName* name, ::System::Xml::XmlDocument* doc);

  static inline ::System::Xml::XmlAttribute* New_ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::XmlDocument* doc);

  /// @brief Method .ctor, addr 0x2881b8c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_XmlName, addr 0x2881ce4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlName* get_XmlName();

  /// @brief Method set_XmlName, addr 0x2881cec, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlName(::System::Xml::XmlName* value);

  /// @brief Method CloneNode, addr 0x2881cf4, size 0xc8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method get_ParentNode, addr 0x2881dbc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_ParentNode();

  /// @brief Method get_Name, addr 0x2881dc4, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_LocalName, addr 0x2881de0, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NamespaceURI, addr 0x2881dfc, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_Prefix, addr 0x2881e18, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_NodeType, addr 0x2881e34, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_OwnerDocument, addr 0x2881e3c, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDocument* get_OwnerDocument();

  /// @brief Method get_Value, addr 0x2881e58, size 0x10, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x2881e68, size 0x10, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

  /// @brief Method set_InnerText, addr 0x2881e78, size 0x64, virtual true, abstract: false, final false
  inline void set_InnerText(::StringW value);

  /// @brief Method PrepareOwnerElementInElementIdAttrMap, addr 0x2881edc, size 0xb0, virtual false, abstract: false, final false
  inline bool PrepareOwnerElementInElementIdAttrMap();

  /// @brief Method ResetOwnerElementInElementIdAttrMap, addr 0x2881f8c, size 0x7c, virtual false, abstract: false, final false
  inline void ResetOwnerElementInElementIdAttrMap(::StringW oldInnerText);

  /// @brief Method get_IsContainer, addr 0x28821bc, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsContainer();

  /// @brief Method AppendChildForLoad, addr 0x28821c4, size 0x168, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* newChild, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_LastNode, addr 0x28823e8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlLinkedNode* get_LastNode();

  /// @brief Method set_LastNode, addr 0x28823f0, size 0x8, virtual true, abstract: false, final false
  inline void set_LastNode(::System::Xml::XmlLinkedNode* value);

  /// @brief Method IsValidChildType, addr 0x28823f8, size 0x18, virtual true, abstract: false, final false
  inline bool IsValidChildType(::System::Xml::XmlNodeType type);

  /// @brief Method get_Specified, addr 0x2882410, size 0x8, virtual true, abstract: false, final false
  inline bool get_Specified();

  /// @brief Method RemoveChild, addr 0x2882418, size 0x78, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* RemoveChild(::System::Xml::XmlNode* oldChild);

  /// @brief Method AppendChild, addr 0x2882490, size 0x78, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* AppendChild(::System::Xml::XmlNode* newChild);

  /// @brief Method get_OwnerElement, addr 0x2882508, size 0x7c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlElement* get_OwnerElement();

  /// @brief Method set_InnerXml, addr 0x2882584, size 0x8c, virtual true, abstract: false, final false
  inline void set_InnerXml(::StringW value);

  /// @brief Method get_BaseURI, addr 0x2882610, size 0x98, virtual true, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method SetParent, addr 0x28826a8, size 0x8, virtual true, abstract: false, final false
  inline void SetParent(::System::Xml::XmlNode* node);

  // Ctor Parameters [CppParam { name: "", ty: "XmlAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAttribute(XmlAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAttribute(XmlAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAttribute();

public:
  /// @brief Field name, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlName* ___name;

  /// @brief Field lastChild, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlLinkedNode* ___lastChild;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlAttribute, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlAttribute, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlAttribute, ___lastChild) == 0x20, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlAttribute*, "System.Xml", "XmlAttribute");
