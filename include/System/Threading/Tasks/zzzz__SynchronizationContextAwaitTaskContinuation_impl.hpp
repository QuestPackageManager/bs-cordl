#pragma once
// IWYU pragma private; include "System/Threading/Tasks/SynchronizationContextAwaitTaskContinuation.hpp"
#include "System/Threading/Tasks/zzzz__AwaitTaskContinuation_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__SynchronizationContextAwaitTaskContinuation_def.hpp"
#include "System/Threading/Tasks/zzzz__SynchronizationContextAwaitTaskContinuation_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c::*)()>(
    &::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e6e7ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c.__cctor_b__7_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c::*)(::System::Object*)>(
    &::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c::__cctor_b__7_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3e6e7b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*>::get(), "<.cctor>b__7_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c::setStaticF___9(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*>::get>(
      std::forward<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*>(value));
}
inline ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c* System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*>::get>();
}
inline void System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c::__cctor_b__7_0(::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*>::get(), "<.cctor>b__7_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c* System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c::SynchronizationContextAwaitTaskContinuation___c() {}
//  Writing Method size for method: ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::*)(
    ::System::Threading::SynchronizationContext*, ::System::Action*, bool)>(&::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3e69330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SynchronizationContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::*)(
    ::System::Threading::Tasks::Task*, bool)>(&::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::Run)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3e6e260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>::get(), "Run", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation.PostAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::PostAction)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3e6e538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>::get(), "PostAction",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation.GetPostActionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ContextCallback* (*)()>(
    &::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::GetPostActionCallback)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3e6e5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>::get(),
                                                 "GetPostActionCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Threading::SynchronizationContext*& System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::__cordl_internal_get_m_syncContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_syncContext;
}
constexpr ::System::Threading::SynchronizationContext* const& System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::__cordl_internal_get_m_syncContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_syncContext;
}
constexpr void System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::__cordl_internal_set_m_syncContext(::System::Threading::SynchronizationContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_syncContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::setStaticF_s_postCallback(::System::Threading::SendOrPostCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::SendOrPostCallback*, "s_postCallback",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>::get>(
      std::forward<::System::Threading::SendOrPostCallback*>(value));
}
inline ::System::Threading::SendOrPostCallback* System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::getStaticF_s_postCallback() {
  return ::cordl_internals::getStaticField<::System::Threading::SendOrPostCallback*, "s_postCallback",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>::get>();
}
inline void System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::setStaticF_s_postActionCallback(::System::Threading::ContextCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "s_postActionCallback",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>::get>(
      std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::getStaticF_s_postActionCallback() {
  return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "s_postActionCallback",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>::get>();
}
inline void System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::_ctor(::System::Threading::SynchronizationContext* context, ::System::Action* action, bool flowExecutionContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SynchronizationContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, action, flowExecutionContext);
}
inline void System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::Run(::System::Threading::Tasks::Task* ignored, bool canInlineContinuationTask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>::get(), "Run", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ignored, canInlineContinuationTask);
}
inline void System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::PostAction(::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>::get(), "PostAction",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state);
}
inline ::System::Threading::ContextCallback* System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::GetPostActionCallback() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>::get(),
                                               "GetPostActionCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ContextCallback*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*
System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::New_ctor(::System::Threading::SynchronizationContext* context, ::System::Action* action, bool flowExecutionContext) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>(context, action, flowExecutionContext));
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::SynchronizationContextAwaitTaskContinuation() {}
