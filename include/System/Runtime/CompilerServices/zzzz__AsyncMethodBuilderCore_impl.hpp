#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncMethodBuilderCore_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncMethodBuilderCore_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::*)(
    ::System::Threading::ExecutionContext*, ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x285dca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::*)()>(
    &::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::Run)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x285e0dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>::get(), "Run",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner.InvokeMoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(
    &::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::InvokeMoveNext)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x285e2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>::get(), "InvokeMoveNext",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::ExecutionContext*& System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::__cordl_internal_get_m_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_context;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> const&
System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::__cordl_internal_get_m_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_context;
}
constexpr void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::__cordl_internal_set_m_context(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*& System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::__cordl_internal_get_m_stateMachine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stateMachine;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::CompilerServices::IAsyncStateMachine*> const&
System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::__cordl_internal_get_m_stateMachine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stateMachine;
}
constexpr void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::__cordl_internal_set_m_stateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_stateMachine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::setStaticF_s_invokeMoveNext(::System::Threading::ContextCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "s_invokeMoveNext",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>::get>(
      std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::getStaticF_s_invokeMoveNext() {
  return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "s_invokeMoveNext",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>::get>();
}
inline ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*
System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::New_ctor(::System::Threading::ExecutionContext* context,
                                                                                      ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>(context, stateMachine));
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::_ctor(::System::Threading::ExecutionContext* context,
                                                                                               ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, stateMachine);
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::Run() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>::get(), "Run",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::InvokeMoveNext(::System::Object* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>::get(), "InvokeMoveNext",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stateMachine);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::__AsyncMethodBuilderCore__MoveNextRunner() {}
//  Writing Method size for method: ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::*)(
    ::System::Action*, ::System::Action*, ::System::Threading::Tasks::Task*)>(&::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x285dffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::*)()>(
    &::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::Invoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x285e3c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper*>::get(),
                                                 "Invoke", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action*& System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::__cordl_internal_get_m_continuation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_continuation;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::__cordl_internal_get_m_continuation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_continuation;
}
constexpr void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::__cordl_internal_set_m_continuation(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_continuation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::__cordl_internal_get_m_invokeAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_invokeAction;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::__cordl_internal_get_m_invokeAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_invokeAction;
}
constexpr void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::__cordl_internal_set_m_invokeAction(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_invokeAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task*& System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::__cordl_internal_get_m_innerTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_innerTask;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const&
System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::__cordl_internal_get_m_innerTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_innerTask;
}
constexpr void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::__cordl_internal_set_m_innerTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_innerTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper*
System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::New_ctor(::System::Action* continuation, ::System::Action* invokeAction,
                                                                                           ::System::Threading::Tasks::Task* innerTask) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper*>(continuation, invokeAction, innerTask));
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::_ctor(::System::Action* continuation, ::System::Action* invokeAction,
                                                                                                    ::System::Threading::Tasks::Task* innerTask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation, invokeAction, innerTask);
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::Invoke() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper*>::get(),
                                               "Invoke", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::__AsyncMethodBuilderCore__ContinuationWrapper() {}
//  Writing Method size for method: ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::*)()>(
    &::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285dd94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0._OutputAsyncCausalityEvents_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::*)()>(
    &::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::_OutputAsyncCausalityEvents_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x285e3ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0*>::get(),
                                                 "<OutputAsyncCausalityEvents>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task*& System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::__cordl_internal_get_innerTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___innerTask;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const&
System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::__cordl_internal_get_innerTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___innerTask;
}
constexpr void System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::__cordl_internal_set_innerTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___innerTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::__cordl_internal_get_continuation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuation;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::__cordl_internal_get_continuation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuation;
}
constexpr void System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::__cordl_internal_set_continuation(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___continuation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0* System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0*>());
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::_OutputAsyncCausalityEvents_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0*>::get(),
                                               "<OutputAsyncCausalityEvents>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::__AsyncMethodBuilderCore____c__DisplayClass5_0() {}
