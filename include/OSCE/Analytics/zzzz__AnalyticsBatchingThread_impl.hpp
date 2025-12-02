#pragma once
// IWYU pragma private; include "OSCE/Analytics/AnalyticsBatchingThread.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsBatchingThread_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsBatchingThread_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
#include "OSCE/Analytics/zzzz__BaseAnalyticsEvent_def.hpp"
#include "OSCE/Analytics/zzzz__LoggerAnalyticsBatch_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__AutoResetEvent_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23::*)()>(
    &::OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5d27430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d277b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::OSCE::Analytics::AnalyticsBatchingThread*", modifiers:
// "", def_value: Some("{}") }]
constexpr ::OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23::AnalyticsBatchingThread__ThreadedBatchSender_d__23(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::OSCE::Analytics::AnalyticsBatchingThread* __4__this) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
}
// Ctor Parameters []
constexpr ::OSCE::Analytics::AnalyticsBatchingThread__ThreadedBatchSender_d__23::AnalyticsBatchingThread__ThreadedBatchSender_d__23() {}
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsBatchingThread.get_TimeOfLastSend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OSCE::Analytics::AnalyticsBatchingThread::*)()>(
    &::OSCE::Analytics::AnalyticsBatchingThread::get_TimeOfLastSend)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d26a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(),
                                                                               "get_TimeOfLastSend", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsBatchingThread._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsBatchingThread::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::OSCE::Analytics::AnalyticsBatchingThread::_ctor)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5d24e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsBatchingThread.Shutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsBatchingThread::*)()>(&::OSCE::Analytics::AnalyticsBatchingThread::Shutdown)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d25fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(), "Shutdown",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsBatchingThread.TriggerAsyncSend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsBatchingThread::*)()>(
    &::OSCE::Analytics::AnalyticsBatchingThread::TriggerAsyncSend)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d25e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(),
                                                                               "TriggerAsyncSend", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsBatchingThread.TriggerImmediateSend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsBatchingThread::*)()>(
    &::OSCE::Analytics::AnalyticsBatchingThread::TriggerImmediateSend)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5d26a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(),
                                                                               "TriggerImmediateSend", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsBatchingThread.GetActiveSends
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OSCE::Analytics::AnalyticsBatchingThread::*)()>(
    &::OSCE::Analytics::AnalyticsBatchingThread::GetActiveSends)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d25c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(),
                                                                               "GetActiveSends", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsBatchingThread.IsBatchQueueEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OSCE::Analytics::AnalyticsBatchingThread::*)()>(
    &::OSCE::Analytics::AnalyticsBatchingThread::IsBatchQueueEmpty)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5d25cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(),
                                                                               "IsBatchQueueEmpty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsBatchingThread.BatchSent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsBatchingThread::*)()>(&::OSCE::Analytics::AnalyticsBatchingThread::BatchSent)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d26dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(), "BatchSent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsBatchingThread.OnBatchAttempted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsBatchingThread::*)()>(
    &::OSCE::Analytics::AnalyticsBatchingThread::OnBatchAttempted)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d269a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(),
                                                                               "OnBatchAttempted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsBatchingThread.QueueBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsBatchingThread::*)(::OSCE::Analytics::LoggerAnalyticsBatch*)>(
    &::OSCE::Analytics::AnalyticsBatchingThread::QueueBatch)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5d2591c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(), "QueueBatch", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::LoggerAnalyticsBatch*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsBatchingThread.FlushToSingleBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OSCE::Analytics::LoggerAnalyticsBatch* (
    ::OSCE::Analytics::AnalyticsBatchingThread::*)(::OSCE::Analytics::LoggerAnalyticsBatch*)>(&::OSCE::Analytics::AnalyticsBatchingThread::FlushToSingleBatch)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5d26c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(), "FlushToSingleBatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::LoggerAnalyticsBatch*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsBatchingThread.QueueThreadedMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsBatchingThread::*)(::OSCE::Analytics::BaseAnalyticsEvent*)>(
    &::OSCE::Analytics::AnalyticsBatchingThread::QueueThreadedMessage)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5d26fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(), "QueueThreadedMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::BaseAnalyticsEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsBatchingThread.ThreadedBatchSender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsBatchingThread::*)()>(
    &::OSCE::Analytics::AnalyticsBatchingThread::ThreadedBatchSender)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d27028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(),
                                                                               "ThreadedBatchSender", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsBatchingThread.CollectThreadedMessagesIntoBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OSCE::Analytics::LoggerAnalyticsBatch* (
    ::OSCE::Analytics::AnalyticsBatchingThread::*)(::OSCE::Analytics::LoggerAnalyticsBatch*)>(&::OSCE::Analytics::AnalyticsBatchingThread::CollectThreadedMessagesIntoBatch)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5d270c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(), "CollectThreadedMessagesIntoBatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::LoggerAnalyticsBatch*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsBatchingThread.SendBatchFromThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsBatchingThread::*)(::OSCE::Analytics::LoggerAnalyticsBatch*, bool)>(
    &::OSCE::Analytics::AnalyticsBatchingThread::SendBatchFromThread)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5d2730c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(), "SendBatchFromThread", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::LoggerAnalyticsBatch*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_get__lock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
