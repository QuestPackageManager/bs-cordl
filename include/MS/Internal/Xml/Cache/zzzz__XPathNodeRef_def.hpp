#pragma once
// IWYU pragma private; include "MS/Internal/Xml/Cache/XPathNodeRef.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XPathNodeRef)
namespace MS::Internal::Xml::Cache {
struct XPathNode;
}
// Forward declare root types
namespace MS::Internal::Xml::Cache {
struct XPathNodeRef;
}
// Write type traits
MARK_VAL_T(::MS::Internal::Xml::Cache::XPathNodeRef);
// Dependencies
namespace MS::Internal::Xml::Cache {
// Is value type: true
// CS Name: MS.Internal.Xml.Cache.XPathNodeRef
struct CORDL_TYPE XPathNodeRef {
public:
  // Declarations
  __declspec(property(get = get_Index)) int32_t Index;

  __declspec(property(get = get_Page)) ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> Page;

  /// @brief Method GetHashCode, addr 0x430afb8, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x430af9c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> page, int32_t idx);

  /// @brief Method get_Index, addr 0x430afb0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Index();

  /// @brief Method get_Page, addr 0x430afa8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> get_Page();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathNodeRef();

  // Ctor Parameters [CppParam { name: "_page", ty: "::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>", modifiers: "", def_value: None }, CppParam {
  // name: "_idx", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XPathNodeRef(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> _page, int32_t _idx) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7791 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _page, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> _page;

  /// @brief Field _idx, offset: 0x8, size: 0x4, def value: None
  int32_t _idx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodeRef, _page) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodeRef, _idx) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::Cache::XPathNodeRef, 0x10>, "Size mismatch!");

} // namespace MS::Internal::Xml::Cache
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Cache::XPathNodeRef, "MS.Internal.Xml.Cache", "XPathNodeRef");
