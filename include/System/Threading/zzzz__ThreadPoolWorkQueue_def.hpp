#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__SpinLock_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadPoolWorkQueue)
namespace System::Threading {
class IThreadPoolWorkItem;
}
namespace System::Threading {
class ThreadPoolWorkQueueThreadLocals;
}
namespace System::Threading {
class __ThreadPoolWorkQueue__QueueSegment;
}
namespace System::Threading {
template <typename T> class __ThreadPoolWorkQueue__SparseArray_1;
}
namespace System::Threading {
class __ThreadPoolWorkQueue__WorkStealingQueue;
}
// Forward declare root types
namespace System::Threading {
class ThreadPoolWorkQueue;
}
namespace System::Threading {
class __ThreadPoolWorkQueue__QueueSegment;
}
namespace System::Threading {
template <typename T> class __ThreadPoolWorkQueue__SparseArray_1;
}
namespace System::Threading {
class __ThreadPoolWorkQueue__WorkStealingQueue;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ThreadPoolWorkQueue);
MARK_REF_PTR_T(::System::Threading::__ThreadPoolWorkQueue__QueueSegment);
MARK_GEN_REF_PTR_T(::System::Threading::__ThreadPoolWorkQueue__SparseArray_1);
MARK_REF_PTR_T(::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue);
// Type: ::SparseArray`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2731))
// CS Name: ::ThreadPoolWorkQueue::SparseArray`1<T>*
class CORDL_TYPE __ThreadPoolWorkQueue__SparseArray_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_array, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_array, put = __cordl_internal_set_m_array))::ArrayW<T, ::Array<T>*> m_array;

  __declspec(property(get = get_Current))::ArrayW<T, ::Array<T>*> Current;

  constexpr ::ArrayW<T, ::Array<T>*>& __cordl_internal_get_m_array();

  constexpr ::ArrayW<T, ::Array<T>*> const& __cordl_internal_get_m_array() const;

  constexpr void __cordl_internal_set_m_array(::ArrayW<T, ::Array<T>*> value);

  static inline ::System::Threading::__ThreadPoolWorkQueue__SparseArray_1<T>* New_ctor(int32_t initialSize);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialSize);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> get_Current();

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Add(T e);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Remove(T e);

  // Ctor Parameters [CppParam { name: "", ty: "__ThreadPoolWorkQueue__SparseArray_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ThreadPoolWorkQueue__SparseArray_1(__ThreadPoolWorkQueue__SparseArray_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ThreadPoolWorkQueue__SparseArray_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ThreadPoolWorkQueue__SparseArray_1(__ThreadPoolWorkQueue__SparseArray_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ThreadPoolWorkQueue__SparseArray_1();

public:
  /// @brief Field m_array, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ___m_array;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading
