#pragma once
// IWYU pragma private; include "MS/Internal/Xml/Cache/XPathNodeHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XPathNodeHelper)
namespace MS::Internal::Xml::Cache {
struct XPathNode;
}
// Forward declare root types
namespace MS::Internal::Xml::Cache {
class XPathNodeHelper;
}
// Write type traits
MARK_REF_PTR_T(::MS::Internal::Xml::Cache::XPathNodeHelper);
// Type: MS.Internal.Xml.Cache::XPathNodeHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace MS::Internal::Xml::Cache {
// Is value type: false
// CS Name: ::MS.Internal.Xml.Cache::XPathNodeHelper*
class CORDL_TYPE XPathNodeHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetInScopeNamespaces, addr 0x42938c4, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t GetInScopeNamespaces(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> pageElem, int32_t idxElem,
                                             ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>> pageNmsp);

  /// @brief Method GetLocalNamespaces, addr 0x4293860, size 0x64, virtual false, abstract: false, final false
  static inline int32_t GetLocalNamespaces(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> pageElem, int32_t idxElem,
                                           ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>> pageNmsp);

  /// @brief Method GetLocation, addr 0x4293f5c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t GetLocation(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> pageNode, int32_t idxNode);

  /// @brief Method GetNonDescendant, addr 0x4293370, size 0x80, virtual false, abstract: false, final false
  static inline bool GetNonDescendant(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>> pageNode, ByRef<int32_t> idxNode);

  /// @brief Method GetParent, addr 0x4293b90, size 0x54, virtual false, abstract: false, final false
  static inline bool GetParent(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>> pageNode, ByRef<int32_t> idxNode);

  /// @brief Method GetTextFollowing, addr 0x42933f0, size 0x160, virtual false, abstract: false, final false
  static inline bool GetTextFollowing(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>> pageCurrent, ByRef<int32_t> idxCurrent,
                                      ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> pageEnd, int32_t idxEnd);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathNodeHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XPathNodeHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XPathNodeHelper(XPathNodeHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XPathNodeHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XPathNodeHelper(XPathNodeHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7757 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::Cache::XPathNodeHelper, 0x10>, "Size mismatch!");

} // namespace MS::Internal::Xml::Cache
NEED_NO_BOX(::MS::Internal::Xml::Cache::XPathNodeHelper);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Cache::XPathNodeHelper*, "MS.Internal.Xml.Cache", "XPathNodeHelper");
