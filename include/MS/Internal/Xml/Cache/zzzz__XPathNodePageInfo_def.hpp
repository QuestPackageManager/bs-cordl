#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: MS.Internal.Xml.Cache::XPathNodePageInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace MS::Internal::Xml::Cache {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11771))
// CS Name: ::MS.Internal.Xml.Cache::XPathNodePageInfo*
class CORDL_TYPE XPathNodePageInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _pageNum, offset 0x10, size 0x4
  __declspec(property(get = __get__pageNum, put = __set__pageNum)) int32_t _pageNum;

  /// @brief Field _nodeCount, offset 0x14, size 0x4
  __declspec(property(get = __get__nodeCount, put = __set__nodeCount)) int32_t _nodeCount;

  /// @brief Field _pageNext, offset 0x18, size 0x8
  __declspec(property(get = __get__pageNext, put = __set__pageNext))::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> _pageNext;

  __declspec(property(get = get_PageNumber)) int32_t PageNumber;

  __declspec(property(get = get_NodeCount)) int32_t NodeCount;

  __declspec(property(get = get_NextPage))::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> NextPage;

  constexpr int32_t& __get__pageNum();

  constexpr int32_t const& __get__pageNum() const;

  constexpr void __set__pageNum(int32_t value);

  constexpr int32_t& __get__nodeCount();

  constexpr int32_t const& __get__nodeCount() const;

  constexpr void __set__nodeCount(int32_t value);

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>& __get__pageNext();

  constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> const& __get__pageNext() const;

  constexpr void __set__pageNext(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> value);

  /// @brief Method get_PageNumber, addr 0x28eb808, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PageNumber();

  /// @brief Method get_NodeCount, addr 0x28eb810, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_NodeCount();

  /// @brief Method get_NextPage, addr 0x28eb818, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> get_NextPage();

  // Ctor Parameters [CppParam { name: "", ty: "XPathNodePageInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XPathNodePageInfo(XPathNodePageInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XPathNodePageInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XPathNodePageInfo(XPathNodePageInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathNodePageInfo();

public:
  /// @brief Field _pageNum, offset: 0x10, size: 0x4, def value: None
  int32_t ____pageNum;

  /// @brief Field _nodeCount, offset: 0x14, size: 0x4, def value: None
  int32_t ____nodeCount;

  /// @brief Field _pageNext, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> ____pageNext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::Cache::XPathNodePageInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodePageInfo, ____pageNum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodePageInfo, ____nodeCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodePageInfo, ____pageNext) == 0x18, "Offset mismatch!");

} // namespace MS::Internal::Xml::Cache
NEED_NO_BOX(::MS::Internal::Xml::Cache::XPathNodePageInfo);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Cache::XPathNodePageInfo*, "MS.Internal.Xml.Cache", "XPathNodePageInfo");
