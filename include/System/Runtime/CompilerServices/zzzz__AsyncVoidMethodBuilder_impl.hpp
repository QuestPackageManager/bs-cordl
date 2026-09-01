#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\AsyncVoidMethodBuilder.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncMethodBuilderCore_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder (*)()>(&::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::Create)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b71758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b71798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder.SetResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::*)()>(
    &::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::SetResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b71854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(), { "SetResult", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder.SetException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::*)(::System::Exception*)>(
    &::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::SetException)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5b71974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(), { "SetException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder.NotifySynchronizationContextOfCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::*)()>(
    &::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::NotifySynchronizationContextOfCompletion)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b718cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(), { "NotifySynchronizationContextOfCompletion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder.get_Task
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::*)()>(
    &::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::get_Task)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b71864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(), { "get_Task", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder System::Runtime::CompilerServices::AsyncVoidMethodBuilder::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(nullptr, ___internal_method);
}
template <typename TStateMachine> inline void System::Runtime::CompilerServices::AsyncVoidMethodBuilder::Start(::by_ref<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(),
                                                                                              { "Start", { ::i2c::class_of<TStateMachine>() }, { ::i2c::type_of<::by_ref<TStateMachine>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TStateMachine>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
inline void System::Runtime::CompilerServices::AsyncVoidMethodBuilder::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
template <typename TAwaiter, typename TStateMachine>
inline void System::Runtime::CompilerServices::AsyncVoidMethodBuilder::AwaitOnCompleted(::by_ref<TAwaiter> awaiter, ::by_ref<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(),
                                                                                              { "AwaitOnCompleted",
                                                                                                { ::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>() },
                                                                                                { ::i2c::type_of<::by_ref<TAwaiter>>(), ::i2c::type_of<::by_ref<TStateMachine>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, awaiter, stateMachine);
}
template <typename TAwaiter, typename TStateMachine>
inline void System::Runtime::CompilerServices::AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted(::by_ref<TAwaiter> awaiter, ::by_ref<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(),
                                                                                              { "AwaitUnsafeOnCompleted",
                                                                                                { ::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>() },
                                                                                                { ::i2c::type_of<::by_ref<TAwaiter>>(), ::i2c::type_of<::by_ref<TStateMachine>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, awaiter, stateMachine);
}
inline void System::Runtime::CompilerServices::AsyncVoidMethodBuilder::SetResult() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(), { "SetResult", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Runtime::CompilerServices::AsyncVoidMethodBuilder::SetException(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(), { "SetException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, exception);
}
inline void System::Runtime::CompilerServices::AsyncVoidMethodBuilder::NotifySynchronizationContextOfCompletion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(), { "NotifySynchronizationContextOfCompletion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Runtime::CompilerServices::AsyncVoidMethodBuilder::get_Task() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(), { "get_Task", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_synchronizationContext", ty: "::System::Threading::SynchronizationContext*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_coreState", ty:
// "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::AsyncVoidMethodBuilder(::System::Threading::SynchronizationContext* m_synchronizationContext,
                                                                                              ::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState,
                                                                                              ::System::Threading::Tasks::Task* m_task) noexcept {
  this->m_synchronizationContext = m_synchronizationContext;
  this->m_coreState = m_coreState;
  this->m_task = m_task;
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::AsyncVoidMethodBuilder() {}
