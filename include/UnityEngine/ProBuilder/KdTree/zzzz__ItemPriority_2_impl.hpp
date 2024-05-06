#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/KdTree/ItemPriority_2.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__ItemPriority_2_def.hpp"
// Ctor Parameters [CppParam { name: "Item", ty: "TItem", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Priority", ty: "TPriority", modifiers: "", def_value: Some("nullptr") }]
template <typename TItem, typename TPriority> constexpr ::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>::ItemPriority_2(TItem Item, TPriority Priority) noexcept {
  this->Item = Item;
  this->Priority = Priority;
}
// Ctor Parameters []
template <typename TItem, typename TPriority> constexpr ::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>::ItemPriority_2() {}
