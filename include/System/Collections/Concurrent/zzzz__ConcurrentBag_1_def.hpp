#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConcurrentBag_1)
namespace System::Collections::Concurrent {
template <typename T> class IProducerConsumerCollection_1;
}
namespace System::Collections::Concurrent {
template <typename T> class __ConcurrentBag_1__Enumerator;
}
namespace System::Collections::Concurrent {
template <typename T> class __ConcurrentBag_1__WorkStealingQueue;
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
namespace System::Threading {
template <typename T> class ThreadLocal_1;
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
template <typename T> class ConcurrentBag_1;
}
namespace System::Collections::Concurrent {
template <typename T> class __ConcurrentBag_1__Enumerator;
}
namespace System::Collections::Concurrent {
template <typename T> class __ConcurrentBag_1__WorkStealingQueue;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::ConcurrentBag_1);
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator);
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue);
// Type: ::WorkStealingQueue
// SizeInfo { instance_size: 72, native_size: 68, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Concurrent {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::ConcurrentBag`1::WorkStealingQueue<T>*
class CORDL_TYPE __ConcurrentBag_1__WorkStealingQueue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DangerousCount)) int32_t DangerousCount;

  /// @brief Field _addTakeCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__addTakeCount, put = __cordl_internal_set__addTakeCount)) int32_t _addTakeCount;

  /// @brief Field _array, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__array, put = __cordl_internal_set__array))::ArrayW<T, ::Array<T>*> _array;

  /// @brief Field _currentOp, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__currentOp, put = __cordl_internal_set__currentOp)) int32_t _currentOp;

  /// @brief Field _frozen, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__frozen, put = __cordl_internal_set__frozen)) bool _frozen;

  /// @brief Field _headIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__headIndex, put = __cordl_internal_set__headIndex)) int32_t _headIndex;

  /// @brief Field _mask, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__mask, put = __cordl_internal_set__mask)) int32_t _mask;

  /// @brief Field _nextQueue, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__nextQueue, put = __cordl_internal_set__nextQueue))::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* _nextQueue;

  /// @brief Field _ownerThreadId, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__ownerThreadId, put = __cordl_internal_set__ownerThreadId)) int32_t _ownerThreadId;

  /// @brief Field _stealCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__stealCount, put = __cordl_internal_set__stealCount)) int32_t _stealCount;

  /// @brief Field _tailIndex, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__tailIndex, put = __cordl_internal_set__tailIndex)) int32_t _tailIndex;

  /// @brief Method DangerousCopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t DangerousCopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex);

  /// @brief Method LocalClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void LocalClear();

  /// @brief Method LocalPush, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void LocalPush(T item, ByRef<int64_t> emptyToNonEmptyListTransitionCount);

  static inline ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* New_ctor(::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* nextQueue);

  /// @brief Method TryLocalPop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryLocalPop(ByRef<T> result);

  /// @brief Method TrySteal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TrySteal(ByRef<T> result, bool take);

  constexpr int32_t const& __cordl_internal_get__addTakeCount() const;

  constexpr int32_t& __cordl_internal_get__addTakeCount();

  constexpr ::ArrayW<T, ::Array<T>*> const& __cordl_internal_get__array() const;

  constexpr ::ArrayW<T, ::Array<T>*>& __cordl_internal_get__array();

  constexpr int32_t const& __cordl_internal_get__currentOp() const;

  constexpr int32_t& __cordl_internal_get__currentOp();

  constexpr bool const& __cordl_internal_get__frozen() const;

  constexpr bool& __cordl_internal_get__frozen();

  constexpr int32_t const& __cordl_internal_get__headIndex() const;

  constexpr int32_t& __cordl_internal_get__headIndex();

  constexpr int32_t const& __cordl_internal_get__mask() const;

  constexpr int32_t& __cordl_internal_get__mask();

  constexpr ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*& __cordl_internal_get__nextQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*> const& __cordl_internal_get__nextQueue() const;

  constexpr int32_t const& __cordl_internal_get__ownerThreadId() const;

  constexpr int32_t& __cordl_internal_get__ownerThreadId();

  constexpr int32_t const& __cordl_internal_get__stealCount() const;

  constexpr int32_t& __cordl_internal_get__stealCount();

  constexpr int32_t const& __cordl_internal_get__tailIndex() const;

  constexpr int32_t& __cordl_internal_get__tailIndex();

  constexpr void __cordl_internal_set__addTakeCount(int32_t value);

  constexpr void __cordl_internal_set__array(::ArrayW<T, ::Array<T>*> value);

  constexpr void __cordl_internal_set__currentOp(int32_t value);

  constexpr void __cordl_internal_set__frozen(bool value);

  constexpr void __cordl_internal_set__headIndex(int32_t value);

  constexpr void __cordl_internal_set__mask(int32_t value);

  constexpr void __cordl_internal_set__nextQueue(::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* value);

  constexpr void __cordl_internal_set__ownerThreadId(int32_t value);

  constexpr void __cordl_internal_set__stealCount(int32_t value);

  constexpr void __cordl_internal_set__tailIndex(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* nextQueue);

  /// @brief Method get_DangerousCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_DangerousCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConcurrentBag_1__WorkStealingQueue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConcurrentBag_1__WorkStealingQueue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConcurrentBag_1__WorkStealingQueue(__ConcurrentBag_1__WorkStealingQueue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConcurrentBag_1__WorkStealingQueue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConcurrentBag_1__WorkStealingQueue(__ConcurrentBag_1__WorkStealingQueue const&) = delete;

  /// @brief Field _headIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ____headIndex;

  /// @brief Field _tailIndex, offset: 0x14, size: 0x4, def value: None
  int32_t ____tailIndex;

  /// @brief Field _array, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ____array;

  /// @brief Field _mask, offset: 0x20, size: 0x4, def value: None
  int32_t ____mask;

  /// @brief Field _addTakeCount, offset: 0x24, size: 0x4, def value: None
  int32_t ____addTakeCount;

  /// @brief Field _stealCount, offset: 0x28, size: 0x4, def value: None
  int32_t ____stealCount;

  /// @brief Field _currentOp, offset: 0x2c, size: 0x4, def value: None
  int32_t ____currentOp;

  /// @brief Field _frozen, offset: 0x30, size: 0x1, def value: None
  bool ____frozen;

  /// @brief Field _nextQueue, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* ____nextQueue;

  /// @brief Field _ownerThreadId, offset: 0x40, size: 0x4, def value: None
  int32_t ____ownerThreadId;

  /// @brief Field InitialSize offset 0xffffffff size 0x4
  static constexpr int32_t InitialSize{ static_cast<int32_t>(0x20) };

  /// @brief Field StartIndex offset 0xffffffff size 0x4
  static constexpr int32_t StartIndex{ static_cast<int32_t>(0x0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
// Type: ::Enumerator
// SizeInfo { instance_size: 40, native_size: 36, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Concurrent {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::ConcurrentBag`1::Enumerator<T>*
class CORDL_TYPE __ConcurrentBag_1__Enumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) T Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field _array, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__array, put = __cordl_internal_set__array))::ArrayW<T, ::Array<T>*> _array;

  /// @brief Field _current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__current, put = __cordl_internal_set__current)) T _current;

  /// @brief Field _index, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>* New_ctor(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr ::ArrayW<T, ::Array<T>*> const& __cordl_internal_get__array() const;

  constexpr ::ArrayW<T, ::Array<T>*>& __cordl_internal_get__array();

  constexpr T const& __cordl_internal_get__current() const;

  constexpr T& __cordl_internal_get__current();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr void __cordl_internal_set__array(::ArrayW<T, ::Array<T>*> value);

  constexpr void __cordl_internal_set__current(T value);

  constexpr void __cordl_internal_set__index(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConcurrentBag_1__Enumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConcurrentBag_1__Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConcurrentBag_1__Enumerator(__ConcurrentBag_1__Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConcurrentBag_1__Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConcurrentBag_1__Enumerator(__ConcurrentBag_1__Enumerator const&) = delete;

  /// @brief Field _array, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ____array;

  /// @brief Field _current, offset: 0x18, size: 0x8, def value: None
  T ____current;

  /// @brief Field _index, offset: 0x20, size: 0x4, def value: None
  int32_t ____index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
// Type: System.Collections.Concurrent::ConcurrentBag`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Concurrent {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System.Collections.Concurrent::ConcurrentBag`1<T>*
class CORDL_TYPE ConcurrentBag_1 : public ::System::Object {
public:
  // Declarations
  using Enumerator = ::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>;

  using WorkStealingQueue = ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_DangerousCount)) int32_t DangerousCount;

  __declspec(property(get = get_GlobalQueuesLock))::System::Object* GlobalQueuesLock;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field _emptyToNonEmptyListTransitionCount, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__emptyToNonEmptyListTransitionCount, put = __cordl_internal_set__emptyToNonEmptyListTransitionCount)) int64_t _emptyToNonEmptyListTransitionCount;

  /// @brief Field _locals, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__locals,
                      put = __cordl_internal_set__locals))::System::Threading::ThreadLocal_1<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>* _locals;

  /// @brief Field _workStealingQueues, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__workStealingQueues,
                      put = __cordl_internal_set__workStealingQueues))::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* _workStealingQueues;

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

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(T item);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CopyFromEachQueueToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t CopyFromEachQueueToArray(::ArrayW<T, ::Array<T>*> array, int32_t index);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t index);

  /// @brief Method CreateWorkStealingQueueForCurrentThread, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* CreateWorkStealingQueueForCurrentThread();

  /// @brief Method FreezeBag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void FreezeBag(ByRef<bool> lockTaken);

  /// @brief Method GetCurrentThreadWorkStealingQueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* GetCurrentThreadWorkStealingQueue(bool forceCreate);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator();

  /// @brief Method GetUnownedWorkStealingQueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* GetUnownedWorkStealingQueue();

  static inline ::System::Collections::Concurrent::ConcurrentBag_1<T>* New_ctor();

  /// @brief Method System.Collections.Concurrent.IProducerConsumerCollection<T>.TryAdd, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd(T item);

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

  /// @brief Method TrySteal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TrySteal(ByRef<T> result, bool take);

  /// @brief Method TryStealFromTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryStealFromTo(::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* startInclusive,
                             ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* endExclusive, ByRef<T> result, bool take);

  /// @brief Method TryTake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool TryTake(ByRef<T> result);

  /// @brief Method UnfreezeBag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UnfreezeBag(bool lockTaken);

  constexpr int64_t const& __cordl_internal_get__emptyToNonEmptyListTransitionCount() const;

  constexpr int64_t& __cordl_internal_get__emptyToNonEmptyListTransitionCount();

  constexpr ::System::Threading::ThreadLocal_1<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>*& __cordl_internal_get__locals();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ThreadLocal_1<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>*> const&
  __cordl_internal_get__locals() const;

  constexpr ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*& __cordl_internal_get__workStealingQueues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*> const& __cordl_internal_get__workStealingQueues() const;

  constexpr void __cordl_internal_set__emptyToNonEmptyListTransitionCount(int64_t value);

  constexpr void __cordl_internal_set__locals(::System::Threading::ThreadLocal_1<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>* value);

  constexpr void __cordl_internal_set__workStealingQueues(::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_DangerousCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_DangerousCount();

  /// @brief Method get_GlobalQueuesLock, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Object* get_GlobalQueuesLock();

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
  constexpr ConcurrentBag_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentBag_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcurrentBag_1(ConcurrentBag_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentBag_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcurrentBag_1(ConcurrentBag_1 const&) = delete;

  /// @brief Field _locals, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::ThreadLocal_1<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>* ____locals;

  /// @brief Field _workStealingQueues, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* ____workStealingQueues;

  /// @brief Field _emptyToNonEmptyListTransitionCount, offset: 0x20, size: 0x8, def value: None
  int64_t ____emptyToNonEmptyListTransitionCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::ConcurrentBag_1, "System.Collections.Concurrent", "ConcurrentBag`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator, "System.Collections.Concurrent", "ConcurrentBag`1/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue, "System.Collections.Concurrent", "ConcurrentBag`1/WorkStealingQueue");
