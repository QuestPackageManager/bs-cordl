#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SemaphoreSlim)
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
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
class IThreadPoolWorkItem;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class ThreadAbortException;
}
namespace System::Threading {
class __SemaphoreSlim__TaskNode;
}
namespace System::Threading {
struct __SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Threading {
class __SemaphoreSlim__TaskNode;
}
namespace System::Threading {
struct __SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::SemaphoreSlim);
MARK_REF_PTR_T(::System::Threading::__SemaphoreSlim__TaskNode);
MARK_VAL_T(::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32);
// Type: ::TaskNode
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::SemaphoreSlim::TaskNode*
class CORDL_TYPE __SemaphoreSlim__TaskNode : public ::System::Threading::Tasks::Task_1<bool> {
public:
  // Declarations
  /// @brief Field Next, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next))::System::Threading::__SemaphoreSlim__TaskNode* Next;

  /// @brief Field Prev, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_Prev, put = __cordl_internal_set_Prev))::System::Threading::__SemaphoreSlim__TaskNode* Prev;

  /// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
  constexpr operator ::System::Threading::IThreadPoolWorkItem*() noexcept;

  static inline ::System::Threading::__SemaphoreSlim__TaskNode* New_ctor();

  /// @brief Method System.Threading.IThreadPoolWorkItem.ExecuteWorkItem, addr 0x299cdc0, size 0x4c, virtual true, abstract: false, final true
  inline void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();

  /// @brief Method System.Threading.IThreadPoolWorkItem.MarkAborted, addr 0x299ce0c, size 0x4, virtual true, abstract: false, final true
  inline void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae);

  constexpr ::System::Threading::__SemaphoreSlim__TaskNode*& __cordl_internal_get_Next();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::__SemaphoreSlim__TaskNode*> const& __cordl_internal_get_Next() const;

  constexpr ::System::Threading::__SemaphoreSlim__TaskNode*& __cordl_internal_get_Prev();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::__SemaphoreSlim__TaskNode*> const& __cordl_internal_get_Prev() const;

  constexpr void __cordl_internal_set_Next(::System::Threading::__SemaphoreSlim__TaskNode* value);

  constexpr void __cordl_internal_set_Prev(::System::Threading::__SemaphoreSlim__TaskNode* value);

  /// @brief Method .ctor, addr 0x299c6a0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Threading::IThreadPoolWorkItem"
  constexpr ::System::Threading::IThreadPoolWorkItem* i___System__Threading__IThreadPoolWorkItem() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SemaphoreSlim__TaskNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SemaphoreSlim__TaskNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SemaphoreSlim__TaskNode(__SemaphoreSlim__TaskNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SemaphoreSlim__TaskNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SemaphoreSlim__TaskNode(__SemaphoreSlim__TaskNode const&) = delete;

  /// @brief Field Prev, offset: 0x58, size: 0x8, def value: None
  ::System::Threading::__SemaphoreSlim__TaskNode* ___Prev;

  /// @brief Field Next, offset: 0x60, size: 0x8, def value: None
  ::System::Threading::__SemaphoreSlim__TaskNode* ___Next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__SemaphoreSlim__TaskNode, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Threading::__SemaphoreSlim__TaskNode, ___Prev) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Threading::__SemaphoreSlim__TaskNode, ___Next) == 0x60, "Offset mismatch!");

} // namespace System::Threading
// Type: ::<WaitUntilCountOrTimeoutAsync>d__32
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// CS Name: ::SemaphoreSlim::<WaitUntilCountOrTimeoutAsync>d__32
struct CORDL_TYPE __SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x299ce10, size 0x76c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x299d57c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "asyncWaiter", ty: "::System::Threading::__SemaphoreSlim__TaskNode*", modifiers: "", def_value: None }, CppParam { name: "millisecondsTimeout",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Threading::SemaphoreSlim*", modifiers: "", def_value: None }, CppParam { name: "_cts_5__2", ty:
  // "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }, CppParam { name:
  // "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr __SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                 ::System::Threading::CancellationToken cancellationToken, ::System::Threading::__SemaphoreSlim__TaskNode* asyncWaiter,
                                                                 int32_t millisecondsTimeout, ::System::Threading::SemaphoreSlim* __4__this, ::System::Threading::CancellationTokenSource* _cts_5__2,
                                                                 ::System::Object* __7__wrap2,
                                                                 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1,
                                                                 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field asyncWaiter, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::__SemaphoreSlim__TaskNode* asyncWaiter;

