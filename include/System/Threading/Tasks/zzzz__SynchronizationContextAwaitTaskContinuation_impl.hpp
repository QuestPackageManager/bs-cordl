#pragma once
// IWYU pragma private; include "System\Threading\Tasks\SynchronizationContextAwaitTaskContinuation.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c::*)()>(
    &::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cc694c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c.__cctor_b__7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c::*)(::System::Object*)>(
    &::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c::__cctor_b__7_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cc6950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*>(),
                                                                                           { "<.cctor>b__7_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c::setStaticF___9(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*, "<>9", ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*>(
      std::forward<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*>(value));
}
inline ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c* System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*, "<>9",
                                           ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*>();
}
inline void System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c::__cctor_b__7_0(::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*>(),
                                                                                         { "<.cctor>b__7_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c* System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c::SynchronizationContextAwaitTaskContinuation___c() {}
//  Writing Method size for method: ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::*)(
    ::System::Threading::SynchronizationContext*, ::System::Action*, bool)>(&::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5cc15b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Threading::SynchronizationContext*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::*)(::System::Threading::Tasks::Task*, bool)>(
    &::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::Run)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5cc6398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>(),
                                                                                           { "Run", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation.PostAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::PostAction)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5cc66c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>(), { "PostAction", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation.GetPostActionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ContextCallback* (*)()>(&::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::GetPostActionCallback)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5cc6760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>(), { "GetPostActionCallback", {}, {} })));
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
  this->___m_syncContext = value;
}
inline void System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::setStaticF_s_postCallback(::System::Threading::SendOrPostCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::SendOrPostCallback*, "s_postCallback", ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>(
      std::forward<::System::Threading::SendOrPostCallback*>(value));
}
inline ::System::Threading::SendOrPostCallback* System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::getStaticF_s_postCallback() {
  return ::cordl_internals::getStaticField<::System::Threading::SendOrPostCallback*, "s_postCallback", ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>();
}
inline void System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::setStaticF_s_postActionCallback(::System::Threading::ContextCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "s_postActionCallback", ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>(
      std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::getStaticF_s_postActionCallback() {
  return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "s_postActionCallback", ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>();
}
inline void System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::_ctor(::System::Threading::SynchronizationContext* context, ::System::Action* action, bool flowExecutionContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Threading::SynchronizationContext*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, action, flowExecutionContext);
}
inline void System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::Run(::System::Threading::Tasks::Task* ignored, bool canInlineContinuationTask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>(),
                                                                                         { "Run", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ignored, canInlineContinuationTask);
}
inline void System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::PostAction(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>(), { "PostAction", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline ::System::Threading::ContextCallback* System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::GetPostActionCallback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>(), { "GetPostActionCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ContextCallback*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*
System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::New_ctor(::System::Threading::SynchronizationContext* context, ::System::Action* action, bool flowExecutionContext) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*>(context, action, flowExecutionContext));
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::SynchronizationContextAwaitTaskContinuation() {}
