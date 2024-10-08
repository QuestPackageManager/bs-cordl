#pragma once
// IWYU pragma private; include "System/Collections/Concurrent/ConcurrentQueue_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Concurrent/zzzz__PaddedHeadAndTail_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConcurrentQueue_1)
namespace GlobalNamespace {
template <typename T> struct __ConcurrentQueue_1__Segment__Slot;
}
namespace System::Collections::Concurrent {
template <typename T> class IProducerConsumerCollection_1;
}
namespace System::Collections::Concurrent {
template <typename T> class __ConcurrentQueue_1__Segment;
}
namespace System::Collections::Concurrent {
template <typename T> class __ConcurrentQueue_1___Enumerate_d__28;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Array;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Concurrent {
template <typename T> class ConcurrentQueue_1;
}
namespace System::Collections::Concurrent {
template <typename T> class __ConcurrentQueue_1__Segment;
}
namespace System::Collections::Concurrent {
template <typename T> class __ConcurrentQueue_1___Enumerate_d__28;
}
namespace GlobalNamespace {
template <typename T> struct __ConcurrentQueue_1__Segment__Slot;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::ConcurrentQueue_1);
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment);
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28);
MARK_GEN_VAL_T(::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot);
// Type: ::Slot
// SizeInfo { instance_size: 16, native_size: 28, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::ConcurrentQueue`1::Segment::Slot<T>
struct CORDL_TYPE __ConcurrentQueue_1__Segment__Slot {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConcurrentQueue_1__Segment__Slot();

  // Ctor Parameters [CppParam { name: "Item", ty: "T", modifiers: "", def_value: None }, CppParam { name: "SequenceNumber", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ConcurrentQueue_1__Segment__Slot(T Item, int32_t SequenceNumber) noexcept;

  /// @brief Field Item, offset: 0x0, size: 0x8, def value: None
  T Item;

  /// @brief Field SequenceNumber, offset: 0x8, size: 0x4, def value: None
  int32_t SequenceNumber;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3809 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::Segment
// SizeInfo { instance_size: 424, native_size: 424, calculated_instance_size: 424, calculated_native_size: 424, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Concurrent {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::ConcurrentQueue`1::Segment<T>*
class CORDL_TYPE __ConcurrentQueue_1__Segment : public ::System::Object {
public:
  // Declarations
  using Slot = ::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>;

  __declspec(property(get = get_Capacity)) int32_t Capacity;

  __declspec(property(get = get_FreezeOffset)) int32_t FreezeOffset;

  /// @brief Field _frozenForEnqueues, offset 0x19d, size 0x1
  __declspec(property(get = __cordl_internal_get__frozenForEnqueues, put = __cordl_internal_set__frozenForEnqueues)) bool _frozenForEnqueues;

  /// @brief Field _headAndTail, offset 0x1c, size 0x180
  __declspec(property(get = __cordl_internal_get__headAndTail, put = __cordl_internal_set__headAndTail)) ::System::Collections::Concurrent::PaddedHeadAndTail _headAndTail;

  /// @brief Field _nextSegment, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get__nextSegment, put = __cordl_internal_set__nextSegment)) ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* _nextSegment;

  /// @brief Field _preservedForObservation, offset 0x19c, size 0x1
  __declspec(property(get = __cordl_internal_get__preservedForObservation, put = __cordl_internal_set__preservedForObservation)) bool _preservedForObservation;

