#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Priority_Queue/zzzz__FastPriorityQueueNode_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StablePriorityQueueNode)
// Forward declare root types
namespace Priority_Queue {
class StablePriorityQueueNode;
}
// Write type traits
MARK_REF_PTR_T(::Priority_Queue::StablePriorityQueueNode);
// Type: Priority_Queue::StablePriorityQueueNode
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Priority_Queue {
// Is value type: false
// CS Name: ::Priority_Queue::StablePriorityQueueNode*
class CORDL_TYPE StablePriorityQueueNode : public ::Priority_Queue::FastPriorityQueueNode {
public:
  // Declarations
  __declspec(property(get = get_InsertionIndex, put = set_InsertionIndex)) int64_t InsertionIndex;

  /// @brief Field <InsertionIndex>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__InsertionIndex_k__BackingField, put = __cordl_internal_set__InsertionIndex_k__BackingField)) int64_t _InsertionIndex_k__BackingField;

  static inline ::Priority_Queue::StablePriorityQueueNode* New_ctor();

  constexpr int64_t const& __cordl_internal_get__InsertionIndex_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__InsertionIndex_k__BackingField();

  constexpr void __cordl_internal_set__InsertionIndex_k__BackingField(int64_t value);

  /// @brief Method .ctor, addr 0xe8e720, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_InsertionIndex, addr 0xe8e710, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_InsertionIndex();

  /// @brief Method set_InsertionIndex, addr 0xe8e718, size 0x8, virtual false, abstract: false, final false
  inline void set_InsertionIndex(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StablePriorityQueueNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StablePriorityQueueNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StablePriorityQueueNode(StablePriorityQueueNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StablePriorityQueueNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StablePriorityQueueNode(StablePriorityQueueNode const&) = delete;

  /// @brief Field <InsertionIndex>k__BackingField, offset: 0x18, size: 0x8, def value: None
  int64_t ____InsertionIndex_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Priority_Queue::StablePriorityQueueNode, 0x20>, "Size mismatch!");

static_assert(offsetof(::Priority_Queue::StablePriorityQueueNode, ____InsertionIndex_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Priority_Queue
NEED_NO_BOX(::Priority_Queue::StablePriorityQueueNode);
DEFINE_IL2CPP_ARG_TYPE(::Priority_Queue::StablePriorityQueueNode*, "Priority_Queue", "StablePriorityQueueNode");
