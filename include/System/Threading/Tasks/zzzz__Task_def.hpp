#pragma once
// IWYU pragma private; include "System/Threading/Tasks/Task.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__ManualResetEventSlim_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Task)
namespace GlobalNamespace {
class Task_DelayPromise;
}
namespace GlobalNamespace {
template <typename T> class Task_WhenAllPromise_1;
}
namespace GlobalNamespace {
class Task_WhenAllPromise;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class LowLevelListWithIList_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Runtime::CompilerServices {
struct ConfiguredTaskAwaitable;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Threading::Tasks {
class ITaskCompletionAction;
}
namespace System::Threading::Tasks {
struct InternalTaskOptions;
}
namespace System::Threading::Tasks {
class StackGuard;
}
namespace System::Threading::Tasks {
struct TaskContinuationOptions;
}
namespace System::Threading::Tasks {
class TaskContinuation;
}
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System::Threading::Tasks {
class TaskExceptionHolder;
}
namespace System::Threading::Tasks {
class TaskFactory;
}
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System::Threading::Tasks {
struct TaskStatus;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task_ContingentProperties;
}
namespace System::Threading::Tasks {
class Task_SetOnInvokeMres;
}
namespace System::Threading::Tasks {
class Task___c;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
class ManualResetEventSlim;
}
namespace System::Threading {
class ThreadAbortException;
}
namespace System::Threading {
class TimerCallback;
}
namespace System::Threading {
class WaitHandle;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System {
class AggregateException;
}
namespace System {
class Delegate;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Object;
}
namespace System {
class OperationCanceledException;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
class Task_ContingentProperties;
}
namespace System::Threading::Tasks {
class Task_SetOnInvokeMres;
}
namespace System::Threading::Tasks {
class Task___c;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::Task);
MARK_REF_PTR_T(::System::Threading::Tasks::Task_ContingentProperties);
MARK_REF_PTR_T(::System::Threading::Tasks::Task_SetOnInvokeMres);
MARK_REF_PTR_T(::System::Threading::Tasks::Task___c);
// Dependencies System.Object, System.Threading.CancellationToken
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.Task/ContingentProperties
class CORDL_TYPE Task_ContingentProperties : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_cancellationRegistration, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_cancellationRegistration, put = __cordl_internal_set_m_cancellationRegistration)) ::System::Object* m_cancellationRegistration;

  /// @brief Field m_cancellationToken, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_cancellationToken, put = __cordl_internal_set_m_cancellationToken)) ::System::Threading::CancellationToken m_cancellationToken;

  /// @brief Field m_capturedContext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_capturedContext, put = __cordl_internal_set_m_capturedContext)) ::System::Threading::ExecutionContext* m_capturedContext;

  /// @brief Field m_completionCountdown, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_completionCountdown, put = __cordl_internal_set_m_completionCountdown)) int32_t m_completionCountdown;

  /// @brief Field m_completionEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_completionEvent, put = __cordl_internal_set_m_completionEvent)) ::System::Threading::ManualResetEventSlim* m_completionEvent;

  /// @brief Field m_exceptionalChildren, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_exceptionalChildren,
                      put = __cordl_internal_set_m_exceptionalChildren)) ::System::Collections::Generic::LowLevelListWithIList_1<::System::Threading::Tasks::Task*>* m_exceptionalChildren;

  /// @brief Field m_exceptionsHolder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_exceptionsHolder, put = __cordl_internal_set_m_exceptionsHolder)) ::System::Threading::Tasks::TaskExceptionHolder* m_exceptionsHolder;

  /// @brief Field m_internalCancellationRequested, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_internalCancellationRequested, put = __cordl_internal_set_m_internalCancellationRequested)) int32_t m_internalCancellationRequested;

  static inline ::System::Threading::Tasks::Task_ContingentProperties* New_ctor();

  /// @brief Method SetCompleted, addr 0x3e63a5c, size 0x28, virtual false, abstract: false, final false
  inline void SetCompleted();

  /// @brief Method UnregisterCancellationCallback, addr 0x3e63a84, size 0x108, virtual false, abstract: false, final false
  inline void UnregisterCancellationCallback();

  constexpr ::System::Object* const& __cordl_internal_get_m_cancellationRegistration() const;

  constexpr ::System::Object*& __cordl_internal_get_m_cancellationRegistration();

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_m_cancellationToken() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get_m_cancellationToken();

  constexpr ::System::Threading::ExecutionContext* const& __cordl_internal_get_m_capturedContext() const;

  constexpr ::System::Threading::ExecutionContext*& __cordl_internal_get_m_capturedContext();

  constexpr int32_t const& __cordl_internal_get_m_completionCountdown() const;

  constexpr int32_t& __cordl_internal_get_m_completionCountdown();

  constexpr ::System::Threading::ManualResetEventSlim* const& __cordl_internal_get_m_completionEvent() const;

  constexpr ::System::Threading::ManualResetEventSlim*& __cordl_internal_get_m_completionEvent();

  constexpr ::System::Collections::Generic::LowLevelListWithIList_1<::System::Threading::Tasks::Task*>* const& __cordl_internal_get_m_exceptionalChildren() const;

  constexpr ::System::Collections::Generic::LowLevelListWithIList_1<::System::Threading::Tasks::Task*>*& __cordl_internal_get_m_exceptionalChildren();

  constexpr ::System::Threading::Tasks::TaskExceptionHolder* const& __cordl_internal_get_m_exceptionsHolder() const;

  constexpr ::System::Threading::Tasks::TaskExceptionHolder*& __cordl_internal_get_m_exceptionsHolder();

  constexpr int32_t const& __cordl_internal_get_m_internalCancellationRequested() const;

  constexpr int32_t& __cordl_internal_get_m_internalCancellationRequested();

  constexpr void __cordl_internal_set_m_cancellationRegistration(::System::Object* value);

  constexpr void __cordl_internal_set_m_cancellationToken(::System::Threading::CancellationToken value);

  constexpr void __cordl_internal_set_m_capturedContext(::System::Threading::ExecutionContext* value);

  constexpr void __cordl_internal_set_m_completionCountdown(int32_t value);

  constexpr void __cordl_internal_set_m_completionEvent(::System::Threading::ManualResetEventSlim* value);

  constexpr void __cordl_internal_set_m_exceptionalChildren(::System::Collections::Generic::LowLevelListWithIList_1<::System::Threading::Tasks::Task*>* value);

  constexpr void __cordl_internal_set_m_exceptionsHolder(::System::Threading::Tasks::TaskExceptionHolder* value);

  constexpr void __cordl_internal_set_m_internalCancellationRequested(int32_t value);

  /// @brief Method .ctor, addr 0x3e60afc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Task_ContingentProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Task_ContingentProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Task_ContingentProperties(Task_ContingentProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Task_ContingentProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Task_ContingentProperties(Task_ContingentProperties const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2784 };

  /// @brief Field m_capturedContext, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::ExecutionContext* ___m_capturedContext;

  /// @brief Field m_completionEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::ManualResetEventSlim* ___m_completionEvent;

  /// @brief Field m_exceptionsHolder, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskExceptionHolder* ___m_exceptionsHolder;

  /// @brief Field m_cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___m_cancellationToken;

  /// @brief Field m_cancellationRegistration, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ___m_cancellationRegistration;

  /// @brief Field m_internalCancellationRequested, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_internalCancellationRequested;

  /// @brief Field m_completionCountdown, offset: 0x3c, size: 0x4, def value: None
  int32_t ___m_completionCountdown;

  /// @brief Field m_exceptionalChildren, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::LowLevelListWithIList_1<::System::Threading::Tasks::Task*>* ___m_exceptionalChildren;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Tasks::Task_ContingentProperties, ___m_capturedContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::Task_ContingentProperties, ___m_completionEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::Task_ContingentProperties, ___m_exceptionsHolder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::Task_ContingentProperties, ___m_cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::Task_ContingentProperties, ___m_cancellationRegistration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::Task_ContingentProperties, ___m_internalCancellationRequested) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::Task_ContingentProperties, ___m_completionCountdown) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::Task_ContingentProperties, ___m_exceptionalChildren) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::Task_ContingentProperties, 0x48>, "Size mismatch!");

} // namespace System::Threading::Tasks
// Dependencies System.Threading.ManualResetEventSlim, System.Threading.Tasks.ITaskCompletionAction
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.Task/SetOnInvokeMres
class CORDL_TYPE Task_SetOnInvokeMres : public ::System::Threading::ManualResetEventSlim {
public:
  // Declarations
  __declspec(property(get = get_InvokeMayRunArbitraryCode)) bool InvokeMayRunArbitraryCode;

