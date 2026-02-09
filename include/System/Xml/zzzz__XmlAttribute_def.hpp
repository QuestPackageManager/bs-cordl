#pragma once
// IWYU pragma private; include "System/Xml/XmlAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAttribute)
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml::XPath {
struct XPathNodeType;
}
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
namespace System::Xml {
struct XmlSpace;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlAttribute);
// Dependencies System.Xml.XmlNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlAttribute
class CORDL_TYPE XmlAttribute : public ::System::Xml::XmlNode {
public:
// Declarations
 __declspec(property(get=get_BaseURI)) ::StringW  BaseURI;

 __declspec(property(put=set_InnerText)) ::StringW  InnerText;

 __declspec(property(put=set_InnerXml)) ::StringW  InnerXml;

 __declspec(property(get=get_IsContainer)) bool  IsContainer;

 __declspec(property(get=get_IsNamespace)) bool  IsNamespace;

 __declspec(property(get=get_LastNode, put=set_LastNode)) ::System::Xml::XmlLinkedNode*  LastNode;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_LocalNameHash)) int32_t  LocalNameHash;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NamespaceURI)) ::StringW  NamespaceURI;

 __declspec(property(get=get_NodeType)) ::System::Xml::XmlNodeType  NodeType;

 __declspec(property(get=get_OwnerDocument)) ::System::Xml::XmlDocument*  OwnerDocument;

 __declspec(property(get=get_OwnerElement)) ::System::Xml::XmlElement*  OwnerElement;

 __declspec(property(get=get_ParentNode)) ::System::Xml::XmlNode*  ParentNode;

 __declspec(property(get=get_Prefix, put=set_Prefix)) ::StringW  Prefix;

 __declspec(property(get=get_SchemaInfo)) ::System::Xml::Schema::IXmlSchemaInfo*  SchemaInfo;

 __declspec(property(get=get_Specified)) bool  Specified;

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

 __declspec(property(get=get_XPLocalName)) ::StringW  XPLocalName;

 __declspec(property(get=get_XPNodeType)) ::System::Xml::XPath::XPathNodeType  XPNodeType;

 __declspec(property(get=get_XmlLang)) ::StringW  XmlLang;

 __declspec(property(get=get_XmlName, put=set_XmlName)) ::System::Xml::XmlName*  XmlName;

 __declspec(property(get=get_XmlSpace)) ::System::Xml::XmlSpace  XmlSpace;

/// @brief Field lastChild, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastChild, put=__cordl_internal_set_lastChild)) ::System::Xml::XmlLinkedNode*  lastChild;

/// @brief Field name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::System::Xml::XmlName*  name;

/// @brief Method AppendChild, addr 0x61038bc, size 0x70, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* AppendChild(::System::Xml::XmlNode*  newChild) ;

/// @brief Method AppendChildForLoad, addr 0x61025bc, size 0x160, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode*  newChild, ::System::Xml::XmlDocument*  doc) ;

/// @brief Method CloneNode, addr 0x6101cf8, size 0xc8, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* CloneNode(bool  deep) ;

/// @brief Method InsertAfter, addr 0x6102e00, size 0x88, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* InsertAfter(::System::Xml::XmlNode*  newChild, ::System::Xml::XmlNode*  refChild) ;

/// @brief Method InsertBefore, addr 0x6102810, size 0x88, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* InsertBefore(::System::Xml::XmlNode*  newChild, ::System::Xml::XmlNode*  refChild) ;

/// @brief Method IsValidChildType, addr 0x61027f8, size 0x10, virtual true, abstract: false, final false
inline bool IsValidChildType(::System::Xml::XmlNodeType  type) ;

static inline ::System::Xml::XmlAttribute* New_ctor(::System::Xml::XmlName*  name, ::System::Xml::XmlDocument*  doc) ;

static inline ::System::Xml::XmlAttribute* New_ctor(::StringW  prefix, ::StringW  localName, ::StringW  namespaceURI, ::System::Xml::XmlDocument*  doc) ;

/// @brief Method PrepareOwnerElementInElementIdAttrMap, addr 0x6102110, size 0xb0, virtual false, abstract: false, final false
inline bool PrepareOwnerElementInElementIdAttrMap() ;

/// @brief Method PrependChild, addr 0x61037c0, size 0xb4, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* PrependChild(::System::Xml::XmlNode*  newChild) ;

/// @brief Method RemoveChild, addr 0x61033d0, size 0x68, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* RemoveChild(::System::Xml::XmlNode*  oldChild) ;

/// @brief Method ResetOwnerElementInElementIdAttrMap, addr 0x610238c, size 0x7c, virtual false, abstract: false, final false
inline void ResetOwnerElementInElementIdAttrMap(::StringW  oldInnerText) ;

/// @brief Method SetParent, addr 0x6104050, size 0x8, virtual true, abstract: false, final false
inline void SetParent(::System::Xml::XmlNode*  node) ;

/// @brief Method WriteContentTo, addr 0x6103f84, size 0x68, virtual true, abstract: false, final false
inline void WriteContentTo(::System::Xml::XmlWriter*  w) ;

/// @brief Method WriteTo, addr 0x6103ed0, size 0xb4, virtual true, abstract: false, final false
inline void WriteTo(::System::Xml::XmlWriter*  w) ;

