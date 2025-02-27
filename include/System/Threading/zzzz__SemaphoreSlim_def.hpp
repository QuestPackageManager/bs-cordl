#pragma once
// IWYU pragma private; include "System/Threading/SemaphoreSlim.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SemaphoreSlim)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class SemaphoreSlim_TaskNode;
}
namespace System::Threading {
struct SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32;
}
namespace System::Threading {
class ThreadAbortException;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Threading {
class SemaphoreSlim_TaskNode;
}
namespace System::Threading {
struct SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::SemaphoreSlim);
MARK_REF_PTR_T(::System::Threading::SemaphoreSlim_TaskNode);
MARK_VAL_T(::System::Threading::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32);
// Dependencies System.Threading.IThreadPoolWorkItem, System.Threading.Tasks.Task`1<TResult>
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.SemaphoreSlim/TaskNode
class CORDL_TYPE SemaphoreSlim_TaskNode : public ::System::Threading::Tasks::Task_1<bool> {
public:
  // Declarations
  /// @brief Field Next, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next)) ::System::Threading::SemaphoreSlim_TaskNode* Next;

  /// @brief Field Prev, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_Prev, put = __cordl_internal_set_Prev)) ::System::Threading::SemaphoreSlim_TaskNode* Prev;

  /// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
  constexpr operator ::System::Threading::IThreadPoolWorkItem*() noexcept;

  static inline ::System::Threading::SemaphoreSlim_TaskNode* New_ctor();

  /// @brief Method System.Threading.IThreadPoolWorkItem.ExecuteWorkItem, addr 0x3e60660, size 0x4c, virtual true, abstract: false, final true
  inline void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();

  /// @brief Method System.Threading.IThreadPoolWorkItem.MarkAborted, addr 0x3e606ac, size 0x4, virtual true, abstract: false, final true
  inline void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae);

  constexpr ::System::Threading::SemaphoreSlim_TaskNode* const& __cordl_internal_get_Next() const;

  constexpr ::System::Threading::SemaphoreSlim_TaskNode*& __cordl_internal_get_Next();

  constexpr ::System::Threading::SemaphoreSlim_TaskNode* const& __cordl_internal_get_Prev() const;

  constexpr ::System::Threading::SemaphoreSlim_TaskNode*& __cordl_internal_get_Prev();

  constexpr void __cordl_internal_set_Next(::System::Threading::SemaphoreSlim_TaskNode* value);

  constexpr void __cordl_internal_set_Prev(::System::Threading::SemaphoreSlim_TaskNode* value);

  /// @brief Method .ctor, addr 0x3e5ff50, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Threading::IThreadPoolWorkItem"
  constexpr ::System::Threading::IThreadPoolWorkItem* i___System__Threading__IThreadPoolWorkItem() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SemaphoreSlim_TaskNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SemaphoreSlim_TaskNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SemaphoreSlim_TaskNode(SemaphoreSlim_TaskNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SemaphoreSlim_TaskNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SemaphoreSlim_TaskNode(SemaphoreSlim_TaskNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2700 };

  /// @brief Field Prev, offset: 0x58, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim_TaskNode* ___Prev;

  /// @brief Field Next, offset: 0x60, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim_TaskNode* ___Next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::SemaphoreSlim_TaskNode, ___Prev) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim_TaskNode, ___Next) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::SemaphoreSlim_TaskNode, 0x68>, "Size mismatch!");

} // namespace System::Threading
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::Threading {
// Is value type: true
// CS Name: System.Threading.SemaphoreSlim/<WaitUntilCountOrTimeoutAsync>d__32
struct CORDL_TYPE SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e606b0, size 0x804, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e60eb4, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "asyncWaiter", ty: "::System::Threading::SemaphoreSlim_TaskNode*", modifiers: "", def_value: None }, CppParam { name: "millisecondsTimeout", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Threading::SemaphoreSlim*", modifiers: "", def_value: None }, CppParam { name: "_cts_5__2", ty:
  // "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }, CppParam { name:
  // "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                              ::System::Threading::CancellationToken cancellationToken, ::System::Threading::SemaphoreSlim_TaskNode* asyncWaiter,
                                                              int32_t millisecondsTimeout, ::System::Threading::SemaphoreSlim* __4__this, ::System::Threading::CancellationTokenSource* _cts_5__2,
                                                              ::System::Object* __7__wrap2,
                                                              ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1,
                                                              ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2701 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field asyncWaiter, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim_TaskNode* asyncWaiter;

  /// @brief Field millisecondsTimeout, offset: 0x30, size: 0x4, def value: None
  int32_t millisecondsTimeout;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* __4__this;

  /// @brief Field <cts>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* _cts_5__2;

  /// @brief Field <>7__wrap2, offset: 0x48, size: 0x8, def value: None
  ::System::Object* __7__wrap2;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1;

