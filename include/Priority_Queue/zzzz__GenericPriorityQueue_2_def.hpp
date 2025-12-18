#pragma once
// IWYU pragma private; include "Priority_Queue/GenericPriorityQueue_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GenericPriorityQueue_2)
namespace Priority_Queue {
template <typename TItem, typename TPriority> class GenericPriorityQueue_2__GetEnumerator_d__25;
}
namespace Priority_Queue {
template <typename TItem, typename TPriority> class IFixedSizePriorityQueue_2;
}
namespace Priority_Queue {
template <typename TItem, typename TPriority> class IPriorityQueue_2;
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
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Priority_Queue {
template <typename TItem, typename TPriority> class GenericPriorityQueue_2;
}
namespace Priority_Queue {
template <typename TItem, typename TPriority> class GenericPriorityQueue_2__GetEnumerator_d__25;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Priority_Queue::GenericPriorityQueue_2);
MARK_GEN_REF_PTR_T(::Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25);
// Dependencies System.Object
namespace Priority_Queue {
// cpp template
template <typename TItem, typename TPriority>
// Is value type: false
// CS Name: Priority_Queue.GenericPriorityQueue`2/<GetEnumerator>d__25<TItem,TPriority>
class CORDL_TYPE GenericPriorityQueue_2__GetEnumerator_d__25 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_TItem__get_Current)) TItem System_Collections_Generic_IEnumerator_TItem__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) TItem __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>* __4__this;

  /// @brief Field <i>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__2, put = __cordl_internal_set__i_5__2)) int32_t _i_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TItem>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TItem>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<TItem>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TItem System_Collections_Generic_IEnumerator_TItem__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr TItem const& __cordl_internal_get___2__current() const;

  constexpr TItem& __cordl_internal_get___2__current();

  constexpr ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>* const& __cordl_internal_get___4__this() const;

  constexpr ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get__i_5__2() const;

  constexpr int32_t& __cordl_internal_get__i_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(TItem value);

  constexpr void __cordl_internal_set___4__this(::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>* value);

  constexpr void __cordl_internal_set__i_5__2(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TItem>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TItem>* i___System__Collections__Generic__IEnumerator_1_TItem_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericPriorityQueue_2__GetEnumerator_d__25();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueue_2__GetEnumerator_d__25", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericPriorityQueue_2__GetEnumerator_d__25(GenericPriorityQueue_2__GetEnumerator_d__25&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueue_2__GetEnumerator_d__25", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericPriorityQueue_2__GetEnumerator_d__25(GenericPriorityQueue_2__GetEnumerator_d__25 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20526 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  TItem _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>* _____4__this;

  /// @brief Field <i>5__2, offset: 0x28, size: 0x4, def value: None
  int32_t ____i_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Priority_Queue
// Dependencies System.Object
namespace Priority_Queue {
// cpp template
template <typename TItem, typename TPriority>
// Is value type: false
// CS Name: Priority_Queue.GenericPriorityQueue`2<TItem,TPriority>
class CORDL_TYPE GenericPriorityQueue_2 : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__25 = ::Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_First)) TItem First;

  __declspec(property(get = get_MaxSize)) int32_t MaxSize;

  /// @brief Field _comparer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__comparer, put = __cordl_internal_set__comparer)) ::System::Comparison_1<TPriority>* _comparer;

  /// @brief Field _nodes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__nodes, put = __cordl_internal_set__nodes)) ::ArrayW<TItem, ::Array<TItem>*> _nodes;

  /// @brief Field _numNodes, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__numNodes, put = __cordl_internal_set__numNodes)) int32_t _numNodes;

  /// @brief Field _numNodesEverEnqueued, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__numNodesEverEnqueued, put = __cordl_internal_set__numNodesEverEnqueued)) int64_t _numNodesEverEnqueued;

  /// @brief Convert operator to "::Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>"
  constexpr operator ::Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>*() noexcept;

  /// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
  constexpr operator ::Priority_Queue::IPriorityQueue_2<TItem, TPriority>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TItem>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TItem>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method CascadeDown, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CascadeDown(TItem node);

  /// @brief Method CascadeUp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CascadeUp(TItem node);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(TItem node);

  /// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TItem Dequeue();

  /// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Enqueue(TItem node, TPriority priority);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TItem>* GetEnumerator();

  /// @brief Method HasHigherPriority, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool HasHigherPriority(TItem higher, TItem lower);

  /// @brief Method IsValidQueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool IsValidQueue();

  static inline ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>* New_ctor(int32_t maxNodes);

  static inline ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>* New_ctor(int32_t maxNodes, ::System::Collections::Generic::IComparer_1<TPriority>* comparer);

  static inline ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>* New_ctor(int32_t maxNodes, ::System::Comparison_1<TPriority>* comparer);

  /// @brief Method OnNodeUpdated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnNodeUpdated(TItem node);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Remove(TItem node);

  /// @brief Method ResetNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void ResetNode(TItem node);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Resize(int32_t maxNodes);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method UpdatePriority, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UpdatePriority(TItem node, TPriority priority);

  constexpr ::System::Comparison_1<TPriority>* const& __cordl_internal_get__comparer() const;

  constexpr ::System::Comparison_1<TPriority>*& __cordl_internal_get__comparer();

  constexpr ::ArrayW<TItem, ::Array<TItem>*> const& __cordl_internal_get__nodes() const;

  constexpr ::ArrayW<TItem, ::Array<TItem>*>& __cordl_internal_get__nodes();

  constexpr int32_t const& __cordl_internal_get__numNodes() const;

  constexpr int32_t& __cordl_internal_get__numNodes();

  constexpr int64_t const& __cordl_internal_get__numNodesEverEnqueued() const;

  constexpr int64_t& __cordl_internal_get__numNodesEverEnqueued();

  constexpr void __cordl_internal_set__comparer(::System::Comparison_1<TPriority>* value);

  constexpr void __cordl_internal_set__nodes(::ArrayW<TItem, ::Array<TItem>*> value);

  constexpr void __cordl_internal_set__numNodes(int32_t value);

  constexpr void __cordl_internal_set__numNodesEverEnqueued(int64_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxNodes);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxNodes, ::System::Collections::Generic::IComparer_1<TPriority>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxNodes, ::System::Comparison_1<TPriority>* comparer);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_First, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TItem get_First();

  /// @brief Method get_MaxSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_MaxSize();

  /// @brief Convert to "::Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>"
  constexpr ::Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>* i___Priority_Queue__IFixedSizePriorityQueue_2_TItem_TPriority_() noexcept;

  /// @brief Convert to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
  constexpr ::Priority_Queue::IPriorityQueue_2<TItem, TPriority>* i___Priority_Queue__IPriorityQueue_2_TItem_TPriority_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TItem>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TItem>* i___System__Collections__Generic__IEnumerable_1_TItem_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericPriorityQueue_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueue_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericPriorityQueue_2(GenericPriorityQueue_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueue_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericPriorityQueue_2(GenericPriorityQueue_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20527 };

  /// @brief Field _numNodes, offset: 0x10, size: 0x4, def value: None
  int32_t ____numNodes;

  /// @brief Field _nodes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<TItem, ::Array<TItem>*> ____nodes;

  /// @brief Field _numNodesEverEnqueued, offset: 0x20, size: 0x8, def value: None
  int64_t ____numNodesEverEnqueued;

  /// @brief Field _comparer, offset: 0x28, size: 0x8, def value: None
  ::System::Comparison_1<TPriority>* ____comparer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Priority_Queue
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::GenericPriorityQueue_2, "Priority_Queue", "GenericPriorityQueue`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25, "Priority_Queue", "GenericPriorityQueue`2/<GetEnumerator>d__25");
