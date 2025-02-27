#pragma once
// IWYU pragma private; include "Priority_Queue/FastPriorityQueue_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Priority_Queue/zzzz__IFixedSizePriorityQueue_2_def.hpp"
#include "Priority_Queue/zzzz__IPriorityQueue_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FastPriorityQueue_1)
namespace Priority_Queue {
template <typename T> class FastPriorityQueue_1__GetEnumerator_d__22;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Priority_Queue {
template <typename T> class FastPriorityQueue_1;
}
namespace Priority_Queue {
template <typename T> class FastPriorityQueue_1__GetEnumerator_d__22;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Priority_Queue::FastPriorityQueue_1);
MARK_GEN_REF_PTR_T(::Priority_Queue::FastPriorityQueue_1__GetEnumerator_d__22);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace Priority_Queue {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Priority_Queue.FastPriorityQueue`1/<GetEnumerator>d__22<T>
class CORDL_TYPE FastPriorityQueue_1__GetEnumerator_d__22 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_T__get_Current)) T System_Collections_Generic_IEnumerator_T__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) T __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Priority_Queue::FastPriorityQueue_1<T>* __4__this;

  /// @brief Field <i>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__2, put = __cordl_internal_set__i_5__2)) int32_t _i_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Priority_Queue::FastPriorityQueue_1__GetEnumerator_d__22<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T System_Collections_Generic_IEnumerator_T__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr T const& __cordl_internal_get___2__current() const;

  constexpr T& __cordl_internal_get___2__current();

  constexpr ::Priority_Queue::FastPriorityQueue_1<T>* const& __cordl_internal_get___4__this() const;

  constexpr ::Priority_Queue::FastPriorityQueue_1<T>*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get__i_5__2() const;

  constexpr int32_t& __cordl_internal_get__i_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(T value);

  constexpr void __cordl_internal_set___4__this(::Priority_Queue::FastPriorityQueue_1<T>* value);

  constexpr void __cordl_internal_set__i_5__2(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FastPriorityQueue_1__GetEnumerator_d__22();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FastPriorityQueue_1__GetEnumerator_d__22", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FastPriorityQueue_1__GetEnumerator_d__22(FastPriorityQueue_1__GetEnumerator_d__22&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FastPriorityQueue_1__GetEnumerator_d__22", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FastPriorityQueue_1__GetEnumerator_d__22(FastPriorityQueue_1__GetEnumerator_d__22 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16939 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  T _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Priority_Queue::FastPriorityQueue_1<T>* _____4__this;

  /// @brief Field <i>5__2, offset: 0x28, size: 0x4, def value: None
  int32_t ____i_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Priority_Queue
// Dependencies Priority_Queue.IFixedSizePriorityQueue`2<TItem, TPriority>, Priority_Queue.IPriorityQueue`2<TItem, TPriority>, System.Collections.Generic.IEnumerable`1<T>,
// System.Collections.IEnumerable, System.Object
namespace Priority_Queue {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Priority_Queue.FastPriorityQueue`1<T>
class CORDL_TYPE FastPriorityQueue_1 : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__22 = ::Priority_Queue::FastPriorityQueue_1__GetEnumerator_d__22<T>;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_First)) T First;

  __declspec(property(get = get_MaxSize)) int32_t MaxSize;

  /// @brief Field _nodes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__nodes, put = __cordl_internal_set__nodes)) ::ArrayW<T, ::Array<T>*> _nodes;

  /// @brief Field _numNodes, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__numNodes, put = __cordl_internal_set__numNodes)) int32_t _numNodes;

  /// @brief Convert operator to "::Priority_Queue::IFixedSizePriorityQueue_2<T,float_t>"
  constexpr operator ::Priority_Queue::IFixedSizePriorityQueue_2<T, float_t>*() noexcept;

  /// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<T,float_t>"
  constexpr operator ::Priority_Queue::IPriorityQueue_2<T, float_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method CascadeDown, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CascadeDown(T node);

  /// @brief Method CascadeUp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CascadeUp(T node);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(T node);

  /// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T Dequeue();

  /// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Enqueue(T node, float_t priority);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator();

  /// @brief Method HasHigherOrEqualPriority, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool HasHigherOrEqualPriority(T higher, T lower);

  /// @brief Method HasHigherPriority, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool HasHigherPriority(T higher, T lower);

  /// @brief Method IsValidQueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool IsValidQueue();

  static inline ::Priority_Queue::FastPriorityQueue_1<T>* New_ctor(int32_t maxNodes);

  /// @brief Method OnNodeUpdated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnNodeUpdated(T node);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Remove(T node);

  /// @brief Method ResetNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void ResetNode(T node);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Resize(int32_t maxNodes);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method UpdatePriority, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UpdatePriority(T node, float_t priority);

  constexpr ::ArrayW<T, ::Array<T>*> const& __cordl_internal_get__nodes() const;

  constexpr ::ArrayW<T, ::Array<T>*>& __cordl_internal_get__nodes();

  constexpr int32_t const& __cordl_internal_get__numNodes() const;

  constexpr int32_t& __cordl_internal_get__numNodes();

  constexpr void __cordl_internal_set__nodes(::ArrayW<T, ::Array<T>*> value);

  constexpr void __cordl_internal_set__numNodes(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxNodes);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_First, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_First();

  /// @brief Method get_MaxSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_MaxSize();

  /// @brief Convert to "::Priority_Queue::IFixedSizePriorityQueue_2<T,float_t>"
  constexpr ::Priority_Queue::IFixedSizePriorityQueue_2<T, float_t>* i___Priority_Queue__IFixedSizePriorityQueue_2_T_float_t_() noexcept;

  /// @brief Convert to "::Priority_Queue::IPriorityQueue_2<T,float_t>"
  constexpr ::Priority_Queue::IPriorityQueue_2<T, float_t>* i___Priority_Queue__IPriorityQueue_2_T_float_t_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FastPriorityQueue_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FastPriorityQueue_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FastPriorityQueue_1(FastPriorityQueue_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FastPriorityQueue_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FastPriorityQueue_1(FastPriorityQueue_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16940 };

  /// @brief Field _numNodes, offset: 0x10, size: 0x4, def value: None
  int32_t ____numNodes;

  /// @brief Field _nodes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ____nodes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Priority_Queue
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::FastPriorityQueue_1, "Priority_Queue", "FastPriorityQueue`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::FastPriorityQueue_1__GetEnumerator_d__22, "Priority_Queue", "FastPriorityQueue`1/<GetEnumerator>d__22");