  /// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, asyncWaiter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, millisecondsTimeout) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, _cts_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, __7__wrap2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, __u__2) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, 0x70>, "Size mismatch!");

} // namespace System::Threading
// Dependencies System.IDisposable, System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.SemaphoreSlim
class CORDL_TYPE SemaphoreSlim : public ::System::Object {
public:
  // Declarations
  using TaskNode = ::System::Threading::SemaphoreSlim_TaskNode;

  using _WaitUntilCountOrTimeoutAsync_d__32 = ::System::Threading::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32;

  __declspec(property(get = get_CurrentCount)) int32_t CurrentCount;

  /// @brief Field m_asyncHead, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_asyncHead, put = __cordl_internal_set_m_asyncHead)) ::System::Threading::SemaphoreSlim_TaskNode* m_asyncHead;

  /// @brief Field m_asyncTail, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_asyncTail, put = __cordl_internal_set_m_asyncTail)) ::System::Threading::SemaphoreSlim_TaskNode* m_asyncTail;

  /// @brief Field m_currentCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_currentCount, put = __cordl_internal_set_m_currentCount)) int32_t m_currentCount;

  /// @brief Field m_lockObj, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_lockObj, put = __cordl_internal_set_m_lockObj)) ::System::Object* m_lockObj;

  /// @brief Field m_maxCount, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxCount, put = __cordl_internal_set_m_maxCount)) int32_t m_maxCount;

  /// @brief Field m_waitCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_waitCount, put = __cordl_internal_set_m_waitCount)) int32_t m_waitCount;

  /// @brief Field m_waitHandle, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_waitHandle, put = __cordl_internal_set_m_waitHandle)) ::System::Threading::ManualResetEvent* m_waitHandle;

