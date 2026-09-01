#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\AsyncValueTaskMethodBuilder_1.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
template <typename TResult> inline ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult> System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::Create() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>(nullptr, ___internal_method);
}
template <typename TResult> template <typename TStateMachine> inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::Start(::by_ref<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>(),
                                                                                              { "Start", { ::i2c::class_of<TStateMachine>() }, { ::i2c::type_of<::by_ref<TStateMachine>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TStateMachine>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
template <typename TResult>
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
template <typename TResult> inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::SetResult(TResult result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>(), { "SetResult", {}, { ::i2c::type_of<TResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result);
}
template <typename TResult> inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::SetException(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>(),
                                                                                         { "SetException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, exception);
}
template <typename TResult> inline ::System::Threading::Tasks::ValueTask_1<TResult> System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::get_Task() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>(), { "get_Task", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<TResult>>(*this, ___internal_method);
}
template <typename TResult>
template <typename TAwaiter, typename TStateMachine>
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::AwaitUnsafeOnCompleted(::by_ref<TAwaiter> awaiter, ::by_ref<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>(),
                                                                                              { "AwaitUnsafeOnCompleted",
                                                                                                { ::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>() },
                                                                                                { ::i2c::type_of<::by_ref<TAwaiter>>(), ::i2c::type_of<::by_ref<TStateMachine>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, awaiter, stateMachine);
}
// Ctor Parameters [CppParam { name: "_methodBuilder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_result",
// ty: "TResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "_haveResult", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_useBuilder", ty: "bool", modifiers: "",
// def_value: Some("{}") }]
template <typename TResult>
constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::AsyncValueTaskMethodBuilder_1(
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> _methodBuilder, TResult _result, bool _haveResult, bool _useBuilder) noexcept {
  this->_methodBuilder = _methodBuilder;
  this->_result = _result;
  this->_haveResult = _haveResult;
  this->_useBuilder = _useBuilder;
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::AsyncValueTaskMethodBuilder_1() {}
