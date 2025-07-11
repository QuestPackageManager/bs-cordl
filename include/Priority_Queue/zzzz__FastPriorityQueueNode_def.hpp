#pragma once
// IWYU pragma private; include "Priority_Queue/FastPriorityQueueNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FastPriorityQueueNode)
// Forward declare root types
namespace Priority_Queue {
class FastPriorityQueueNode;
}
// Write type traits
MARK_REF_PTR_T(::Priority_Queue::FastPriorityQueueNode);
// Dependencies System.Object
namespace Priority_Queue {
// Is value type: false
// CS Name: Priority_Queue.FastPriorityQueueNode
class CORDL_TYPE FastPriorityQueueNode : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Priority, put = set_Priority)) float_t Priority;

  __declspec(property(get = get_QueueIndex, put = set_QueueIndex)) int32_t QueueIndex;

  /// @brief Field <Priority>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Priority_k__BackingField, put = __cordl_internal_set__Priority_k__BackingField)) float_t _Priority_k__BackingField;

  /// @brief Field <QueueIndex>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__QueueIndex_k__BackingField, put = __cordl_internal_set__QueueIndex_k__BackingField)) int32_t _QueueIndex_k__BackingField;

  static inline ::Priority_Queue::FastPriorityQueueNode* New_ctor();

  constexpr float_t const& __cordl_internal_get__Priority_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__Priority_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__QueueIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__QueueIndex_k__BackingField();

  constexpr void __cordl_internal_set__Priority_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__QueueIndex_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x22a14f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Priority, addr 0x22a14d4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Priority();

  /// @brief Method get_QueueIndex, addr 0x22a14e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_QueueIndex();

  /// @brief Method set_Priority, addr 0x22a14dc, size 0x8, virtual false, abstract: false, final false
  inline void set_Priority(float_t value);

  /// @brief Method set_QueueIndex, addr 0x22a14ec, size 0x8, virtual false, abstract: false, final false
  inline void set_QueueIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FastPriorityQueueNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FastPriorityQueueNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FastPriorityQueueNode(FastPriorityQueueNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FastPriorityQueueNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FastPriorityQueueNode(FastPriorityQueueNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16943 };

  /// @brief Field <Priority>k__BackingField, offset: 0x10, size: 0x4, def value: None
  float_t ____Priority_k__BackingField;

  /// @brief Field <QueueIndex>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____QueueIndex_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Priority_Queue::FastPriorityQueueNode, ____Priority_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Priority_Queue::FastPriorityQueueNode, ____QueueIndex_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Priority_Queue::FastPriorityQueueNode, 0x18>, "Size mismatch!");

} // namespace Priority_Queue
NEED_NO_BOX(::Priority_Queue::FastPriorityQueueNode);
DEFINE_IL2CPP_ARG_TYPE(::Priority_Queue::FastPriorityQueueNode*, "Priority_Queue", "FastPriorityQueueNode");