// Type: ::WorkStealingQueue
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2701))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2732))
// CS Name: ::ThreadPoolWorkQueue::WorkStealingQueue*
class CORDL_TYPE __ThreadPoolWorkQueue__WorkStealingQueue : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_array, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_array,
                      put = __cordl_internal_set_m_array))::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*> m_array;

  /// @brief Field m_mask, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_mask, put = __cordl_internal_set_m_mask)) int32_t m_mask;

  /// @brief Field m_headIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_headIndex, put = __cordl_internal_set_m_headIndex)) int32_t m_headIndex;

  /// @brief Field m_tailIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_tailIndex, put = __cordl_internal_set_m_tailIndex)) int32_t m_tailIndex;

  /// @brief Field m_foreignLock, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_foreignLock, put = __cordl_internal_set_m_foreignLock))::System::Threading::SpinLock m_foreignLock;

  constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*>& __cordl_internal_get_m_array();

  constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*> const& __cordl_internal_get_m_array() const;

  constexpr void __cordl_internal_set_m_array(::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*> value);

  constexpr int32_t& __cordl_internal_get_m_mask();

  constexpr int32_t const& __cordl_internal_get_m_mask() const;

  constexpr void __cordl_internal_set_m_mask(int32_t value);

  constexpr int32_t& __cordl_internal_get_m_headIndex();

  constexpr int32_t const& __cordl_internal_get_m_headIndex() const;

  constexpr void __cordl_internal_set_m_headIndex(int32_t value);

  constexpr int32_t& __cordl_internal_get_m_tailIndex();

  constexpr int32_t const& __cordl_internal_get_m_tailIndex() const;

  constexpr void __cordl_internal_set_m_tailIndex(int32_t value);

  constexpr ::System::Threading::SpinLock& __cordl_internal_get_m_foreignLock();

  constexpr ::System::Threading::SpinLock const& __cordl_internal_get_m_foreignLock() const;

  constexpr void __cordl_internal_set_m_foreignLock(::System::Threading::SpinLock value);

  /// @brief Method LocalPush, addr 0x263fb3c, size 0x434, virtual false, abstract: false, final false
  inline void LocalPush(::System::Threading::IThreadPoolWorkItem* obj);

  /// @brief Method LocalFindAndPop, addr 0x263ffe0, size 0x2bc, virtual false, abstract: false, final false
  inline bool LocalFindAndPop(::System::Threading::IThreadPoolWorkItem* obj);

  /// @brief Method LocalPop, addr 0x264046c, size 0x274, virtual false, abstract: false, final false
  inline bool LocalPop(ByRef<::System::Threading::IThreadPoolWorkItem*> obj);

  /// @brief Method TrySteal, addr 0x26406e0, size 0x8, virtual false, abstract: false, final false
  inline bool TrySteal(ByRef<::System::Threading::IThreadPoolWorkItem*> obj, ByRef<bool> missedSteal);

  /// @brief Method TrySteal, addr 0x2640bc8, size 0x244, virtual false, abstract: false, final false
  inline bool TrySteal(ByRef<::System::Threading::IThreadPoolWorkItem*> obj, ByRef<bool> missedSteal, int32_t millisecondsTimeout);

  static inline ::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue* New_ctor();

  /// @brief Method .ctor, addr 0x2640e0c, size 0x1080, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ThreadPoolWorkQueue__WorkStealingQueue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ThreadPoolWorkQueue__WorkStealingQueue(__ThreadPoolWorkQueue__WorkStealingQueue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ThreadPoolWorkQueue__WorkStealingQueue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ThreadPoolWorkQueue__WorkStealingQueue(__ThreadPoolWorkQueue__WorkStealingQueue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ThreadPoolWorkQueue__WorkStealingQueue();

