#pragma once
// IWYU pragma private; include "MS/Internal/Xml/Cache/XPathNodePageInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XPathNodePageInfo)
namespace MS::Internal::Xml::Cache {
struct XPathNode;
}
// Forward declare root types
namespace MS::Internal::Xml::Cache {
class XPathNodePageInfo;
}
// Write type traits
MARK_REF_PTR_T(::MS::Internal::Xml::Cache::XPathNodePageInfo);
// Dependencies System.Object
namespace MS::Internal::Xml::Cache {
// Is value type: false
// CS Name: MS.Internal.Xml.Cache.XPathNodePageInfo
class CORDL_TYPE XPathNodePageInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_NextPage)) ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> NextPage;

  __declspec(property(get = get_NodeCount)) int32_t NodeCount;

  __declspec(property(get = get_PageNumber)) int32_t PageNumber;

  /// @brief Field _nodeCount, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__nodeCount, put = __cordl_internal_set__nodeCount)) int32_t _nodeCount;

  /// @brief Field _pageNext, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__pageNext, put = __cordl_internal_set__pageNext)) ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>
      _pageNext;

  /// @brief Field _pageNum, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__pageNum, put = __cordl_internal_set__pageNum)) int32_t _pageNum;

  constexpr int32_t const& __cordl_internal_get__nodeCount() const;

  constexpr int32_t& __cordl_internal_get__nodeCount();

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> const& __cordl_internal_get__pageNext() const;

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>& __cordl_internal_get__pageNext();

  constexpr int32_t const& __cordl_internal_get__pageNum() const;

  constexpr int32_t& __cordl_internal_get__pageNum();

  constexpr void __cordl_internal_set__nodeCount(int32_t value);

  constexpr void __cordl_internal_set__pageNext(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> value);

  constexpr void __cordl_internal_set__pageNum(int32_t value);

  /// @brief Method get_NextPage, addr 0x430647c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> get_NextPage();

  /// @brief Method get_NodeCount, addr 0x4306474, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_NodeCount();

  /// @brief Method get_PageNumber, addr 0x430646c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PageNumber();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathNodePageInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XPathNodePageInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XPathNodePageInfo(XPathNodePageInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XPathNodePageInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XPathNodePageInfo(XPathNodePageInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7793 };

  /// @brief Field _pageNum, offset: 0x10, size: 0x4, def value: None
  int32_t ____pageNum;

  /// @brief Field _nodeCount, offset: 0x14, size: 0x4, def value: None
  int32_t ____nodeCount;

  /// @brief Field _pageNext, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> ____pageNext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodePageInfo, ____pageNum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodePageInfo, ____nodeCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodePageInfo, ____pageNext) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::Cache::XPathNodePageInfo, 0x20>, "Size mismatch!");

} // namespace MS::Internal::Xml::Cache
NEED_NO_BOX(::MS::Internal::Xml::Cache::XPathNodePageInfo);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Cache::XPathNodePageInfo*, "MS.Internal.Xml.Cache", "XPathNodePageInfo");