  /// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
  constexpr operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept;

  /// @brief Method Invoke, addr 0x3e68fc4, size 0x8, virtual true, abstract: false, final true
  inline void Invoke(::System::Threading::Tasks::Task* completingTask);

  static inline ::System::Threading::Tasks::Task_SetOnInvokeMres* New_ctor();

  /// @brief Method .ctor, addr 0x3e65b2c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_InvokeMayRunArbitraryCode, addr 0x3e68fcc, size 0x8, virtual true, abstract: false, final true
  inline bool get_InvokeMayRunArbitraryCode();

  /// @brief Convert to "::System::Threading::Tasks::ITaskCompletionAction"
  constexpr ::System::Threading::Tasks::ITaskCompletionAction* i___System__Threading__Tasks__ITaskCompletionAction() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Task_SetOnInvokeMres();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Task_SetOnInvokeMres", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Task_SetOnInvokeMres(Task_SetOnInvokeMres&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Task_SetOnInvokeMres", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Task_SetOnInvokeMres(Task_SetOnInvokeMres const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2785 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::Task_SetOnInvokeMres, 0x28>, "Size mismatch!");

} // namespace System::Threading::Tasks
// Dependencies System.Object
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.Task/<>c
class CORDL_TYPE Task___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Threading::Tasks::Task___c* __9;

  /// @brief Field <>9__247_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__247_0, put = setStaticF___9__247_0)) ::System::Action_1<::System::Object*>* __9__247_0;

  /// @brief Field <>9__247_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__247_1, put = setStaticF___9__247_1)) ::System::Threading::TimerCallback* __9__247_1;

  static inline ::System::Threading::Tasks::Task___c* New_ctor();

  /// @brief Method <Delay>b__247_0, addr 0x3e694e4, size 0x60, virtual false, abstract: false, final false
  inline void _Delay_b__247_0(::System::Object* state);

  /// @brief Method <Delay>b__247_1, addr 0x3e69544, size 0x60, virtual false, abstract: false, final false
  inline void _Delay_b__247_1(::System::Object* state);

  /// @brief Method <.cctor>b__271_0, addr 0x3e695a4, size 0x64, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_ContingentProperties* __cctor_b__271_0();

  /// @brief Method <.cctor>b__271_1, addr 0x3e69608, size 0x20, virtual false, abstract: false, final false
  inline bool __cctor_b__271_1(::System::Threading::Tasks::Task* t);

  /// @brief Method <.cctor>b__271_2, addr 0x3e69628, size 0xc, virtual false, abstract: false, final false
  inline bool __cctor_b__271_2(::System::Object* tc);

  /// @brief Method .ctor, addr 0x3e694dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::Tasks::Task___c* getStaticF___9();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__247_0();

  static inline ::System::Threading::TimerCallback* getStaticF___9__247_1();

  static inline void setStaticF___9(::System::Threading::Tasks::Task___c* value);

  static inline void setStaticF___9__247_0(::System::Action_1<::System::Object*>* value);

  static inline void setStaticF___9__247_1(::System::Threading::TimerCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Task___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Task___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Task___c(Task___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Task___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Task___c(Task___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2789 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::Task___c, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks
// Dependencies System.IAsyncResult, System.IDisposable, System.Object, System.Threading.IThreadPoolWorkItem
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.Task
class CORDL_TYPE Task : public ::System::Object {
public:
  // Declarations
  using DelayPromise = ::GlobalNamespace::Task_DelayPromise;

  using WhenAllPromise = ::GlobalNamespace::Task_WhenAllPromise;

  template <typename T> using WhenAllPromise_1 = ::GlobalNamespace::Task_WhenAllPromise_1<T>;

  using ContingentProperties = ::System::Threading::Tasks::Task_ContingentProperties;

  using SetOnInvokeMres = ::System::Threading::Tasks::Task_SetOnInvokeMres;

  using __c = ::System::Threading::Tasks::Task___c;

  __declspec(property(get = get_AsyncState)) ::System::Object* AsyncState;

  __declspec(property(get = get_CancellationToken)) ::System::Threading::CancellationToken CancellationToken;

  __declspec(property(get = get_CapturedContext, put = set_CapturedContext)) ::System::Threading::ExecutionContext* CapturedContext;

  __declspec(property(get = get_CompletedEvent)) ::System::Threading::ManualResetEventSlim* CompletedEvent;

  __declspec(property(get = get_CreationOptions)) ::System::Threading::Tasks::TaskCreationOptions CreationOptions;

  __declspec(property(get = get_Exception)) ::System::AggregateException* Exception;

  __declspec(property(get = get_ExceptionRecorded)) bool ExceptionRecorded;

  __declspec(property(get = get_ExecutingTaskScheduler)) ::System::Threading::Tasks::TaskScheduler* ExecutingTaskScheduler;

  __declspec(property(get = get_Id)) int32_t Id;

  __declspec(property(get = get_IsCanceled)) bool IsCanceled;

  __declspec(property(get = get_IsCancellationAcknowledged)) bool IsCancellationAcknowledged;

  __declspec(property(get = get_IsCancellationRequested)) bool IsCancellationRequested;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  __declspec(property(get = get_IsCompletedSuccessfully)) bool IsCompletedSuccessfully;

  __declspec(property(get = get_IsDelegateInvoked)) bool IsDelegateInvoked;

  __declspec(property(get = get_IsExceptionObservedByParent)) bool IsExceptionObservedByParent;

  __declspec(property(get = get_IsFaulted)) bool IsFaulted;

  __declspec(property(get = get_IsWaitNotificationEnabled)) bool IsWaitNotificationEnabled;

  __declspec(property(get = get_IsWaitNotificationEnabledOrNotRanToCompletion)) bool IsWaitNotificationEnabledOrNotRanToCompletion;

  __declspec(property(get = get_Options)) ::System::Threading::Tasks::TaskCreationOptions Options;

  __declspec(property(get = get_ShouldNotifyDebuggerOfWaitCompletion)) bool ShouldNotifyDebuggerOfWaitCompletion;

  __declspec(property(get = get_Status)) ::System::Threading::Tasks::TaskStatus Status;

  __declspec(property(get = System_IAsyncResult_get_AsyncWaitHandle)) ::System::Threading::WaitHandle* System_IAsyncResult_AsyncWaitHandle;

  __declspec(property(get = System_IAsyncResult_get_CompletedSynchronously)) bool System_IAsyncResult_CompletedSynchronously;

  /// @brief Field <CompletedTask>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__CompletedTask_k__BackingField, put = setStaticF__CompletedTask_k__BackingField)) ::System::Threading::Tasks::Task* _CompletedTask_k__BackingField;

  /// @brief Field <Factory>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__Factory_k__BackingField, put = setStaticF__Factory_k__BackingField)) ::System::Threading::Tasks::TaskFactory* _Factory_k__BackingField;

  /// @brief Field m_action, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_action, put = __cordl_internal_set_m_action)) ::System::Delegate* m_action;

  /// @brief Field m_contingentProperties, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_contingentProperties,
                      put = __cordl_internal_set_m_contingentProperties)) ::System::Threading::Tasks::Task_ContingentProperties* m_contingentProperties;

  /// @brief Field m_continuationObject, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_continuationObject, put = __cordl_internal_set_m_continuationObject)) ::System::Object* m_continuationObject;

  /// @brief Field m_parent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_parent, put = __cordl_internal_set_m_parent)) ::System::Threading::Tasks::Task* m_parent;

  /// @brief Field m_stateFlags, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_stateFlags, put = __cordl_internal_set_m_stateFlags)) int32_t m_stateFlags;

  /// @brief Field m_stateObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_stateObject, put = __cordl_internal_set_m_stateObject)) ::System::Object* m_stateObject;

  /// @brief Field m_taskId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_taskId, put = __cordl_internal_set_m_taskId)) int32_t m_taskId;

  /// @brief Field m_taskScheduler, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_taskScheduler, put = __cordl_internal_set_m_taskScheduler)) ::System::Threading::Tasks::TaskScheduler* m_taskScheduler;

  /// @brief Field s_IsExceptionObservedByParentPredicate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_IsExceptionObservedByParentPredicate,
                      put = setStaticF_s_IsExceptionObservedByParentPredicate)) ::System::Predicate_1<::System::Threading::Tasks::Task*>* s_IsExceptionObservedByParentPredicate;

  /// @brief Field s_IsTaskContinuationNullPredicate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_IsTaskContinuationNullPredicate,
                      put = setStaticF_s_IsTaskContinuationNullPredicate)) ::System::Predicate_1<::System::Object*>* s_IsTaskContinuationNullPredicate;

  /// @brief Field s_activeTasksLock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_activeTasksLock, put = setStaticF_s_activeTasksLock)) ::System::Object* s_activeTasksLock;

  /// @brief Field s_asyncDebuggingEnabled, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_asyncDebuggingEnabled, put = setStaticF_s_asyncDebuggingEnabled)) bool s_asyncDebuggingEnabled;

  /// @brief Field s_createContingentProperties, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_createContingentProperties,
                      put = setStaticF_s_createContingentProperties)) ::System::Func_1<::System::Threading::Tasks::Task_ContingentProperties*>* s_createContingentProperties;

  /// @brief Field s_currentActiveTasks, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_currentActiveTasks,
                      put = setStaticF_s_currentActiveTasks)) ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Threading::Tasks::Task*>* s_currentActiveTasks;

  /// @brief Field s_ecCallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ecCallback, put = setStaticF_s_ecCallback)) ::System::Threading::ContextCallback* s_ecCallback;

  /// @brief Field s_taskCancelCallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_taskCancelCallback, put = setStaticF_s_taskCancelCallback)) ::System::Action_1<::System::Object*>* s_taskCancelCallback;

  /// @brief Field s_taskCompletionSentinel, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_taskCompletionSentinel, put = setStaticF_s_taskCompletionSentinel)) ::System::Object* s_taskCompletionSentinel;

  /// @brief Field s_taskIdCounter, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_taskIdCounter, put = setStaticF_s_taskIdCounter)) int32_t s_taskIdCounter;

  /// @brief Field t_currentTask, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_t_currentTask, put = setStaticF_t_currentTask)) ::System::Threading::Tasks::Task* t_currentTask;

  /// @brief Field t_stackGuard, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_t_stackGuard, put = setStaticF_t_stackGuard)) ::System::Threading::Tasks::StackGuard* t_stackGuard;

  /// @brief Convert operator to "::System::IAsyncResult"
  constexpr operator ::System::IAsyncResult*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
  constexpr operator ::System::Threading::IThreadPoolWorkItem*() noexcept;

  /// @brief Method AddCompletionAction, addr 0x3e6673c, size 0x8, virtual false, abstract: false, final false
  inline void AddCompletionAction(::System::Threading::Tasks::ITaskCompletionAction* action);

  /// @brief Method AddCompletionAction, addr 0x3e65b8c, size 0xd4, virtual false, abstract: false, final false
  inline void AddCompletionAction(::System::Threading::Tasks::ITaskCompletionAction* action, bool addBeforeOthers);

  /// @brief Method AddException, addr 0x3e61ac4, size 0x8, virtual false, abstract: false, final false
  inline void AddException(::System::Object* exceptionObject);

  /// @brief Method AddException, addr 0x3e62d00, size 0x194, virtual false, abstract: false, final false
  inline void AddException(::System::Object* exceptionObject, bool representsCancellation);

  /// @brief Method AddExceptionsFromChildren, addr 0x3e6361c, size 0x440, virtual false, abstract: false, final false
  inline void AddExceptionsFromChildren();

  /// @brief Method AddNewChild, addr 0x3e60ee8, size 0x74, virtual false, abstract: false, final false
  inline void AddNewChild();

  /// @brief Method AddTaskContinuation, addr 0x3e64d30, size 0x94, virtual false, abstract: false, final false
  inline bool AddTaskContinuation(::System::Object* tc, bool addBeforeOthers);

  /// @brief Method AddTaskContinuationComplex, addr 0x3e66744, size 0x308, virtual false, abstract: false, final false
  inline bool AddTaskContinuationComplex(::System::Object* tc, bool addBeforeOthers);

  /// @brief Method AddToActiveTasks, addr 0x3e68a10, size 0x160, virtual false, abstract: false, final false
  static inline bool AddToActiveTasks(::System::Threading::Tasks::Task* task);

  /// @brief Method AnyTaskRequiresNotifyDebuggerOfWaitCompletion, addr 0x3e61e98, size 0x9c, virtual false, abstract: false, final false
  static inline bool AnyTaskRequiresNotifyDebuggerOfWaitCompletion(::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> tasks);

  /// @brief Method AssignCancellationToken, addr 0x3e60f5c, size 0x2c8, virtual false, abstract: false, final false
  inline void AssignCancellationToken(::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::Task* antecedent,
                                      ::System::Threading::Tasks::TaskContinuation* continuation);

  /// @brief Method AtomicStateUpdate, addr 0x3e618a8, size 0xc0, virtual false, abstract: false, final false
  inline bool AtomicStateUpdate(int32_t newBits, int32_t illegalBits);

  /// @brief Method AtomicStateUpdate, addr 0x3e61c5c, size 0xd8, virtual false, abstract: false, final false
  inline bool AtomicStateUpdate(int32_t newBits, int32_t illegalBits, ::ByRef<int32_t> oldFlags);

  /// @brief Method CancellationCleanupLogic, addr 0x3e619a4, size 0x120, virtual false, abstract: false, final false
  inline void CancellationCleanupLogic();

  /// @brief Method ConfigureAwait, addr 0x3e5f40c, size 0x34, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable ConfigureAwait(bool continueOnCapturedContext);

  /// @brief Method ContinueWith, addr 0x3e65f10, size 0x74, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task*>* continuationAction);

  /// @brief Method ContinueWith, addr 0x3e66024, size 0x154, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_1<::System::Threading::Tasks::Task*>* continuationAction, ::System::Threading::Tasks::TaskScheduler* scheduler,
                                                        ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions);

  /// @brief Method ContinueWith, addr 0x3e664a8, size 0x14, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>* continuationAction, ::System::Object* state,
                                                        ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions,
                                                        ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method ContinueWith, addr 0x3e664bc, size 0x160, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ContinueWith(::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>* continuationAction, ::System::Object* state,
                                                        ::System::Threading::Tasks::TaskScheduler* scheduler, ::System::Threading::CancellationToken cancellationToken,
                                                        ::System::Threading::Tasks::TaskContinuationOptions continuationOptions);

  /// @brief Method ContinueWithCore, addr 0x3e6634c, size 0x15c, virtual false, abstract: false, final false
  inline void ContinueWithCore(::System::Threading::Tasks::Task* continuationTask, ::System::Threading::Tasks::TaskScheduler* scheduler, ::System::Threading::CancellationToken cancellationToken,
                               ::System::Threading::Tasks::TaskContinuationOptions options);

  /// @brief Method CreateUnwrapPromise, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::System::Threading::Tasks::Task_1<TResult>* CreateUnwrapPromise(::System::Threading::Tasks::Task* outerTask, bool lookForOce);

  /// @brief Method CreationOptionsFromContinuationOptions, addr 0x3e66178, size 0x120, virtual false, abstract: false, final false
  static inline void CreationOptionsFromContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions continuationOptions,
                                                            ::ByRef<::System::Threading::Tasks::TaskCreationOptions> creationOptions,
                                                            ::ByRef<::System::Threading::Tasks::InternalTaskOptions> internalOptions);

  /// @brief Method Delay, addr 0x3e66f64, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* Delay(::System::TimeSpan delay, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Delay, addr 0x3e67408, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* Delay(int32_t millisecondsDelay);

  /// @brief Method Delay, addr 0x3e67080, size 0x388, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* Delay(int32_t millisecondsDelay, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Dispose, addr 0x3e62b3c, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x3e62ba8, size 0xdc, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DisregardChild, addr 0x3e61528, size 0x48, virtual false, abstract: false, final false
  inline void DisregardChild();

  /// @brief Method EnsureContingentPropertiesInitialized, addr 0x3e612bc, size 0x40, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_ContingentProperties* EnsureContingentPropertiesInitialized(bool needsProtection);

  /// @brief Method EnsureContingentPropertiesInitializedCore, addr 0x3e626ec, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_ContingentProperties* EnsureContingentPropertiesInitializedCore(bool needsProtection);

  /// @brief Method Execute, addr 0x3e6446c, size 0xac, virtual false, abstract: false, final false
  inline void Execute();

  /// @brief Method ExecuteEntry, addr 0x3e64628, size 0x118, virtual false, abstract: false, final false
  inline bool ExecuteEntry(bool bPreventDoubleExecution);

  /// @brief Method ExecuteWithThreadLocal, addr 0x3e64740, size 0x198, virtual false, abstract: false, final false
  inline void ExecuteWithThreadLocal(::ByRef<::System::Threading::Tasks::Task*> currentTaskSlot);

  /// @brief Method ExecutionContextCallback, addr 0x3e648d8, size 0x78, virtual false, abstract: false, final false
  static inline void ExecutionContextCallback(::System::Object* obj);

  /// @brief Method Finish, addr 0x3e61acc, size 0x188, virtual false, abstract: false, final false
  inline void Finish(bool bUserDelegateExecuted);

  /// @brief Method FinishContinuations, addr 0x3e63d90, size 0x6dc, virtual false, abstract: false, final false
  inline void FinishContinuations();

  /// @brief Method FinishStageThree, addr 0x3e63b8c, size 0x50, virtual false, abstract: false, final false
  inline void FinishStageThree();

  /// @brief Method FinishStageTwo, addr 0x3e63394, size 0x288, virtual false, abstract: false, final false
  inline void FinishStageTwo();

  /// @brief Method FromCanceled, addr 0x3e5ff78, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* FromCanceled(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method FromCanceled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::System::Threading::Tasks::Task_1<TResult>* FromCanceled(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method FromCancellation, addr 0x3e66a4c, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* FromCancellation(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method FromCancellation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::System::Threading::Tasks::Task_1<TResult>* FromCancellation(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method FromCancellation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::System::Threading::Tasks::Task_1<TResult>* FromCancellation(::System::OperationCanceledException* exception);

  /// @brief Method FromException, addr 0x3e5fb30, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* FromException(::System::Exception* exception);

  /// @brief Method FromException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::System::Threading::Tasks::Task_1<TResult>* FromException(::System::Exception* exception);

  /// @brief Method FromResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::System::Threading::Tasks::Task_1<TResult>* FromResult(TResult result);

  /// @brief Method GetAwaiter, addr 0x3e5f400, size 0x4, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::TaskAwaiter GetAwaiter();

  /// @brief Method GetCancellationExceptionDispatchInfo, addr 0x3e63218, size 0x30, virtual false, abstract: false, final false
  inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* GetCancellationExceptionDispatchInfo();

  /// @brief Method GetExceptionDispatchInfos, addr 0x3e63074, size 0x118, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* GetExceptionDispatchInfos();

  /// @brief Method GetExceptions, addr 0x3e62490, size 0x14c, virtual false, abstract: false, final false
  inline ::System::AggregateException* GetExceptions(bool includeTaskCanceledExceptions);

  /// @brief Method HandleException, addr 0x3e64518, size 0x108, virtual false, abstract: false, final false
  inline void HandleException(::System::Exception* unhandledException);

  /// @brief Method InnerInvoke, addr 0x3e64950, size 0xb4, virtual true, abstract: false, final false
  inline void InnerInvoke();

  /// @brief Method InternalCancel, addr 0x3e61358, size 0x1d0, virtual false, abstract: false, final false
  inline bool InternalCancel(bool bCancelNonExecutingOnly);

  /// @brief Method InternalCurrentIfAttached, addr 0x3e622ec, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* InternalCurrentIfAttached(::System::Threading::Tasks::TaskCreationOptions creationOptions);

  /// @brief Method InternalStartNew, addr 0x3e61f80, size 0x108, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* InternalStartNew(::System::Threading::Tasks::Task* creatingTask, ::System::Delegate* action, ::System::Object* state,
                                                                   ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskScheduler* scheduler,
                                                                   ::System::Threading::Tasks::TaskCreationOptions options, ::System::Threading::Tasks::InternalTaskOptions internalOptions);

  /// @brief Method InternalWait, addr 0x3e64fa4, size 0x5a8, virtual false, abstract: false, final false
  inline bool InternalWait(int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method InternalWhenAll, addr 0x3e67f98, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* InternalWhenAll(::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> tasks);

  /// @brief Method InternalWhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult>
  static inline ::System::Threading::Tasks::Task_1<::ArrayW<TResult, ::Array<TResult>*>>*
  InternalWhenAll(::ArrayW<::System::Threading::Tasks::Task_1<TResult>*, ::Array<::System::Threading::Tasks::Task_1<TResult>*>*> tasks);

  /// @brief Method IsCompletedMethod, addr 0x3e627e0, size 0x10, virtual false, abstract: false, final false
  static inline bool IsCompletedMethod(int32_t flags);

  /// @brief Method LogFinishCompletionNotification, addr 0x3e65ebc, size 0x54, virtual false, abstract: false, final false
  inline void LogFinishCompletionNotification();

  /// @brief Method MarkAborted, addr 0x3e68cb0, size 0x4, virtual true, abstract: false, final true
  inline void MarkAborted(::System::Threading::ThreadAbortException* e);

  /// @brief Method MarkStarted, addr 0x3e61f74, size 0xc, virtual false, abstract: false, final false
  inline bool MarkStarted();

  static inline ::System::Threading::Tasks::Task* New_ctor();

  static inline ::System::Threading::Tasks::Task* New_ctor(::System::Action* action, ::System::Threading::CancellationToken cancellationToken);

  static inline ::System::Threading::Tasks::Task* New_ctor(::System::Delegate* action, ::System::Object* state, ::System::Threading::Tasks::Task* parent,
                                                           ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                           ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler* scheduler);

  static inline ::System::Threading::Tasks::Task* New_ctor(bool canceled, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct);

  static inline ::System::Threading::Tasks::Task* New_ctor(::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions, bool promiseStyle);

  /// @brief Method NotifyDebuggerOfWaitCompletion, addr 0x3e61e70, size 0x28, virtual false, abstract: false, final false
  inline void NotifyDebuggerOfWaitCompletion();

  /// @brief Method NotifyDebuggerOfWaitCompletionIfNecessary, addr 0x3e61e08, size 0x50, virtual false, abstract: false, final false
  inline bool NotifyDebuggerOfWaitCompletionIfNecessary();

  /// @brief Method OptionsMethod, addr 0x3e61c54, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::TaskCreationOptions OptionsMethod(int32_t flags);

  /// @brief Method ProcessChildCompletion, addr 0x3e63bdc, size 0x1b4, virtual false, abstract: false, final false
  inline void ProcessChildCompletion(::System::Threading::Tasks::Task* childTask);

  /// @brief Method RecordInternalCancellationRequest, addr 0x3e65c60, size 0x48, virtual false, abstract: false, final false
  inline void RecordInternalCancellationRequest();

  /// @brief Method RecordInternalCancellationRequest, addr 0x3e65ca8, size 0x8c, virtual false, abstract: false, final false
  inline void RecordInternalCancellationRequest(::System::Threading::CancellationToken tokenToRecord);

  /// @brief Method RecordInternalCancellationRequest, addr 0x3e61968, size 0x3c, virtual false, abstract: false, final false
  inline void RecordInternalCancellationRequest(::System::Threading::CancellationToken tokenToRecord, ::System::Object* cancellationException);

  /// @brief Method RemoveContinuation, addr 0x3e61660, size 0x248, virtual false, abstract: false, final false
  inline void RemoveContinuation(::System::Object* continuationObject);

  /// @brief Method RemoveFromActiveTasks, addr 0x3e68b70, size 0x140, virtual false, abstract: false, final false
  static inline void RemoveFromActiveTasks(int32_t taskId);

  /// @brief Method Run, addr 0x3e66b2c, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* Run(::System::Action* action);

  /// @brief Method Run, addr 0x3e66bfc, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* Run(::System::Action* action, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Run, addr 0x3e66cd8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* Run(::System::Func_1<::System::Threading::Tasks::Task*>* function);

  /// @brief Method Run, addr 0x3e66d30, size 0x234, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* Run(::System::Func_1<::System::Threading::Tasks::Task*>* function, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::System::Threading::Tasks::Task_1<TResult>* Run(::System::Func_1<::System::Threading::Tasks::Task_1<TResult>*>* function);

  /// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult>
  static inline ::System::Threading::Tasks::Task_1<TResult>* Run(::System::Func_1<::System::Threading::Tasks::Task_1<TResult>*>* function, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::System::Threading::Tasks::Task_1<TResult>* Run(::System::Func_1<TResult>* function);

  /// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::System::Threading::Tasks::Task_1<TResult>* Run(::System::Func_1<TResult>* function, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ScheduleAndStart, addr 0x3e62088, size 0x20c, virtual false, abstract: false, final false
  inline void ScheduleAndStart(bool needsProtection);

  /// @brief Method SetCancellationAcknowledged, addr 0x3e64a04, size 0x2c, virtual false, abstract: false, final false
  inline void SetCancellationAcknowledged();

  /// @brief Method SetContinuationForAwait, addr 0x3e64a30, size 0x1fc, virtual false, abstract: false, final false
  inline void SetContinuationForAwait(::System::Action* continuationAction, bool continueOnCapturedContext, bool flowExecutionContext);

  /// @brief Method SetNotificationForWaitCompletion, addr 0x3e61d34, size 0xd4, virtual false, abstract: false, final false
  inline void SetNotificationForWaitCompletion(bool enabled);

  /// @brief Method SpinThenBlockingWait, addr 0x3e658a4, size 0x1ac, virtual false, abstract: false, final false
  inline bool SpinThenBlockingWait(int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SpinWait, addr 0x3e65a50, size 0xdc, virtual false, abstract: false, final false
  inline bool SpinWait(int32_t millisecondsTimeout);

  /// @brief Method System.IAsyncResult.get_AsyncWaitHandle, addr 0x3e62818, size 0x84, virtual true, abstract: false, final true
  inline ::System::Threading::WaitHandle* System_IAsyncResult_get_AsyncWaitHandle();

  /// @brief Method System.IAsyncResult.get_CompletedSynchronously, addr 0x3e6299c, size 0x8, virtual true, abstract: false, final true
  inline bool System_IAsyncResult_get_CompletedSynchronously();

  /// @brief Method System.Threading.IThreadPoolWorkItem.ExecuteWorkItem, addr 0x3e64620, size 0x8, virtual true, abstract: false, final true
  inline void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();

  /// @brief Method TaskCancelCallback, addr 0x3e61570, size 0xf0, virtual false, abstract: false, final false
  static inline void TaskCancelCallback(::System::Object* o);

  /// @brief Method TaskConstructorCore, addr 0x3e60c68, size 0x178, virtual false, abstract: false, final false
  inline void TaskConstructorCore(::System::Delegate* action, ::System::Object* state, ::System::Threading::CancellationToken cancellationToken,
                                  ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions,
                                  ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method ThrowIfExceptional, addr 0x3e63248, size 0x48, virtual false, abstract: false, final false
  inline void ThrowIfExceptional(bool includeTaskCanceledExceptions);

  /// @brief Method TrySetCanceled, addr 0x3e60398, size 0x8, virtual false, abstract: false, final false
  inline bool TrySetCanceled(::System::Threading::CancellationToken tokenToRecord);

  /// @brief Method TrySetCanceled, addr 0x3e5fad8, size 0x58, virtual false, abstract: false, final false
  inline bool TrySetCanceled(::System::Threading::CancellationToken tokenToRecord, ::System::Object* cancellationException);

  /// @brief Method TrySetException, addr 0x3e603a0, size 0x6c, virtual false, abstract: false, final false
  inline bool TrySetException(::System::Object* exceptionObject);

  /// @brief Method UpdateExceptionObservedStatus, addr 0x3e63290, size 0xd4, virtual false, abstract: false, final false
  inline void UpdateExceptionObservedStatus();

  /// @brief Method Wait, addr 0x3e64e54, size 0x150, virtual false, abstract: false, final false
  inline bool Wait(int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Wait, addr 0x3e64e48, size 0xc, virtual false, abstract: false, final false
  inline void Wait();

  /// @brief Method WhenAll, addr 0x3e67de8, size 0x1b0, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* WhenAll(::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> tasks);

  /// @brief Method WhenAll, addr 0x3e67574, size 0x874, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* WhenAll(::System::Collections::Generic::IEnumerable_1<::System::Threading::Tasks::Task*>* tasks);

  /// @brief Method WhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult>
  static inline ::System::Threading::Tasks::Task_1<::ArrayW<TResult, ::Array<TResult>*>>*
  WhenAll(::ArrayW<::System::Threading::Tasks::Task_1<TResult>*, ::Array<::System::Threading::Tasks::Task_1<TResult>*>*> tasks);

  /// @brief Method WhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult>
  static inline ::System::Threading::Tasks::Task_1<::ArrayW<TResult, ::Array<TResult>*>>* WhenAll(::System::Collections::Generic::IEnumerable_1<::System::Threading::Tasks::Task_1<TResult>*>* tasks);

  /// @brief Method WhenAny, addr 0x3e681d8, size 0x18c, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>* WhenAny(::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> tasks);

  /// @brief Method WhenAny, addr 0x3e6859c, size 0x474, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>* WhenAny(::System::Collections::Generic::IEnumerable_1<::System::Threading::Tasks::Task*>* tasks);

  /// @brief Method WhenAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult>
  static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task_1<TResult>*>*
  WhenAny(::ArrayW<::System::Threading::Tasks::Task_1<TResult>*, ::Array<::System::Threading::Tasks::Task_1<TResult>*>*> tasks);

  /// @brief Method WhenAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult>
  static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task_1<TResult>*>*
  WhenAny(::System::Collections::Generic::IEnumerable_1<::System::Threading::Tasks::Task_1<TResult>*>* tasks);

  /// @brief Method WrappedTryRunInline, addr 0x3e6554c, size 0xd0, virtual false, abstract: false, final false
  inline bool WrappedTryRunInline();

  constexpr ::System::Delegate* const& __cordl_internal_get_m_action() const;

  constexpr ::System::Delegate*& __cordl_internal_get_m_action();

  constexpr ::System::Threading::Tasks::Task_ContingentProperties* const& __cordl_internal_get_m_contingentProperties() const;

  constexpr ::System::Threading::Tasks::Task_ContingentProperties*& __cordl_internal_get_m_contingentProperties();

  constexpr ::System::Object* const& __cordl_internal_get_m_continuationObject() const;

  constexpr ::System::Object*& __cordl_internal_get_m_continuationObject();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_m_parent() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_m_parent();

  constexpr int32_t const& __cordl_internal_get_m_stateFlags() const;

  constexpr int32_t& __cordl_internal_get_m_stateFlags();

  constexpr ::System::Object* const& __cordl_internal_get_m_stateObject() const;

  constexpr ::System::Object*& __cordl_internal_get_m_stateObject();

  constexpr int32_t const& __cordl_internal_get_m_taskId() const;

  constexpr int32_t& __cordl_internal_get_m_taskId();

  constexpr ::System::Threading::Tasks::TaskScheduler* const& __cordl_internal_get_m_taskScheduler() const;

  constexpr ::System::Threading::Tasks::TaskScheduler*& __cordl_internal_get_m_taskScheduler();

  constexpr void __cordl_internal_set_m_action(::System::Delegate* value);

  constexpr void __cordl_internal_set_m_contingentProperties(::System::Threading::Tasks::Task_ContingentProperties* value);

  constexpr void __cordl_internal_set_m_continuationObject(::System::Object* value);

  constexpr void __cordl_internal_set_m_parent(::System::Threading::Tasks::Task* value);

  constexpr void __cordl_internal_set_m_stateFlags(int32_t value);

  constexpr void __cordl_internal_set_m_stateObject(::System::Object* value);

  constexpr void __cordl_internal_set_m_taskId(int32_t value);

  constexpr void __cordl_internal_set_m_taskScheduler(::System::Threading::Tasks::TaskScheduler* value);

  /// @brief Method .ctor, addr 0x3e60b20, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3e60de0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Action* action, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method .ctor, addr 0x3e60e10, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Delegate* action, ::System::Object* state, ::System::Threading::Tasks::Task* parent, ::System::Threading::CancellationToken cancellationToken,
                    ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions,
                    ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method .ctor, addr 0x3e60a44, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(bool canceled, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct);

  /// @brief Method .ctor, addr 0x3e60b48, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions, bool promiseStyle);

  static inline ::System::Threading::Tasks::Task* getStaticF__CompletedTask_k__BackingField();

  static inline ::System::Threading::Tasks::TaskFactory* getStaticF__Factory_k__BackingField();

  static inline ::System::Predicate_1<::System::Threading::Tasks::Task*>* getStaticF_s_IsExceptionObservedByParentPredicate();

  static inline ::System::Predicate_1<::System::Object*>* getStaticF_s_IsTaskContinuationNullPredicate();

  static inline ::System::Object* getStaticF_s_activeTasksLock();

  static inline bool getStaticF_s_asyncDebuggingEnabled();

  static inline ::System::Func_1<::System::Threading::Tasks::Task_ContingentProperties*>* getStaticF_s_createContingentProperties();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Threading::Tasks::Task*>* getStaticF_s_currentActiveTasks();

  static inline ::System::Threading::ContextCallback* getStaticF_s_ecCallback();

  static inline ::System::Action_1<::System::Object*>* getStaticF_s_taskCancelCallback();

  static inline ::System::Object* getStaticF_s_taskCompletionSentinel();

  static inline int32_t getStaticF_s_taskIdCounter();

  static inline ::System::Threading::Tasks::Task* getStaticF_t_currentTask();

  static inline ::System::Threading::Tasks::StackGuard* getStaticF_t_stackGuard();

  /// @brief Method get_AsyncState, addr 0x3e62994, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_AsyncState();

  /// @brief Method get_CancellationToken, addr 0x3e5eef8, size 0x24, virtual false, abstract: false, final false
  inline ::System::Threading::CancellationToken get_CancellationToken();

  /// @brief Method get_CapturedContext, addr 0x3e62acc, size 0x70, virtual false, abstract: false, final false
  inline ::System::Threading::ExecutionContext* get_CapturedContext();

  /// @brief Method get_CompletedEvent, addr 0x3e6289c, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::ManualResetEventSlim* get_CompletedEvent();

  /// @brief Method get_CompletedTask, addr 0x3e62a04, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* get_CompletedTask();

  /// @brief Method get_CreationOptions, addr 0x3e60ed4, size 0x14, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::TaskCreationOptions get_CreationOptions();

  /// @brief Method get_CurrentStackGuard, addr 0x3e62388, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::StackGuard* get_CurrentStackGuard();

  /// @brief Method get_Exception, addr 0x3e6243c, size 0x3c, virtual false, abstract: false, final false
  inline ::System::AggregateException* get_Exception();

  /// @brief Method get_ExceptionRecorded, addr 0x3e62a5c, size 0x54, virtual false, abstract: false, final false
  inline bool get_ExceptionRecorded();

  /// @brief Method get_ExecutingTaskScheduler, addr 0x3e629a4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::TaskScheduler* get_ExecutingTaskScheduler();

  /// @brief Method get_Factory, addr 0x3e629ac, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::TaskFactory* get_Factory();

  /// @brief Method get_Id, addr 0x3e60708, size 0x90, virtual false, abstract: false, final false
  inline int32_t get_Id();

  /// @brief Method get_InternalCurrent, addr 0x3e62294, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* get_InternalCurrent();

  /// @brief Method get_IsCanceled, addr 0x3e6263c, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsCanceled();

  /// @brief Method get_IsCancellationAcknowledged, addr 0x3e627c8, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsCancellationAcknowledged();

  /// @brief Method get_IsCancellationRequested, addr 0x3e6265c, size 0x90, virtual false, abstract: false, final false
  inline bool get_IsCancellationRequested();

  /// @brief Method get_IsCompleted, addr 0x3e5f188, size 0x64, virtual true, abstract: false, final true
  inline bool get_IsCompleted();

  /// @brief Method get_IsCompletedSuccessfully, addr 0x3e627f0, size 0x28, virtual false, abstract: false, final false
  inline bool get_IsCompletedSuccessfully();

  /// @brief Method get_IsDelegateInvoked, addr 0x3e6337c, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsDelegateInvoked();

  /// @brief Method get_IsExceptionObservedByParent, addr 0x3e63364, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsExceptionObservedByParent();

  /// @brief Method get_IsFaulted, addr 0x3e62478, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsFaulted();

  /// @brief Method get_IsWaitNotificationEnabled, addr 0x3e61e58, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsWaitNotificationEnabled();

  /// @brief Method get_IsWaitNotificationEnabledOrNotRanToCompletion, addr 0x3e61f34, size 0x28, virtual false, abstract: false, final false
  inline bool get_IsWaitNotificationEnabledOrNotRanToCompletion();

  /// @brief Method get_Options, addr 0x3e612fc, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::TaskCreationOptions get_Options();

  /// @brief Method get_ShouldNotifyDebuggerOfWaitCompletion, addr 0x3e61f5c, size 0x18, virtual true, abstract: false, final false
  inline bool get_ShouldNotifyDebuggerOfWaitCompletion();

  /// @brief Method get_Status, addr 0x3e625dc, size 0x60, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::TaskStatus get_Status();

  /// @brief Convert to "::System::IAsyncResult"
  constexpr ::System::IAsyncResult* i___System__IAsyncResult() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::System::Threading::IThreadPoolWorkItem"
  constexpr ::System::Threading::IThreadPoolWorkItem* i___System__Threading__IThreadPoolWorkItem() noexcept;

  static inline void setStaticF__CompletedTask_k__BackingField(::System::Threading::Tasks::Task* value);

  static inline void setStaticF__Factory_k__BackingField(::System::Threading::Tasks::TaskFactory* value);

  static inline void setStaticF_s_IsExceptionObservedByParentPredicate(::System::Predicate_1<::System::Threading::Tasks::Task*>* value);

  static inline void setStaticF_s_IsTaskContinuationNullPredicate(::System::Predicate_1<::System::Object*>* value);

  static inline void setStaticF_s_activeTasksLock(::System::Object* value);

  static inline void setStaticF_s_asyncDebuggingEnabled(bool value);

  static inline void setStaticF_s_createContingentProperties(::System::Func_1<::System::Threading::Tasks::Task_ContingentProperties*>* value);

  static inline void setStaticF_s_currentActiveTasks(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Threading::Tasks::Task*>* value);

  static inline void setStaticF_s_ecCallback(::System::Threading::ContextCallback* value);

  static inline void setStaticF_s_taskCancelCallback(::System::Action_1<::System::Object*>* value);

  static inline void setStaticF_s_taskCompletionSentinel(::System::Object* value);

  static inline void setStaticF_s_taskIdCounter(int32_t value);

  static inline void setStaticF_t_currentTask(::System::Threading::Tasks::Task* value);

  static inline void setStaticF_t_stackGuard(::System::Threading::Tasks::StackGuard* value);

  /// @brief Method set_CapturedContext, addr 0x3e61224, size 0x98, virtual false, abstract: false, final false
  inline void set_CapturedContext(::System::Threading::ExecutionContext* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Task();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Task", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Task(Task&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Task", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Task(Task const&) = delete;

  /// @brief Field CANCELLATION_REQUESTED offset 0xffffffff size 0x4
  static constexpr int32_t CANCELLATION_REQUESTED{ static_cast<int32_t>(0x1) };

  /// @brief Field OptionsMask offset 0xffffffff size 0x4
  static constexpr int32_t OptionsMask{ static_cast<int32_t>(0xffff) };

  /// @brief Field TASK_STATE_CANCELED offset 0xffffffff size 0x4
  static constexpr int32_t TASK_STATE_CANCELED{ static_cast<int32_t>(0x400000) };

  /// @brief Field TASK_STATE_CANCELLATIONACKNOWLEDGED offset 0xffffffff size 0x4
  static constexpr int32_t TASK_STATE_CANCELLATIONACKNOWLEDGED{ static_cast<int32_t>(0x100000) };

  /// @brief Field TASK_STATE_COMPLETED_MASK offset 0xffffffff size 0x4
  static constexpr int32_t TASK_STATE_COMPLETED_MASK{ static_cast<int32_t>(0x1600000) };

  /// @brief Field TASK_STATE_COMPLETION_RESERVED offset 0xffffffff size 0x4
  static constexpr int32_t TASK_STATE_COMPLETION_RESERVED{ static_cast<int32_t>(0x4000000) };

  /// @brief Field TASK_STATE_DELEGATE_INVOKED offset 0xffffffff size 0x4
  static constexpr int32_t TASK_STATE_DELEGATE_INVOKED{ static_cast<int32_t>(0x20000) };

  /// @brief Field TASK_STATE_DISPOSED offset 0xffffffff size 0x4
  static constexpr int32_t TASK_STATE_DISPOSED{ static_cast<int32_t>(0x40000) };

  /// @brief Field TASK_STATE_EXCEPTIONOBSERVEDBYPARENT offset 0xffffffff size 0x4
  static constexpr int32_t TASK_STATE_EXCEPTIONOBSERVEDBYPARENT{ static_cast<int32_t>(0x80000) };

  /// @brief Field TASK_STATE_FAULTED offset 0xffffffff size 0x4
  static constexpr int32_t TASK_STATE_FAULTED{ static_cast<int32_t>(0x200000) };

  /// @brief Field TASK_STATE_RAN_TO_COMPLETION offset 0xffffffff size 0x4
  static constexpr int32_t TASK_STATE_RAN_TO_COMPLETION{ static_cast<int32_t>(0x1000000) };

  /// @brief Field TASK_STATE_STARTED offset 0xffffffff size 0x4
  static constexpr int32_t TASK_STATE_STARTED{ static_cast<int32_t>(0x10000) };

  /// @brief Field TASK_STATE_THREAD_WAS_ABORTED offset 0xffffffff size 0x4
  static constexpr int32_t TASK_STATE_THREAD_WAS_ABORTED{ static_cast<int32_t>(0x8000000) };

  /// @brief Field TASK_STATE_WAITINGFORACTIVATION offset 0xffffffff size 0x4
  static constexpr int32_t TASK_STATE_WAITINGFORACTIVATION{ static_cast<int32_t>(0x2000000) };

  /// @brief Field TASK_STATE_WAITING_ON_CHILDREN offset 0xffffffff size 0x4
  static constexpr int32_t TASK_STATE_WAITING_ON_CHILDREN{ static_cast<int32_t>(0x800000) };

  /// @brief Field TASK_STATE_WAIT_COMPLETION_NOTIFICATION offset 0xffffffff size 0x4
  static constexpr int32_t TASK_STATE_WAIT_COMPLETION_NOTIFICATION{ static_cast<int32_t>(0x10000000) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2790 };

  /// @brief Field m_taskId, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_taskId;

  /// @brief Field m_action, offset: 0x18, size: 0x8, def value: None
  ::System::Delegate* ___m_action;

  /// @brief Field m_stateObject, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___m_stateObject;

  /// @brief Field m_taskScheduler, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskScheduler* ___m_taskScheduler;

  /// @brief Field m_parent, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___m_parent;

  /// @brief Field m_stateFlags, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_stateFlags;

  /// @brief Field m_continuationObject, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ___m_continuationObject;

  /// @brief Field m_contingentProperties, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_ContingentProperties* ___m_contingentProperties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Tasks::Task, ___m_taskId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::Task, ___m_action) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::Task, ___m_stateObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::Task, ___m_taskScheduler) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::Task, ___m_parent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::Task, ___m_stateFlags) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::Task, ___m_continuationObject) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::Task, ___m_contingentProperties) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::Task, 0x50>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::Task);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::Task*, "System.Threading.Tasks", "Task");
NEED_NO_BOX(::System::Threading::Tasks::Task_ContingentProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::Task_ContingentProperties*, "System.Threading.Tasks", "Task/ContingentProperties");
NEED_NO_BOX(::System::Threading::Tasks::Task_SetOnInvokeMres);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::Task_SetOnInvokeMres*, "System.Threading.Tasks", "Task/SetOnInvokeMres");
NEED_NO_BOX(::System::Threading::Tasks::Task___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::Task___c*, "System.Threading.Tasks", "Task/<>c");
