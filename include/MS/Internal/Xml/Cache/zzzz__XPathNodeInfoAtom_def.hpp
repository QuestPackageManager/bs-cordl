#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XPathNodeInfoAtom)
namespace MS::Internal::Xml::Cache {
class XPathNodePageInfo;
}
namespace MS::Internal::Xml::Cache {
struct XPathNode;
}
namespace System::Xml::XPath {
class XPathDocument;
}
// Forward declare root types
namespace MS::Internal::Xml::Cache {
class XPathNodeInfoAtom;
}
// Write type traits
MARK_REF_PTR_T(::MS::Internal::Xml::Cache::XPathNodeInfoAtom);
// Type: MS.Internal.Xml.Cache::XPathNodeInfoAtom
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace MS::Internal::Xml::Cache {
// Is value type: false
// CS Name: ::MS.Internal.Xml.Cache::XPathNodeInfoAtom*
class CORDL_TYPE XPathNodeInfoAtom : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Document))::System::Xml::XPath::XPathDocument* Document;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_NamespaceUri))::StringW NamespaceUri;

  __declspec(property(get = get_PageInfo))::MS::Internal::Xml::Cache::XPathNodePageInfo* PageInfo;

  __declspec(property(get = get_ParentPage))::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> ParentPage;

  __declspec(property(get = get_Prefix))::StringW Prefix;

  __declspec(property(get = get_SiblingPage))::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> SiblingPage;

  /// @brief Field _doc, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__doc, put = __cordl_internal_set__doc))::System::Xml::XPath::XPathDocument* _doc;

  /// @brief Field _localName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__localName, put = __cordl_internal_set__localName))::StringW _localName;

  /// @brief Field _namespaceUri, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__namespaceUri, put = __cordl_internal_set__namespaceUri))::StringW _namespaceUri;

  /// @brief Field _pageInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__pageInfo, put = __cordl_internal_set__pageInfo))::MS::Internal::Xml::Cache::XPathNodePageInfo* _pageInfo;

  /// @brief Field _pageParent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__pageParent,
                      put = __cordl_internal_set__pageParent))::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> _pageParent;

  /// @brief Field _pageSibling, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__pageSibling,
                      put = __cordl_internal_set__pageSibling))::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> _pageSibling;

  /// @brief Field _prefix, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__prefix, put = __cordl_internal_set__prefix))::StringW _prefix;

  constexpr ::System::Xml::XPath::XPathDocument*& __cordl_internal_get__doc();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XPath::XPathDocument*> const& __cordl_internal_get__doc() const;

  constexpr ::StringW const& __cordl_internal_get__localName() const;

  constexpr ::StringW& __cordl_internal_get__localName();

  constexpr ::StringW const& __cordl_internal_get__namespaceUri() const;

  constexpr ::StringW& __cordl_internal_get__namespaceUri();

  constexpr ::MS::Internal::Xml::Cache::XPathNodePageInfo*& __cordl_internal_get__pageInfo();

  constexpr ::cordl_internals::to_const_pointer<::MS::Internal::Xml::Cache::XPathNodePageInfo*> const& __cordl_internal_get__pageInfo() const;

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> const& __cordl_internal_get__pageParent() const;

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>& __cordl_internal_get__pageParent();

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> const& __cordl_internal_get__pageSibling() const;

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>& __cordl_internal_get__pageSibling();

  constexpr ::StringW const& __cordl_internal_get__prefix() const;

  constexpr ::StringW& __cordl_internal_get__prefix();

  constexpr void __cordl_internal_set__doc(::System::Xml::XPath::XPathDocument* value);

  constexpr void __cordl_internal_set__localName(::StringW value);

  constexpr void __cordl_internal_set__namespaceUri(::StringW value);

  constexpr void __cordl_internal_set__pageInfo(::MS::Internal::Xml::Cache::XPathNodePageInfo* value);

  constexpr void __cordl_internal_set__pageParent(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> value);

  constexpr void __cordl_internal_set__pageSibling(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> value);

  constexpr void __cordl_internal_set__prefix(::StringW value);

  /// @brief Method get_Document, addr 0x2a36b6c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XPath::XPathDocument* get_Document();

  /// @brief Method get_LocalName, addr 0x2a36b44, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NamespaceUri, addr 0x2a36b4c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NamespaceUri();

  /// @brief Method get_PageInfo, addr 0x2a36b3c, size 0x8, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::Cache::XPathNodePageInfo* get_PageInfo();

  /// @brief Method get_ParentPage, addr 0x2a36b64, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> get_ParentPage();

  /// @brief Method get_Prefix, addr 0x2a36b54, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_SiblingPage, addr 0x2a36b5c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> get_SiblingPage();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathNodeInfoAtom();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XPathNodeInfoAtom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XPathNodeInfoAtom(XPathNodeInfoAtom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XPathNodeInfoAtom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XPathNodeInfoAtom(XPathNodeInfoAtom const&) = delete;

  /// @brief Field _localName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____localName;

  /// @brief Field _namespaceUri, offset: 0x18, size: 0x8, def value: None
  ::StringW ____namespaceUri;

  /// @brief Field _prefix, offset: 0x20, size: 0x8, def value: None
  ::StringW ____prefix;

  /// @brief Field _pageParent, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> ____pageParent;

  /// @brief Field _pageSibling, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> ____pageSibling;

  /// @brief Field _doc, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::XPath::XPathDocument* ____doc;

  /// @brief Field _pageInfo, offset: 0x40, size: 0x8, def value: None
  ::MS::Internal::Xml::Cache::XPathNodePageInfo* ____pageInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::Cache::XPathNodeInfoAtom, 0x48>, "Size mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodeInfoAtom, ____localName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodeInfoAtom, ____namespaceUri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodeInfoAtom, ____prefix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodeInfoAtom, ____pageParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodeInfoAtom, ____pageSibling) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodeInfoAtom, ____doc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodeInfoAtom, ____pageInfo) == 0x40, "Offset mismatch!");

} // namespace MS::Internal::Xml::Cache
NEED_NO_BOX(::MS::Internal::Xml::Cache::XPathNodeInfoAtom);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Cache::XPathNodeInfoAtom*, "MS.Internal.Xml.Cache", "XPathNodeInfoAtom");
