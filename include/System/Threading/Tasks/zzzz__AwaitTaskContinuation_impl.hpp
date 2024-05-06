#pragma once
#include "System/Threading/Tasks/zzzz__TaskContinuation_impl.hpp"
#include "System/Threading/Tasks/zzzz__AwaitTaskContinuation_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::AwaitTaskContinuation::*)(::System::Action*, bool)>(
    &::System::Threading::Tasks::AwaitTaskContinuation::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x29b3224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.CreateTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Threading::Tasks::AwaitTaskContinuation::*)(::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::Tasks::TaskScheduler*)>(
    &::System::Threading::Tasks::AwaitTaskContinuation::CreateTask)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x29b3c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(), "CreateTask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::AwaitTaskContinuation::*)(::System::Threading::Tasks::Task*, bool)>(
    &::System::Threading::Tasks::AwaitTaskContinuation::Run)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x29b3b48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.get_IsValidLocationForInlining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Threading::Tasks::AwaitTaskContinuation::get_IsValidLocationForInlining)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x29b3ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(),
                                                                               "get_IsValidLocationForInlining", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::AwaitTaskContinuation::*)()>(
    &::System::Threading::Tasks::AwaitTaskContinuation::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x29b3fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(),
                                                 "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.InvokeAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Tasks::AwaitTaskContinuation::InvokeAction)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29b4104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(), "InvokeAction",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.GetInvokeActionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ContextCallback* (*)()>(
    &::System::Threading::Tasks::AwaitTaskContinuation::GetInvokeActionCallback)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x29b4170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(),
                                                                               "GetInvokeActionCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.RunCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::AwaitTaskContinuation::*)(
    ::System::Threading::ContextCallback*, ::System::Object*, ByRef<::System::Threading::Tasks::Task*>)>(&::System::Threading::Tasks::AwaitTaskContinuation::RunCallback)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x29b3490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(), "RunCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ContextCallback*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::Tasks::Task*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.RunOrScheduleAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*, bool, ByRef<::System::Threading::Tasks::Task*>)>(
    &::System::Threading::Tasks::AwaitTaskContinuation::RunOrScheduleAction)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x29af51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(), "RunOrScheduleAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::Tasks::Task*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.UnsafeScheduleAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::System::Threading::Tasks::AwaitTaskContinuation::UnsafeScheduleAction)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x29ae4b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(), "UnsafeScheduleAction",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.ThrowAsyncIfNecessary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*)>(&::System::Threading::Tasks::AwaitTaskContinuation::ThrowAsyncIfNecessary)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x29b3e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(), "ThrowAsyncIfNecessary", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.MarkAborted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::AwaitTaskContinuation::*)(::System::Threading::ThreadAbortException*)>(
    &::System::Threading::Tasks::AwaitTaskContinuation::MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29b4218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(), "MarkAborted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
constexpr System::Threading::Tasks::AwaitTaskContinuation::operator ::System::Threading::IThreadPoolWorkItem*() noexcept {
  return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::IThreadPoolWorkItem"
constexpr ::System::Threading::IThreadPoolWorkItem* System::Threading::Tasks::AwaitTaskContinuation::i___System__Threading__IThreadPoolWorkItem() noexcept {
  return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
constexpr ::System::Threading::ExecutionContext*& System::Threading::Tasks::AwaitTaskContinuation::__cordl_internal_get_m_capturedContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_capturedContext;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> const& System::Threading::Tasks::AwaitTaskContinuation::__cordl_internal_get_m_capturedContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_capturedContext;
}
constexpr void System::Threading::Tasks::AwaitTaskContinuation::__cordl_internal_set_m_capturedContext(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_capturedContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& System::Threading::Tasks::AwaitTaskContinuation::__cordl_internal_get_m_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_action;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& System::Threading::Tasks::AwaitTaskContinuation::__cordl_internal_get_m_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_action;
}
constexpr void System::Threading::Tasks::AwaitTaskContinuation::__cordl_internal_set_m_action(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Threading::Tasks::AwaitTaskContinuation::setStaticF_s_invokeActionCallback(::System::Threading::ContextCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "s_invokeActionCallback",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get>(
      std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Threading::Tasks::AwaitTaskContinuation::getStaticF_s_invokeActionCallback() {
  return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "s_invokeActionCallback",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get>();
}
inline ::System::Threading::Tasks::AwaitTaskContinuation* System::Threading::Tasks::AwaitTaskContinuation::New_ctor(::System::Action* action, bool flowExecutionContext) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::AwaitTaskContinuation*>(action, flowExecutionContext));
}
inline void System::Threading::Tasks::AwaitTaskContinuation::_ctor(::System::Action* action, bool flowExecutionContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action, flowExecutionContext);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::AwaitTaskContinuation::CreateTask(::System::Action_1<::System::Object*>* action, ::System::Object* state,
                                                                                                     ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(), "CreateTask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, action, state, scheduler);
}
inline void System::Threading::Tasks::AwaitTaskContinuation::Run(::System::Threading::Tasks::Task* ignored, bool canInlineContinuationTask) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ignored, canInlineContinuationTask);
}
inline bool System::Threading::Tasks::AwaitTaskContinuation::get_IsValidLocationForInlining() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(),
                                                                             "get_IsValidLocationForInlining", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void System::Threading::Tasks::AwaitTaskContinuation::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(),
                                               "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::Tasks::AwaitTaskContinuation::InvokeAction(::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(), "InvokeAction",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state);
}
inline ::System::Threading::ContextCallback* System::Threading::Tasks::AwaitTaskContinuation::GetInvokeActionCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(),
                                                                             "GetInvokeActionCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ContextCallback*, false>(nullptr, ___internal_method);
}
inline void System::Threading::Tasks::AwaitTaskContinuation::RunCallback(::System::Threading::ContextCallback* callback, ::System::Object* state,
                                                                         ByRef<::System::Threading::Tasks::Task*> currentTask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(), "RunCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ContextCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::Tasks::Task*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, state, currentTask);
}
inline void System::Threading::Tasks::AwaitTaskContinuation::RunOrScheduleAction(::System::Action* action, bool allowInlining, ByRef<::System::Threading::Tasks::Task*> currentTask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(), "RunOrScheduleAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::Tasks::Task*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, allowInlining, currentTask);
}
inline void System::Threading::Tasks::AwaitTaskContinuation::UnsafeScheduleAction(::System::Action* action) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(), "UnsafeScheduleAction",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action);
}
inline void System::Threading::Tasks::AwaitTaskContinuation::ThrowAsyncIfNecessary(::System::Exception* exc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(), "ThrowAsyncIfNecessary",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, exc);
}
inline void System::Threading::Tasks::AwaitTaskContinuation::MarkAborted(::System::Threading::ThreadAbortException* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::AwaitTaskContinuation*>::get(), "MarkAborted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::AwaitTaskContinuation::AwaitTaskContinuation() {}