  /// @brief Field millisecondsTimeout, offset: 0x30, size: 0x4, def value: None
  int32_t millisecondsTimeout;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* __4__this;

  /// @brief Field <cts>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* _cts_5__2;

  /// @brief Field <>7__wrap2, offset: 0x48, size: 0x8, def value: None
  ::System::Object* __7__wrap2;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1;

  /// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32, 0x70>, "Size mismatch!");

static_assert(offsetof(::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32, asyncWaiter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32, millisecondsTimeout) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32, _cts_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32, __7__wrap2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32, __u__2) == 0x60, "Offset mismatch!");

} // namespace System::Threading
// Type: System.Threading::SemaphoreSlim
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::SemaphoreSlim*
class CORDL_TYPE SemaphoreSlim : public ::System::Object {
public:
  // Declarations
  using TaskNode = ::System::Threading::__SemaphoreSlim__TaskNode;

  using _WaitUntilCountOrTimeoutAsync_d__32 = ::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32;

  __declspec(property(get = get_CurrentCount)) int32_t CurrentCount;

  /// @brief Field m_asyncHead, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_asyncHead, put = __cordl_internal_set_m_asyncHead))::System::Threading::__SemaphoreSlim__TaskNode* m_asyncHead;

  /// @brief Field m_asyncTail, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_asyncTail, put = __cordl_internal_set_m_asyncTail))::System::Threading::__SemaphoreSlim__TaskNode* m_asyncTail;

  /// @brief Field m_currentCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_currentCount, put = __cordl_internal_set_m_currentCount)) int32_t m_currentCount;

  /// @brief Field m_lockObj, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_lockObj, put = __cordl_internal_set_m_lockObj))::System::Object* m_lockObj;

  /// @brief Field m_maxCount, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxCount, put = __cordl_internal_set_m_maxCount)) int32_t m_maxCount;

  /// @brief Field m_waitCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_waitCount, put = __cordl_internal_set_m_waitCount)) int32_t m_waitCount;

  /// @brief Field m_waitHandle, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_waitHandle, put = __cordl_internal_set_m_waitHandle))::System::Threading::ManualResetEvent* m_waitHandle;

