#pragma once
// IWYU pragma private; include "MS/Internal/Xml/Cache/XPathNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XPathNode)
namespace MS::Internal::Xml::Cache {
class XPathNodeInfoAtom;
}
namespace MS::Internal::Xml::Cache {
class XPathNodePageInfo;
}
namespace System::Xml::XPath {
class XPathDocument;
}
namespace System::Xml::XPath {
struct XPathNodeType;
}
// Forward declare root types
namespace MS::Internal::Xml::Cache {
struct XPathNode;
}
// Write type traits
MARK_VAL_T(::MS::Internal::Xml::Cache::XPathNode);
// Dependencies
namespace MS::Internal::Xml::Cache {
// Is value type: true
// CS Name: MS.Internal.Xml.Cache.XPathNode
struct CORDL_TYPE XPathNode {
public:
  // Declarations
  __declspec(property(get = get_CollapsedLinePosition)) int32_t CollapsedLinePosition;

  __declspec(property(get = get_Document)) ::System::Xml::XPath::XPathDocument* Document;

  __declspec(property(get = get_HasCollapsedText)) bool HasCollapsedText;

  __declspec(property(get = get_HasNamespaceDecls)) bool HasNamespaceDecls;

  __declspec(property(get = get_HasSibling)) bool HasSibling;

  __declspec(property(get = get_IsText)) bool IsText;

  __declspec(property(get = get_IsXmlNamespaceNode)) bool IsXmlNamespaceNode;

  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_NamespaceUri)) ::StringW NamespaceUri;

  __declspec(property(get = get_NodeType)) ::System::Xml::XPath::XPathNodeType NodeType;

  __declspec(property(get = get_PageInfo)) ::MS::Internal::Xml::Cache::XPathNodePageInfo* PageInfo;

  __declspec(property(get = get_Prefix)) ::StringW Prefix;

  __declspec(property(get = get_Value)) ::StringW Value;

  /// @brief Method GetParent, addr 0x605ea68, size 0x20, virtual false, abstract: false, final false
  inline int32_t GetParent(::ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>> pageNode);

  /// @brief Method GetSibling, addr 0x605e92c, size 0x20, virtual false, abstract: false, final false
  inline int32_t GetSibling(::ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>> pageNode);

  /// @brief Method get_CollapsedLinePosition, addr 0x605ed74, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_CollapsedLinePosition();

  /// @brief Method get_Document, addr 0x605e668, size 0x18, virtual false, abstract: false, final false
  inline ::System::Xml::XPath::XPathDocument* get_Document();

  /// @brief Method get_HasCollapsedText, addr 0x605edf0, size 0xc, virtual false, abstract: false, final false
  inline bool get_HasCollapsedText();

  /// @brief Method get_HasNamespaceDecls, addr 0x605ee64, size 0xc, virtual false, abstract: false, final false
  inline bool get_HasNamespaceDecls();

  /// @brief Method get_HasSibling, addr 0x605ede0, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasSibling();

  /// @brief Method get_IsText, addr 0x605edfc, size 0x68, virtual false, abstract: false, final false
  inline bool get_IsText();

  /// @brief Method get_IsXmlNamespaceNode, addr 0x605e8a4, size 0x88, virtual false, abstract: false, final false
  inline bool get_IsXmlNamespaceNode();

  /// @brief Method get_LineNumber, addr 0x605ec9c, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0x605ed9c, size 0x20, virtual false, abstract: false, final false
  inline int32_t get_LinePosition();

  /// @brief Method get_LocalName, addr 0x605e564, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NamespaceUri, addr 0x605e5b8, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_NamespaceUri();

  /// @brief Method get_NodeType, addr 0x605e51c, size 0xc, virtual false, abstract: false, final false
  inline ::System::Xml::XPath::XPathNodeType get_NodeType();

  /// @brief Method get_PageInfo, addr 0x605edc8, size 0x18, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::Cache::XPathNodePageInfo* get_PageInfo();

  /// @brief Method get_Prefix, addr 0x605e60c, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_Value, addr 0x605ee70, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathNode();

  // Ctor Parameters [CppParam { name: "_info", ty: "::MS::Internal::Xml::Cache::XPathNodeInfoAtom*", modifiers: "", def_value: None }, CppParam { name: "_idxSibling", ty: "uint16_t", modifiers: "",
  // def_value: None }, CppParam { name: "_idxParent", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "_idxSimilar", ty: "uint16_t", modifiers: "", def_value: None }, CppParam {
  // name: "_posOffset", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "_props", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_value", ty: "::StringW",
  // modifiers: "", def_value: None }]
  constexpr XPathNode(::MS::Internal::Xml::Cache::XPathNodeInfoAtom* _info, uint16_t _idxSibling, uint16_t _idxParent, uint16_t _idxSimilar, uint16_t _posOffset, uint32_t _props,
                      ::StringW _value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9854 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field _info, offset: 0x0, size: 0x8, def value: None
  ::MS::Internal::Xml::Cache::XPathNodeInfoAtom* _info;

  /// @brief Field _idxSibling, offset: 0x8, size: 0x2, def value: None
  uint16_t _idxSibling;

  /// @brief Field _idxParent, offset: 0xa, size: 0x2, def value: None
  uint16_t _idxParent;

  /// @brief Field _idxSimilar, offset: 0xc, size: 0x2, def value: None
  uint16_t _idxSimilar;

  /// @brief Field _posOffset, offset: 0xe, size: 0x2, def value: None
  uint16_t _posOffset;

  /// @brief Field _props, offset: 0x10, size: 0x4, def value: None
  uint32_t _props;

  /// @brief Field _value, offset: 0x18, size: 0x8, def value: None
  ::StringW _value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNode, _info) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNode, _idxSibling) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNode, _idxParent) == 0xa, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNode, _idxSimilar) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNode, _posOffset) == 0xe, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNode, _props) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNode, _value) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::Cache::XPathNode, 0x20>, "Size mismatch!");

} // namespace MS::Internal::Xml::Cache
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Cache::XPathNode, "MS.Internal.Xml.Cache", "XPathNode");
