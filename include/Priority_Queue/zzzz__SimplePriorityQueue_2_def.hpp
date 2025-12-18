#pragma once
// IWYU pragma private; include "Priority_Queue/SimplePriorityQueue_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Priority_Queue/zzzz__GenericPriorityQueueNode_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimplePriorityQueue_2)
namespace Priority_Queue {
template <typename TItem, typename TPriority> class GenericPriorityQueue_2;
}
namespace Priority_Queue {
template <typename TItem, typename TPriority> class IPriorityQueue_2;
}
namespace Priority_Queue {
template <typename TItem, typename TPriority> class SimplePriorityQueue_2_SimpleNode;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Comparison_1;
}
// Forward declare root types
namespace Priority_Queue {
template <typename TItem, typename TPriority> class SimplePriorityQueue_2;
}
namespace Priority_Queue {
template <typename TItem, typename TPriority> class SimplePriorityQueue_2_SimpleNode;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Priority_Queue::SimplePriorityQueue_2);
MARK_GEN_REF_PTR_T(::Priority_Queue::SimplePriorityQueue_2_SimpleNode);
// Dependencies Priority_Queue.GenericPriorityQueueNode`1<TPriority>
namespace Priority_Queue {
// cpp template
template <typename TItem, typename TPriority>
// Is value type: false
// CS Name: Priority_Queue.SimplePriorityQueue`2/SimpleNode<TItem,TPriority>
class CORDL_TYPE SimplePriorityQueue_2_SimpleNode : public ::Priority_Queue::GenericPriorityQueueNode_1<TPriority> {
public:
  // Declarations
  __declspec(property(get = get_Data, put = set_Data)) TItem Data;

  /// @brief Field <Data>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Data_k__BackingField, put = __cordl_internal_set__Data_k__BackingField)) TItem _Data_k__BackingField;

  static inline ::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>* New_ctor(TItem data);

  constexpr TItem const& __cordl_internal_get__Data_k__BackingField() const;

  constexpr TItem& __cordl_internal_get__Data_k__BackingField();

  constexpr void __cordl_internal_set__Data_k__BackingField(TItem value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TItem data);

  /// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TItem get_Data();

  /// @brief Method set_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Data(TItem value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimplePriorityQueue_2_SimpleNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_2_SimpleNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimplePriorityQueue_2_SimpleNode(SimplePriorityQueue_2_SimpleNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_2_SimpleNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimplePriorityQueue_2_SimpleNode(SimplePriorityQueue_2_SimpleNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20531 };

  /// @brief Field <Data>k__BackingField, offset: 0x28, size: 0x8, def value: None
  TItem ____Data_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Priority_Queue
// Dependencies System.Object
namespace Priority_Queue {
// cpp template
template <typename TItem, typename TPriority>
// Is value type: false
// CS Name: Priority_Queue.SimplePriorityQueue`2<TItem,TPriority>
class CORDL_TYPE SimplePriorityQueue_2 : public ::System::Object {
public:
  // Declarations
  using SimpleNode = ::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_First)) TItem First;

  /// @brief Field _itemToNodesCache, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__itemToNodesCache, put = __cordl_internal_set__itemToNodesCache)) ::System::Collections::Generic::Dictionary_2<
      TItem, ::System::Collections::Generic::IList_1<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>*>* _itemToNodesCache;

