#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\AsyncValueTaskMethodBuilder.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder (*)()>(
    &::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::Create)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b6f8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b6f8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder.SetResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::*)()>(
    &::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::SetResult)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b6f9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>(), { "SetResult", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder.SetException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::*)(::System::Exception*)>(
    &::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::SetException)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b6fad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>(), { "SetException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder.get_Task
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::*)()>(
    &::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::get_Task)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b6fbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>(), { "get_Task", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>(nullptr, ___internal_method);
}
template <typename TStateMachine> inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::Start(::by_ref<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>(),
                                                                                              { "Start", { ::i2c::class_of<TStateMachine>() }, { ::i2c::type_of<::by_ref<TStateMachine>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TStateMachine>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::SetResult() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>(), { "SetResult", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::SetException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>(), { "SetException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, exception);
}
inline ::System::Threading::Tasks::ValueTask System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::get_Task() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>(), { "get_Task", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(*this, ___internal_method);
}
template <typename TAwaiter, typename TStateMachine>
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::AwaitUnsafeOnCompleted(::by_ref<TAwaiter> awaiter, ::by_ref<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>(),
                                                                                              { "AwaitUnsafeOnCompleted",
                                                                                                { ::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>() },
                                                                                                { ::i2c::type_of<::by_ref<TAwaiter>>(), ::i2c::type_of<::by_ref<TStateMachine>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, awaiter, stateMachine);
}
// Ctor Parameters [CppParam { name: "_methodBuilder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "_haveResult", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_useBuilder", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::AsyncValueTaskMethodBuilder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder _methodBuilder, bool _haveResult,
                                                                                                        bool _useBuilder) noexcept {
  this->_methodBuilder = _methodBuilder;
  this->_haveResult = _haveResult;
  this->_useBuilder = _useBuilder;
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::AsyncValueTaskMethodBuilder() {}
