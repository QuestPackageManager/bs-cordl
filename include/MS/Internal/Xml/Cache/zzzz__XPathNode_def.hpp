#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XPathNode)
namespace System::Xml::XPath {
class XPathDocument;
}
namespace MS::Internal::Xml::Cache {
class XPathNodeInfoAtom;
}
namespace System::Xml::XPath {
struct XPathNodeType;
}
namespace MS::Internal::Xml::Cache {
class XPathNodePageInfo;
}
// Forward declare root types
namespace MS::Internal::Xml::Cache {
struct XPathNode;
}
// Write type traits
MARK_VAL_T(::MS::Internal::Xml::Cache::XPathNode);
// Type: MS.Internal.Xml.Cache::XPathNode
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace MS::Internal::Xml::Cache {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11768))
// CS Name: ::MS.Internal.Xml.Cache::XPathNode
struct CORDL_TYPE XPathNode {
public:
  // Declarations
  __declspec(property(get = get_NodeType))::System::Xml::XPath::XPathNodeType NodeType;

  __declspec(property(get = get_Prefix))::StringW Prefix;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_NamespaceUri))::StringW NamespaceUri;

  __declspec(property(get = get_Document))::System::Xml::XPath::XPathDocument* Document;

  __declspec(property(get = get_PageInfo))::MS::Internal::Xml::Cache::XPathNodePageInfo* PageInfo;

  __declspec(property(get = get_IsXmlNamespaceNode)) bool IsXmlNamespaceNode;

  __declspec(property(get = get_HasSibling)) bool HasSibling;

  __declspec(property(get = get_HasCollapsedText)) bool HasCollapsedText;

  __declspec(property(get = get_IsText)) bool IsText;

  __declspec(property(get = get_HasNamespaceDecls)) bool HasNamespaceDecls;

  __declspec(property(get = get_Value))::StringW Value;

  /// @brief Method get_NodeType addr 0x28eb050 size 0xc virtual false final false
  inline ::System::Xml::XPath::XPathNodeType get_NodeType();

  /// @brief Method get_Prefix addr 0x28eb148 size 0x1c virtual false final false
  inline ::StringW get_Prefix();

  /// @brief Method get_LocalName addr 0x28eb098 size 0x1c virtual false final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NamespaceUri addr 0x28eb0f0 size 0x1c virtual false final false
  inline ::StringW get_NamespaceUri();

  /// @brief Method get_Document addr 0x28eb1a8 size 0x1c virtual false final false
  inline ::System::Xml::XPath::XPathDocument* get_Document();

  /// @brief Method get_PageInfo addr 0x28eb6f8 size 0x1c virtual false final false
  inline ::MS::Internal::Xml::Cache::XPathNodePageInfo* get_PageInfo();

  /// @brief Method GetParent addr 0x28eb588 size 0x24 virtual false final false
  inline int32_t GetParent(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>> pageNode);

  /// @brief Method GetSibling addr 0x28eb45c size 0x24 virtual false final false
  inline int32_t GetSibling(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>> pageNode);

  /// @brief Method get_IsXmlNamespaceNode addr 0x28eb3d4 size 0x88 virtual false final false
  inline bool get_IsXmlNamespaceNode();

  /// @brief Method get_HasSibling addr 0x28eb714 size 0x10 virtual false final false
  inline bool get_HasSibling();

  /// @brief Method get_HasCollapsedText addr 0x28eb724 size 0xc virtual false final false
  inline bool get_HasCollapsedText();

  /// @brief Method get_IsText addr 0x28eb730 size 0x60 virtual false final false
  inline bool get_IsText();

  /// @brief Method get_HasNamespaceDecls addr 0x28eb790 size 0xc virtual false final false
  inline bool get_HasNamespaceDecls();

  /// @brief Method get_Value addr 0x28eb79c size 0x8 virtual false final false
  inline ::StringW get_Value();

  // Ctor Parameters [CppParam { name: "_info", ty: "::MS::Internal::Xml::Cache::XPathNodeInfoAtom*", modifiers: "", def_value: None }, CppParam { name: "_idxSibling", ty: "uint16_t", modifiers: "",
  // def_value: None }, CppParam { name: "_idxParent", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "_idxSimilar", ty: "uint16_t", modifiers: "", def_value: None }, CppParam {
  // name: "_posOffset", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "_props", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_value", ty: "::StringW",
  // modifiers: "", def_value: None }]
  constexpr XPathNode(::MS::Internal::Xml::Cache::XPathNodeInfoAtom* _info, uint16_t _idxSibling, uint16_t _idxParent, uint16_t _idxSimilar, uint16_t _posOffset, uint32_t _props,
                      ::StringW _value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathNode();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::Cache::XPathNode, 0x20>, "Size mismatch!");

} // namespace MS::Internal::Xml::Cache
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Cache::XPathNode, "MS.Internal.Xml.Cache", "XPathNode");
