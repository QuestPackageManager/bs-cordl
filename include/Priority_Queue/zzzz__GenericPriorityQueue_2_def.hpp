#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GenericPriorityQueue_2)
namespace Priority_Queue {
template <typename TItem, typename TPriority> class __GenericPriorityQueue_2___GetEnumerator_d__25;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace Priority_Queue {
template <typename TItem, typename TPriority> class IPriorityQueue_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace Priority_Queue {
template <typename TItem, typename TPriority> class IFixedSizePriorityQueue_2;
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
template <typename TItem, typename TPriority> class __GenericPriorityQueue_2___GetEnumerator_d__25;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Priority_Queue::GenericPriorityQueue_2);
MARK_GEN_REF_PTR_T(::Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25);
// Type: ::<GetEnumerator>d__25
// SizeInfo { instance_size: 48, native_size: 44, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Priority_Queue {
// cpp template
template <typename TItem, typename TPriority>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6094))
// CS Name: ::GenericPriorityQueue`2::<GetEnumerator>d__25<TItem,TPriority>*
class CORDL_TYPE __GenericPriorityQueue_2___GetEnumerator_d__25 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current)) TItem __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>* __4__this;

  /// @brief Field <i>5__2, offset 0x28, size 0x4
  __declspec(property(get = __get__i_5__2, put = __set__i_5__2)) int32_t _i_5__2;

  __declspec(property(get = System_Collections_Generic_IEnumerator_TItem__get_Current)) TItem System_Collections_Generic_IEnumerator_TItem__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TItem>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TItem>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr TItem& __get___2__current();

  constexpr TItem const& __get___2__current() const;

  constexpr void __set___2__current(TItem value);

  constexpr ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*> const& __get___4__this() const;

  constexpr void __set___4__this(::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>* value);

  constexpr int32_t& __get__i_5__2();

  constexpr int32_t const& __get__i_5__2() const;

  constexpr void __set__i_5__2(int32_t value);

  static inline ::Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<TItem>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline TItem System_Collections_Generic_IEnumerator_TItem__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__GenericPriorityQueue_2___GetEnumerator_d__25", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GenericPriorityQueue_2___GetEnumerator_d__25(__GenericPriorityQueue_2___GetEnumerator_d__25&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GenericPriorityQueue_2___GetEnumerator_d__25", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GenericPriorityQueue_2___GetEnumerator_d__25(__GenericPriorityQueue_2___GetEnumerator_d__25 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GenericPriorityQueue_2___GetEnumerator_d__25();

public:
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
// Type: Priority_Queue::GenericPriorityQueue`2
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Priority_Queue {
// cpp template
template <typename TItem, typename TPriority>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6095))
// CS Name: ::Priority_Queue::GenericPriorityQueue`2<TItem,TPriority>*
class CORDL_TYPE GenericPriorityQueue_2 : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__25 = ::Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>;

  /// @brief Field _numNodes, offset 0x10, size 0x4
  __declspec(property(get = __get__numNodes, put = __set__numNodes)) int32_t _numNodes;

  /// @brief Field _nodes, offset 0x18, size 0x8
  __declspec(property(get = __get__nodes, put = __set__nodes))::ArrayW<TItem, ::Array<TItem>*> _nodes;

  /// @brief Field _numNodesEverEnqueued, offset 0x20, size 0x8
  __declspec(property(get = __get__numNodesEverEnqueued, put = __set__numNodesEverEnqueued)) int64_t _numNodesEverEnqueued;

  /// @brief Field _comparer, offset 0x28, size 0x8
  __declspec(property(get = __get__comparer, put = __set__comparer))::System::Comparison_1<TPriority>* _comparer;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_MaxSize)) int32_t MaxSize;

  __declspec(property(get = get_First)) TItem First;

  /// @brief Convert operator to "::Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>"
  constexpr operator ::Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>*() noexcept;

  /// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
  constexpr operator ::Priority_Queue::IPriorityQueue_2<TItem, TPriority>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TItem>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TItem>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr int32_t& __get__numNodes();

  constexpr int32_t const& __get__numNodes() const;

  constexpr void __set__numNodes(int32_t value);

  constexpr ::ArrayW<TItem, ::Array<TItem>*>& __get__nodes();

  constexpr ::ArrayW<TItem, ::Array<TItem>*> const& __get__nodes() const;

  constexpr void __set__nodes(::ArrayW<TItem, ::Array<TItem>*> value);

  constexpr int64_t& __get__numNodesEverEnqueued();

  constexpr int64_t const& __get__numNodesEverEnqueued() const;

  constexpr void __set__numNodesEverEnqueued(int64_t value);

  constexpr ::System::Comparison_1<TPriority>*& __get__comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Comparison_1<TPriority>*> const& __get__comparer() const;

  constexpr void __set__comparer(::System::Comparison_1<TPriority>* value);

  static inline ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>* New_ctor(int32_t maxNodes);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(int32_t maxNodes);

  static inline ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>* New_ctor(int32_t maxNodes, ::System::Collections::Generic::IComparer_1<TPriority>* comparer);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(int32_t maxNodes, ::System::Collections::Generic::IComparer_1<TPriority>* comparer);

  static inline ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>* New_ctor(int32_t maxNodes, ::System::Comparison_1<TPriority>* comparer);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(int32_t maxNodes, ::System::Comparison_1<TPriority>* comparer);

  /// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t get_Count();

  /// @brief Method get_MaxSize addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t get_MaxSize();

  /// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Clear();

  /// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool Contains(TItem node);

  /// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Enqueue(TItem node, TPriority priority);

  /// @brief Method CascadeUp addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void CascadeUp(TItem node);

  /// @brief Method CascadeDown addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void CascadeDown(TItem node);

  /// @brief Method HasHigherPriority addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool HasHigherPriority(TItem higher, TItem lower);

  /// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual true final true
  inline TItem Dequeue();

  /// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Resize(int32_t maxNodes);

  /// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual true final true
  inline TItem get_First();

  /// @brief Method UpdatePriority addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void UpdatePriority(TItem node, TPriority priority);

  /// @brief Method OnNodeUpdated addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void OnNodeUpdated(TItem node);

  /// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Remove(TItem node);

  /// @brief Method ResetNode addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void ResetNode(TItem node);

  /// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<TItem>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method IsValidQueue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool IsValidQueue();

  // Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueue_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericPriorityQueue_2(GenericPriorityQueue_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueue_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericPriorityQueue_2(GenericPriorityQueue_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericPriorityQueue_2();

public:
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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25, "Priority_Queue", "GenericPriorityQueue`2/<GetEnumerator>d__25");
