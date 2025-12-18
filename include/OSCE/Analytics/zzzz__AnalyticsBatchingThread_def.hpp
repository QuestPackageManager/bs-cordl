#pragma once
// IWYU pragma private; include "OSCE/Analytics/AnalyticsBatchingThread.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnalyticsBatchingThread)
namespace OSCE::Analytics {
struct AnalyticsBatchingThread__ThreadedBatchSender_d__23;
}
namespace OSCE::Analytics {
class AnalyticsManager;
}
namespace OSCE::Analytics {
class BaseAnalyticsEvent;
}
namespace OSCE::Analytics {
class LoggerAnalyticsBatch;
}
namespace System::Collections::Concurrent {
template <typename T> class ConcurrentQueue_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
class AutoResetEvent;
}
namespace System::Threading {
class Thread;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OSCE::Analytics {
class AnalyticsBatchingThread;
}
namespace OSCE::Analytics {
struct AnalyticsBatchingThread__ThreadedBatchSender_d__23;
}
// Write type traits
MARK_REF_PTR_T(::OSCE::Analytics::AnalyticsBatchingThread);
MARK_VAL_T(::OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace OSCE::Analytics {
// Is value type: true
// CS Name: OSCE.Analytics.AnalyticsBatchingThread/<ThreadedBatchSender>d__23
struct CORDL_TYPE AnalyticsBatchingThread__ThreadedBatchSender_d__23 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d8df10, size 0x388, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d8e298, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnalyticsBatchingThread__ThreadedBatchSender_d__23();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::OSCE::Analytics::AnalyticsBatchingThread*", modifiers: "",
  // def_value: None }]
  constexpr AnalyticsBatchingThread__ThreadedBatchSender_d__23(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                               ::OSCE::Analytics::AnalyticsBatchingThread* __4__this) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21717 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::OSCE::Analytics::AnalyticsBatchingThread* __4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23, __4__this) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23, 0x30>, "Size mismatch!");

} // namespace OSCE::Analytics
// Dependencies System.Object
namespace OSCE::Analytics {
// Is value type: false
// CS Name: OSCE.Analytics.AnalyticsBatchingThread
class CORDL_TYPE AnalyticsBatchingThread : public ::System::Object {
public:
  // Declarations
  using _ThreadedBatchSender_d__23 = ::OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23;

  __declspec(property(get = get_TimeOfLastSend)) int32_t TimeOfLastSend;

  /// @brief Field _activeSends, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__activeSends, put = __cordl_internal_set__activeSends)) int32_t _activeSends;

  /// @brief Field _batchSendWaitEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__batchSendWaitEvent, put = __cordl_internal_set__batchSendWaitEvent)) ::System::Threading::AutoResetEvent* _batchSendWaitEvent;

  /// @brief Field _batchingThread, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__batchingThread, put = __cordl_internal_set__batchingThread)) ::System::Threading::Thread* _batchingThread;

