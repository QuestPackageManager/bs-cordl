#pragma once
// IWYU pragma private; include "MS/Internal/Xml/Cache/XPathNodeInfoAtom.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
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
// Dependencies System.Object
namespace MS::Internal::Xml::Cache {
// Is value type: false
// CS Name: MS.Internal.Xml.Cache.XPathNodeInfoAtom
class CORDL_TYPE XPathNodeInfoAtom : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Document)) ::System::Xml::XPath::XPathDocument* Document;

  __declspec(property(get = get_LineNumberBase)) int32_t LineNumberBase;

  __declspec(property(get = get_LinePositionBase)) int32_t LinePositionBase;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_NamespaceUri)) ::StringW NamespaceUri;

  __declspec(property(get = get_PageInfo)) ::MS::Internal::Xml::Cache::XPathNodePageInfo* PageInfo;

  __declspec(property(get = get_ParentPage)) ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> ParentPage;

  __declspec(property(get = get_Prefix)) ::StringW Prefix;

  __declspec(property(get = get_SiblingPage)) ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> SiblingPage;

  /// @brief Field _doc, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__doc, put = __cordl_internal_set__doc)) ::System::Xml::XPath::XPathDocument* _doc;

  /// @brief Field _lineNumBase, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__lineNumBase, put = __cordl_internal_set__lineNumBase)) int32_t _lineNumBase;

  /// @brief Field _linePosBase, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__linePosBase, put = __cordl_internal_set__linePosBase)) int32_t _linePosBase;

  /// @brief Field _localName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__localName, put = __cordl_internal_set__localName)) ::StringW _localName;

  /// @brief Field _namespaceUri, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__namespaceUri, put = __cordl_internal_set__namespaceUri)) ::StringW _namespaceUri;

  /// @brief Field _pageInfo, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__pageInfo, put = __cordl_internal_set__pageInfo)) ::MS::Internal::Xml::Cache::XPathNodePageInfo* _pageInfo;

  /// @brief Field _pageParent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__pageParent, put = __cordl_internal_set__pageParent)) ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>
      _pageParent;

  /// @brief Field _pageSibling, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__pageSibling,
                      put = __cordl_internal_set__pageSibling)) ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>
      _pageSibling;

  /// @brief Field _prefix, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__prefix, put = __cordl_internal_set__prefix)) ::StringW _prefix;

  constexpr ::System::Xml::XPath::XPathDocument* const& __cordl_internal_get__doc() const;

  constexpr ::System::Xml::XPath::XPathDocument*& __cordl_internal_get__doc();

  constexpr int32_t const& __cordl_internal_get__lineNumBase() const;

  constexpr int32_t& __cordl_internal_get__lineNumBase();

  constexpr int32_t const& __cordl_internal_get__linePosBase() const;

  constexpr int32_t& __cordl_internal_get__linePosBase();

  constexpr ::StringW const& __cordl_internal_get__localName() const;

  constexpr ::StringW& __cordl_internal_get__localName();

  constexpr ::StringW const& __cordl_internal_get__namespaceUri() const;

  constexpr ::StringW& __cordl_internal_get__namespaceUri();

  constexpr ::MS::Internal::Xml::Cache::XPathNodePageInfo* const& __cordl_internal_get__pageInfo() const;

  constexpr ::MS::Internal::Xml::Cache::XPathNodePageInfo*& __cordl_internal_get__pageInfo();

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> const& __cordl_internal_get__pageParent() const;

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>& __cordl_internal_get__pageParent();

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> const& __cordl_internal_get__pageSibling() const;

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>& __cordl_internal_get__pageSibling();

  constexpr ::StringW const& __cordl_internal_get__prefix() const;

  constexpr ::StringW& __cordl_internal_get__prefix();

  constexpr void __cordl_internal_set__doc(::System::Xml::XPath::XPathDocument* value);

  constexpr void __cordl_internal_set__lineNumBase(int32_t value);

  constexpr void __cordl_internal_set__linePosBase(int32_t value);

  constexpr void __cordl_internal_set__localName(::StringW value);

  constexpr void __cordl_internal_set__namespaceUri(::StringW value);

  constexpr void __cordl_internal_set__pageInfo(::MS::Internal::Xml::Cache::XPathNodePageInfo* value);

  constexpr void __cordl_internal_set__pageParent(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> value);

  constexpr void __cordl_internal_set__pageSibling(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> value);

  constexpr void __cordl_internal_set__prefix(::StringW value);

  /// @brief Method get_Document, addr 0x43064b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XPath::XPathDocument* get_Document();

  /// @brief Method get_LineNumberBase, addr 0x43064bc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LineNumberBase();

  /// @brief Method get_LinePositionBase, addr 0x43064c4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LinePositionBase();

  /// @brief Method get_LocalName, addr 0x430648c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NamespaceUri, addr 0x4306494, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NamespaceUri();

  /// @brief Method get_PageInfo, addr 0x4306484, size 0x8, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::Cache::XPathNodePageInfo* get_PageInfo();

  /// @brief Method get_ParentPage, addr 0x43064ac, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> get_ParentPage();

  /// @brief Method get_Prefix, addr 0x430649c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_SiblingPage, addr 0x43064a4, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7794 };

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

  /// @brief Field _lineNumBase, offset: 0x40, size: 0x4, def value: None
  int32_t ____lineNumBase;

  /// @brief Field _linePosBase, offset: 0x44, size: 0x4, def value: None
  int32_t ____linePosBase;

  /// @brief Field _pageInfo, offset: 0x48, size: 0x8, def value: None
  ::MS::Internal::Xml::Cache::XPathNodePageInfo* ____pageInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodeInfoAtom, ____localName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodeInfoAtom, ____namespaceUri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodeInfoAtom, ____prefix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodeInfoAtom, ____pageParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodeInfoAtom, ____pageSibling) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodeInfoAtom, ____doc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodeInfoAtom, ____lineNumBase) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodeInfoAtom, ____linePosBase) == 0x44, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodeInfoAtom, ____pageInfo) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::Cache::XPathNodeInfoAtom, 0x50>, "Size mismatch!");

} // namespace MS::Internal::Xml::Cache
NEED_NO_BOX(::MS::Internal::Xml::Cache::XPathNodeInfoAtom);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Cache::XPathNodeInfoAtom*, "MS.Internal.Xml.Cache", "XPathNodeInfoAtom");
