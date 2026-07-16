#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder (*)()>(&::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::Create)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b6fa28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b6d638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder.get_Task
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::*)()>(
    &::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::get_Task)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b6d950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(), { "get_Task", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder.SetResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::*)()>(
    &::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetResult)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b6d728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(), { "SetResult", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder.SetException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::*)(::System::Exception*)>(
    &::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetException)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b6d840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(), { "SetException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder::setStaticF_s_cachedCompleted(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*, "s_cachedCompleted", ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(
      std::forward<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*>(value));
}
inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* System::Runtime::CompilerServices::AsyncTaskMethodBuilder::getStaticF_s_cachedCompleted() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*, "s_cachedCompleted",
                                           ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>();
}
inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder System::Runtime::CompilerServices::AsyncTaskMethodBuilder::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(nullptr, ___internal_method);
}
template <typename TStateMachine> inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder::Start(::by_ref<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(),
                                                                                              { "Start", { ::i2c::class_of<TStateMachine>() }, { ::i2c::type_of<::by_ref<TStateMachine>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TStateMachine>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
template <typename TAwaiter, typename TStateMachine>
inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder::AwaitOnCompleted(::by_ref<TAwaiter> awaiter, ::by_ref<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(),
                                                                                              { "AwaitOnCompleted",
                                                                                                { ::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>() },
                                                                                                { ::i2c::type_of<::by_ref<TAwaiter>>(), ::i2c::type_of<::by_ref<TStateMachine>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, awaiter, stateMachine);
}
template <typename TAwaiter, typename TStateMachine>
inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted(::by_ref<TAwaiter> awaiter, ::by_ref<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(),
                                                                                              { "AwaitUnsafeOnCompleted",
                                                                                                { ::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>() },
                                                                                                { ::i2c::type_of<::by_ref<TAwaiter>>(), ::i2c::type_of<::by_ref<TStateMachine>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, awaiter, stateMachine);
}
inline ::System::Threading::Tasks::Task* System::Runtime::CompilerServices::AsyncTaskMethodBuilder::get_Task() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(), { "get_Task", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(*this, ___internal_method);
}
inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetResult() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(), { "SetResult", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetException(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(), { "SetException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, exception);
}
// Ctor Parameters [CppParam { name: "m_builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult>", modifiers: "", def_value: Some("{}")
// }]
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::AsyncTaskMethodBuilder(
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult> m_builder) noexcept {
  this->m_builder = m_builder;
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::AsyncTaskMethodBuilder() {}