public:
  /// @brief Field m_array, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*> ___m_array;

  /// @brief Field m_mask, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_mask;

  /// @brief Field m_headIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_headIndex;

  /// @brief Field m_tailIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_tailIndex;

  /// @brief Field m_foreignLock, offset: 0x24, size: 0x4, def value: None
  ::System::Threading::SpinLock ___m_foreignLock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue, ___m_array) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue, ___m_mask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue, ___m_headIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue, ___m_tailIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue, ___m_foreignLock) == 0x24, "Offset mismatch!");

} // namespace System::Threading
// Type: ::QueueSegment
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2733))
// CS Name: ::ThreadPoolWorkQueue::QueueSegment*
class CORDL_TYPE __ThreadPoolWorkQueue__QueueSegment : public ::System::Object {
public:
  // Declarations
  /// @brief Field nodes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nodes,
                      put = __cordl_internal_set_nodes))::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*> nodes;

  /// @brief Field indexes, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_indexes, put = __cordl_internal_set_indexes)) int32_t indexes;

  /// @brief Field Next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next))::System::Threading::__ThreadPoolWorkQueue__QueueSegment* Next;

  constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*>& __cordl_internal_get_nodes();

  constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*> const& __cordl_internal_get_nodes() const;

  constexpr void __cordl_internal_set_nodes(::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*> value);

  constexpr int32_t& __cordl_internal_get_indexes();

  constexpr int32_t const& __cordl_internal_get_indexes() const;

  constexpr void __cordl_internal_set_indexes(int32_t value);

  constexpr ::System::Threading::__ThreadPoolWorkQueue__QueueSegment*& __cordl_internal_get_Next();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadPoolWorkQueue__QueueSegment*> const& __cordl_internal_get_Next() const;

  constexpr void __cordl_internal_set_Next(::System::Threading::__ThreadPoolWorkQueue__QueueSegment* value);

  /// @brief Method GetIndexes, addr 0x2641e8c, size 0x34, virtual false, abstract: false, final false
  inline void GetIndexes(ByRef<int32_t> upper, ByRef<int32_t> lower);

  /// @brief Method CompareExchangeIndexes, addr 0x2641ec0, size 0x68, virtual false, abstract: false, final false
  inline bool CompareExchangeIndexes(ByRef<int32_t> prevUpper, int32_t newUpper, ByRef<int32_t> prevLower, int32_t newLower);

  static inline ::System::Threading::__ThreadPoolWorkQueue__QueueSegment* New_ctor();

  /// @brief Method .ctor, addr 0x2641f2c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method IsUsedUp, addr 0x2641f88, size 0x44, virtual false, abstract: false, final false
  inline bool IsUsedUp();

  /// @brief Method TryEnqueue, addr 0x2641fcc, size 0xac, virtual false, abstract: false, final false
  inline bool TryEnqueue(::System::Threading::IThreadPoolWorkItem* node);

  /// @brief Method TryDequeue, addr 0x2642078, size 0xec, virtual false, abstract: false, final false
  inline bool TryDequeue(ByRef<::System::Threading::IThreadPoolWorkItem*> node);

  // Ctor Parameters [CppParam { name: "", ty: "__ThreadPoolWorkQueue__QueueSegment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ThreadPoolWorkQueue__QueueSegment(__ThreadPoolWorkQueue__QueueSegment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ThreadPoolWorkQueue__QueueSegment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ThreadPoolWorkQueue__QueueSegment(__ThreadPoolWorkQueue__QueueSegment const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ThreadPoolWorkQueue__QueueSegment();

public:
  /// @brief Field nodes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*> ___nodes;

  /// @brief Field indexes, offset: 0x18, size: 0x4, def value: None
  int32_t ___indexes;

  /// @brief Field Next, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::__ThreadPoolWorkQueue__QueueSegment* ___Next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__ThreadPoolWorkQueue__QueueSegment, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Threading::__ThreadPoolWorkQueue__QueueSegment, ___nodes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::__ThreadPoolWorkQueue__QueueSegment, ___indexes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::__ThreadPoolWorkQueue__QueueSegment, ___Next) == 0x20, "Offset mismatch!");

} // namespace System::Threading
// Type: System.Threading::ThreadPoolWorkQueue
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2734))
// CS Name: ::System.Threading::ThreadPoolWorkQueue*
class CORDL_TYPE ThreadPoolWorkQueue : public ::System::Object {
public:
  // Declarations
  using QueueSegment = ::System::Threading::__ThreadPoolWorkQueue__QueueSegment;

  using WorkStealingQueue = ::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue;

  template <typename T> using SparseArray_1 = ::System::Threading::__ThreadPoolWorkQueue__SparseArray_1<T>;

  /// @brief Field queueHead, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_queueHead, put = __cordl_internal_set_queueHead))::System::Threading::__ThreadPoolWorkQueue__QueueSegment* queueHead;

  /// @brief Field queueTail, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_queueTail, put = __cordl_internal_set_queueTail))::System::Threading::__ThreadPoolWorkQueue__QueueSegment* queueTail;

  /// @brief Field numOutstandingThreadRequests, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_numOutstandingThreadRequests, put = __cordl_internal_set_numOutstandingThreadRequests)) int32_t numOutstandingThreadRequests;