  /// @brief Field _failedBatchesToRetry, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__failedBatchesToRetry,
                      put = __cordl_internal_set__failedBatchesToRetry)) ::System::Collections::Generic::Queue_1<::OSCE::Analytics::LoggerAnalyticsBatch*>* _failedBatchesToRetry;

  /// @brief Field _isThreadActive, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__isThreadActive, put = __cordl_internal_set__isThreadActive)) bool _isThreadActive;

  /// @brief Field _lock, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__lock, put = __cordl_internal_set__lock)) ::System::Object* _lock;

  /// @brief Field _manager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__manager, put = __cordl_internal_set__manager)) ::UnityW<::OSCE::Analytics::AnalyticsManager> _manager;

  /// @brief Field _newBatchesToSend, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__newBatchesToSend,
                      put = __cordl_internal_set__newBatchesToSend)) ::System::Collections::Generic::Queue_1<::OSCE::Analytics::LoggerAnalyticsBatch*>* _newBatchesToSend;

  /// @brief Field _timeOfLastBatchSend, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__timeOfLastBatchSend, put = __cordl_internal_set__timeOfLastBatchSend)) int32_t _timeOfLastBatchSend;

  /// @brief Field _unsentThreadedEvents, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__unsentThreadedEvents,
                      put = __cordl_internal_set__unsentThreadedEvents)) ::System::Collections::Concurrent::ConcurrentQueue_1<::OSCE::Analytics::BaseAnalyticsEvent*>* _unsentThreadedEvents;

  /// @brief Method BatchSent, addr 0x5d8d8ac, size 0xb8, virtual false, abstract: false, final false
  inline void BatchSent();

  /// @brief Method CollectThreadedMessagesIntoBatch, addr 0x5d8dba0, size 0x24c, virtual false, abstract: false, final false
  inline ::OSCE::Analytics::LoggerAnalyticsBatch* CollectThreadedMessagesIntoBatch(::OSCE::Analytics::LoggerAnalyticsBatch* batchToSend);

  /// @brief Method FlushToSingleBatch, addr 0x5d8d718, size 0x144, virtual false, abstract: false, final false
  inline ::OSCE::Analytics::LoggerAnalyticsBatch* FlushToSingleBatch(::OSCE::Analytics::LoggerAnalyticsBatch* batch);

  /// @brief Method GetActiveSends, addr 0x5d8c6f0, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetActiveSends();

  /// @brief Method IsBatchQueueEmpty, addr 0x5d8c7a8, size 0x174, virtual false, abstract: false, final false
  inline bool IsBatchQueueEmpty();

  static inline ::OSCE::Analytics::AnalyticsBatchingThread* New_ctor(::OSCE::Analytics::AnalyticsManager* manager);

  /// @brief Method OnBatchAttempted, addr 0x5d8d488, size 0xb8, virtual false, abstract: false, final false
  inline void OnBatchAttempted();

  /// @brief Method QueueBatch, addr 0x5d8c3fc, size 0x140, virtual false, abstract: false, final false
  inline void QueueBatch(::OSCE::Analytics::LoggerAnalyticsBatch* batch);

  /// @brief Method QueueThreadedMessage, addr 0x5d8daa4, size 0x64, virtual false, abstract: false, final false
  inline void QueueThreadedMessage(::OSCE::Analytics::BaseAnalyticsEvent* newEvent);

  /// @brief Method SendBatchFromThread, addr 0x5d8ddec, size 0x124, virtual false, abstract: false, final false
  inline void SendBatchFromThread(::OSCE::Analytics::LoggerAnalyticsBatch* batchToSend, bool shouldFlush);

  /// @brief Method Shutdown, addr 0x5d8cab0, size 0x44, virtual false, abstract: false, final false
  inline void Shutdown();

  /// @brief Method ThreadedBatchSender, addr 0x5d8db08, size 0x98, virtual false, abstract: false, final false
  inline void ThreadedBatchSender();

  /// @brief Method TriggerAsyncSend, addr 0x5d8c91c, size 0x70, virtual false, abstract: false, final false
  inline void TriggerAsyncSend();

  /// @brief Method TriggerImmediateSend, addr 0x5d8d558, size 0x1c0, virtual false, abstract: false, final false
  inline void TriggerImmediateSend();

  constexpr int32_t const& __cordl_internal_get__activeSends() const;

  constexpr int32_t& __cordl_internal_get__activeSends();

  constexpr ::System::Threading::AutoResetEvent* const& __cordl_internal_get__batchSendWaitEvent() const;

  constexpr ::System::Threading::AutoResetEvent*& __cordl_internal_get__batchSendWaitEvent();

  constexpr ::System::Threading::Thread* const& __cordl_internal_get__batchingThread() const;

  constexpr ::System::Threading::Thread*& __cordl_internal_get__batchingThread();

  constexpr ::System::Collections::Generic::Queue_1<::OSCE::Analytics::LoggerAnalyticsBatch*>* const& __cordl_internal_get__failedBatchesToRetry() const;

  constexpr ::System::Collections::Generic::Queue_1<::OSCE::Analytics::LoggerAnalyticsBatch*>*& __cordl_internal_get__failedBatchesToRetry();

  constexpr bool const& __cordl_internal_get__isThreadActive() const;

  constexpr bool& __cordl_internal_get__isThreadActive();

  constexpr ::System::Object* const& __cordl_internal_get__lock() const;

  constexpr ::System::Object*& __cordl_internal_get__lock();

  constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& __cordl_internal_get__manager() const;

  constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& __cordl_internal_get__manager();

  constexpr ::System::Collections::Generic::Queue_1<::OSCE::Analytics::LoggerAnalyticsBatch*>* const& __cordl_internal_get__newBatchesToSend() const;

  constexpr ::System::Collections::Generic::Queue_1<::OSCE::Analytics::LoggerAnalyticsBatch*>*& __cordl_internal_get__newBatchesToSend();

  constexpr int32_t const& __cordl_internal_get__timeOfLastBatchSend() const;

  constexpr int32_t& __cordl_internal_get__timeOfLastBatchSend();

  constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::OSCE::Analytics::BaseAnalyticsEvent*>* const& __cordl_internal_get__unsentThreadedEvents() const;

  constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::OSCE::Analytics::BaseAnalyticsEvent*>*& __cordl_internal_get__unsentThreadedEvents();

  constexpr void __cordl_internal_set__activeSends(int32_t value);

  constexpr void __cordl_internal_set__batchSendWaitEvent(::System::Threading::AutoResetEvent* value);

  constexpr void __cordl_internal_set__batchingThread(::System::Threading::Thread* value);

  constexpr void __cordl_internal_set__failedBatchesToRetry(::System::Collections::Generic::Queue_1<::OSCE::Analytics::LoggerAnalyticsBatch*>* value);

  constexpr void __cordl_internal_set__isThreadActive(bool value);

  constexpr void __cordl_internal_set__lock(::System::Object* value);

  constexpr void __cordl_internal_set__manager(::UnityW<::OSCE::Analytics::AnalyticsManager> value);

  constexpr void __cordl_internal_set__newBatchesToSend(::System::Collections::Generic::Queue_1<::OSCE::Analytics::LoggerAnalyticsBatch*>* value);

  constexpr void __cordl_internal_set__timeOfLastBatchSend(int32_t value);

  constexpr void __cordl_internal_set__unsentThreadedEvents(::System::Collections::Concurrent::ConcurrentQueue_1<::OSCE::Analytics::BaseAnalyticsEvent*>* value);

  /// @brief Method .ctor, addr 0x5d8b928, size 0x1dc, virtual false, abstract: false, final false
  inline void _ctor(::OSCE::Analytics::AnalyticsManager* manager);

  /// @brief Method get_TimeOfLastSend, addr 0x5d8d550, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TimeOfLastSend();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnalyticsBatchingThread();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnalyticsBatchingThread", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnalyticsBatchingThread(AnalyticsBatchingThread&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnalyticsBatchingThread", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnalyticsBatchingThread(AnalyticsBatchingThread const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21718 };

  /// @brief Field _lock, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____lock;

  /// @brief Field _batchingThread, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Thread* ____batchingThread;

  /// @brief Field _manager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::OSCE::Analytics::AnalyticsManager> ____manager;

  /// @brief Field _batchSendWaitEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::AutoResetEvent* ____batchSendWaitEvent;

  /// @brief Field _newBatchesToSend, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::OSCE::Analytics::LoggerAnalyticsBatch*>* ____newBatchesToSend;

  /// @brief Field _failedBatchesToRetry, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::OSCE::Analytics::LoggerAnalyticsBatch*>* ____failedBatchesToRetry;

  /// @brief Field _unsentThreadedEvents, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentQueue_1<::OSCE::Analytics::BaseAnalyticsEvent*>* ____unsentThreadedEvents;

  /// @brief Field _activeSends, offset: 0x48, size: 0x4, def value: None
  int32_t ____activeSends;

  /// @brief Field _timeOfLastBatchSend, offset: 0x4c, size: 0x4, def value: None
  int32_t ____timeOfLastBatchSend;

  /// @brief Field _isThreadActive, offset: 0x50, size: 0x1, def value: None
  bool ____isThreadActive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Analytics::AnalyticsBatchingThread, ____lock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsBatchingThread, ____batchingThread) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsBatchingThread, ____manager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsBatchingThread, ____batchSendWaitEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsBatchingThread, ____newBatchesToSend) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsBatchingThread, ____failedBatchesToRetry) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsBatchingThread, ____unsentThreadedEvents) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsBatchingThread, ____activeSends) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsBatchingThread, ____timeOfLastBatchSend) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsBatchingThread, ____isThreadActive) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Analytics::AnalyticsBatchingThread, 0x58>, "Size mismatch!");

} // namespace OSCE::Analytics
NEED_NO_BOX(::OSCE::Analytics::AnalyticsBatchingThread);
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Analytics::AnalyticsBatchingThread*, "OSCE.Analytics", "AnalyticsBatchingThread");
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23, "OSCE.Analytics", "AnalyticsBatchingThread/<ThreadedBatchSender>d__23");
