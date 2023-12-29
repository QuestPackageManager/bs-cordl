#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: MS.Internal.Xml.Cache::XPathNodeRef
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace MS::Internal::Xml::Cache {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11697))
// CS Name: ::MS.Internal.Xml.Cache::XPathNodeRef
struct CORDL_TYPE XPathNodeRef {
public:
  // Declarations
  __declspec(property(get = get_Page))::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> Page;

  __declspec(property(get = get_Index)) int32_t Index;

  /// @brief Method .ctor addr 0x276d780 size 0xc virtual false final false
  inline void _ctor(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> page, int32_t idx);

  /// @brief Method get_Page addr 0x276d78c size 0x8 virtual false final false
  inline ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> get_Page();

  /// @brief Method get_Index addr 0x276d794 size 0x8 virtual false final false
  inline int32_t get_Index();

  /// @brief Method GetHashCode addr 0x276d79c size 0x10 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "_page", ty: "::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>", modifiers: "", def_value: None }, CppParam {
  // name: "_idx", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XPathNodeRef(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> _page, int32_t _idx) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathNodeRef();

  /// @brief Field _page, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> _page;

  /// @brief Field _idx, offset: 0x8, size: 0x4, def value: None
  int32_t _idx;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::Cache::XPathNodeRef, 0x10>, "Size mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodeRef, _page) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::Cache::XPathNodeRef, _idx) == 0x8, "Offset mismatch!");

} // namespace MS::Internal::Xml::Cache
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Cache::XPathNodeRef, "MS.Internal.Xml.Cache", "XPathNodeRef");