  /// @brief Field allThreadQueues, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_allThreadQueues,
               put = setStaticF_allThreadQueues))::System::Threading::__ThreadPoolWorkQueue__SparseArray_1<::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue*>* allThreadQueues;

  constexpr ::System::Threading::__ThreadPoolWorkQueue__QueueSegment*& __cordl_internal_get_queueHead();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadPoolWorkQueue__QueueSegment*> const& __cordl_internal_get_queueHead() const;

  constexpr void __cordl_internal_set_queueHead(::System::Threading::__ThreadPoolWorkQueue__QueueSegment* value);

  constexpr ::System::Threading::__ThreadPoolWorkQueue__QueueSegment*& __cordl_internal_get_queueTail();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadPoolWorkQueue__QueueSegment*> const& __cordl_internal_get_queueTail() const;

  constexpr void __cordl_internal_set_queueTail(::System::Threading::__ThreadPoolWorkQueue__QueueSegment* value);

  constexpr int32_t& __cordl_internal_get_numOutstandingThreadRequests();

  constexpr int32_t const& __cordl_internal_get_numOutstandingThreadRequests() const;

  constexpr void __cordl_internal_set_numOutstandingThreadRequests(int32_t value);

  static inline void setStaticF_allThreadQueues(::System::Threading::__ThreadPoolWorkQueue__SparseArray_1<::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue*>* value);

  static inline ::System::Threading::__ThreadPoolWorkQueue__SparseArray_1<::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue*>* getStaticF_allThreadQueues();

  static inline ::System::Threading::ThreadPoolWorkQueue* New_ctor();

  /// @brief Method .ctor, addr 0x263f80c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method EnsureCurrentThreadHasQueue, addr 0x263f884, size 0x90, virtual false, abstract: false, final false
  inline ::System::Threading::ThreadPoolWorkQueueThreadLocals* EnsureCurrentThreadHasQueue();

  /// @brief Method EnsureThreadRequested, addr 0x263f914, size 0xa0, virtual false, abstract: false, final false
  inline void EnsureThreadRequested();

  /// @brief Method MarkThreadRequestSatisfied, addr 0x263f9b4, size 0x4c, virtual false, abstract: false, final false
  inline void MarkThreadRequestSatisfied();

  /// @brief Method Enqueue, addr 0x263fa00, size 0x13c, virtual false, abstract: false, final false
  inline void Enqueue(::System::Threading::IThreadPoolWorkItem* callback, bool forceGlobal);

  /// @brief Method LocalFindAndPop, addr 0x263ff70, size 0x70, virtual false, abstract: false, final false
  inline bool LocalFindAndPop(::System::Threading::IThreadPoolWorkItem* callback);

  /// @brief Method Dequeue, addr 0x264029c, size 0x1d0, virtual false, abstract: false, final false
  inline void Dequeue(::System::Threading::ThreadPoolWorkQueueThreadLocals* tl, ByRef<::System::Threading::IThreadPoolWorkItem*> callback, ByRef<bool> missedSteal);

  /// @brief Method Dispatch, addr 0x26406e8, size 0x450, virtual false, abstract: false, final false
  static inline bool Dispatch();

  // Ctor Parameters [CppParam { name: "", ty: "ThreadPoolWorkQueue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadPoolWorkQueue(ThreadPoolWorkQueue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadPoolWorkQueue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadPoolWorkQueue(ThreadPoolWorkQueue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadPoolWorkQueue();

public:
  /// @brief Field queueHead, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::__ThreadPoolWorkQueue__QueueSegment* ___queueHead;

  /// @brief Field queueTail, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::__ThreadPoolWorkQueue__QueueSegment* ___queueTail;

  /// @brief Field numOutstandingThreadRequests, offset: 0x20, size: 0x4, def value: None
  int32_t ___numOutstandingThreadRequests;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ThreadPoolWorkQueue, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Threading::ThreadPoolWorkQueue, ___queueHead) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ThreadPoolWorkQueue, ___queueTail) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ThreadPoolWorkQueue, ___numOutstandingThreadRequests) == 0x20, "Offset mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ThreadPoolWorkQueue);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadPoolWorkQueue*, "System.Threading", "ThreadPoolWorkQueue");
NEED_NO_BOX(::System::Threading::__ThreadPoolWorkQueue__QueueSegment);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__ThreadPoolWorkQueue__QueueSegment*, "System.Threading", "ThreadPoolWorkQueue/QueueSegment");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::__ThreadPoolWorkQueue__SparseArray_1, "System.Threading", "ThreadPoolWorkQueue/SparseArray`1");
NEED_NO_BOX(::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue*, "System.Threading", "ThreadPoolWorkQueue/WorkStealingQueue");