  /// @brief Field s_cancellationTokenCanceledEventHandler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cancellationTokenCanceledEventHandler,
                             put = setStaticF_s_cancellationTokenCanceledEventHandler))::System::Action_1<::System::Object*>* s_cancellationTokenCanceledEventHandler;

  /// @brief Field s_falseTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_falseTask, put = setStaticF_s_falseTask))::System::Threading::Tasks::Task_1<bool>* s_falseTask;

  /// @brief Field s_trueTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_trueTask, put = setStaticF_s_trueTask))::System::Threading::Tasks::Task_1<bool>* s_trueTask;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CancellationTokenCanceledEventHandler, addr 0x299cb80, size 0x114, virtual false, abstract: false, final false
  static inline void CancellationTokenCanceledEventHandler(::System::Object* obj);

  /// @brief Method CheckDispose, addr 0x299c084, size 0x84, virtual false, abstract: false, final false
  inline void CheckDispose();

  /// @brief Method CreateAndAddAsyncWaiter, addr 0x299c4f8, size 0x84, virtual false, abstract: false, final false
  inline ::System::Threading::__SemaphoreSlim__TaskNode* CreateAndAddAsyncWaiter();

  /// @brief Method Dispose, addr 0x299cab8, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x299cb24, size 0x5c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetResourceString, addr 0x299bb90, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW GetResourceString(::StringW str);

  static inline ::System::Threading::SemaphoreSlim* New_ctor(int32_t initialCount);

  static inline ::System::Threading::SemaphoreSlim* New_ctor(int32_t initialCount, int32_t maxCount);

  /// @brief Method QueueWaiterTask, addr 0x299caac, size 0xc, virtual false, abstract: false, final false
  static inline void QueueWaiterTask(::System::Threading::__SemaphoreSlim__TaskNode* waiterTask);

  /// @brief Method Release, addr 0x299c768, size 0x8, virtual false, abstract: false, final false
  inline int32_t Release();

  /// @brief Method Release, addr 0x299c770, size 0x2e4, virtual false, abstract: false, final false
  inline int32_t Release(int32_t releaseCount);

  /// @brief Method RemoveAsyncWaiter, addr 0x299c6e8, size 0x80, virtual false, abstract: false, final false
  inline bool RemoveAsyncWaiter(::System::Threading::__SemaphoreSlim__TaskNode* task);

  /// @brief Method Wait, addr 0x299c07c, size 0x8, virtual false, abstract: false, final false
  inline bool Wait(int32_t millisecondsTimeout);

  /// @brief Method Wait, addr 0x299bba4, size 0x4d8, virtual false, abstract: false, final false
  inline bool Wait(int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Wait, addr 0x299bb98, size 0xc, virtual false, abstract: false, final false
  inline void Wait();

  /// @brief Method WaitAsync, addr 0x299c4e0, size 0xc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WaitAsync();

  /// @brief Method WaitAsync, addr 0x299c4ec, size 0xc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WaitAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WaitAsync, addr 0x299c108, size 0x2e4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* WaitAsync(int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WaitUntilCountOrTimeout, addr 0x299c3ec, size 0x90, virtual false, abstract: false, final false
  inline bool WaitUntilCountOrTimeout(int32_t millisecondsTimeout, uint32_t startTime, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WaitUntilCountOrTimeoutAsync, addr 0x299c57c, size 0x124, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* WaitUntilCountOrTimeoutAsync(::System::Threading::__SemaphoreSlim__TaskNode* asyncWaiter, int32_t millisecondsTimeout,
                                                                                ::System::Threading::CancellationToken cancellationToken);

  constexpr ::System::Threading::__SemaphoreSlim__TaskNode*& __cordl_internal_get_m_asyncHead();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::__SemaphoreSlim__TaskNode*> const& __cordl_internal_get_m_asyncHead() const;

  constexpr ::System::Threading::__SemaphoreSlim__TaskNode*& __cordl_internal_get_m_asyncTail();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::__SemaphoreSlim__TaskNode*> const& __cordl_internal_get_m_asyncTail() const;

  constexpr int32_t const& __cordl_internal_get_m_currentCount() const;

  constexpr int32_t& __cordl_internal_get_m_currentCount();

  constexpr ::System::Object*& __cordl_internal_get_m_lockObj();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_m_lockObj() const;

  constexpr int32_t const& __cordl_internal_get_m_maxCount() const;

  constexpr int32_t& __cordl_internal_get_m_maxCount();

  constexpr int32_t const& __cordl_internal_get_m_waitCount() const;

  constexpr int32_t& __cordl_internal_get_m_waitCount();

  constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get_m_waitHandle();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& __cordl_internal_get_m_waitHandle() const;

  constexpr void __cordl_internal_set_m_asyncHead(::System::Threading::__SemaphoreSlim__TaskNode* value);

  constexpr void __cordl_internal_set_m_asyncTail(::System::Threading::__SemaphoreSlim__TaskNode* value);

  constexpr void __cordl_internal_set_m_currentCount(int32_t value);

  constexpr void __cordl_internal_set_m_lockObj(::System::Object* value);

  constexpr void __cordl_internal_set_m_maxCount(int32_t value);

  constexpr void __cordl_internal_set_m_waitCount(int32_t value);

  constexpr void __cordl_internal_set_m_waitHandle(::System::Threading::ManualResetEvent* value);

  /// @brief Method .ctor, addr 0x299b9f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialCount);

  /// @brief Method .ctor, addr 0x299b9fc, size 0x194, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialCount, int32_t maxCount);

  static inline ::System::Action_1<::System::Object*>* getStaticF_s_cancellationTokenCanceledEventHandler();

  static inline ::System::Threading::Tasks::Task_1<bool>* getStaticF_s_falseTask();

  static inline ::System::Threading::Tasks::Task_1<bool>* getStaticF_s_trueTask();

  /// @brief Method get_CurrentCount, addr 0x299b9dc, size 0x18, virtual false, abstract: false, final false
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
  ::System::Threading::__SemaphoreSlim__TaskNode* ___m_asyncHead;

  /// @brief Field m_asyncTail, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::__SemaphoreSlim__TaskNode* ___m_asyncTail;

  /// @brief Field NO_MAXIMUM offset 0xffffffff size 0x4
  static constexpr int32_t NO_MAXIMUM{ static_cast<int32_t>(0x7fffffff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::SemaphoreSlim, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_currentCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_maxCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_waitCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_lockObj) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_waitHandle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_asyncHead) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_asyncTail) == 0x38, "Offset mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::SemaphoreSlim);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SemaphoreSlim*, "System.Threading", "SemaphoreSlim");
NEED_NO_BOX(::System::Threading::__SemaphoreSlim__TaskNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__SemaphoreSlim__TaskNode*, "System.Threading", "SemaphoreSlim/TaskNode");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32, "System.Threading", "SemaphoreSlim/<WaitUntilCountOrTimeoutAsync>d__32");
