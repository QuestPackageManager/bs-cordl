#pragma once
// IWYU pragma private; include "System/Threading/ThreadPoolWorkQueue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__SpinLock_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadPoolWorkQueue)
namespace System::Threading {
class IThreadPoolWorkItem;
}
namespace System::Threading {
class ThreadPoolWorkQueueThreadLocals;
}
namespace System::Threading {
class ThreadPoolWorkQueue_QueueSegment;
}
namespace System::Threading {
template <typename T> class ThreadPoolWorkQueue_SparseArray_1;
}
namespace System::Threading {
class ThreadPoolWorkQueue_WorkStealingQueue;
}
// Forward declare root types
namespace System::Threading {
class ThreadPoolWorkQueue;
}
namespace System::Threading {
class ThreadPoolWorkQueue_QueueSegment;
}
namespace System::Threading {
template <typename T> class ThreadPoolWorkQueue_SparseArray_1;
}
namespace System::Threading {
class ThreadPoolWorkQueue_WorkStealingQueue;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ThreadPoolWorkQueue);
MARK_REF_PTR_T(::System::Threading::ThreadPoolWorkQueue_QueueSegment);
MARK_GEN_REF_PTR_T(::System::Threading::ThreadPoolWorkQueue_SparseArray_1);
MARK_REF_PTR_T(::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue);
// Dependencies System.Object
namespace System::Threading {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Threading.ThreadPoolWorkQueue/SparseArray`1<T>
class CORDL_TYPE ThreadPoolWorkQueue_SparseArray_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::ArrayW<T, ::Array<T>*> Current;

  /// @brief Field m_array, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_array, put = __cordl_internal_set_m_array)) ::ArrayW<T, ::Array<T>*> m_array;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Add(T e);

  static inline ::System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>* New_ctor(int32_t initialSize);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Remove(T e);

  constexpr ::ArrayW<T, ::Array<T>*> const& __cordl_internal_get_m_array() const;

  constexpr ::ArrayW<T, ::Array<T>*>& __cordl_internal_get_m_array();

  constexpr void __cordl_internal_set_m_array(::ArrayW<T, ::Array<T>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialSize);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> get_Current();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadPoolWorkQueue_SparseArray_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadPoolWorkQueue_SparseArray_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadPoolWorkQueue_SparseArray_1(ThreadPoolWorkQueue_SparseArray_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadPoolWorkQueue_SparseArray_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadPoolWorkQueue_SparseArray_1(ThreadPoolWorkQueue_SparseArray_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2734 };

  /// @brief Field m_array, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ___m_array;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading
// Dependencies System.Object, System.Threading.SpinLock
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.ThreadPoolWorkQueue/WorkStealingQueue
class CORDL_TYPE ThreadPoolWorkQueue_WorkStealingQueue : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_array, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_array, put = __cordl_internal_set_m_array)) ::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*>
      m_array;

  /// @brief Field m_foreignLock, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_foreignLock, put = __cordl_internal_set_m_foreignLock)) ::System::Threading::SpinLock m_foreignLock;

  /// @brief Field m_headIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_headIndex, put = __cordl_internal_set_m_headIndex)) int32_t m_headIndex;

  /// @brief Field m_mask, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_mask, put = __cordl_internal_set_m_mask)) int32_t m_mask;

  /// @brief Field m_tailIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_tailIndex, put = __cordl_internal_set_m_tailIndex)) int32_t m_tailIndex;

  /// @brief Method LocalFindAndPop, addr 0x3e5919c, size 0x32c, virtual false, abstract: false, final false
  inline bool LocalFindAndPop(::System::Threading::IThreadPoolWorkItem* obj);

  /// @brief Method LocalPop, addr 0x3e59690, size 0x2d8, virtual false, abstract: false, final false
  inline bool LocalPop(::ByRef<::System::Threading::IThreadPoolWorkItem*> obj);

  /// @brief Method LocalPush, addr 0x3e58bac, size 0x4c8, virtual false, abstract: false, final false
  inline void LocalPush(::System::Threading::IThreadPoolWorkItem* obj);

  static inline ::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue* New_ctor();

  /// @brief Method TrySteal, addr 0x3e59ae8, size 0x8, virtual false, abstract: false, final false
  inline bool TrySteal(::ByRef<::System::Threading::IThreadPoolWorkItem*> obj, ::ByRef<bool> missedSteal);

  /// @brief Method TrySteal, addr 0x3e59fe0, size 0x2a8, virtual false, abstract: false, final false
  inline bool TrySteal(::ByRef<::System::Threading::IThreadPoolWorkItem*> obj, ::ByRef<bool> missedSteal, int32_t millisecondsTimeout);

  constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*> const& __cordl_internal_get_m_array() const;

  constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*>& __cordl_internal_get_m_array();

  constexpr ::System::Threading::SpinLock const& __cordl_internal_get_m_foreignLock() const;

  constexpr ::System::Threading::SpinLock& __cordl_internal_get_m_foreignLock();

  constexpr int32_t const& __cordl_internal_get_m_headIndex() const;

  constexpr int32_t& __cordl_internal_get_m_headIndex();

  constexpr int32_t const& __cordl_internal_get_m_mask() const;

  constexpr int32_t& __cordl_internal_get_m_mask();

  constexpr int32_t const& __cordl_internal_get_m_tailIndex() const;

  constexpr int32_t& __cordl_internal_get_m_tailIndex();

  constexpr void __cordl_internal_set_m_array(::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*> value);

  constexpr void __cordl_internal_set_m_foreignLock(::System::Threading::SpinLock value);

  constexpr void __cordl_internal_set_m_headIndex(int32_t value);

  constexpr void __cordl_internal_set_m_mask(int32_t value);

  constexpr void __cordl_internal_set_m_tailIndex(int32_t value);

  /// @brief Method .ctor, addr 0x3e5a288, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadPoolWorkQueue_WorkStealingQueue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadPoolWorkQueue_WorkStealingQueue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadPoolWorkQueue_WorkStealingQueue(ThreadPoolWorkQueue_WorkStealingQueue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadPoolWorkQueue_WorkStealingQueue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadPoolWorkQueue_WorkStealingQueue(ThreadPoolWorkQueue_WorkStealingQueue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2735 };

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
static_assert(offsetof(::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue, ___m_array) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue, ___m_mask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue, ___m_headIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue, ___m_tailIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue, ___m_foreignLock) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue, 0x28>, "Size mismatch!");

} // namespace System::Threading
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.ThreadPoolWorkQueue/QueueSegment
class CORDL_TYPE ThreadPoolWorkQueue_QueueSegment : public ::System::Object {
public:
  // Declarations
  /// @brief Field Next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next)) ::System::Threading::ThreadPoolWorkQueue_QueueSegment* Next;

  /// @brief Field indexes, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_indexes, put = __cordl_internal_set_indexes)) int32_t indexes;

  /// @brief Field nodes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nodes, put = __cordl_internal_set_nodes)) ::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*>
      nodes;

  /// @brief Method CompareExchangeIndexes, addr 0x3e5a350, size 0x68, virtual false, abstract: false, final false
  inline bool CompareExchangeIndexes(::ByRef<int32_t> prevUpper, int32_t newUpper, ::ByRef<int32_t> prevLower, int32_t newLower);

  /// @brief Method GetIndexes, addr 0x3e5a31c, size 0x34, virtual false, abstract: false, final false
  inline void GetIndexes(::ByRef<int32_t> upper, ::ByRef<int32_t> lower);

  /// @brief Method IsUsedUp, addr 0x3e59aa4, size 0x44, virtual false, abstract: false, final false
  inline bool IsUsedUp();

  static inline ::System::Threading::ThreadPoolWorkQueue_QueueSegment* New_ctor();

  /// @brief Method TryDequeue, addr 0x3e59968, size 0x13c, virtual false, abstract: false, final false
  inline bool TryDequeue(::ByRef<::System::Threading::IThreadPoolWorkItem*> node);

  /// @brief Method TryEnqueue, addr 0x3e59074, size 0xb4, virtual false, abstract: false, final false
  inline bool TryEnqueue(::System::Threading::IThreadPoolWorkItem* node);

  constexpr ::System::Threading::ThreadPoolWorkQueue_QueueSegment* const& __cordl_internal_get_Next() const;

  constexpr ::System::Threading::ThreadPoolWorkQueue_QueueSegment*& __cordl_internal_get_Next();

  constexpr int32_t const& __cordl_internal_get_indexes() const;

  constexpr int32_t& __cordl_internal_get_indexes();

  constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*> const& __cordl_internal_get_nodes() const;

  constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*>& __cordl_internal_get_nodes();

  constexpr void __cordl_internal_set_Next(::System::Threading::ThreadPoolWorkQueue_QueueSegment* value);

  constexpr void __cordl_internal_set_indexes(int32_t value);

  constexpr void __cordl_internal_set_nodes(::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*> value);

  /// @brief Method .ctor, addr 0x3e5879c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadPoolWorkQueue_QueueSegment();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadPoolWorkQueue_QueueSegment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadPoolWorkQueue_QueueSegment(ThreadPoolWorkQueue_QueueSegment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadPoolWorkQueue_QueueSegment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadPoolWorkQueue_QueueSegment(ThreadPoolWorkQueue_QueueSegment const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2736 };

  /// @brief Field nodes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*> ___nodes;

  /// @brief Field indexes, offset: 0x18, size: 0x4, def value: None
  int32_t ___indexes;

  /// @brief Field Next, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::ThreadPoolWorkQueue_QueueSegment* ___Next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::ThreadPoolWorkQueue_QueueSegment, ___nodes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ThreadPoolWorkQueue_QueueSegment, ___indexes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ThreadPoolWorkQueue_QueueSegment, ___Next) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::ThreadPoolWorkQueue_QueueSegment, 0x28>, "Size mismatch!");

} // namespace System::Threading
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.ThreadPoolWorkQueue
class CORDL_TYPE ThreadPoolWorkQueue : public ::System::Object {
public:
  // Declarations
  using QueueSegment = ::System::Threading::ThreadPoolWorkQueue_QueueSegment;

  template <typename T> using SparseArray_1 = ::System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>;

  using WorkStealingQueue = ::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue;

  /// @brief Field allThreadQueues, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_allThreadQueues,
                      put = setStaticF_allThreadQueues)) ::System::Threading::ThreadPoolWorkQueue_SparseArray_1<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>* allThreadQueues;

  /// @brief Field numOutstandingThreadRequests, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_numOutstandingThreadRequests, put = __cordl_internal_set_numOutstandingThreadRequests)) int32_t numOutstandingThreadRequests;

  /// @brief Field queueHead, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_queueHead, put = __cordl_internal_set_queueHead)) ::System::Threading::ThreadPoolWorkQueue_QueueSegment* queueHead;

  /// @brief Field queueTail, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_queueTail, put = __cordl_internal_set_queueTail)) ::System::Threading::ThreadPoolWorkQueue_QueueSegment* queueTail;

  /// @brief Method Dequeue, addr 0x3e594c8, size 0x1c8, virtual false, abstract: false, final false
  inline void Dequeue(::System::Threading::ThreadPoolWorkQueueThreadLocals* tl, ::ByRef<::System::Threading::IThreadPoolWorkItem*> callback, ::ByRef<bool> missedSteal);

  /// @brief Method Dispatch, addr 0x3e59af0, size 0x458, virtual false, abstract: false, final false
  static inline bool Dispatch();

  /// @brief Method Enqueue, addr 0x3e58a7c, size 0x130, virtual false, abstract: false, final false
  inline void Enqueue(::System::Threading::IThreadPoolWorkItem* callback, bool forceGlobal);

  /// @brief Method EnsureCurrentThreadHasQueue, addr 0x3e587f8, size 0x84, virtual false, abstract: false, final false
  inline ::System::Threading::ThreadPoolWorkQueueThreadLocals* EnsureCurrentThreadHasQueue();

  /// @brief Method EnsureThreadRequested, addr 0x3e58994, size 0x98, virtual false, abstract: false, final false
  inline void EnsureThreadRequested();

  /// @brief Method LocalFindAndPop, addr 0x3e5912c, size 0x70, virtual false, abstract: false, final false
  inline bool LocalFindAndPop(::System::Threading::IThreadPoolWorkItem* callback);

  /// @brief Method MarkThreadRequestSatisfied, addr 0x3e58a34, size 0x48, virtual false, abstract: false, final false
  inline void MarkThreadRequestSatisfied();

  static inline ::System::Threading::ThreadPoolWorkQueue* New_ctor();

  constexpr int32_t const& __cordl_internal_get_numOutstandingThreadRequests() const;

  constexpr int32_t& __cordl_internal_get_numOutstandingThreadRequests();

  constexpr ::System::Threading::ThreadPoolWorkQueue_QueueSegment* const& __cordl_internal_get_queueHead() const;

  constexpr ::System::Threading::ThreadPoolWorkQueue_QueueSegment*& __cordl_internal_get_queueHead();

  constexpr ::System::Threading::ThreadPoolWorkQueue_QueueSegment* const& __cordl_internal_get_queueTail() const;

  constexpr ::System::Threading::ThreadPoolWorkQueue_QueueSegment*& __cordl_internal_get_queueTail();

  constexpr void __cordl_internal_set_numOutstandingThreadRequests(int32_t value);

  constexpr void __cordl_internal_set_queueHead(::System::Threading::ThreadPoolWorkQueue_QueueSegment* value);

  constexpr void __cordl_internal_set_queueTail(::System::Threading::ThreadPoolWorkQueue_QueueSegment* value);

  /// @brief Method .ctor, addr 0x3e58730, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::ThreadPoolWorkQueue_SparseArray_1<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>* getStaticF_allThreadQueues();

  static inline void setStaticF_allThreadQueues(::System::Threading::ThreadPoolWorkQueue_SparseArray_1<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadPoolWorkQueue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadPoolWorkQueue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadPoolWorkQueue(ThreadPoolWorkQueue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadPoolWorkQueue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadPoolWorkQueue(ThreadPoolWorkQueue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2737 };

  /// @brief Field queueHead, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::ThreadPoolWorkQueue_QueueSegment* ___queueHead;

  /// @brief Field queueTail, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::ThreadPoolWorkQueue_QueueSegment* ___queueTail;

  /// @brief Field numOutstandingThreadRequests, offset: 0x20, size: 0x4, def value: None
  int32_t ___numOutstandingThreadRequests;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::ThreadPoolWorkQueue, ___queueHead) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ThreadPoolWorkQueue, ___queueTail) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ThreadPoolWorkQueue, ___numOutstandingThreadRequests) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::ThreadPoolWorkQueue, 0x28>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ThreadPoolWorkQueue);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadPoolWorkQueue*, "System.Threading", "ThreadPoolWorkQueue");
NEED_NO_BOX(::System::Threading::ThreadPoolWorkQueue_QueueSegment);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadPoolWorkQueue_QueueSegment*, "System.Threading", "ThreadPoolWorkQueue/QueueSegment");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::ThreadPoolWorkQueue_SparseArray_1, "System.Threading", "ThreadPoolWorkQueue/SparseArray`1");
NEED_NO_BOX(::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*, "System.Threading", "ThreadPoolWorkQueue/WorkStealingQueue");