constexpr ::System::Xml::XmlLinkedNode* const& __cordl_internal_get_lastChild() const;

constexpr ::System::Xml::XmlLinkedNode*& __cordl_internal_get_lastChild() ;

constexpr ::System::Xml::XmlName* const& __cordl_internal_get_name() const;

constexpr ::System::Xml::XmlName*& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_lastChild(::System::Xml::XmlLinkedNode*  value) ;

constexpr void __cordl_internal_set_name(::System::Xml::XmlName*  value) ;

/// @brief Method .ctor, addr 0x610194c, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::XmlName*  name, ::System::Xml::XmlDocument*  doc) ;

/// @brief Method .ctor, addr 0x6101b98, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  prefix, ::StringW  localName, ::StringW  namespaceURI, ::System::Xml::XmlDocument*  doc) ;

/// @brief Method get_BaseURI, addr 0x6103fec, size 0x64, virtual true, abstract: false, final false
inline ::StringW get_BaseURI() ;

/// @brief Method get_IsContainer, addr 0x61025b4, size 0x8, virtual true, abstract: false, final false
inline bool get_IsContainer() ;

/// @brief Method get_IsNamespace, addr 0x60ffc08, size 0x30, virtual false, abstract: false, final false
inline bool get_IsNamespace() ;

/// @brief Method get_LastNode, addr 0x61027e8, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::XmlLinkedNode* get_LastNode() ;

/// @brief Method get_LocalName, addr 0x6101f94, size 0x18, virtual true, abstract: false, final false
inline ::StringW get_LocalName() ;

/// @brief Method get_LocalNameHash, addr 0x6101b80, size 0x18, virtual false, abstract: false, final false
inline int32_t get_LocalNameHash() ;

/// @brief Method get_Name, addr 0x6101dc8, size 0x14, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NamespaceURI, addr 0x6101fac, size 0x18, virtual true, abstract: false, final false
inline ::StringW get_NamespaceURI() ;

/// @brief Method get_NodeType, addr 0x6102070, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_OwnerDocument, addr 0x6102078, size 0x18, virtual true, abstract: false, final false
inline ::System::Xml::XmlDocument* get_OwnerDocument() ;

/// @brief Method get_OwnerElement, addr 0x6103dc4, size 0x80, virtual true, abstract: false, final false
inline ::System::Xml::XmlElement* get_OwnerElement() ;

/// @brief Method get_ParentNode, addr 0x6101dc0, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* get_ParentNode() ;

/// @brief Method get_Prefix, addr 0x6101fc4, size 0x18, virtual true, abstract: false, final false
inline ::StringW get_Prefix() ;

/// @brief Method get_SchemaInfo, addr 0x61020b0, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo() ;

/// @brief Method get_Specified, addr 0x6102808, size 0x8, virtual true, abstract: false, final false
inline bool get_Specified() ;

/// @brief Method get_Value, addr 0x6102090, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method get_XPLocalName, addr 0x610412c, size 0x90, virtual true, abstract: false, final false
inline ::StringW get_XPLocalName() ;

/// @brief Method get_XPNodeType, addr 0x6104110, size 0x1c, virtual true, abstract: false, final false
inline ::System::Xml::XPath::XPathNodeType get_XPNodeType() ;

/// @brief Method get_XmlLang, addr 0x61040ac, size 0x64, virtual true, abstract: false, final false
inline ::StringW get_XmlLang() ;

/// @brief Method get_XmlName, addr 0x6101ce8, size 0x8, virtual false, abstract: false, final false
inline ::System::Xml::XmlName* get_XmlName() ;

/// @brief Method get_XmlSpace, addr 0x6104058, size 0x54, virtual true, abstract: false, final false
inline ::System::Xml::XmlSpace get_XmlSpace() ;

/// @brief Method set_InnerText, addr 0x61020b8, size 0x58, virtual true, abstract: false, final false
inline void set_InnerText(::StringW  value) ;

/// @brief Method set_InnerXml, addr 0x6103e44, size 0x80, virtual true, abstract: false, final false
inline void set_InnerXml(::StringW  value) ;

/// @brief Method set_LastNode, addr 0x61027f0, size 0x8, virtual true, abstract: false, final false
inline void set_LastNode(::System::Xml::XmlLinkedNode*  value) ;

/// @brief Method set_Prefix, addr 0x6101fdc, size 0x94, virtual true, abstract: false, final false
inline void set_Prefix(::StringW  value) ;

/// @brief Method set_Value, addr 0x61020a0, size 0x10, virtual true, abstract: false, final false
inline void set_Value(::StringW  value) ;

/// @brief Method set_XmlName, addr 0x6101cf0, size 0x8, virtual false, abstract: false, final false
inline void set_XmlName(::System::Xml::XmlName*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlAttribute(XmlAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlAttribute(XmlAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9359};

/// @brief Field name, offset: 0x18, size: 0x8, def value: None
 ::System::Xml::XmlName*  ___name;

/// @brief Field lastChild, offset: 0x20, size: 0x8, def value: None
 ::System::Xml::XmlLinkedNode*  ___lastChild;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlAttribute, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlAttribute, ___lastChild) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlAttribute, 0x28>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlAttribute*, "System.Xml", "XmlAttribute");
