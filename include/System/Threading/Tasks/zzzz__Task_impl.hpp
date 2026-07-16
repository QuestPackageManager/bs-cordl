#pragma once
// IWYU pragma private; include "System/Threading/Tasks/Task.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Threading/zzzz__ManualResetEventSlim_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__LowLevelListWithIList_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Threading/Tasks/zzzz__InternalTaskOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__StackGuard_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuation_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskExceptionHolder_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskFactory_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskStatus_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_DelayPromise_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_WhenAllPromise_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_WhenAllPromise_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__ManualResetEventSlim_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
#include "System/Threading/zzzz__TimerCallback_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AggregateException_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__OperationCanceledException_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::Task_ContingentProperties.SetCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task_ContingentProperties::*)()>(&::System::Threading::Tasks::Task_ContingentProperties::SetCompleted)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cbe16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_ContingentProperties*>(), { "SetCompleted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task_ContingentProperties.UnregisterCancellationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task_ContingentProperties::*)()>(
    &::System::Threading::Tasks::Task_ContingentProperties::UnregisterCancellationCallback)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5cbe184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_ContingentProperties*>(), { "UnregisterCancellationCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task_ContingentProperties._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task_ContingentProperties::*)()>(&::System::Threading::Tasks::Task_ContingentProperties::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cbaba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_ContingentProperties*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::ExecutionContext*& System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_get_m_capturedContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_capturedContext;
}
constexpr ::System::Threading::ExecutionContext* const& System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_get_m_capturedContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_capturedContext;
}
constexpr void System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_set_m_capturedContext(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_capturedContext = value;
}
constexpr ::System::Threading::ManualResetEventSlim*& System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_get_m_completionEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_completionEvent;
}
constexpr ::System::Threading::ManualResetEventSlim* const& System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_get_m_completionEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_completionEvent;
}
constexpr void System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_set_m_completionEvent(::System::Threading::ManualResetEventSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_completionEvent = value;
}
constexpr ::System::Threading::Tasks::TaskExceptionHolder*& System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_get_m_exceptionsHolder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_exceptionsHolder;
}
constexpr ::System::Threading::Tasks::TaskExceptionHolder* const& System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_get_m_exceptionsHolder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_exceptionsHolder;
}
constexpr void System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_set_m_exceptionsHolder(::System::Threading::Tasks::TaskExceptionHolder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_exceptionsHolder = value;
}
constexpr ::System::Threading::CancellationToken& System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_get_m_cancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_get_m_cancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cancellationToken;
}
constexpr void System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_set_m_cancellationToken(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_cancellationToken = value;
}
constexpr ::System::Object*& System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_get_m_cancellationRegistration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cancellationRegistration;
}
constexpr ::System::Object* const& System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_get_m_cancellationRegistration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cancellationRegistration;
}
constexpr void System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_set_m_cancellationRegistration(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_cancellationRegistration = value;
}
constexpr int32_t& System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_get_m_internalCancellationRequested() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_internalCancellationRequested;
}
constexpr int32_t const& System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_get_m_internalCancellationRequested() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_internalCancellationRequested;
}
constexpr void System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_set_m_internalCancellationRequested(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_internalCancellationRequested = value;
}
constexpr int32_t& System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_get_m_completionCountdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_completionCountdown;
}
constexpr int32_t const& System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_get_m_completionCountdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_completionCountdown;
}
constexpr void System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_set_m_completionCountdown(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_completionCountdown = value;
}
constexpr ::System::Collections::Generic::LowLevelListWithIList_1<::System::Threading::Tasks::Task*>*&
System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_get_m_exceptionalChildren() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_exceptionalChildren;
}
constexpr ::System::Collections::Generic::LowLevelListWithIList_1<::System::Threading::Tasks::Task*>* const&
System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_get_m_exceptionalChildren() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_exceptionalChildren;
}
constexpr void
System::Threading::Tasks::Task_ContingentProperties::__cordl_internal_set_m_exceptionalChildren(::System::Collections::Generic::LowLevelListWithIList_1<::System::Threading::Tasks::Task*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_exceptionalChildren = value;
}
inline void System::Threading::Tasks::Task_ContingentProperties::SetCompleted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_ContingentProperties*>(), { "SetCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task_ContingentProperties::UnregisterCancellationCallback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_ContingentProperties*>(), { "UnregisterCancellationCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task_ContingentProperties::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_ContingentProperties*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_ContingentProperties* System::Threading::Tasks::Task_ContingentProperties::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::Task_ContingentProperties*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::Task_ContingentProperties::Task_ContingentProperties() {}
//  Writing Method size for method: ::System::Threading::Tasks::Task_SetOnInvokeMres._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task_SetOnInvokeMres::*)()>(&::System::Threading::Tasks::Task_SetOnInvokeMres::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5cbff1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_SetOnInvokeMres*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task_SetOnInvokeMres.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task_SetOnInvokeMres::*)(::System::Threading::Tasks::Task*)>(
    &::System::Threading::Tasks::Task_SetOnInvokeMres::Invoke)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc3574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_SetOnInvokeMres*>(), { "Invoke", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task_SetOnInvokeMres.get_InvokeMayRunArbitraryCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task_SetOnInvokeMres::*)()>(
    &::System::Threading::Tasks::Task_SetOnInvokeMres::get_InvokeMayRunArbitraryCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc357c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_SetOnInvokeMres*>(), { "get_InvokeMayRunArbitraryCode", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::Task_SetOnInvokeMres::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_SetOnInvokeMres*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task_SetOnInvokeMres::Invoke(::System::Threading::Tasks::Task* completingTask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_SetOnInvokeMres*>(), { "Invoke", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, completingTask);
}
inline bool System::Threading::Tasks::Task_SetOnInvokeMres::get_InvokeMayRunArbitraryCode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_SetOnInvokeMres*>(), { "get_InvokeMayRunArbitraryCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_SetOnInvokeMres* System::Threading::Tasks::Task_SetOnInvokeMres::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::Task_SetOnInvokeMres*>());
}
/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr System::Threading::Tasks::Task_SetOnInvokeMres::operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept {
  return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr ::System::Threading::Tasks::ITaskCompletionAction* System::Threading::Tasks::Task_SetOnInvokeMres::i___System__Threading__Tasks__ITaskCompletionAction() noexcept {
  return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::Task_SetOnInvokeMres::Task_SetOnInvokeMres() {}
//  Writing Method size for method: ::System::Threading::Tasks::Task___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task___c::*)()>(&::System::Threading::Tasks::Task___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cc3b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task___c._Delay_b__247_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task___c::*)(::System::Object*)>(&::System::Threading::Tasks::Task___c::_Delay_b__247_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5cc3b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task___c*>(), { "<Delay>b__247_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task___c._Delay_b__247_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task___c::*)(::System::Object*)>(&::System::Threading::Tasks::Task___c::_Delay_b__247_1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5cc3b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task___c*>(), { "<Delay>b__247_1", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task___c.__cctor_b__271_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_ContingentProperties* (::System::Threading::Tasks::Task___c::*)()>(
    &::System::Threading::Tasks::Task___c::__cctor_b__271_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5cc3be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task___c*>(), { "<.cctor>b__271_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task___c.__cctor_b__271_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task___c::*)(::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::Task___c::__cctor_b__271_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cc3c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task___c*>(), { "<.cctor>b__271_1", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task___c.__cctor_b__271_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task___c::*)(::System::Object*)>(&::System::Threading::Tasks::Task___c::__cctor_b__271_2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cc3c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task___c*>(), { "<.cctor>b__271_2", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::Task___c::setStaticF___9(::System::Threading::Tasks::Task___c* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task___c*, "<>9", ::System::Threading::Tasks::Task___c*>(std::forward<::System::Threading::Tasks::Task___c*>(value));
}
inline ::System::Threading::Tasks::Task___c* System::Threading::Tasks::Task___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task___c*, "<>9", ::System::Threading::Tasks::Task___c*>();
}
inline void System::Threading::Tasks::Task___c::setStaticF___9__247_0(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__247_0", ::System::Threading::Tasks::Task___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Threading::Tasks::Task___c::getStaticF___9__247_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__247_0", ::System::Threading::Tasks::Task___c*>();
}
inline void System::Threading::Tasks::Task___c::setStaticF___9__247_1(::System::Threading::TimerCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::TimerCallback*, "<>9__247_1", ::System::Threading::Tasks::Task___c*>(std::forward<::System::Threading::TimerCallback*>(value));
}
inline ::System::Threading::TimerCallback* System::Threading::Tasks::Task___c::getStaticF___9__247_1() {
  return ::cordl_internals::getStaticField<::System::Threading::TimerCallback*, "<>9__247_1", ::System::Threading::Tasks::Task___c*>();
}
inline void System::Threading::Tasks::Task___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task___c::_Delay_b__247_0(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task___c*>(), { "<Delay>b__247_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void System::Threading::Tasks::Task___c::_Delay_b__247_1(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task___c*>(), { "<Delay>b__247_1", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::System::Threading::Tasks::Task_ContingentProperties* System::Threading::Tasks::Task___c::__cctor_b__271_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task___c*>(), { "<.cctor>b__271_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_ContingentProperties*>(this, ___internal_method);
}
inline bool System::Threading::Tasks::Task___c::__cctor_b__271_1(::System::Threading::Tasks::Task* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task___c*>(), { "<.cctor>b__271_1", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline bool System::Threading::Tasks::Task___c::__cctor_b__271_2(::System::Object* tc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task___c*>(), { "<.cctor>b__271_2", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tc);
}
inline ::System::Threading::Tasks::Task___c* System::Threading::Tasks::Task___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::Task___c*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::Task___c::Task___c() {}
//  Writing Method size for method: ::System::Threading::Tasks::Task._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(bool, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::CancellationToken)>(
    &::System::Threading::Tasks::Task::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5cbaaf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                            { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cbabb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, bool)>(
    &::System::Threading::Tasks::Task::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5cbabc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(::System::Action*, ::System::Threading::CancellationToken)>(
    &::System::Threading::Tasks::Task::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5cbae80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(
    ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::Task*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCreationOptions,
    ::System::Threading::Tasks::InternalTaskOptions, ::System::Threading::Tasks::TaskScheduler*)>(&::System::Threading::Tasks::Task::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cbaeb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::Tasks::Task*>(),
                                                                 ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(),
                                                                 ::i2c::type_of<::System::Threading::Tasks::InternalTaskOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.TaskConstructorCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(
    ::System::Delegate*, ::System::Object*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions,
    ::System::Threading::Tasks::TaskScheduler*)>(&::System::Threading::Tasks::Task::TaskConstructorCore)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5cbad10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                             { "TaskConstructorCore",
                                                               {},
                                                               { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::CancellationToken>(),
                                                                 ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<::System::Threading::Tasks::InternalTaskOptions>(),
                                                                 ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.AssignCancellationToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(
    ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*, ::System::Threading::Tasks::TaskContinuation*)>(&::System::Threading::Tasks::Task::AssignCancellationToken)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5cbaf98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "AssignCancellationToken",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::Task*>(),
                                                                                      ::i2c::type_of<::System::Threading::Tasks::TaskContinuation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.TaskCancelCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Tasks::Task::TaskCancelCallback)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5cbb584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "TaskCancelCallback", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.TrySetCanceled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)(::System::Threading::CancellationToken)>(&::System::Threading::Tasks::Task::TrySetCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cba4bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "TrySetCanceled", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.TrySetCanceled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)(::System::Threading::CancellationToken, ::System::Object*)>(
    &::System::Threading::Tasks::Task::TrySetCanceled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cb9bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                             { "TrySetCanceled", {}, { ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.TrySetException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)(::System::Object*)>(&::System::Threading::Tasks::Task::TrySetException)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cba4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "TrySetException", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_Options
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskCreationOptions (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::get_Options)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5cbb320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_Options", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.OptionsMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskCreationOptions (*)(int32_t)>(&::System::Threading::Tasks::Task::OptionsMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbbce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "OptionsMethod", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.AtomicStateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)(int32_t, int32_t)>(&::System::Threading::Tasks::Task::AtomicStateUpdate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5cbb8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "AtomicStateUpdate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.AtomicStateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)(int32_t, int32_t, ::by_ref<int32_t>)>(&::System::Threading::Tasks::Task::AtomicStateUpdate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cbbce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                             { "AtomicStateUpdate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.SetNotificationForWaitCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(bool)>(&::System::Threading::Tasks::Task::SetNotificationForWaitCompletion)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5cbbdc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "SetNotificationForWaitCompletion", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.NotifyDebuggerOfWaitCompletionIfNecessary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::NotifyDebuggerOfWaitCompletionIfNecessary)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cbbea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "NotifyDebuggerOfWaitCompletionIfNecessary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.AnyTaskRequiresNotifyDebuggerOfWaitCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::System::Threading::Tasks::Task*>)>(&::System::Threading::Tasks::Task::AnyTaskRequiresNotifyDebuggerOfWaitCompletion)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5cbbf1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                             { "AnyTaskRequiresNotifyDebuggerOfWaitCompletion", {}, { ::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_IsWaitNotificationEnabledOrNotRanToCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::get_IsWaitNotificationEnabledOrNotRanToCompletion)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cbbfa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_IsWaitNotificationEnabledOrNotRanToCompletion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_ShouldNotifyDebuggerOfWaitCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::get_ShouldNotifyDebuggerOfWaitCompletion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cbbfc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { ::i2c::class_of<::System::Threading::Tasks::Task*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_IsWaitNotificationEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::get_IsWaitNotificationEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cbbee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_IsWaitNotificationEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.NotifyDebuggerOfWaitCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::NotifyDebuggerOfWaitCompletion)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cbbef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "NotifyDebuggerOfWaitCompletion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.MarkStarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::MarkStarted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cbbfd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "MarkStarted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.AddNewChild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::AddNewChild)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5cbaf30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "AddNewChild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.DisregardChild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::DisregardChild)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cbb540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "DisregardChild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.InternalRunSynchronously
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(::System::Threading::Tasks::TaskScheduler*, bool)>(
    &::System::Threading::Tasks::Task::InternalRunSynchronously)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5cbbfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                             { "InternalRunSynchronously", {}, { ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.InternalStartNew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Threading::Tasks::Task* (*)(::System::Threading::Tasks::Task*, ::System::Delegate*, ::System::Object*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskScheduler*,
                                          ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::Task::InternalStartNew)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5cbc6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                { "InternalStartNew",
                                                  {},
                                                  { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Object*>(),
                                                    ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>(),
                                                    ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<::System::Threading::Tasks::InternalTaskOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_Id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::get_Id)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5cba7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_Id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_InternalCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::System::Threading::Tasks::Task::get_InternalCurrent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5cbca04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_InternalCurrent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.InternalCurrentIfAttached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Threading::Tasks::TaskCreationOptions)>(
    &::System::Threading::Tasks::Task::InternalCurrentIfAttached)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5cbca84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "InternalCurrentIfAttached", {}, { ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_CurrentStackGuard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::StackGuard* (*)()>(&::System::Threading::Tasks::Task::get_CurrentStackGuard)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5cbcb4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_CurrentStackGuard", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_Exception
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::AggregateException* (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::get_Exception)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cbcc50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_Exception", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_Status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskStatus (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::get_Status)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cbcdd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_Status", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_IsCanceled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::get_IsCanceled)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cbce2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_IsCanceled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_IsCancellationRequested
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::get_IsCancellationRequested)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5cbce44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_IsCancellationRequested", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.EnsureContingentPropertiesInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_ContingentProperties* (::System::Threading::Tasks::Task::*)(bool)>(
    &::System::Threading::Tasks::Task::EnsureContingentPropertiesInitialized)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cbb304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "EnsureContingentPropertiesInitialized", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.EnsureContingentPropertiesInitializedCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_ContingentProperties* (::System::Threading::Tasks::Task::*)(bool)>(
    &::System::Threading::Tasks::Task::EnsureContingentPropertiesInitializedCore)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cbcedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "EnsureContingentPropertiesInitializedCore", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_CancellationToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationToken (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::get_CancellationToken)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cb902c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_CancellationToken", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_IsCancellationAcknowledged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::get_IsCancellationAcknowledged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cbcfb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_IsCancellationAcknowledged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_IsCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::get_IsCompleted)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5cb92b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_IsCompleted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.IsCompletedMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Threading::Tasks::Task::IsCompletedMethod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cbc2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "IsCompletedMethod", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_IsCompletedSuccessfully
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::get_IsCompletedSuccessfully)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cbcfc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_IsCompletedSuccessfully", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_CreationOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskCreationOptions (::System::Threading::Tasks::Task::*)()>(
    &::System::Threading::Tasks::Task::get_CreationOptions)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cbaf1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_CreationOptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.System_IAsyncResult_get_AsyncWaitHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::WaitHandle* (::System::Threading::Tasks::Task::*)()>(
    &::System::Threading::Tasks::Task::System_IAsyncResult_get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5cbcfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "System.IAsyncResult.get_AsyncWaitHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_AsyncState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::get_AsyncState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbd158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_AsyncState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.System_IAsyncResult_get_CompletedSynchronously
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::System_IAsyncResult_get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbd160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "System.IAsyncResult.get_CompletedSynchronously", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_ExecutingTaskScheduler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskScheduler* (::System::Threading::Tasks::Task::*)()>(
    &::System::Threading::Tasks::Task::get_ExecutingTaskScheduler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbd168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_ExecutingTaskScheduler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_Factory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskFactory* (*)()>(&::System::Threading::Tasks::Task::get_Factory)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cbd170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_Factory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_CompletedTask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::System::Threading::Tasks::Task::get_CompletedTask)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cbd1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_CompletedTask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_CompletedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ManualResetEventSlim* (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::get_CompletedEvent)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5cbd058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_CompletedEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_ExceptionRecorded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::get_ExceptionRecorded)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5cbd228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_ExceptionRecorded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_IsFaulted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::get_IsFaulted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cbcc6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_IsFaulted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_CapturedContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ExecutionContext* (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::get_CapturedContext)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5cbd284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_CapturedContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.set_CapturedContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(::System::Threading::ExecutionContext*)>(&::System::Threading::Tasks::Task::set_CapturedContext)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5cbb26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "set_CapturedContext", {}, { ::i2c::type_of<::System::Threading::ExecutionContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cbd2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(bool)>(&::System::Threading::Tasks::Task::Dispose)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cbd368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { ::i2c::class_of<::System::Threading::Tasks::Task*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.ScheduleAndStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(bool)>(&::System::Threading::Tasks::Task::ScheduleAndStart)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5cbc7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "ScheduleAndStart", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.AddException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(::System::Object*)>(&::System::Threading::Tasks::Task::AddException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbbb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "AddException", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.AddException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(::System::Object*, bool)>(&::System::Threading::Tasks::Task::AddException)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5cbd440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "AddException", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.GetExceptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::AggregateException* (::System::Threading::Tasks::Task::*)(bool)>(&::System::Threading::Tasks::Task::GetExceptions)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5cbcc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "GetExceptions", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.GetExceptionDispatchInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* (
    ::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::GetExceptionDispatchInfos)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5cbd79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "GetExceptionDispatchInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.GetCancellationExceptionDispatchInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo* (::System::Threading::Tasks::Task::*)()>(
    &::System::Threading::Tasks::Task::GetCancellationExceptionDispatchInfo)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cbd948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "GetCancellationExceptionDispatchInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.ThrowIfExceptional
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(bool)>(&::System::Threading::Tasks::Task::ThrowIfExceptional)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cbd970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "ThrowIfExceptional", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.UpdateExceptionObservedStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::UpdateExceptionObservedStatus)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5cbd9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "UpdateExceptionObservedStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_IsExceptionObservedByParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::get_IsExceptionObservedByParent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cbdabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_IsExceptionObservedByParent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.get_IsDelegateInvoked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::get_IsDelegateInvoked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cbdacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_IsDelegateInvoked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(bool)>(&::System::Threading::Tasks::Task::Finish)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5cbbb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Finish", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.FinishStageTwo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::FinishStageTwo)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5cbdadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "FinishStageTwo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.FinishStageThree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::FinishStageThree)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5cbe288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "FinishStageThree", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.ProcessChildCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::Task::ProcessChildCompletion)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5cbe2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "ProcessChildCompletion", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.AddExceptionsFromChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::AddExceptionsFromChildren)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x5cbdd84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "AddExceptionsFromChildren", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::Execute)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5cbeb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbed58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.ExecuteEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)(bool)>(&::System::Threading::Tasks::Task::ExecuteEntry)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5cbed60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "ExecuteEntry", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.ExecutionContextCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Tasks::Task::ExecutionContextCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5cbf040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "ExecutionContextCallback", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.InnerInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::InnerInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5cbf0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { ::i2c::class_of<::System::Threading::Tasks::Task*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.HandleException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(::System::Exception*)>(&::System::Threading::Tasks::Task::HandleException)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5cbec4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "HandleException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.GetAwaiter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::CompilerServices::TaskAwaiter (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::GetAwaiter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb9500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "GetAwaiter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.ConfigureAwait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable (::System::Threading::Tasks::Task::*)(bool)>(
    &::System::Threading::Tasks::Task::ConfigureAwait)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb9508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "ConfigureAwait", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.SetContinuationForAwait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(::System::Action*, bool, bool)>(&::System::Threading::Tasks::Task::SetContinuationForAwait)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5cbf18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                             { "SetContinuationForAwait", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.Yield
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::CompilerServices::YieldAwaitable (*)()>(&::System::Threading::Tasks::Task::Yield)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbf5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Yield", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.Wait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::Wait)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cbf5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Wait", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.Wait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)(int32_t, ::System::Threading::CancellationToken)>(&::System::Threading::Tasks::Task::Wait)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5cbf5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                                                           { "Wait", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.WrappedTryRunInline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::WrappedTryRunInline)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5cbfcd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "WrappedTryRunInline", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.InternalWait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)(int32_t, ::System::Threading::CancellationToken)>(&::System::Threading::Tasks::Task::InternalWait)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x5cbf72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "InternalWait", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.SpinThenBlockingWait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)(int32_t, ::System::Threading::CancellationToken)>(
    &::System::Threading::Tasks::Task::SpinThenBlockingWait)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5cbc494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                             { "SpinThenBlockingWait", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.SpinWait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)(int32_t)>(&::System::Threading::Tasks::Task::SpinWait)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cbfe44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "SpinWait", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.InternalCancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)(bool)>(&::System::Threading::Tasks::Task::InternalCancel)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5cbb380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "InternalCancel", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.RecordInternalCancellationRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::RecordInternalCancellationRequest)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5cc0054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "RecordInternalCancellationRequest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.RecordInternalCancellationRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(::System::Threading::CancellationToken)>(
    &::System::Threading::Tasks::Task::RecordInternalCancellationRequest)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5cc0090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                                                           { "RecordInternalCancellationRequest", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.RecordInternalCancellationRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(::System::Threading::CancellationToken, ::System::Object*)>(
    &::System::Threading::Tasks::Task::RecordInternalCancellationRequest)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5cbb9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                { "RecordInternalCancellationRequest", {}, { ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.CancellationCleanupLogic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::CancellationCleanupLogic)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5cbb9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "CancellationCleanupLogic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.SetCancellationAcknowledged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::SetCancellationAcknowledged)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cbf178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "SetCancellationAcknowledged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.FinishContinuations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::FinishContinuations)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0x5cbe49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "FinishContinuations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.LogFinishCompletionNotification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)()>(&::System::Threading::Tasks::Task::LogFinishCompletionNotification)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cc0288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "LogFinishCompletionNotification", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.ContinueWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Threading::Tasks::Task::*)(::System::Action_1<::System::Threading::Tasks::Task*>*)>(
    &::System::Threading::Tasks::Task::ContinueWith)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cc02e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "ContinueWith", {}, { ::i2c::type_of<::System::Action_1<::System::Threading::Tasks::Task*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.ContinueWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Threading::Tasks::Task::*)(::System::Action_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::TaskScheduler*, ::System::Threading::CancellationToken,
                                         ::System::Threading::Tasks::TaskContinuationOptions)>(&::System::Threading::Tasks::Task::ContinueWith)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5cc0404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                             { "ContinueWith",
                                                               {},
                                                               { ::i2c::type_of<::System::Action_1<::System::Threading::Tasks::Task*>*>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>(),
                                                                 ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.ContinueWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Threading::Tasks::Task::*)(::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>*, ::System::Object*, ::System::Threading::CancellationToken,
                                         ::System::Threading::Tasks::TaskContinuationOptions, ::System::Threading::Tasks::TaskScheduler*)>(&::System::Threading::Tasks::Task::ContinueWith)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cc089c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                             { "ContinueWith",
                                                               {},
                                                               { ::i2c::type_of<::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>(),
                                                                 ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.ContinueWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Threading::Tasks::Task::*)(::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>*, ::System::Object*, ::System::Threading::Tasks::TaskScheduler*,
                                         ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskContinuationOptions)>(&::System::Threading::Tasks::Task::ContinueWith)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5cc08b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                             { "ContinueWith",
                                                               {},
                                                               { ::i2c::type_of<::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>(), ::i2c::type_of<::System::Threading::CancellationToken>(),
                                                                 ::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.CreationOptionsFromContinuationOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Threading::Tasks::TaskContinuationOptions, ::by_ref<::System::Threading::Tasks::TaskCreationOptions>, ::by_ref<::System::Threading::Tasks::InternalTaskOptions>)>(
        &::System::Threading::Tasks::Task::CreationOptionsFromContinuationOptions)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5cc0560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                { "CreationOptionsFromContinuationOptions",
                                                  {},
                                                  { ::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>(), ::i2c::type_of<::by_ref<::System::Threading::Tasks::TaskCreationOptions>>(),
                                                    ::i2c::type_of<::by_ref<::System::Threading::Tasks::InternalTaskOptions>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.ContinueWithCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(::System::Threading::Tasks::Task*, ::System::Threading::Tasks::TaskScheduler*,
                                                                                                  ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskContinuationOptions)>(
    &::System::Threading::Tasks::Task::ContinueWithCore)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5cc0738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                             { "ContinueWithCore",
                                                               {},
                                                               { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>(),
                                                                 ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.AddCompletionAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(::System::Threading::Tasks::ITaskCompletionAction*)>(
    &::System::Threading::Tasks::Task::AddCompletionAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc0b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                                                           { "AddCompletionAction", {}, { ::i2c::type_of<::System::Threading::Tasks::ITaskCompletionAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.AddCompletionAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(::System::Threading::Tasks::ITaskCompletionAction*, bool)>(
    &::System::Threading::Tasks::Task::AddCompletionAction)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cbff7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                             { "AddCompletionAction", {}, { ::i2c::type_of<::System::Threading::Tasks::ITaskCompletionAction*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.AddTaskContinuationComplex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)(::System::Object*, bool)>(&::System::Threading::Tasks::Task::AddTaskContinuationComplex)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x5cc0b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "AddTaskContinuationComplex", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.AddTaskContinuation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::Task::*)(::System::Object*, bool)>(&::System::Threading::Tasks::Task::AddTaskContinuation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cbf4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "AddTaskContinuation", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.RemoveContinuation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(::System::Object*)>(&::System::Threading::Tasks::Task::RemoveContinuation)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5cbb694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "RemoveContinuation", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.FromException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Exception*)>(&::System::Threading::Tasks::Task::FromException)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5cb9c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "FromException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.FromCancellation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Threading::CancellationToken)>(&::System::Threading::Tasks::Task::FromCancellation)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5cc0e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "FromCancellation", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.FromCanceled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Threading::CancellationToken)>(&::System::Threading::Tasks::Task::FromCanceled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cba098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "FromCanceled", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Action*)>(&::System::Threading::Tasks::Task::Run)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5cc0f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Run", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Action*, ::System::Threading::CancellationToken)>(&::System::Threading::Tasks::Task::Run)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5cc1028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Run", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Func_1<::System::Threading::Tasks::Task*>*)>(&::System::Threading::Tasks::Task::Run)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cc1114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Run", {}, { ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Func_1<::System::Threading::Tasks::Task*>*, ::System::Threading::CancellationToken)>(
    &::System::Threading::Tasks::Task::Run)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5cc1170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                { "Run", {}, { ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task*>*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.Delay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::TimeSpan)>(&::System::Threading::Tasks::Task::Delay)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cc13d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Delay", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.Delay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::TimeSpan, ::System::Threading::CancellationToken)>(&::System::Threading::Tasks::Task::Delay)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5cc1434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                             { "Delay", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.Delay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(int32_t)>(&::System::Threading::Tasks::Task::Delay)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cc190c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Delay", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.Delay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(int32_t, ::System::Threading::CancellationToken)>(&::System::Threading::Tasks::Task::Delay)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x5cc1578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                                                           { "Delay", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.WhenAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Collections::Generic::IEnumerable_1<::System::Threading::Tasks::Task*>*)>(
    &::System::Threading::Tasks::Task::WhenAll)> {
  constexpr static std::size_t size = 0x860;
  constexpr static std::size_t addrs = 0x5cc1a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                             { "WhenAll", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Threading::Tasks::Task*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.WhenAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::ArrayW<::System::Threading::Tasks::Task*>)>(&::System::Threading::Tasks::Task::WhenAll)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5cc22f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "WhenAll", {}, { ::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.InternalWhenAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::ArrayW<::System::Threading::Tasks::Task*>)>(&::System::Threading::Tasks::Task::InternalWhenAll)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5cc24b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "InternalWhenAll", {}, { ::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.WhenAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>* (*)(::ArrayW<::System::Threading::Tasks::Task*>)>(
    &::System::Threading::Tasks::Task::WhenAny)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5cc2724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "WhenAny", {}, { ::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.WhenAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>* (*)(::System::Collections::Generic::IEnumerable_1<::System::Threading::Tasks::Task*>*)>(
        &::System::Threading::Tasks::Task::WhenAny)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x5cc2b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                             { "WhenAny", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Threading::Tasks::Task*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.AddToActiveTasks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::Task::AddToActiveTasks)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5cc2f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "AddToActiveTasks", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.RemoveFromActiveTasks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::System::Threading::Tasks::Task::RemoveFromActiveTasks)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5cc30dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "RemoveFromActiveTasks", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.MarkAborted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(::System::Threading::ThreadAbortException*)>(&::System::Threading::Tasks::Task::MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cc3220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "MarkAborted", {}, { ::i2c::type_of<::System::Threading::ThreadAbortException*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Task.ExecuteWithThreadLocal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Task::*)(::by_ref<::System::Threading::Tasks::Task*>)>(
    &::System::Threading::Tasks::Task::ExecuteWithThreadLocal)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5cbee98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "ExecuteWithThreadLocal", {}, { ::i2c::type_of<::by_ref<::System::Threading::Tasks::Task*>>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Threading::Tasks::Task::__cordl_internal_get_m_taskId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_taskId;
}
constexpr int32_t const& System::Threading::Tasks::Task::__cordl_internal_get_m_taskId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_taskId;
}
constexpr void System::Threading::Tasks::Task::__cordl_internal_set_m_taskId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_taskId = value;
}
constexpr ::System::Delegate*& System::Threading::Tasks::Task::__cordl_internal_get_m_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_action;
}
constexpr ::System::Delegate* const& System::Threading::Tasks::Task::__cordl_internal_get_m_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_action;
}
constexpr void System::Threading::Tasks::Task::__cordl_internal_set_m_action(::System::Delegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_action = value;
}
constexpr ::System::Object*& System::Threading::Tasks::Task::__cordl_internal_get_m_stateObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stateObject;
}
constexpr ::System::Object* const& System::Threading::Tasks::Task::__cordl_internal_get_m_stateObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stateObject;
}
constexpr void System::Threading::Tasks::Task::__cordl_internal_set_m_stateObject(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_stateObject = value;
}
constexpr ::System::Threading::Tasks::TaskScheduler*& System::Threading::Tasks::Task::__cordl_internal_get_m_taskScheduler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_taskScheduler;
}
constexpr ::System::Threading::Tasks::TaskScheduler* const& System::Threading::Tasks::Task::__cordl_internal_get_m_taskScheduler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_taskScheduler;
}
constexpr void System::Threading::Tasks::Task::__cordl_internal_set_m_taskScheduler(::System::Threading::Tasks::TaskScheduler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_taskScheduler = value;
}
constexpr ::System::Threading::Tasks::Task*& System::Threading::Tasks::Task::__cordl_internal_get_m_parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_parent;
}
constexpr ::System::Threading::Tasks::Task* const& System::Threading::Tasks::Task::__cordl_internal_get_m_parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_parent;
}
constexpr void System::Threading::Tasks::Task::__cordl_internal_set_m_parent(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_parent = value;
}
constexpr int32_t& System::Threading::Tasks::Task::__cordl_internal_get_m_stateFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stateFlags;
}
constexpr int32_t const& System::Threading::Tasks::Task::__cordl_internal_get_m_stateFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stateFlags;
}
constexpr void System::Threading::Tasks::Task::__cordl_internal_set_m_stateFlags(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_stateFlags = value;
}
constexpr ::System::Object*& System::Threading::Tasks::Task::__cordl_internal_get_m_continuationObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_continuationObject;
}
constexpr ::System::Object* const& System::Threading::Tasks::Task::__cordl_internal_get_m_continuationObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_continuationObject;
}
constexpr void System::Threading::Tasks::Task::__cordl_internal_set_m_continuationObject(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_continuationObject = value;
}
constexpr ::System::Threading::Tasks::Task_ContingentProperties*& System::Threading::Tasks::Task::__cordl_internal_get_m_contingentProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_contingentProperties;
}
constexpr ::System::Threading::Tasks::Task_ContingentProperties* const& System::Threading::Tasks::Task::__cordl_internal_get_m_contingentProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_contingentProperties;
}
constexpr void System::Threading::Tasks::Task::__cordl_internal_set_m_contingentProperties(::System::Threading::Tasks::Task_ContingentProperties* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_contingentProperties = value;
}
inline void System::Threading::Tasks::Task::setStaticF_s_taskIdCounter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_taskIdCounter", ::System::Threading::Tasks::Task*>(std::forward<int32_t>(value));
}
inline int32_t System::Threading::Tasks::Task::getStaticF_s_taskIdCounter() {
  return ::cordl_internals::getStaticField<int32_t, "s_taskIdCounter", ::System::Threading::Tasks::Task*>();
}
inline void System::Threading::Tasks::Task::setStaticF_s_taskCompletionSentinel(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_taskCompletionSentinel", ::System::Threading::Tasks::Task*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Threading::Tasks::Task::getStaticF_s_taskCompletionSentinel() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_taskCompletionSentinel", ::System::Threading::Tasks::Task*>();
}
inline void System::Threading::Tasks::Task::setStaticF_s_asyncDebuggingEnabled(bool value) {
  ::cordl_internals::setStaticField<bool, "s_asyncDebuggingEnabled", ::System::Threading::Tasks::Task*>(std::forward<bool>(value));
}
inline bool System::Threading::Tasks::Task::getStaticF_s_asyncDebuggingEnabled() {
  return ::cordl_internals::getStaticField<bool, "s_asyncDebuggingEnabled", ::System::Threading::Tasks::Task*>();
}
inline void System::Threading::Tasks::Task::setStaticF_s_taskCancelCallback(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "s_taskCancelCallback", ::System::Threading::Tasks::Task*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Threading::Tasks::Task::getStaticF_s_taskCancelCallback() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "s_taskCancelCallback", ::System::Threading::Tasks::Task*>();
}
inline void System::Threading::Tasks::Task::setStaticF_t_currentTask(::System::Threading::Tasks::Task* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task*, "t_currentTask", ::System::Threading::Tasks::Task*>(std::forward<::System::Threading::Tasks::Task*>(value));
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::getStaticF_t_currentTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task*, "t_currentTask", ::System::Threading::Tasks::Task*>();
}
inline void System::Threading::Tasks::Task::setStaticF_t_stackGuard(::System::Threading::Tasks::StackGuard* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::StackGuard*, "t_stackGuard", ::System::Threading::Tasks::Task*>(std::forward<::System::Threading::Tasks::StackGuard*>(value));
}
inline ::System::Threading::Tasks::StackGuard* System::Threading::Tasks::Task::getStaticF_t_stackGuard() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::StackGuard*, "t_stackGuard", ::System::Threading::Tasks::Task*>();
}
inline void System::Threading::Tasks::Task::setStaticF_s_createContingentProperties(::System::Func_1<::System::Threading::Tasks::Task_ContingentProperties*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Threading::Tasks::Task_ContingentProperties*>*, "s_createContingentProperties", ::System::Threading::Tasks::Task*>(
      std::forward<::System::Func_1<::System::Threading::Tasks::Task_ContingentProperties*>*>(value));
}
inline ::System::Func_1<::System::Threading::Tasks::Task_ContingentProperties*>* System::Threading::Tasks::Task::getStaticF_s_createContingentProperties() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Threading::Tasks::Task_ContingentProperties*>*, "s_createContingentProperties", ::System::Threading::Tasks::Task*>();
}
inline void System::Threading::Tasks::Task::setStaticF__Factory_k__BackingField(::System::Threading::Tasks::TaskFactory* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::TaskFactory*, "<Factory>k__BackingField", ::System::Threading::Tasks::Task*>(
      std::forward<::System::Threading::Tasks::TaskFactory*>(value));
}
inline ::System::Threading::Tasks::TaskFactory* System::Threading::Tasks::Task::getStaticF__Factory_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::TaskFactory*, "<Factory>k__BackingField", ::System::Threading::Tasks::Task*>();
}
inline void System::Threading::Tasks::Task::setStaticF__CompletedTask_k__BackingField(::System::Threading::Tasks::Task* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task*, "<CompletedTask>k__BackingField", ::System::Threading::Tasks::Task*>(std::forward<::System::Threading::Tasks::Task*>(value));
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::getStaticF__CompletedTask_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task*, "<CompletedTask>k__BackingField", ::System::Threading::Tasks::Task*>();
}
inline void System::Threading::Tasks::Task::setStaticF_s_IsExceptionObservedByParentPredicate(::System::Predicate_1<::System::Threading::Tasks::Task*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::System::Threading::Tasks::Task*>*, "s_IsExceptionObservedByParentPredicate", ::System::Threading::Tasks::Task*>(
      std::forward<::System::Predicate_1<::System::Threading::Tasks::Task*>*>(value));
}
inline ::System::Predicate_1<::System::Threading::Tasks::Task*>* System::Threading::Tasks::Task::getStaticF_s_IsExceptionObservedByParentPredicate() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::System::Threading::Tasks::Task*>*, "s_IsExceptionObservedByParentPredicate", ::System::Threading::Tasks::Task*>();
}
inline void System::Threading::Tasks::Task::setStaticF_s_ecCallback(::System::Threading::ContextCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "s_ecCallback", ::System::Threading::Tasks::Task*>(std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Threading::Tasks::Task::getStaticF_s_ecCallback() {
  return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "s_ecCallback", ::System::Threading::Tasks::Task*>();
}
inline void System::Threading::Tasks::Task::setStaticF_s_IsTaskContinuationNullPredicate(::System::Predicate_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::System::Object*>*, "s_IsTaskContinuationNullPredicate", ::System::Threading::Tasks::Task*>(
      std::forward<::System::Predicate_1<::System::Object*>*>(value));
}
inline ::System::Predicate_1<::System::Object*>* System::Threading::Tasks::Task::getStaticF_s_IsTaskContinuationNullPredicate() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::System::Object*>*, "s_IsTaskContinuationNullPredicate", ::System::Threading::Tasks::Task*>();
}
inline void System::Threading::Tasks::Task::setStaticF_s_currentActiveTasks(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Threading::Tasks::Task*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Threading::Tasks::Task*>*, "s_currentActiveTasks", ::System::Threading::Tasks::Task*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Threading::Tasks::Task*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Threading::Tasks::Task*>* System::Threading::Tasks::Task::getStaticF_s_currentActiveTasks() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Threading::Tasks::Task*>*, "s_currentActiveTasks", ::System::Threading::Tasks::Task*>();
}
inline void System::Threading::Tasks::Task::setStaticF_s_activeTasksLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_activeTasksLock", ::System::Threading::Tasks::Task*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Threading::Tasks::Task::getStaticF_s_activeTasksLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_activeTasksLock", ::System::Threading::Tasks::Task*>();
}
inline void System::Threading::Tasks::Task::_ctor(bool canceled, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::CancellationToken ct) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                          { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canceled, creationOptions, ct);
}
inline void System::Threading::Tasks::Task::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task::_ctor(::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions, bool promiseStyle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, creationOptions, promiseStyle);
}
inline void System::Threading::Tasks::Task::_ctor(::System::Action* action, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, cancellationToken);
}
inline void System::Threading::Tasks::Task::_ctor(::System::Delegate* action, ::System::Object* state, ::System::Threading::Tasks::Task* parent,
                                                  ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                  ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::Tasks::Task*>(),
                                                               ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(),
                                                               ::i2c::type_of<::System::Threading::Tasks::InternalTaskOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, state, parent, cancellationToken, creationOptions, internalOptions, scheduler);
}
inline void System::Threading::Tasks::Task::TaskConstructorCore(::System::Delegate* action, ::System::Object* state, ::System::Threading::CancellationToken cancellationToken,
                                                                ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions,
                                                                ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                           { "TaskConstructorCore",
                                                             {},
                                                             { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::CancellationToken>(),
                                                               ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<::System::Threading::Tasks::InternalTaskOptions>(),
                                                               ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, state, cancellationToken, creationOptions, internalOptions, scheduler);
}
inline void System::Threading::Tasks::Task::AssignCancellationToken(::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::Task* antecedent,
                                                                    ::System::Threading::Tasks::TaskContinuation* continuation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "AssignCancellationToken",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::Task*>(),
                                                                                    ::i2c::type_of<::System::Threading::Tasks::TaskContinuation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cancellationToken, antecedent, continuation);
}
inline void System::Threading::Tasks::Task::TaskCancelCallback(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "TaskCancelCallback", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, o);
}
inline bool System::Threading::Tasks::Task::TrySetCanceled(::System::Threading::CancellationToken tokenToRecord) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "TrySetCanceled", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tokenToRecord);
}
inline bool System::Threading::Tasks::Task::TrySetCanceled(::System::Threading::CancellationToken tokenToRecord, ::System::Object* cancellationException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                           { "TrySetCanceled", {}, { ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tokenToRecord, cancellationException);
}
inline bool System::Threading::Tasks::Task::TrySetException(::System::Object* exceptionObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "TrySetException", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exceptionObject);
}
inline ::System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::Task::get_Options() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_Options", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskCreationOptions>(this, ___internal_method);
}
inline ::System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::Task::OptionsMethod(int32_t flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "OptionsMethod", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskCreationOptions>(nullptr, ___internal_method, flags);
}
inline bool System::Threading::Tasks::Task::AtomicStateUpdate(int32_t newBits, int32_t illegalBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "AtomicStateUpdate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newBits, illegalBits);
}
inline bool System::Threading::Tasks::Task::AtomicStateUpdate(int32_t newBits, int32_t illegalBits, ::by_ref<int32_t> oldFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                           { "AtomicStateUpdate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newBits, illegalBits, oldFlags);
}
inline void System::Threading::Tasks::Task::SetNotificationForWaitCompletion(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "SetNotificationForWaitCompletion", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline bool System::Threading::Tasks::Task::NotifyDebuggerOfWaitCompletionIfNecessary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "NotifyDebuggerOfWaitCompletionIfNecessary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Threading::Tasks::Task::AnyTaskRequiresNotifyDebuggerOfWaitCompletion(::ArrayW<::System::Threading::Tasks::Task*> tasks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                           { "AnyTaskRequiresNotifyDebuggerOfWaitCompletion", {}, { ::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tasks);
}
inline bool System::Threading::Tasks::Task::get_IsWaitNotificationEnabledOrNotRanToCompletion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_IsWaitNotificationEnabledOrNotRanToCompletion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Threading::Tasks::Task::get_ShouldNotifyDebuggerOfWaitCompletion() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::Task*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Threading::Tasks::Task::get_IsWaitNotificationEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_IsWaitNotificationEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task::NotifyDebuggerOfWaitCompletion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "NotifyDebuggerOfWaitCompletion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Threading::Tasks::Task::MarkStarted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "MarkStarted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task::AddNewChild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "AddNewChild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task::DisregardChild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "DisregardChild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task::InternalRunSynchronously(::System::Threading::Tasks::TaskScheduler* scheduler, bool waitForCompletion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                           { "InternalRunSynchronously", {}, { ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scheduler, waitForCompletion);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::InternalStartNew(::System::Threading::Tasks::Task* creatingTask, ::System::Delegate* action, ::System::Object* state,
                                                                                          ::System::Threading::CancellationToken cancellationToken,
                                                                                          ::System::Threading::Tasks::TaskScheduler* scheduler, ::System::Threading::Tasks::TaskCreationOptions options,
                                                                                          ::System::Threading::Tasks::InternalTaskOptions internalOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                              { "InternalStartNew",
                                                {},
                                                { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Object*>(),
                                                  ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>(),
                                                  ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<::System::Threading::Tasks::InternalTaskOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, creatingTask, action, state, cancellationToken, scheduler, options, internalOptions);
}
inline int32_t System::Threading::Tasks::Task::get_Id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_Id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::get_InternalCurrent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_InternalCurrent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::InternalCurrentIfAttached(::System::Threading::Tasks::TaskCreationOptions creationOptions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                                                         { "InternalCurrentIfAttached", {}, { ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, creationOptions);
}
inline ::System::Threading::Tasks::StackGuard* System::Threading::Tasks::Task::get_CurrentStackGuard() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_CurrentStackGuard", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::StackGuard*>(nullptr, ___internal_method);
}
inline ::System::AggregateException* System::Threading::Tasks::Task::get_Exception() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_Exception", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::AggregateException*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::TaskStatus System::Threading::Tasks::Task::get_Status() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_Status", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskStatus>(this, ___internal_method);
}
inline bool System::Threading::Tasks::Task::get_IsCanceled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_IsCanceled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Threading::Tasks::Task::get_IsCancellationRequested() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_IsCancellationRequested", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_ContingentProperties* System::Threading::Tasks::Task::EnsureContingentPropertiesInitialized(bool needsProtection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "EnsureContingentPropertiesInitialized", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_ContingentProperties*>(this, ___internal_method, needsProtection);
}
inline ::System::Threading::Tasks::Task_ContingentProperties* System::Threading::Tasks::Task::EnsureContingentPropertiesInitializedCore(bool needsProtection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "EnsureContingentPropertiesInitializedCore", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_ContingentProperties*>(this, ___internal_method, needsProtection);
}
inline ::System::Threading::CancellationToken System::Threading::Tasks::Task::get_CancellationToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_CancellationToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(this, ___internal_method);
}
inline bool System::Threading::Tasks::Task::get_IsCancellationAcknowledged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_IsCancellationAcknowledged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Threading::Tasks::Task::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_IsCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Threading::Tasks::Task::IsCompletedMethod(int32_t flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "IsCompletedMethod", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flags);
}
inline bool System::Threading::Tasks::Task::get_IsCompletedSuccessfully() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_IsCompletedSuccessfully", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::Task::get_CreationOptions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_CreationOptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskCreationOptions>(this, ___internal_method);
}
inline ::System::Threading::WaitHandle* System::Threading::Tasks::Task::System_IAsyncResult_get_AsyncWaitHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "System.IAsyncResult.get_AsyncWaitHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*>(this, ___internal_method);
}
inline ::System::Object* System::Threading::Tasks::Task::get_AsyncState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_AsyncState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Threading::Tasks::Task::System_IAsyncResult_get_CompletedSynchronously() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "System.IAsyncResult.get_CompletedSynchronously", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::TaskScheduler* System::Threading::Tasks::Task::get_ExecutingTaskScheduler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_ExecutingTaskScheduler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskScheduler*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::TaskFactory* System::Threading::Tasks::Task::get_Factory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_Factory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskFactory*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::get_CompletedTask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_CompletedTask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method);
}
inline ::System::Threading::ManualResetEventSlim* System::Threading::Tasks::Task::get_CompletedEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_CompletedEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ManualResetEventSlim*>(this, ___internal_method);
}
inline bool System::Threading::Tasks::Task::get_ExceptionRecorded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_ExceptionRecorded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Threading::Tasks::Task::get_IsFaulted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_IsFaulted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::ExecutionContext* System::Threading::Tasks::Task::get_CapturedContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_CapturedContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext*>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task::set_CapturedContext(::System::Threading::ExecutionContext* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "set_CapturedContext", {}, { ::i2c::type_of<::System::Threading::ExecutionContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Threading::Tasks::Task::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::Task*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Threading::Tasks::Task::ScheduleAndStart(bool needsProtection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "ScheduleAndStart", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, needsProtection);
}
inline void System::Threading::Tasks::Task::AddException(::System::Object* exceptionObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "AddException", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exceptionObject);
}
inline void System::Threading::Tasks::Task::AddException(::System::Object* exceptionObject, bool representsCancellation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "AddException", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exceptionObject, representsCancellation);
}
inline ::System::AggregateException* System::Threading::Tasks::Task::GetExceptions(bool includeTaskCanceledExceptions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "GetExceptions", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::AggregateException*>(this, ___internal_method, includeTaskCanceledExceptions);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* System::Threading::Tasks::Task::GetExceptionDispatchInfos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "GetExceptionDispatchInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*>(this, ___internal_method);
}
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::Threading::Tasks::Task::GetCancellationExceptionDispatchInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "GetCancellationExceptionDispatchInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task::ThrowIfExceptional(bool includeTaskCanceledExceptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "ThrowIfExceptional", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, includeTaskCanceledExceptions);
}
inline void System::Threading::Tasks::Task::UpdateExceptionObservedStatus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "UpdateExceptionObservedStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Threading::Tasks::Task::get_IsExceptionObservedByParent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_IsExceptionObservedByParent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Threading::Tasks::Task::get_IsDelegateInvoked() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "get_IsDelegateInvoked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task::Finish(bool bUserDelegateExecuted) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Finish", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bUserDelegateExecuted);
}
inline void System::Threading::Tasks::Task::FinishStageTwo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "FinishStageTwo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task::FinishStageThree() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "FinishStageThree", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task::ProcessChildCompletion(::System::Threading::Tasks::Task* childTask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "ProcessChildCompletion", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, childTask);
}
inline void System::Threading::Tasks::Task::AddExceptionsFromChildren() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "AddExceptionsFromChildren", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Threading::Tasks::Task::ExecuteEntry(bool bPreventDoubleExecution) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "ExecuteEntry", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bPreventDoubleExecution);
}
inline void System::Threading::Tasks::Task::ExecutionContextCallback(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "ExecutionContextCallback", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void System::Threading::Tasks::Task::InnerInvoke() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::Task*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task::HandleException(::System::Exception* unhandledException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "HandleException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unhandledException);
}
inline ::System::Runtime::CompilerServices::TaskAwaiter System::Threading::Tasks::Task::GetAwaiter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "GetAwaiter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::TaskAwaiter>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable System::Threading::Tasks::Task::ConfigureAwait(bool continueOnCapturedContext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "ConfigureAwait", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable>(this, ___internal_method, continueOnCapturedContext);
}
inline void System::Threading::Tasks::Task::SetContinuationForAwait(::System::Action* continuationAction, bool continueOnCapturedContext, bool flowExecutionContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                           { "SetContinuationForAwait", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuationAction, continueOnCapturedContext, flowExecutionContext);
}
inline ::System::Runtime::CompilerServices::YieldAwaitable System::Threading::Tasks::Task::Yield() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Yield", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::YieldAwaitable>(nullptr, ___internal_method);
}
inline void System::Threading::Tasks::Task::Wait() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Wait", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Threading::Tasks::Task::Wait(int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Wait", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, millisecondsTimeout, cancellationToken);
}
inline bool System::Threading::Tasks::Task::WrappedTryRunInline() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "WrappedTryRunInline", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Threading::Tasks::Task::InternalWait(int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "InternalWait", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, millisecondsTimeout, cancellationToken);
}
inline bool System::Threading::Tasks::Task::SpinThenBlockingWait(int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                           { "SpinThenBlockingWait", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, millisecondsTimeout, cancellationToken);
}
inline bool System::Threading::Tasks::Task::SpinWait(int32_t millisecondsTimeout) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "SpinWait", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, millisecondsTimeout);
}
inline bool System::Threading::Tasks::Task::InternalCancel(bool bCancelNonExecutingOnly) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "InternalCancel", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bCancelNonExecutingOnly);
}
inline void System::Threading::Tasks::Task::RecordInternalCancellationRequest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "RecordInternalCancellationRequest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task::RecordInternalCancellationRequest(::System::Threading::CancellationToken tokenToRecord) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                                                         { "RecordInternalCancellationRequest", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tokenToRecord);
}
inline void System::Threading::Tasks::Task::RecordInternalCancellationRequest(::System::Threading::CancellationToken tokenToRecord, ::System::Object* cancellationException) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                              { "RecordInternalCancellationRequest", {}, { ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tokenToRecord, cancellationException);
}
inline void System::Threading::Tasks::Task::CancellationCleanupLogic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "CancellationCleanupLogic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task::SetCancellationAcknowledged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "SetCancellationAcknowledged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task::FinishContinuations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "FinishContinuations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::Task::LogFinishCompletionNotification() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "LogFinishCompletionNotification", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::ContinueWith(::System::Action_1<::System::Threading::Tasks::Task*>* continuationAction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "ContinueWith", {}, { ::i2c::type_of<::System::Action_1<::System::Threading::Tasks::Task*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, continuationAction);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::ContinueWith(::System::Action_1<::System::Threading::Tasks::Task*>* continuationAction,
                                                                                      ::System::Threading::Tasks::TaskScheduler* scheduler, ::System::Threading::CancellationToken cancellationToken,
                                                                                      ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                           { "ContinueWith",
                                                             {},
                                                             { ::i2c::type_of<::System::Action_1<::System::Threading::Tasks::Task*>*>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>(),
                                                               ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, continuationAction, scheduler, cancellationToken, continuationOptions);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::ContinueWith(::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>* continuationAction,
                                                                                      ::System::Object* state, ::System::Threading::CancellationToken cancellationToken,
                                                                                      ::System::Threading::Tasks::TaskContinuationOptions continuationOptions,
                                                                                      ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                           { "ContinueWith",
                                                             {},
                                                             { ::i2c::type_of<::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>(),
                                                               ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, continuationAction, state, cancellationToken, continuationOptions, scheduler);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::ContinueWith(::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>* continuationAction,
                                                                                      ::System::Object* state, ::System::Threading::Tasks::TaskScheduler* scheduler,
                                                                                      ::System::Threading::CancellationToken cancellationToken,
                                                                                      ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                           { "ContinueWith",
                                                             {},
                                                             { ::i2c::type_of<::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>(), ::i2c::type_of<::System::Threading::CancellationToken>(),
                                                               ::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, continuationAction, state, scheduler, cancellationToken, continuationOptions);
}
inline void System::Threading::Tasks::Task::CreationOptionsFromContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions continuationOptions,
                                                                                   ::by_ref<::System::Threading::Tasks::TaskCreationOptions> creationOptions,
                                                                                   ::by_ref<::System::Threading::Tasks::InternalTaskOptions> internalOptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "CreationOptionsFromContinuationOptions",
                                                                                                                   {},
                                                                                                                   { ::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>(),
                                                                                                                     ::i2c::type_of<::by_ref<::System::Threading::Tasks::TaskCreationOptions>>(),
                                                                                                                     ::i2c::type_of<::by_ref<::System::Threading::Tasks::InternalTaskOptions>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, continuationOptions, creationOptions, internalOptions);
}
inline void System::Threading::Tasks::Task::ContinueWithCore(::System::Threading::Tasks::Task* continuationTask, ::System::Threading::Tasks::TaskScheduler* scheduler,
                                                             ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                           { "ContinueWithCore",
                                                             {},
                                                             { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>(),
                                                               ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuationTask, scheduler, cancellationToken, options);
}
inline void System::Threading::Tasks::Task::AddCompletionAction(::System::Threading::Tasks::ITaskCompletionAction* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "AddCompletionAction", {}, { ::i2c::type_of<::System::Threading::Tasks::ITaskCompletionAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void System::Threading::Tasks::Task::AddCompletionAction(::System::Threading::Tasks::ITaskCompletionAction* action, bool addBeforeOthers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                           { "AddCompletionAction", {}, { ::i2c::type_of<::System::Threading::Tasks::ITaskCompletionAction*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, addBeforeOthers);
}
inline bool System::Threading::Tasks::Task::AddTaskContinuationComplex(::System::Object* tc, bool addBeforeOthers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "AddTaskContinuationComplex", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tc, addBeforeOthers);
}
inline bool System::Threading::Tasks::Task::AddTaskContinuation(::System::Object* tc, bool addBeforeOthers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "AddTaskContinuation", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tc, addBeforeOthers);
}
inline void System::Threading::Tasks::Task::RemoveContinuation(::System::Object* continuationObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "RemoveContinuation", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuationObject);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task::FromResult(TResult result) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "FromResult", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<TResult>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(nullptr, ___internal_method, result);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::FromException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "FromException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, exception);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task::FromException(::System::Exception* exception) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "FromException", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::Exception*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(nullptr, ___internal_method, exception);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::FromCancellation(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "FromCancellation", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::FromCanceled(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "FromCanceled", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, cancellationToken);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task::FromCancellation(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "FromCancellation", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(nullptr, ___internal_method, cancellationToken);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task::FromCanceled(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "FromCanceled", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(nullptr, ___internal_method, cancellationToken);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task::FromCancellation(::System::OperationCanceledException* exception) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "FromCancellation", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::OperationCanceledException*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(nullptr, ___internal_method, exception);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::Run(::System::Action* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Run", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, action);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::Run(::System::Action* action, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Run", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, action, cancellationToken);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task::Run(::System::Func_1<TResult>* function) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Run", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::Func_1<TResult>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(nullptr, ___internal_method, function);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task::Run(::System::Func_1<TResult>* function, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                              { "Run", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::Func_1<TResult>*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(nullptr, ___internal_method, function, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::Run(::System::Func_1<::System::Threading::Tasks::Task*>* function) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Run", {}, { ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, function);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::Run(::System::Func_1<::System::Threading::Tasks::Task*>* function, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                              { "Run", {}, { ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task*>*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, function, cancellationToken);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task::Run(::System::Func_1<::System::Threading::Tasks::Task_1<TResult>*>* function) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                           { "Run", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task_1<TResult>*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(nullptr, ___internal_method, function);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task::Run(::System::Func_1<::System::Threading::Tasks::Task_1<TResult>*>* function,
                                                                                        ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Threading::Tasks::Task*>(),
          { "Run", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task_1<TResult>*>*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(nullptr, ___internal_method, function, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::Delay(::System::TimeSpan delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Delay", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, delay);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::Delay(::System::TimeSpan delay, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Delay", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, delay, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::Delay(int32_t millisecondsDelay) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "Delay", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, millisecondsDelay);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::Delay(int32_t millisecondsDelay, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                                                         { "Delay", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, millisecondsDelay, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::WhenAll(::System::Collections::Generic::IEnumerable_1<::System::Threading::Tasks::Task*>* tasks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                           { "WhenAll", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Threading::Tasks::Task*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, tasks);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::WhenAll(::ArrayW<::System::Threading::Tasks::Task*> tasks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "WhenAll", {}, { ::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, tasks);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::InternalWhenAll(::ArrayW<::System::Threading::Tasks::Task*> tasks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "InternalWhenAll", {}, { ::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, tasks);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<::ArrayW<TResult>>*
System::Threading::Tasks::Task::WhenAll(::System::Collections::Generic::IEnumerable_1<::System::Threading::Tasks::Task_1<TResult>*>* tasks) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                          { "WhenAll", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Threading::Tasks::Task_1<TResult>*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<TResult>>*>(nullptr, ___internal_method, tasks);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<::ArrayW<TResult>>* System::Threading::Tasks::Task::WhenAll(::ArrayW<::System::Threading::Tasks::Task_1<TResult>*> tasks) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                           { "WhenAll", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task_1<TResult>*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<TResult>>*>(nullptr, ___internal_method, tasks);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<::ArrayW<TResult>>* System::Threading::Tasks::Task::InternalWhenAll(::ArrayW<::System::Threading::Tasks::Task_1<TResult>*> tasks) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                           { "InternalWhenAll", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task_1<TResult>*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<TResult>>*>(nullptr, ___internal_method, tasks);
}
inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>* System::Threading::Tasks::Task::WhenAny(::ArrayW<::System::Threading::Tasks::Task*> tasks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "WhenAny", {}, { ::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*>(nullptr, ___internal_method, tasks);
}
inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*
System::Threading::Tasks::Task::WhenAny(::System::Collections::Generic::IEnumerable_1<::System::Threading::Tasks::Task*>* tasks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                           { "WhenAny", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Threading::Tasks::Task*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*>(nullptr, ___internal_method, tasks);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task_1<TResult>*>* System::Threading::Tasks::Task::WhenAny(::ArrayW<::System::Threading::Tasks::Task_1<TResult>*> tasks) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                                           { "WhenAny", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task_1<TResult>*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task_1<TResult>*>*>(nullptr, ___internal_method, tasks);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task_1<TResult>*>*
System::Threading::Tasks::Task::WhenAny(::System::Collections::Generic::IEnumerable_1<::System::Threading::Tasks::Task_1<TResult>*>* tasks) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                          { "WhenAny", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Threading::Tasks::Task_1<TResult>*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task_1<TResult>*>*>(nullptr, ___internal_method, tasks);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task::CreateUnwrapPromise(::System::Threading::Tasks::Task* outerTask, bool lookForOce) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(),
                                              { "CreateUnwrapPromise", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(nullptr, ___internal_method, outerTask, lookForOce);
}
inline bool System::Threading::Tasks::Task::AddToActiveTasks(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "AddToActiveTasks", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, task);
}
inline void System::Threading::Tasks::Task::RemoveFromActiveTasks(int32_t taskId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "RemoveFromActiveTasks", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, taskId);
}
inline void System::Threading::Tasks::Task::MarkAborted(::System::Threading::ThreadAbortException* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "MarkAborted", {}, { ::i2c::type_of<::System::Threading::ThreadAbortException*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Threading::Tasks::Task::ExecuteWithThreadLocal(::by_ref<::System::Threading::Tasks::Task*> currentTaskSlot) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task*>(), { "ExecuteWithThreadLocal", {}, { ::i2c::type_of<::by_ref<::System::Threading::Tasks::Task*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTaskSlot);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::New_ctor(bool canceled, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                  ::System::Threading::CancellationToken ct) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::Task*>(canceled, creationOptions, ct));
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::Task*>());
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::New_ctor(::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions, bool promiseStyle) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::Task*>(state, creationOptions, promiseStyle));
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::New_ctor(::System::Action* action, ::System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::Task*>(action, cancellationToken));
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task::New_ctor(::System::Delegate* action, ::System::Object* state, ::System::Threading::Tasks::Task* parent,
                                                                                  ::System::Threading::CancellationToken cancellationToken,
                                                                                  ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                  ::System::Threading::Tasks::InternalTaskOptions internalOptions,
                                                                                  ::System::Threading::Tasks::TaskScheduler* scheduler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::Task*>(action, state, parent, cancellationToken, creationOptions, internalOptions, scheduler));
}
/// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
constexpr System::Threading::Tasks::Task::operator ::System::Threading::IThreadPoolWorkItem*() noexcept {
  return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::IThreadPoolWorkItem"
constexpr ::System::Threading::IThreadPoolWorkItem* System::Threading::Tasks::Task::i___System__Threading__IThreadPoolWorkItem() noexcept {
  return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IAsyncResult"
constexpr System::Threading::Tasks::Task::operator ::System::IAsyncResult*() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IAsyncResult"
constexpr ::System::IAsyncResult* System::Threading::Tasks::Task::i___System__IAsyncResult() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Threading::Tasks::Task::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Threading::Tasks::Task::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::Task::Task() {}