  /// @brief Field s_cancellationTokenCanceledEventHandler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_cancellationTokenCanceledEventHandler,
                      put = setStaticF_s_cancellationTokenCanceledEventHandler)) ::System::Action_1<::System::Object*>* s_cancellationTokenCanceledEventHandler;

  /// @brief Field s_falseTask, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_falseTask, put = setStaticF_s_falseTask)) ::System::Threading::Tasks::Task_1<bool>* s_falseTask;

  /// @brief Field s_trueTask, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_trueTask, put = setStaticF_s_trueTask)) ::System::Threading::Tasks::Task_1<bool>* s_trueTask;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CancellationTokenCanceledEventHandler, addr 0x3e6042c, size 0x110, virtual false, abstract: false, final false
  static inline void CancellationTokenCanceledEventHandler(::System::Object* obj);

  /// @brief Method CheckDispose, addr 0x3e5f8d4, size 0x7c, virtual false, abstract: false, final false
  inline void CheckDispose();

  /// @brief Method CreateAndAddAsyncWaiter, addr 0x3e5fdb4, size 0x84, virtual false, abstract: false, final false
  inline ::System::Threading::SemaphoreSlim_TaskNode* CreateAndAddAsyncWaiter();

  /// @brief Method Dispose, addr 0x3e60364, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x3e603d0, size 0x5c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetResourceString, addr 0x3e5f398, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW GetResourceString(::StringW str);

  static inline ::System::Threading::SemaphoreSlim* New_ctor(int32_t initialCount);

  static inline ::System::Threading::SemaphoreSlim* New_ctor(int32_t initialCount, int32_t maxCount);

  /// @brief Method QueueWaiterTask, addr 0x3e60358, size 0xc, virtual false, abstract: false, final false
  static inline void QueueWaiterTask(::System::Threading::SemaphoreSlim_TaskNode* waiterTask);

  /// @brief Method Release, addr 0x3e60018, size 0x8, virtual false, abstract: false, final false
  inline int32_t Release();

  /// @brief Method Release, addr 0x3e60020, size 0x2e4, virtual false, abstract: false, final false
  inline int32_t Release(int32_t releaseCount);

  /// @brief Method RemoveAsyncWaiter, addr 0x3e5ff98, size 0x80, virtual false, abstract: false, final false
  inline bool RemoveAsyncWaiter(::System::Threading::SemaphoreSlim_TaskNode* task);

  /// @brief Method Wait, addr 0x3e5f8cc, size 0x8, virtual false, abstract: false, final false
  inline bool Wait(int32_t millisecondsTimeout);

  /// @brief Method Wait, addr 0x3e5f3ac, size 0x520, virtual false, abstract: false, final false
  inline bool Wait(int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Wait, addr 0x3e5f3a0, size 0xc, virtual false, abstract: false, final false
  inline void Wait();

  /// @brief Method WaitAsync, addr 0x3e5fd9c, size 0xc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WaitAsync();

  /// @brief Method WaitAsync, addr 0x3e5fda8, size 0xc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WaitAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WaitAsync, addr 0x3e5f950, size 0x324, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* WaitAsync(int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WaitUntilCountOrTimeout, addr 0x3e5fc74, size 0xcc, virtual false, abstract: false, final false
  inline bool WaitUntilCountOrTimeout(int32_t millisecondsTimeout, uint32_t startTime, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WaitUntilCountOrTimeoutAsync, addr 0x3e5fe38, size 0x118, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* WaitUntilCountOrTimeoutAsync(::System::Threading::SemaphoreSlim_TaskNode* asyncWaiter, int32_t millisecondsTimeout,
                                                                                ::System::Threading::CancellationToken cancellationToken);

  constexpr ::System::Threading::SemaphoreSlim_TaskNode* const& __cordl_internal_get_m_asyncHead() const;

  constexpr ::System::Threading::SemaphoreSlim_TaskNode*& __cordl_internal_get_m_asyncHead();

  constexpr ::System::Threading::SemaphoreSlim_TaskNode* const& __cordl_internal_get_m_asyncTail() const;

  constexpr ::System::Threading::SemaphoreSlim_TaskNode*& __cordl_internal_get_m_asyncTail();

  constexpr int32_t const& __cordl_internal_get_m_currentCount() const;

  constexpr int32_t& __cordl_internal_get_m_currentCount();

  constexpr ::System::Object* const& __cordl_internal_get_m_lockObj() const;

  constexpr ::System::Object*& __cordl_internal_get_m_lockObj();

  constexpr int32_t const& __cordl_internal_get_m_maxCount() const;

  constexpr int32_t& __cordl_internal_get_m_maxCount();

  constexpr int32_t const& __cordl_internal_get_m_waitCount() const;

  constexpr int32_t& __cordl_internal_get_m_waitCount();

  constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get_m_waitHandle() const;

  constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get_m_waitHandle();

  constexpr void __cordl_internal_set_m_asyncHead(::System::Threading::SemaphoreSlim_TaskNode* value);

  constexpr void __cordl_internal_set_m_asyncTail(::System::Threading::SemaphoreSlim_TaskNode* value);

  constexpr void __cordl_internal_set_m_currentCount(int32_t value);

  constexpr void __cordl_internal_set_m_lockObj(::System::Object* value);

  constexpr void __cordl_internal_set_m_maxCount(int32_t value);

  constexpr void __cordl_internal_set_m_waitCount(int32_t value);

  constexpr void __cordl_internal_set_m_waitHandle(::System::Threading::ManualResetEvent* value);

  /// @brief Method .ctor, addr 0x3e5f20c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialCount);

  /// @brief Method .ctor, addr 0x3e5f214, size 0x184, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialCount, int32_t maxCount);

  static inline ::System::Action_1<::System::Object*>* getStaticF_s_cancellationTokenCanceledEventHandler();

  static inline ::System::Threading::Tasks::Task_1<bool>* getStaticF_s_falseTask();

  static inline ::System::Threading::Tasks::Task_1<bool>* getStaticF_s_trueTask();

  /// @brief Method get_CurrentCount, addr 0x3e5f1f4, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_CurrentCount();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_s_cancellationTokenCanceledEventHandler(::System::Action_1<::System::Object*>* value);

  static inline void setStaticF_s_falseTask(::System::Threading::Tasks::Task_1<bool>* value);

  static inline void setStaticF_s_trueTask(::System::Threading::Tasks::Task_1<bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SemaphoreSlim();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SemaphoreSlim", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SemaphoreSlim(SemaphoreSlim&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SemaphoreSlim", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SemaphoreSlim(SemaphoreSlim const&) = delete;

  /// @brief Field NO_MAXIMUM offset 0xffffffff size 0x4
  static constexpr int32_t NO_MAXIMUM{ static_cast<int32_t>(0x7fffffff) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2702 };

  /// @brief Field m_currentCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_currentCount;

  /// @brief Field m_maxCount, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_maxCount;

  /// @brief Field m_waitCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_waitCount;

  /// @brief Field m_lockObj, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___m_lockObj;

  /// @brief Field m_waitHandle, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::ManualResetEvent* ___m_waitHandle;

  /// @brief Field m_asyncHead, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim_TaskNode* ___m_asyncHead;

  /// @brief Field m_asyncTail, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim_TaskNode* ___m_asyncTail;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_currentCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_maxCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_waitCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_lockObj) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_waitHandle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_asyncHead) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_asyncTail) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::SemaphoreSlim, 0x40>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::SemaphoreSlim);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SemaphoreSlim*, "System.Threading", "SemaphoreSlim");
NEED_NO_BOX(::System::Threading::SemaphoreSlim_TaskNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SemaphoreSlim_TaskNode*, "System.Threading", "SemaphoreSlim/TaskNode");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, "System.Threading", "SemaphoreSlim/<WaitUntilCountOrTimeoutAsync>d__32");