//  Writing Method size for method: ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::*)()>(
    &::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285e4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c._ThrowAsync_b__7_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::*)(::System::Object*)>(
    &::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::_ThrowAsync_b__7_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x285e4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get(), "<ThrowAsync>b__7_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c._ThrowAsync_b__7_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::*)(::System::Object*)>(
    &::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::_ThrowAsync_b__7_1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x285e508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get(), "<ThrowAsync>b__7_1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::setStaticF___9(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c* value) {
  ::cordl_internals::setStaticField<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get>(
      std::forward<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>(value));
}
inline ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c* System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get>();
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::setStaticF___9__7_0(::System::Threading::SendOrPostCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::SendOrPostCallback*, "<>9__7_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get>(
      std::forward<::System::Threading::SendOrPostCallback*>(value));
}
inline ::System::Threading::SendOrPostCallback* System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Threading::SendOrPostCallback*, "<>9__7_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get>();
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::setStaticF___9__7_1(::System::Threading::WaitCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::WaitCallback*, "<>9__7_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get>(
      std::forward<::System::Threading::WaitCallback*>(value));
}
inline ::System::Threading::WaitCallback* System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::getStaticF___9__7_1() {
  return ::cordl_internals::getStaticField<::System::Threading::WaitCallback*, "<>9__7_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get>();
}
inline ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c* System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>());
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::_ThrowAsync_b__7_0(::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get(), "<ThrowAsync>b__7_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::_ThrowAsync_b__7_1(::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get(), "<ThrowAsync>b__7_1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::__AsyncMethodBuilderCore____c() {}
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncMethodBuilderCore.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::AsyncMethodBuilderCore::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Runtime::CompilerServices::AsyncMethodBuilderCore::SetStateMachine)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x285d26c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncMethodBuilderCore.GetCompletionAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action* (
    ::System::Runtime::CompilerServices::AsyncMethodBuilderCore::*)(::System::Threading::Tasks::Task*, ByRef<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>)>(
    &::System::Runtime::CompilerServices::AsyncMethodBuilderCore::GetCompletionAction)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x285dadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(), "GetCompletionAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncMethodBuilderCore.OutputAsyncCausalityEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Action* (::System::Runtime::CompilerServices::AsyncMethodBuilderCore::*)(::System::Threading::Tasks::Task*, ::System::Action*)>(
        &::System::Runtime::CompilerServices::AsyncMethodBuilderCore::OutputAsyncCausalityEvents)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x285dcd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(),
                                                 "OutputAsyncCausalityEvents", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncMethodBuilderCore.PostBoxInitialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::AsyncMethodBuilderCore::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*, ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*, ::System::Threading::Tasks::Task*)>(
    &::System::Runtime::CompilerServices::AsyncMethodBuilderCore::PostBoxInitialization)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x285de5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(), "PostBoxInitialization", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncMethodBuilderCore.ThrowAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*, ::System::Threading::SynchronizationContext*)>(
    &::System::Runtime::CompilerServices::AsyncMethodBuilderCore::ThrowAsync)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x285d5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(), "ThrowAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SynchronizationContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncMethodBuilderCore.CreateContinuationWrapper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action* (*)(::System::Action*, ::System::Action*, ::System::Threading::Tasks::Task*)>(
    &::System::Runtime::CompilerServices::AsyncMethodBuilderCore::CreateContinuationWrapper)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x285dd9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(),
                                                 "CreateContinuationWrapper", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncMethodBuilderCore.TryGetContinuationTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Action*)>(
    &::System::Runtime::CompilerServices::AsyncMethodBuilderCore::TryGetContinuationTask)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x285e048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(), "TryGetContinuationTask",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::AsyncMethodBuilderCore::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
inline ::System::Action*
System::Runtime::CompilerServices::AsyncMethodBuilderCore::GetCompletionAction(::System::Threading::Tasks::Task* taskForTracing,
                                                                               ByRef<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*> runnerToInitialize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(), "GetCompletionAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Action*, false>(this, ___internal_method, taskForTracing, runnerToInitialize);
}
inline ::System::Action* System::Runtime::CompilerServices::AsyncMethodBuilderCore::OutputAsyncCausalityEvents(::System::Threading::Tasks::Task* innerTask, ::System::Action* continuation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(), "OutputAsyncCausalityEvents",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Action*, false>(this, ___internal_method, innerTask, continuation);
}
inline void System::Runtime::CompilerServices::AsyncMethodBuilderCore::PostBoxInitialization(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine,
                                                                                             ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner* runner,
                                                                                             ::System::Threading::Tasks::Task* builtTask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(), "PostBoxInitialization", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine, runner, builtTask);
}
inline void System::Runtime::CompilerServices::AsyncMethodBuilderCore::ThrowAsync(::System::Exception* exception, ::System::Threading::SynchronizationContext* targetContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(), "ThrowAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SynchronizationContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, exception, targetContext);
}
/// @param innerTask: ::System::Threading::Tasks::Task* (default: nullptr)
inline ::System::Action* System::Runtime::CompilerServices::AsyncMethodBuilderCore::CreateContinuationWrapper(::System::Action* continuation, ::System::Action* invokeAction,
                                                                                                              ::System::Threading::Tasks::Task* innerTask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(), "CreateContinuationWrapper", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Action*, false>(nullptr, ___internal_method, continuation, invokeAction, innerTask);
}
inline ::System::Threading::Tasks::Task* System::Runtime::CompilerServices::AsyncMethodBuilderCore::TryGetContinuationTask(::System::Action* action) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(), "TryGetContinuationTask",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, action);
}
// Ctor Parameters [CppParam { name: "m_stateMachine", ty: "::System::Runtime::CompilerServices::IAsyncStateMachine*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "m_defaultContextAction", ty: "::System::Action*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore::AsyncMethodBuilderCore(::System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine,
                                                                                              ::System::Action* m_defaultContextAction) noexcept {
  this->m_stateMachine = m_stateMachine;
  this->m_defaultContextAction = m_defaultContextAction;
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore::AsyncMethodBuilderCore() {}
