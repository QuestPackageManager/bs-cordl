#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/KdTree/IPriorityQueue_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IPriorityQueue_2)
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template <typename TItem, typename TPriority> class IPriorityQueue_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2);
// Dependencies
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template <typename TItem, typename TPriority>
// Is value type: false
// CS Name: UnityEngine.ProBuilder.KdTree.IPriorityQueue`2<TItem,TPriority>
class CORDL_TYPE IPriorityQueue_2 {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Method Dequeue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TItem Dequeue();

  /// @brief Method Enqueue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Enqueue(TItem item, TPriority priority);

  /// @brief Method get_Count, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_Count();

  // Ctor Parameters [CppParam { name: "", ty: "IPriorityQueue_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPriorityQueue_2(IPriorityQueue_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18543 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2, "UnityEngine.ProBuilder.KdTree", "IPriorityQueue`2");
