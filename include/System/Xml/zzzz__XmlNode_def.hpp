#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlNode)
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Xml {
struct XmlNodeChangedAction;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class ICloneable;
}
namespace System::Xml {
class XmlNodeChangedEventArgs;
}
namespace System::Xml {
class XmlLinkedNode;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Xml {
class XmlAttributeCollection;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNodeList;
}
// Forward declare root types
namespace System::Xml {
class XmlNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlNode);
// Type: System.Xml::XmlNode
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11520))
// CS Name: ::System.Xml::XmlNode*
class CORDL_TYPE XmlNode : public ::System::Object {
public:
  // Declarations
  /// @brief Field parentNode, offset 0x10, size 0x8
  __declspec(property(get = __get_parentNode, put = __set_parentNode))::System::Xml::XmlNode* parentNode;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_ParentNode))::System::Xml::XmlNode* ParentNode;

  __declspec(property(get = get_ChildNodes))::System::Xml::XmlNodeList* ChildNodes;

  __declspec(property(get = get_PreviousSibling))::System::Xml::XmlNode* PreviousSibling;

  __declspec(property(get = get_NextSibling))::System::Xml::XmlNode* NextSibling;

  __declspec(property(get = get_Attributes))::System::Xml::XmlAttributeCollection* Attributes;

  __declspec(property(get = get_OwnerDocument))::System::Xml::XmlDocument* OwnerDocument;

  __declspec(property(get = get_FirstChild))::System::Xml::XmlNode* FirstChild;

  __declspec(property(get = get_LastChild))::System::Xml::XmlNode* LastChild;

  __declspec(property(get = get_IsContainer)) bool IsContainer;

  __declspec(property(get = get_LastNode, put = set_LastNode))::System::Xml::XmlLinkedNode* LastNode;

  __declspec(property(get = get_HasChildNodes)) bool HasChildNodes;

  __declspec(property(get = get_NamespaceURI))::StringW NamespaceURI;

  __declspec(property(get = get_Prefix))::StringW Prefix;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_InnerText, put = set_InnerText))::StringW InnerText;

  __declspec(property(put = set_InnerXml))::StringW InnerXml;

  __declspec(property(get = get_BaseURI))::StringW BaseURI;

  __declspec(property(get = get_Document))::System::Xml::XmlDocument* Document;

  __declspec(property(get = get_IsText)) bool IsText;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Xml::XmlNode*& __get_parentNode();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> const& __get_parentNode() const;

  constexpr void __set_parentNode(::System::Xml::XmlNode* value);

  static inline ::System::Xml::XmlNode* New_ctor();

  /// @brief Method .ctor, addr 0x2887a54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::XmlNode* New_ctor(::System::Xml::XmlDocument* doc);

  /// @brief Method .ctor, addr 0x2889434, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlDocument* doc);

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Name();

  /// @brief Method get_Value, addr 0x288fc78, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x288fc80, size 0xd4, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

  /// @brief Method get_NodeType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_ParentNode, addr 0x288fd54, size 0xec, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_ParentNode();

  /// @brief Method get_ChildNodes, addr 0x288fe40, size 0x64, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeList* get_ChildNodes();

  /// @brief Method get_PreviousSibling, addr 0x288fea4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_PreviousSibling();

  /// @brief Method get_NextSibling, addr 0x288feac, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_NextSibling();

  /// @brief Method get_Attributes, addr 0x288feb4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlAttributeCollection* get_Attributes();

  /// @brief Method get_OwnerDocument, addr 0x288febc, size 0xb8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDocument* get_OwnerDocument();

  /// @brief Method get_FirstChild, addr 0x288ff74, size 0x24, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_FirstChild();

  /// @brief Method get_LastChild, addr 0x288ff98, size 0x10, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_LastChild();

  /// @brief Method get_IsContainer, addr 0x288ffa8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsContainer();

  /// @brief Method get_LastNode, addr 0x288ffb0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlLinkedNode* get_LastNode();

  /// @brief Method set_LastNode, addr 0x288ffb8, size 0x4, virtual true, abstract: false, final false
  inline void set_LastNode(::System::Xml::XmlLinkedNode* value);

  /// @brief Method AncestorNode, addr 0x288ffbc, size 0x58, virtual false, abstract: false, final false
  inline bool AncestorNode(::System::Xml::XmlNode* node);

  /// @brief Method RemoveChild, addr 0x2890014, size 0x37c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* RemoveChild(::System::Xml::XmlNode* oldChild);

  /// @brief Method AppendChild, addr 0x28903bc, size 0x4b8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* AppendChild(::System::Xml::XmlNode* newChild);

  /// @brief Method AppendChildForLoad, addr 0x2890874, size 0x19c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* newChild, ::System::Xml::XmlDocument* doc);

  /// @brief Method IsValidChildType, addr 0x2890a10, size 0x8, virtual true, abstract: false, final false
  inline bool IsValidChildType(::System::Xml::XmlNodeType type);

  /// @brief Method CanInsertAfter, addr 0x2890a18, size 0x8, virtual true, abstract: false, final false
  inline bool CanInsertAfter(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild);

  /// @brief Method get_HasChildNodes, addr 0x2890a20, size 0x24, virtual true, abstract: false, final false
  inline bool get_HasChildNodes();

  /// @brief Method CloneNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method CopyChildren, addr 0x2890a44, size 0xa0, virtual true, abstract: false, final false
  inline void CopyChildren(::System::Xml::XmlDocument* doc, ::System::Xml::XmlNode* container, bool deep);

  /// @brief Method get_NamespaceURI, addr 0x2890ae4, size 0x48, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_Prefix, addr 0x2890b2c, size 0x48, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_LocalName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_IsReadOnly, addr 0x2890b74, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method HasReadOnlyParent, addr 0x2890b98, size 0xcc, virtual false, abstract: false, final false
  static inline bool HasReadOnlyParent(::System::Xml::XmlNode* n);

  /// @brief Method System.ICloneable.Clone, addr 0x2890c64, size 0x14, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2890c78, size 0x64, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method AppendChildText, addr 0x2890cdc, size 0x104, virtual false, abstract: false, final false
  inline void AppendChildText(::System::Text::StringBuilder* builder);

  /// @brief Method get_InnerText, addr 0x28891b0, size 0x108, virtual true, abstract: false, final false
  inline ::StringW get_InnerText();

  /// @brief Method set_InnerText, addr 0x2890de0, size 0xd0, virtual true, abstract: false, final false
  inline void set_InnerText(::StringW value);

  /// @brief Method set_InnerXml, addr 0x2890eb0, size 0x60, virtual true, abstract: false, final false
  inline void set_InnerXml(::StringW value);

  /// @brief Method get_BaseURI, addr 0x2890f10, size 0x124, virtual true, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method RemoveAll, addr 0x2889054, size 0x68, virtual true, abstract: false, final false
  inline void RemoveAll();

  /// @brief Method get_Document, addr 0x2891034, size 0xac, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDocument* get_Document();

  /// @brief Method GetPrefixOfNamespace, addr 0x28910e0, size 0x60, virtual true, abstract: false, final false
  inline ::StringW GetPrefixOfNamespace(::StringW namespaceURI);

  /// @brief Method GetPrefixOfNamespaceStrict, addr 0x2891140, size 0x34c, virtual false, abstract: false, final false
  inline ::StringW GetPrefixOfNamespaceStrict(::StringW namespaceURI);

  /// @brief Method SetParent, addr 0x28899bc, size 0x30, virtual true, abstract: false, final false
  inline void SetParent(::System::Xml::XmlNode* node);

  /// @brief Method SetParentForLoad, addr 0x289148c, size 0x8, virtual true, abstract: false, final false
  inline void SetParentForLoad(::System::Xml::XmlNode* node);

  /// @brief Method SplitName, addr 0x2891494, size 0xcc, virtual false, abstract: false, final false
  static inline void SplitName(::StringW name, ByRef<::StringW> prefix, ByRef<::StringW> localName);

  /// @brief Method FindChild, addr 0x2891560, size 0x64, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* FindChild(::System::Xml::XmlNodeType type);

  /// @brief Method GetEventArgs, addr 0x28915c4, size 0x12c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeChangedEventArgs* GetEventArgs(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* oldParent, ::System::Xml::XmlNode* newParent, ::StringW oldValue,
                                                              ::StringW newValue, ::System::Xml::XmlNodeChangedAction action);

  /// @brief Method BeforeEvent, addr 0x28916f0, size 0x44, virtual true, abstract: false, final false
  inline void BeforeEvent(::System::Xml::XmlNodeChangedEventArgs* args);

  /// @brief Method AfterEvent, addr 0x2891734, size 0x44, virtual true, abstract: false, final false
  inline void AfterEvent(::System::Xml::XmlNodeChangedEventArgs* args);

  /// @brief Method get_IsText, addr 0x2891778, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsText();

  /// @brief Method NestTextNodes, addr 0x2888d18, size 0x18, virtual false, abstract: false, final false
  static inline void NestTextNodes(::System::Xml::XmlNode* prevNode, ::System::Xml::XmlNode* nextNode);

  /// @brief Method UnnestTextNodes, addr 0x2890390, size 0x2c, virtual false, abstract: false, final false
  static inline void UnnestTextNodes(::System::Xml::XmlNode* prevNode, ::System::Xml::XmlNode* nextNode);

  // Ctor Parameters [CppParam { name: "", ty: "XmlNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNode(XmlNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNode(XmlNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNode();

public:
  /// @brief Field parentNode, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlNode* ___parentNode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlNode, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlNode, ___parentNode) == 0x10, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNode*, "System.Xml", "XmlNode");
