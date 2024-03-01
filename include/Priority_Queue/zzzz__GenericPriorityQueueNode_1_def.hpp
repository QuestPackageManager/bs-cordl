#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GenericPriorityQueueNode_1)
// Forward declare root types
namespace Priority_Queue {
template <typename TPriority> class GenericPriorityQueueNode_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Priority_Queue::GenericPriorityQueueNode_1);
// Type: Priority_Queue::GenericPriorityQueueNode`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Priority_Queue {
// cpp template
template <typename TPriority>
// Is value type: false
// CS Name: ::Priority_Queue::GenericPriorityQueueNode`1<TPriority>*
class CORDL_TYPE GenericPriorityQueueNode_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_InsertionIndex, put = set_InsertionIndex)) int64_t InsertionIndex;

  __declspec(property(get = get_Priority, put = set_Priority)) TPriority Priority;

  __declspec(property(get = get_QueueIndex, put = set_QueueIndex)) int32_t QueueIndex;

  /// @brief Field <InsertionIndex>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__InsertionIndex_k__BackingField, put = __cordl_internal_set__InsertionIndex_k__BackingField)) int64_t _InsertionIndex_k__BackingField;

  /// @brief Field <Priority>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Priority_k__BackingField, put = __cordl_internal_set__Priority_k__BackingField)) TPriority _Priority_k__BackingField;

  /// @brief Field <QueueIndex>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__QueueIndex_k__BackingField, put = __cordl_internal_set__QueueIndex_k__BackingField)) int32_t _QueueIndex_k__BackingField;

  static inline ::Priority_Queue::GenericPriorityQueueNode_1<TPriority>* New_ctor();

  constexpr int64_t const& __cordl_internal_get__InsertionIndex_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__InsertionIndex_k__BackingField();

  constexpr TPriority const& __cordl_internal_get__Priority_k__BackingField() const;

  constexpr TPriority& __cordl_internal_get__Priority_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__QueueIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__QueueIndex_k__BackingField();

  constexpr void __cordl_internal_set__InsertionIndex_k__BackingField(int64_t value);

  constexpr void __cordl_internal_set__Priority_k__BackingField(TPriority value);

  constexpr void __cordl_internal_set__QueueIndex_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_InsertionIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int64_t get_InsertionIndex();

  /// @brief Method get_Priority, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TPriority get_Priority();

  /// @brief Method get_QueueIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_QueueIndex();

  /// @brief Method set_InsertionIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_InsertionIndex(int64_t value);

  /// @brief Method set_Priority, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Priority(TPriority value);

  /// @brief Method set_QueueIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_QueueIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericPriorityQueueNode_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueueNode_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericPriorityQueueNode_1(GenericPriorityQueueNode_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueueNode_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericPriorityQueueNode_1(GenericPriorityQueueNode_1 const&) = delete;

  /// @brief Field <Priority>k__BackingField, offset: 0x10, size: 0x8, def value: None
  TPriority ____Priority_k__BackingField;

  /// @brief Field <QueueIndex>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____QueueIndex_k__BackingField;

  /// @brief Field <InsertionIndex>k__BackingField, offset: 0x20, size: 0x8, def value: None
  int64_t ____InsertionIndex_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Priority_Queue
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::GenericPriorityQueueNode_1, "Priority_Queue", "GenericPriorityQueueNode`1");