  /// @brief Field _slots, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__slots,
                      put = __cordl_internal_set__slots)) ::ArrayW<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>, ::Array<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>>*>
      _slots;

  /// @brief Field _slotsMask, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__slotsMask, put = __cordl_internal_set__slotsMask)) int32_t _slotsMask;

  /// @brief Method EnsureFrozenForEnqueues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void EnsureFrozenForEnqueues();

  static inline ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* New_ctor(int32_t boundedLength);

  /// @brief Method TryDequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryDequeue(ByRef<T> item);

  /// @brief Method TryEnqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryEnqueue(T item);

  constexpr bool const& __cordl_internal_get__frozenForEnqueues() const;

  constexpr bool& __cordl_internal_get__frozenForEnqueues();

  constexpr ::System::Collections::Concurrent::PaddedHeadAndTail const& __cordl_internal_get__headAndTail() const;

  constexpr ::System::Collections::Concurrent::PaddedHeadAndTail& __cordl_internal_get__headAndTail();

  constexpr ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*& __cordl_internal_get__nextSegment();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*> const& __cordl_internal_get__nextSegment() const;

  constexpr bool const& __cordl_internal_get__preservedForObservation() const;

  constexpr bool& __cordl_internal_get__preservedForObservation();

  constexpr ::ArrayW<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>, ::Array<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>>*> const& __cordl_internal_get__slots() const;

  constexpr ::ArrayW<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>, ::Array<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>>*>& __cordl_internal_get__slots();

  constexpr int32_t const& __cordl_internal_get__slotsMask() const;

  constexpr int32_t& __cordl_internal_get__slotsMask();

  constexpr void __cordl_internal_set__frozenForEnqueues(bool value);

  constexpr void __cordl_internal_set__headAndTail(::System::Collections::Concurrent::PaddedHeadAndTail value);

  constexpr void __cordl_internal_set__nextSegment(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* value);

  constexpr void __cordl_internal_set__preservedForObservation(bool value);

  constexpr void __cordl_internal_set__slots(::ArrayW<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>, ::Array<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>>*> value);

  constexpr void __cordl_internal_set__slotsMask(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t boundedLength);

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_FreezeOffset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_FreezeOffset();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConcurrentQueue_1__Segment();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConcurrentQueue_1__Segment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConcurrentQueue_1__Segment(__ConcurrentQueue_1__Segment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConcurrentQueue_1__Segment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConcurrentQueue_1__Segment(__ConcurrentQueue_1__Segment const&) = delete;

  /// @brief Field _slots, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>, ::Array<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>>*> ____slots;

  /// @brief Field _slotsMask, offset: 0x18, size: 0x4, def value: None
  int32_t ____slotsMask;

  /// @brief Field _headAndTail, offset: 0x1c, size: 0x180, def value: None
  ::System::Collections::Concurrent::PaddedHeadAndTail ____headAndTail;

  /// @brief Field _preservedForObservation, offset: 0x19c, size: 0x1, def value: None
  bool ____preservedForObservation;

  /// @brief Field _frozenForEnqueues, offset: 0x19d, size: 0x1, def value: None
  bool ____frozenForEnqueues;

  /// @brief Field _nextSegment, offset: 0x1a0, size: 0x8, def value: None
  ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* ____nextSegment;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3810 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
// Type: ::<Enumerate>d__28
// SizeInfo { instance_size: 88, native_size: 84, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Concurrent {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::ConcurrentQueue`1::<Enumerate>d__28<T>*
class CORDL_TYPE __ConcurrentQueue_1___Enumerate_d__28 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_T__get_Current)) T System_Collections_Generic_IEnumerator_T__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) T __2__current;

  /// @brief Field <>4__this, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::System::Collections::Concurrent::ConcurrentQueue_1<T>* __4__this;

  /// @brief Field <headTail>5__2, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__headTail_5__2, put = __cordl_internal_set__headTail_5__2)) int32_t _headTail_5__2;

  /// @brief Field <i>5__3, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__3, put = __cordl_internal_set__i_5__3)) int32_t _i_5__3;

  /// @brief Field <i>5__5, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__5, put = __cordl_internal_set__i_5__5)) int32_t _i_5__5;

  /// @brief Field <s>5__4, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__s_5__4, put = __cordl_internal_set__s_5__4)) ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* _s_5__4;

  /// @brief Field head, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_head, put = __cordl_internal_set_head)) ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* head;

  /// @brief Field headHead, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_headHead, put = __cordl_internal_set_headHead)) int32_t headHead;

  /// @brief Field tail, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_tail, put = __cordl_internal_set_tail)) ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* tail;

  /// @brief Field tailTail, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_tailTail, put = __cordl_internal_set_tailTail)) int32_t tailTail;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>* New_ctor(int32_t __1__state);

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

  constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<T>*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentQueue_1<T>*> const& __cordl_internal_get___4__this() const;

  constexpr int32_t const& __cordl_internal_get__headTail_5__2() const;

  constexpr int32_t& __cordl_internal_get__headTail_5__2();

  constexpr int32_t const& __cordl_internal_get__i_5__3() const;

  constexpr int32_t& __cordl_internal_get__i_5__3();

  constexpr int32_t const& __cordl_internal_get__i_5__5() const;

  constexpr int32_t& __cordl_internal_get__i_5__5();

  constexpr ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*& __cordl_internal_get__s_5__4();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*> const& __cordl_internal_get__s_5__4() const;

  constexpr ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*& __cordl_internal_get_head();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*> const& __cordl_internal_get_head() const;

  constexpr int32_t const& __cordl_internal_get_headHead() const;

  constexpr int32_t& __cordl_internal_get_headHead();

  constexpr ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*& __cordl_internal_get_tail();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*> const& __cordl_internal_get_tail() const;

  constexpr int32_t const& __cordl_internal_get_tailTail() const;

  constexpr int32_t& __cordl_internal_get_tailTail();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(T value);

  constexpr void __cordl_internal_set___4__this(::System::Collections::Concurrent::ConcurrentQueue_1<T>* value);

  constexpr void __cordl_internal_set__headTail_5__2(int32_t value);

  constexpr void __cordl_internal_set__i_5__3(int32_t value);

  constexpr void __cordl_internal_set__i_5__5(int32_t value);

  constexpr void __cordl_internal_set__s_5__4(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* value);

  constexpr void __cordl_internal_set_head(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* value);

  constexpr void __cordl_internal_set_headHead(int32_t value);

  constexpr void __cordl_internal_set_tail(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* value);

  constexpr void __cordl_internal_set_tailTail(int32_t value);

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
  constexpr __ConcurrentQueue_1___Enumerate_d__28();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConcurrentQueue_1___Enumerate_d__28", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConcurrentQueue_1___Enumerate_d__28(__ConcurrentQueue_1___Enumerate_d__28&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConcurrentQueue_1___Enumerate_d__28", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConcurrentQueue_1___Enumerate_d__28(__ConcurrentQueue_1___Enumerate_d__28 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  T _____2__current;

  /// @brief Field head, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* ___head;

  /// @brief Field tail, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* ___tail;

  /// @brief Field tailTail, offset: 0x30, size: 0x4, def value: None
  int32_t ___tailTail;

  /// @brief Field headHead, offset: 0x34, size: 0x4, def value: None
  int32_t ___headHead;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentQueue_1<T>* _____4__this;

  /// @brief Field <headTail>5__2, offset: 0x40, size: 0x4, def value: None
  int32_t ____headTail_5__2;

  /// @brief Field <i>5__3, offset: 0x44, size: 0x4, def value: None
  int32_t ____i_5__3;

  /// @brief Field <s>5__4, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* ____s_5__4;

  /// @brief Field <i>5__5, offset: 0x50, size: 0x4, def value: None
  int32_t ____i_5__5;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3811 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
// Type: System.Collections.Concurrent::ConcurrentQueue`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Concurrent {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System.Collections.Concurrent::ConcurrentQueue`1<T>*
class CORDL_TYPE ConcurrentQueue_1 : public ::System::Object {
public:
  // Declarations
  using Segment = ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>;

  using _Enumerate_d__28 = ::System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot)) ::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field _crossSegmentLock, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__crossSegmentLock, put = __cordl_internal_set__crossSegmentLock)) ::System::Object* _crossSegmentLock;

  /// @brief Field _head, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__head, put = __cordl_internal_set__head)) ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* _head;

  /// @brief Field _tail, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__tail, put = __cordl_internal_set__tail)) ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* _tail;

  /// @brief Convert operator to "::System::Collections::Concurrent::IProducerConsumerCollection_1<T>"
  constexpr operator ::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t index);

  /// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Enqueue(T item);

  /// @brief Method EnqueueSlow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void EnqueueSlow(T item);

  /// @brief Method Enumerate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerator_1<T>* Enumerate(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* head, int32_t headHead,
                                                                     ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* tail, int32_t tailTail);

  /// @brief Method GetCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t GetCount(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* s, int32_t head, int32_t tail);

  /// @brief Method GetCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int64_t GetCount(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* head, int32_t headHead, ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* tail,
                                 int32_t tailTail);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator();

  /// @brief Method GetItemWhenAvailable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetItemWhenAvailable(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* segment, int32_t i);

  static inline ::System::Collections::Concurrent::ConcurrentQueue_1<T>* New_ctor();

  /// @brief Method SnapForObservation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SnapForObservation(ByRef<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*> head, ByRef<int32_t> headHead,
                                 ByRef<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*> tail, ByRef<int32_t> tailTail);

  /// @brief Method System.Collections.Concurrent.IProducerConsumerCollection<T>.TryAdd, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd(T item);

  /// @brief Method System.Collections.Concurrent.IProducerConsumerCollection<T>.TryTake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Concurrent_IProducerConsumerCollection_T__TryTake(ByRef<T> item);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::ArrayW<T, ::Array<T>*> ToArray();

  /// @brief Method TryDequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryDequeue(ByRef<T> result);

  /// @brief Method TryDequeueSlow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryDequeueSlow(ByRef<T> item);

  constexpr ::System::Object*& __cordl_internal_get__crossSegmentLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__crossSegmentLock() const;

  constexpr ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*& __cordl_internal_get__head();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*> const& __cordl_internal_get__head() const;

  constexpr ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*& __cordl_internal_get__tail();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*> const& __cordl_internal_get__tail() const;

  constexpr void __cordl_internal_set__crossSegmentLock(::System::Object* value);

  constexpr void __cordl_internal_set__head(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* value);

  constexpr void __cordl_internal_set__tail(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Convert to "::System::Collections::Concurrent::IProducerConsumerCollection_1<T>"
  constexpr ::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* i___System__Collections__Concurrent__IProducerConsumerCollection_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcurrentQueue_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentQueue_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcurrentQueue_1(ConcurrentQueue_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentQueue_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcurrentQueue_1(ConcurrentQueue_1 const&) = delete;

  /// @brief Field _crossSegmentLock, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____crossSegmentLock;

  /// @brief Field _tail, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* ____tail;

  /// @brief Field _head, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* ____head;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3812 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::ConcurrentQueue_1, "System.Collections.Concurrent", "ConcurrentQueue`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment, "System.Collections.Concurrent", "ConcurrentQueue`1/Segment");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28, "System.Collections.Concurrent", "ConcurrentQueue`1/<Enumerate>d__28");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot, "System.Collections.Concurrent", "ConcurrentQueue`1/Segment/Slot");
