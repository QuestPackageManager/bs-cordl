#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ItemPriority_2)
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template <typename TItem, typename TPriority> struct ItemPriority_2;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::ProBuilder::KdTree::ItemPriority_2);
// Type: UnityEngine.ProBuilder.KdTree::ItemPriority`2
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template <typename TItem, typename TPriority>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15815))
// CS Name: ::UnityEngine.ProBuilder.KdTree::ItemPriority`2<TItem,TPriority>
struct CORDL_TYPE ItemPriority_2 {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Item", ty: "TItem", modifiers: "", def_value: None }, CppParam { name: "Priority", ty: "TPriority", modifiers: "", def_value: None }]
  constexpr ItemPriority_2(TItem Item, TPriority Priority) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ItemPriority_2();

  /// @brief Field Item, offset: 0x0, size: 0x8, def value: None
  TItem Item;

  /// @brief Field Priority, offset: 0x8, size: 0x8, def value: None
  TPriority Priority;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::ProBuilder::KdTree::ItemPriority_2, "UnityEngine.ProBuilder.KdTree", "ItemPriority`2");
