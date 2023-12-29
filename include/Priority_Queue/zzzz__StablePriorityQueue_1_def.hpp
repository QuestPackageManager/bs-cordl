#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StablePriorityQueue_1)
namespace Priority_Queue {
template <typename TItem, typename TPriority> class IFixedSizePriorityQueue_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace Priority_Queue {
template <typename TItem, typename TPriority> class IPriorityQueue_2;
}
namespace Priority_Queue {
template <typename T> class __StablePriorityQueue_1___GetEnumerator_d__22;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Priority_Queue {
template <typename T> class StablePriorityQueue_1;
}
namespace Priority_Queue {
template <typename T> class __StablePriorityQueue_1___GetEnumerator_d__22;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Priority_Queue::StablePriorityQueue_1);
MARK_GEN_REF_PTR_T(::Priority_Queue::__StablePriorityQueue_1___GetEnumerator_d__22);
// Type: ::<GetEnumerator>d__22
// SizeInfo { instance_size: 48, native_size: 44, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Priority_Queue {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6173))
// CS Name: ::StablePriorityQueue`1::<GetEnumerator>d__22<T>*
class CORDL_TYPE __StablePriorityQueue_1___GetEnumerator_d__22 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current)) T __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Priority_Queue::StablePriorityQueue_1<T>* __4__this;

  /// @brief Field <i>5__2, offset 0x28, size 0x4
  __declspec(property(get = __get__i_5__2, put = __set__i_5__2)) int32_t _i_5__2;

  __declspec(property(get = System_Collections_Generic_IEnumerator_T__get_Current)) T System_Collections_Generic_IEnumerator_T__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr T& __get___2__current();

  constexpr T const& __get___2__current() const;

  constexpr void __set___2__current(T value);

  constexpr ::Priority_Queue::StablePriorityQueue_1<T>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Priority_Queue::StablePriorityQueue_1<T>*> const& __get___4__this() const;

  constexpr void __set___4__this(::Priority_Queue::StablePriorityQueue_1<T>* value);

  constexpr int32_t& __get__i_5__2();

  constexpr int32_t const& __get__i_5__2() const;

  constexpr void __set__i_5__2(int32_t value);

  static inline ::Priority_Queue::__StablePriorityQueue_1___GetEnumerator_d__22<T>* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline T System_Collections_Generic_IEnumerator_T__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__StablePriorityQueue_1___GetEnumerator_d__22", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StablePriorityQueue_1___GetEnumerator_d__22(__StablePriorityQueue_1___GetEnumerator_d__22&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StablePriorityQueue_1___GetEnumerator_d__22", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StablePriorityQueue_1___GetEnumerator_d__22(__StablePriorityQueue_1___GetEnumerator_d__22 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StablePriorityQueue_1___GetEnumerator_d__22();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  T _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Priority_Queue::StablePriorityQueue_1<T>* _____4__this;

  /// @brief Field <i>5__2, offset: 0x28, size: 0x4, def value: None
  int32_t ____i_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Priority_Queue
// Type: Priority_Queue::StablePriorityQueue`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Priority_Queue {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6174))
// CS Name: ::Priority_Queue::StablePriorityQueue`1<T>*
class CORDL_TYPE StablePriorityQueue_1 : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__22 = ::Priority_Queue::__StablePriorityQueue_1___GetEnumerator_d__22<T>;

  /// @brief Field _numNodes, offset 0x10, size 0x4
  __declspec(property(get = __get__numNodes, put = __set__numNodes)) int32_t _numNodes;

  /// @brief Field _nodes, offset 0x18, size 0x8
  __declspec(property(get = __get__nodes, put = __set__nodes))::ArrayW<T, ::Array<T>*> _nodes;

  /// @brief Field _numNodesEverEnqueued, offset 0x20, size 0x8
  __declspec(property(get = __get__numNodesEverEnqueued, put = __set__numNodesEverEnqueued)) int64_t _numNodesEverEnqueued;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_MaxSize)) int32_t MaxSize;

  __declspec(property(get = get_First)) T First;

  /// @brief Convert operator to "::Priority_Queue::IFixedSizePriorityQueue_2<T,float_t>"
  constexpr operator ::Priority_Queue::IFixedSizePriorityQueue_2<T, float_t>*() noexcept;

  /// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<T,float_t>"
  constexpr operator ::Priority_Queue::IPriorityQueue_2<T, float_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr int32_t& __get__numNodes();

  constexpr int32_t const& __get__numNodes() const;

  constexpr void __set__numNodes(int32_t value);

  constexpr ::ArrayW<T, ::Array<T>*>& __get__nodes();

  constexpr ::ArrayW<T, ::Array<T>*> const& __get__nodes() const;

  constexpr void __set__nodes(::ArrayW<T, ::Array<T>*> value);

  constexpr int64_t& __get__numNodesEverEnqueued();

  constexpr int64_t const& __get__numNodesEverEnqueued() const;

  constexpr void __set__numNodesEverEnqueued(int64_t value);

  static inline ::Priority_Queue::StablePriorityQueue_1<T>* New_ctor(int32_t maxNodes);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(int32_t maxNodes);

  /// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t get_Count();

  /// @brief Method get_MaxSize addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t get_MaxSize();

  /// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Clear();

  /// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool Contains(T node);

  /// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Enqueue(T node, float_t priority);

  /// @brief Method CascadeUp addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void CascadeUp(T node);

  /// @brief Method CascadeDown addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void CascadeDown(T node);

  /// @brief Method HasHigherPriority addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool HasHigherPriority(T higher, T lower);

  /// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual true final true
  inline T Dequeue();

  /// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Resize(int32_t maxNodes);

  /// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual true final true
  inline T get_First();

  /// @brief Method UpdatePriority addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void UpdatePriority(T node, float_t priority);

  /// @brief Method OnNodeUpdated addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void OnNodeUpdated(T node);

  /// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Remove(T node);

  /// @brief Method ResetNode addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void ResetNode(T node);

  /// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method IsValidQueue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool IsValidQueue();

  // Ctor Parameters [CppParam { name: "", ty: "StablePriorityQueue_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StablePriorityQueue_1(StablePriorityQueue_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StablePriorityQueue_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StablePriorityQueue_1(StablePriorityQueue_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StablePriorityQueue_1();

public:
  /// @brief Field _numNodes, offset: 0x10, size: 0x4, def value: None
  int32_t ____numNodes;

  /// @brief Field _nodes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ____nodes;

  /// @brief Field _numNodesEverEnqueued, offset: 0x20, size: 0x8, def value: None
  int64_t ____numNodesEverEnqueued;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Priority_Queue
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::StablePriorityQueue_1, "Priority_Queue", "StablePriorityQueue`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::__StablePriorityQueue_1___GetEnumerator_d__22, "Priority_Queue", "StablePriorityQueue`1/<GetEnumerator>d__22");
