#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Priority_Queue/zzzz__GenericPriorityQueueNode_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimplePriorityQueue_2)
namespace Priority_Queue {
template <typename TItem, typename TPriority> class GenericPriorityQueue_2;
}
namespace Priority_Queue {
template <typename TItem, typename TPriority> class IPriorityQueue_2;
}
namespace Priority_Queue {
template <typename TItem, typename TPriority> class __SimplePriorityQueue_2__SimpleNode;
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
template <typename TItem, typename TPriority> class __SimplePriorityQueue_2__SimpleNode;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Priority_Queue::SimplePriorityQueue_2);
MARK_GEN_REF_PTR_T(::Priority_Queue::__SimplePriorityQueue_2__SimpleNode);
// Type: ::SimpleNode
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Priority_Queue {
// cpp template
template <typename TItem, typename TPriority>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15227)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15227), inst: 2531 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15230))
// CS Name: ::SimplePriorityQueue`2::SimpleNode<TItem,TPriority>*
class CORDL_TYPE __SimplePriorityQueue_2__SimpleNode : public ::Priority_Queue::GenericPriorityQueueNode_1<TPriority> {
public:
  // Declarations
  /// @brief Field <Data>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Data_k__BackingField, put = __cordl_internal_set__Data_k__BackingField)) TItem _Data_k__BackingField;

  __declspec(property(get = get_Data, put = set_Data)) TItem Data;

  constexpr TItem& __cordl_internal_get__Data_k__BackingField();

  constexpr TItem const& __cordl_internal_get__Data_k__BackingField() const;

  constexpr void __cordl_internal_set__Data_k__BackingField(TItem value);

  /// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TItem get_Data();

  /// @brief Method set_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Data(TItem value);

  static inline ::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>* New_ctor(TItem data);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TItem data);

  // Ctor Parameters [CppParam { name: "", ty: "__SimplePriorityQueue_2__SimpleNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SimplePriorityQueue_2__SimpleNode(__SimplePriorityQueue_2__SimpleNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SimplePriorityQueue_2__SimpleNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SimplePriorityQueue_2__SimpleNode(__SimplePriorityQueue_2__SimpleNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SimplePriorityQueue_2__SimpleNode();

public:
  /// @brief Field <Data>k__BackingField, offset: 0x28, size: 0x8, def value: None
  TItem ____Data_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Priority_Queue
// Type: Priority_Queue::SimplePriorityQueue`2
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Priority_Queue {
// cpp template
template <typename TItem, typename TPriority>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15231))
// CS Name: ::Priority_Queue::SimplePriorityQueue`2<TItem,TPriority>*
class CORDL_TYPE SimplePriorityQueue_2 : public ::System::Object {
public:
  // Declarations
  using SimpleNode = ::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>;

  /// @brief Field _queue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__queue,
                      put = __cordl_internal_set__queue))::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*, TPriority>* _queue;

  /// @brief Field _itemToNodesCache, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__itemToNodesCache, put = __cordl_internal_set__itemToNodesCache))::System::Collections::Generic::Dictionary_2<
      TItem, ::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>*>* _itemToNodesCache;

  /// @brief Field _nullNodesCache, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__nullNodesCache,
                      put = __cordl_internal_set__nullNodesCache))::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>* _nullNodesCache;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_First)) TItem First;

  /// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
  constexpr operator ::Priority_Queue::IPriorityQueue_2<TItem, TPriority>*() noexcept;

  /// @brief Convert to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
  constexpr ::Priority_Queue::IPriorityQueue_2<TItem, TPriority>* i___Priority_Queue__IPriorityQueue_2_TItem_TPriority_() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TItem>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TItem>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TItem>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TItem>* i___System__Collections__Generic__IEnumerable_1_TItem_() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  constexpr ::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*, TPriority>*& __cordl_internal_get__queue();

  constexpr ::cordl_internals::to_const_pointer<::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*, TPriority>*> const&
  __cordl_internal_get__queue() const;

  constexpr void __cordl_internal_set__queue(::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*, TPriority>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<TItem, ::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>*>*&
  __cordl_internal_get__itemToNodesCache();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<TItem, ::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>*>*> const&
  __cordl_internal_get__itemToNodesCache() const;

  constexpr void __cordl_internal_set__itemToNodesCache(
      ::System::Collections::Generic::Dictionary_2<TItem, ::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>*>* value);

  constexpr ::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>*& __cordl_internal_get__nullNodesCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>*> const&
  __cordl_internal_get__nullNodesCache() const;

  constexpr void __cordl_internal_set__nullNodesCache(::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>* value);

  static inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>* New_ctor(::System::Collections::Generic::IComparer_1<TPriority>* priorityComparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IComparer_1<TPriority>* priorityComparer);

  static inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>* New_ctor(::System::Comparison_1<TPriority>* priorityComparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Comparison_1<TPriority>* priorityComparer);

  static inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality);

  static inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>* New_ctor(::System::Collections::Generic::IComparer_1<TPriority>* priorityComparer,
                                                                                    ::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IComparer_1<TPriority>* priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality);

  static inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>* New_ctor(::System::Comparison_1<TPriority>* priorityComparer,
                                                                                    ::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Comparison_1<TPriority>* priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality);

  /// @brief Method GetExistingNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>* GetExistingNode(TItem item);

  /// @brief Method AddToNodeCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddToNodeCache(::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>* node);

  /// @brief Method RemoveFromNodeCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveFromNodeCache(::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>* node);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_First, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TItem get_First();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(TItem item);

  /// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TItem Dequeue();

  /// @brief Method EnqueueNoLockOrCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>* EnqueueNoLockOrCache(TItem item, TPriority priority);

  /// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Enqueue(TItem item, TPriority priority);

  /// @brief Method EnqueueWithoutDuplicates, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool EnqueueWithoutDuplicates(TItem item, TPriority priority);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Remove(TItem item);

  /// @brief Method UpdatePriority, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UpdatePriority(TItem item, TPriority priority);

  /// @brief Method GetPriority, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TPriority GetPriority(TItem item);

  /// @brief Method TryFirst, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryFirst(ByRef<TItem> first);

  /// @brief Method TryDequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryDequeue(ByRef<TItem> first);

  /// @brief Method TryRemove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryRemove(TItem item);

  /// @brief Method TryUpdatePriority, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryUpdatePriority(TItem item, TPriority priority);

  /// @brief Method TryGetPriority, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetPriority(TItem item, ByRef<TPriority> priority);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TItem>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method IsValidQueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool IsValidQueue();

  // Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimplePriorityQueue_2(SimplePriorityQueue_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimplePriorityQueue_2(SimplePriorityQueue_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimplePriorityQueue_2();

public:
  /// @brief Field _queue, offset: 0x10, size: 0x8, def value: None
  ::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*, TPriority>* ____queue;

  /// @brief Field _itemToNodesCache, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TItem, ::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>*>* ____itemToNodesCache;

  /// @brief Field _nullNodesCache, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Priority_Queue::__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>*>* ____nullNodesCache;

  /// @brief Field INITIAL_QUEUE_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t INITIAL_QUEUE_SIZE{ static_cast<int32_t>(0xa) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Priority_Queue
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::SimplePriorityQueue_2, "Priority_Queue", "SimplePriorityQueue`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::__SimplePriorityQueue_2__SimpleNode, "Priority_Queue", "SimplePriorityQueue`2/SimpleNode");
