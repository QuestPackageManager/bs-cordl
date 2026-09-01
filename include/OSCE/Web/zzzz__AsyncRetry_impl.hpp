#pragma once
// IWYU pragma private; include "OSCE\Web\AsyncRetry.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OSCE/Web/zzzz__AsyncRetry_def.hpp"
#include "OSCE/Web/zzzz__AsyncRetry_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template <typename TException> inline void OSCE::Web::AsyncRetry__RetryOn_d__0_1<TException>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::AsyncRetry__RetryOn_d__0_1<TException>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TException> inline void OSCE::Web::AsyncRetry__RetryOn_d__0_1<TException>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::AsyncRetry__RetryOn_d__0_1<TException>>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TException> constexpr OSCE::Web::AsyncRetry__RetryOn_d__0_1<TException>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TException>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* OSCE::Web::AsyncRetry__RetryOn_d__0_1<TException>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "function", ty:
// "::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancelToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxTries", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_currentTry_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_exponentialBackoff_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
template <typename TException>
constexpr ::OSCE::Web::AsyncRetry__RetryOn_d__0_1<TException>::AsyncRetry__RetryOn_d__0_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                          ::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* function,
                                                                                          ::System::Threading::CancellationToken cancelToken, int32_t maxTries, int32_t _currentTry_5__2,
                                                                                          int32_t _exponentialBackoff_5__3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->function = function;
  this->cancelToken = cancelToken;
  this->maxTries = maxTries;
  this->_currentTry_5__2 = _currentTry_5__2;
  this->_exponentialBackoff_5__3 = _exponentialBackoff_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename TException> constexpr ::OSCE::Web::AsyncRetry__RetryOn_d__0_1<TException>::AsyncRetry__RetryOn_d__0_1() {}
template <typename TException>
inline ::System::Threading::Tasks::Task* OSCE::Web::AsyncRetry::RetryOn(int32_t maxTries, ::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* function,
                                                                        ::System::Threading::CancellationToken cancelToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Web::AsyncRetry*>(),
                                              { "RetryOn",
                                                { ::i2c::class_of<TException>() },
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*>(),
                                                  ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TException>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, maxTries, function, cancelToken);
}
// Ctor Parameters []
constexpr ::OSCE::Web::AsyncRetry::AsyncRetry() {}