constexpr ::System::Object* const& OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_get__lock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
constexpr void OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_set__lock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Thread*& OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_get__batchingThread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____batchingThread;
}
constexpr ::System::Threading::Thread* const& OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_get__batchingThread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____batchingThread;
}
constexpr void OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_set__batchingThread(::System::Threading::Thread* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____batchingThread)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_get__manager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____manager;
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_get__manager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____manager;
}
constexpr void OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_set__manager(::UnityW<::OSCE::Analytics::AnalyticsManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____manager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::AutoResetEvent*& OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_get__batchSendWaitEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____batchSendWaitEvent;
}
constexpr ::System::Threading::AutoResetEvent* const& OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_get__batchSendWaitEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____batchSendWaitEvent;
}
constexpr void OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_set__batchSendWaitEvent(::System::Threading::AutoResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____batchSendWaitEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::OSCE::Analytics::LoggerAnalyticsBatch*>*& OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_get__newBatchesToSend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newBatchesToSend;
}
constexpr ::System::Collections::Generic::Queue_1<::OSCE::Analytics::LoggerAnalyticsBatch*>* const& OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_get__newBatchesToSend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newBatchesToSend;
}
constexpr void OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_set__newBatchesToSend(::System::Collections::Generic::Queue_1<::OSCE::Analytics::LoggerAnalyticsBatch*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____newBatchesToSend)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::OSCE::Analytics::LoggerAnalyticsBatch*>*& OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_get__failedBatchesToRetry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedBatchesToRetry;
}
constexpr ::System::Collections::Generic::Queue_1<::OSCE::Analytics::LoggerAnalyticsBatch*>* const& OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_get__failedBatchesToRetry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedBatchesToRetry;
}
constexpr void OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_set__failedBatchesToRetry(::System::Collections::Generic::Queue_1<::OSCE::Analytics::LoggerAnalyticsBatch*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____failedBatchesToRetry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::OSCE::Analytics::BaseAnalyticsEvent*>*& OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_get__unsentThreadedEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unsentThreadedEvents;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::OSCE::Analytics::BaseAnalyticsEvent*>* const&
OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_get__unsentThreadedEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unsentThreadedEvents;
}
constexpr void
OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_set__unsentThreadedEvents(::System::Collections::Concurrent::ConcurrentQueue_1<::OSCE::Analytics::BaseAnalyticsEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unsentThreadedEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_get__activeSends() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeSends;
}
constexpr int32_t const& OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_get__activeSends() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeSends;
}
constexpr void OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_set__activeSends(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeSends = value;
}
constexpr int32_t& OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_get__timeOfLastBatchSend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeOfLastBatchSend;
}
constexpr int32_t const& OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_get__timeOfLastBatchSend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeOfLastBatchSend;
}
constexpr void OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_set__timeOfLastBatchSend(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeOfLastBatchSend = value;
}
constexpr bool& OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_get__isThreadActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isThreadActive;
}
constexpr bool const& OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_get__isThreadActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isThreadActive;
}
constexpr void OSCE::Analytics::AnalyticsBatchingThread::__cordl_internal_set__isThreadActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isThreadActive = value;
}
inline int32_t OSCE::Analytics::AnalyticsBatchingThread::get_TimeOfLastSend() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(),
                                                                             "get_TimeOfLastSend", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsBatchingThread::_ctor(::OSCE::Analytics::AnalyticsManager* manager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager);
}
inline void OSCE::Analytics::AnalyticsBatchingThread::Shutdown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(), "Shutdown",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsBatchingThread::TriggerAsyncSend() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(),
                                                                             "TriggerAsyncSend", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsBatchingThread::TriggerImmediateSend() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(),
                                                                             "TriggerImmediateSend", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t OSCE::Analytics::AnalyticsBatchingThread::GetActiveSends() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(),
                                                                             "GetActiveSends", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool OSCE::Analytics::AnalyticsBatchingThread::IsBatchQueueEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(),
                                                                             "IsBatchQueueEmpty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsBatchingThread::BatchSent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(), "BatchSent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsBatchingThread::OnBatchAttempted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(),
                                                                             "OnBatchAttempted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsBatchingThread::QueueBatch(::OSCE::Analytics::LoggerAnalyticsBatch* batch) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(), "QueueBatch", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::LoggerAnalyticsBatch*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, batch);
}
inline ::OSCE::Analytics::LoggerAnalyticsBatch* OSCE::Analytics::AnalyticsBatchingThread::FlushToSingleBatch(::OSCE::Analytics::LoggerAnalyticsBatch* batch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(), "FlushToSingleBatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::LoggerAnalyticsBatch*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OSCE::Analytics::LoggerAnalyticsBatch*, false>(this, ___internal_method, batch);
}
inline void OSCE::Analytics::AnalyticsBatchingThread::QueueThreadedMessage(::OSCE::Analytics::BaseAnalyticsEvent* newEvent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(), "QueueThreadedMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::BaseAnalyticsEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newEvent);
}
inline void OSCE::Analytics::AnalyticsBatchingThread::ThreadedBatchSender() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(),
                                                                             "ThreadedBatchSender", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OSCE::Analytics::LoggerAnalyticsBatch* OSCE::Analytics::AnalyticsBatchingThread::CollectThreadedMessagesIntoBatch(::OSCE::Analytics::LoggerAnalyticsBatch* batchToSend) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(), "CollectThreadedMessagesIntoBatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::LoggerAnalyticsBatch*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OSCE::Analytics::LoggerAnalyticsBatch*, false>(this, ___internal_method, batchToSend);
}
inline void OSCE::Analytics::AnalyticsBatchingThread::SendBatchFromThread(::OSCE::Analytics::LoggerAnalyticsBatch* batchToSend, bool shouldFlush) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsBatchingThread*>::get(), "SendBatchFromThread", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::LoggerAnalyticsBatch*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, batchToSend, shouldFlush);
}
inline ::OSCE::Analytics::AnalyticsBatchingThread* OSCE::Analytics::AnalyticsBatchingThread::New_ctor(::OSCE::Analytics::AnalyticsManager* manager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OSCE::Analytics::AnalyticsBatchingThread*>(manager));
}
// Ctor Parameters []
constexpr ::OSCE::Analytics::AnalyticsBatchingThread::AnalyticsBatchingThread() {}
