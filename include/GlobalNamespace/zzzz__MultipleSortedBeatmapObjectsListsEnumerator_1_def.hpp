#pragma once
// IWYU pragma private; include "GlobalNamespace/MultipleSortedBeatmapObjectsListsEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Priority_Queue/zzzz__StablePriorityQueueNode_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultipleSortedBeatmapObjectsListsEnumerator_1)
namespace GlobalNamespace {
template <typename T> class MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode;
}
namespace GlobalNamespace {
template <typename T> class MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4;
}
namespace Priority_Queue {
template <typename T> class StablePriorityQueue_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class MultipleSortedBeatmapObjectsListsEnumerator_1;
}
namespace GlobalNamespace {
template <typename T> class MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode;
}
namespace GlobalNamespace {
template <typename T> class MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode);
MARK_GEN_REF_PTR_T(::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4);
// Dependencies Priority_Queue.StablePriorityQueueNode
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: MultipleSortedBeatmapObjectsListsEnumerator`1/BeatmapObjectListNode<T>
class CORDL_TYPE MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode : public ::Priority_Queue::StablePriorityQueueNode {
public:
  // Declarations
  /// @brief Field _dataList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__dataList, put = __cordl_internal_set__dataList)) ::System::Collections::Generic::IReadOnlyList_1<T>* _dataList;

  /// @brief Field _idx, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__idx, put = __cordl_internal_set__idx)) int32_t _idx;

  /// @brief Field _typeId, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__typeId, put = __cordl_internal_set__typeId)) int32_t _typeId;

  __declspec(property(get = get_typeId)) int32_t typeId;

  __declspec(property(get = get_value)) T value;

  /// @brief Method MoveToNextItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool MoveToNextItem();

  static inline ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>* New_ctor(::System::Collections::Generic::IReadOnlyList_1<T>* dataList, int32_t typeId);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* const& __cordl_internal_get__dataList() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<T>*& __cordl_internal_get__dataList();

  constexpr int32_t const& __cordl_internal_get__idx() const;

  constexpr int32_t& __cordl_internal_get__idx();

  constexpr int32_t const& __cordl_internal_get__typeId() const;

  constexpr int32_t& __cordl_internal_get__typeId();

  constexpr void __cordl_internal_set__dataList(::System::Collections::Generic::IReadOnlyList_1<T>* value);

  constexpr void __cordl_internal_set__idx(int32_t value);

  constexpr void __cordl_internal_set__typeId(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<T>* dataList, int32_t typeId);

  /// @brief Method get_typeId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_typeId();

  /// @brief Method get_value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode(MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode(MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12892 };

  /// @brief Field _dataList, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<T>* ____dataList;

  /// @brief Field _typeId, offset: 0x28, size: 0x4, def value: None
  int32_t ____typeId;

  /// @brief Field _idx, offset: 0x2c, size: 0x4, def value: None
  int32_t ____idx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: MultipleSortedBeatmapObjectsListsEnumerator`1/<GetEnumerator>d__4<T>
class CORDL_TYPE MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator__Titem_System_Int32typeId___get_Current)) ::System::ValueTuple_2<T, int32_t>
      System_Collections_Generic_IEnumerator__Titem_System_Int32typeId___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::ValueTuple_2<T, int32_t> __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>* __4__this;

  /// @brief Field <node>5__2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__node_5__2,
                      put = __cordl_internal_set__node_5__2)) ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>* _node_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T,int32_t>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T, int32_t>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<(Titem,System.Int32typeId)>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::ValueTuple_2<T, int32_t> System_Collections_Generic_IEnumerator__Titem_System_Int32typeId___get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::ValueTuple_2<T, int32_t> const& __cordl_internal_get___2__current() const;

  constexpr ::System::ValueTuple_2<T, int32_t>& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>*& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>* const& __cordl_internal_get__node_5__2() const;

  constexpr ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>*& __cordl_internal_get__node_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::ValueTuple_2<T, int32_t> value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>* value);

  constexpr void __cordl_internal_set__node_5__2(::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T,int32_t>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T, int32_t>>* i___System__Collections__Generic__IEnumerator_1___System__ValueTuple_2_T_int32_t__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4(MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4(MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12893 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::System::ValueTuple_2<T, int32_t> _____2__current;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>* _____4__this;

  /// @brief Field <node>5__2, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>* ____node_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Collections.IEnumerable, System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: MultipleSortedBeatmapObjectsListsEnumerator`1<T>
class CORDL_TYPE MultipleSortedBeatmapObjectsListsEnumerator_1 : public ::System::Object {
public:
  // Declarations
  using BeatmapObjectListNode = ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>;

  using _GetEnumerator_d__4 = ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4<T>;

  /// @brief Field _priorityQueue, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__priorityQueue,
      put = __cordl_internal_set__priorityQueue)) ::Priority_Queue::StablePriorityQueue_1<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>*>* _priorityQueue;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T, int32_t>>* GetEnumerator();

  static inline ::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1<T>* New_ctor(
      ::ArrayW<::System::ValueTuple_2<::System::Collections::Generic::IReadOnlyList_1<T>*, int32_t>, ::Array<::System::ValueTuple_2<::System::Collections::Generic::IReadOnlyList_1<T>*, int32_t>>*>
          dataList);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::Priority_Queue::StablePriorityQueue_1<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>*>* const& __cordl_internal_get__priorityQueue() const;

  constexpr ::Priority_Queue::StablePriorityQueue_1<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>*>*& __cordl_internal_get__priorityQueue();

  constexpr void __cordl_internal_set__priorityQueue(::Priority_Queue::StablePriorityQueue_1<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void
  _ctor(::ArrayW<::System::ValueTuple_2<::System::Collections::Generic::IReadOnlyList_1<T>*, int32_t>, ::Array<::System::ValueTuple_2<::System::Collections::Generic::IReadOnlyList_1<T>*, int32_t>>*>
            dataList);

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultipleSortedBeatmapObjectsListsEnumerator_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultipleSortedBeatmapObjectsListsEnumerator_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultipleSortedBeatmapObjectsListsEnumerator_1(MultipleSortedBeatmapObjectsListsEnumerator_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultipleSortedBeatmapObjectsListsEnumerator_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultipleSortedBeatmapObjectsListsEnumerator_1(MultipleSortedBeatmapObjectsListsEnumerator_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12894 };

  /// @brief Field _priorityQueue, offset: 0x10, size: 0x8, def value: None
  ::Priority_Queue::StablePriorityQueue_1<::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode<T>*>* ____priorityQueue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1, "", "MultipleSortedBeatmapObjectsListsEnumerator`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1_BeatmapObjectListNode, "", "MultipleSortedBeatmapObjectsListsEnumerator`1/BeatmapObjectListNode");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MultipleSortedBeatmapObjectsListsEnumerator_1__GetEnumerator_d__4, "", "MultipleSortedBeatmapObjectsListsEnumerator`1/<GetEnumerator>d__4");