  /// @brief Field _nullNodesCache, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__nullNodesCache,
                      put = __cordl_internal_set__nullNodesCache)) ::System::Collections::Generic::IList_1<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>* _nullNodesCache;

  /// @brief Field _queue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__queue,
                      put = __cordl_internal_set__queue)) ::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*, TPriority>* _queue;

  /// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
  constexpr operator ::Priority_Queue::IPriorityQueue_2<TItem, TPriority>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TItem>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TItem>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method AddToNodeCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddToNodeCache(::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>* node);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(TItem item);

  /// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TItem Dequeue();

  /// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Enqueue(TItem item, TPriority priority);

  /// @brief Method EnqueueNoLockOrCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>* EnqueueNoLockOrCache(TItem item, TPriority priority);

  /// @brief Method EnqueueWithoutDuplicates, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool EnqueueWithoutDuplicates(TItem item, TPriority priority);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TItem>* GetEnumerator();

  /// @brief Method GetExistingNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>* GetExistingNode(TItem item);

  /// @brief Method GetPriority, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TPriority GetPriority(TItem item);

  /// @brief Method IsValidQueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool IsValidQueue();

  static inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>* New_ctor();

  static inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality);

  static inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>* New_ctor(::System::Collections::Generic::IComparer_1<TPriority>* priorityComparer);

  static inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>* New_ctor(::System::Collections::Generic::IComparer_1<TPriority>* priorityComparer,
                                                                                    ::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality);

  static inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>* New_ctor(::System::Comparison_1<TPriority>* priorityComparer);

  static inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>* New_ctor(::System::Comparison_1<TPriority>* priorityComparer,
                                                                                    ::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Remove(TItem item);

  /// @brief Method RemoveFromNodeCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveFromNodeCache(::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>* node);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method TryDequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryDequeue(::ByRef<TItem> first);

  /// @brief Method TryFirst, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryFirst(::ByRef<TItem> first);

  /// @brief Method TryGetPriority, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetPriority(TItem item, ::ByRef<TPriority> priority);

  /// @brief Method TryRemove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryRemove(TItem item);

  /// @brief Method TryUpdatePriority, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryUpdatePriority(TItem item, TPriority priority);

  /// @brief Method UpdatePriority, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UpdatePriority(TItem item, TPriority priority);

  constexpr ::System::Collections::Generic::Dictionary_2<TItem, ::System::Collections::Generic::IList_1<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>*>* const&
  __cordl_internal_get__itemToNodesCache() const;

  constexpr ::System::Collections::Generic::Dictionary_2<TItem, ::System::Collections::Generic::IList_1<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>*>*&
  __cordl_internal_get__itemToNodesCache();

  constexpr ::System::Collections::Generic::IList_1<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>* const& __cordl_internal_get__nullNodesCache() const;

  constexpr ::System::Collections::Generic::IList_1<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>*& __cordl_internal_get__nullNodesCache();

  constexpr ::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*, TPriority>* const& __cordl_internal_get__queue() const;

  constexpr ::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*, TPriority>*& __cordl_internal_get__queue();

  constexpr void __cordl_internal_set__itemToNodesCache(
      ::System::Collections::Generic::Dictionary_2<TItem, ::System::Collections::Generic::IList_1<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>*>* value);

  constexpr void __cordl_internal_set__nullNodesCache(::System::Collections::Generic::IList_1<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>* value);

  constexpr void __cordl_internal_set__queue(::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*, TPriority>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IComparer_1<TPriority>* priorityComparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IComparer_1<TPriority>* priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Comparison_1<TPriority>* priorityComparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Comparison_1<TPriority>* priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_First, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TItem get_First();

  /// @brief Convert to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
  constexpr ::Priority_Queue::IPriorityQueue_2<TItem, TPriority>* i___Priority_Queue__IPriorityQueue_2_TItem_TPriority_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TItem>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TItem>* i___System__Collections__Generic__IEnumerable_1_TItem_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimplePriorityQueue_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimplePriorityQueue_2(SimplePriorityQueue_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimplePriorityQueue_2(SimplePriorityQueue_2 const&) = delete;

  /// @brief Field INITIAL_QUEUE_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t INITIAL_QUEUE_SIZE{ static_cast<int32_t>(0xa) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20532 };

  /// @brief Field _queue, offset: 0x10, size: 0x8, def value: None
  ::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*, TPriority>* ____queue;

  /// @brief Field _itemToNodesCache, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TItem, ::System::Collections::Generic::IList_1<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>*>* ____itemToNodesCache;

  /// @brief Field _nullNodesCache, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>* ____nullNodesCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Priority_Queue
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::SimplePriorityQueue_2, "Priority_Queue", "SimplePriorityQueue`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::SimplePriorityQueue_2_SimpleNode, "Priority_Queue", "SimplePriorityQueue`2/SimpleNode");
