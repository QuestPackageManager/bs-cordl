#pragma once
// IWYU pragma private; include "System\Threading\Tasks\Sources\ManualResetValueTaskSourceCore_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ManualResetValueTaskSourceCore_1_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ManualResetValueTaskSourceCore_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceOnCompletedFlags_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceStatus_def.hpp"
#include "System/Threading/zzzz__ContextCallback_1_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TResult>
inline void
System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>::setStaticF___9(::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>*, "<>9",
                                    ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>*>(
      std::forward<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>*>(value));
}
template <typename TResult>
inline ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>* System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>*, "<>9",
                                           ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>*>();
}
template <typename TResult> inline void System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>::setStaticF___9__19_0(::System::Threading::SendOrPostCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::SendOrPostCallback*, "<>9__19_0", ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>*>(
      std::forward<::System::Threading::SendOrPostCallback*>(value));
}
template <typename TResult> inline ::System::Threading::SendOrPostCallback* System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>::getStaticF___9__19_0() {
  return ::cordl_internals::getStaticField<::System::Threading::SendOrPostCallback*, "<>9__19_0", ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>*>();
}
template <typename TResult>
inline void System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>::setStaticF___9__21_0(
    ::System::Threading::ContextCallback_1<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>>* value) {
  ::cordl_internals::setStaticField<::System::Threading::ContextCallback_1<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>>*, "<>9__21_0",
                                    ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>*>(
      std::forward<::System::Threading::ContextCallback_1<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>>*>(value));
}
template <typename TResult>
inline ::System::Threading::ContextCallback_1<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>>*
System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>::getStaticF___9__21_0() {
  return ::cordl_internals::getStaticField<::System::Threading::ContextCallback_1<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>>*, "<>9__21_0",
                                           ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>*>();
}
template <typename TResult> inline void System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>::setStaticF___9__22_0(::System::Threading::SendOrPostCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::SendOrPostCallback*, "<>9__22_0", ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>*>(
      std::forward<::System::Threading::SendOrPostCallback*>(value));
}
template <typename TResult> inline ::System::Threading::SendOrPostCallback* System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>::getStaticF___9__22_0() {
  return ::cordl_internals::getStaticField<::System::Threading::SendOrPostCallback*, "<>9__22_0", ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>*>();
}
template <typename TResult> inline void System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TResult> inline void System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>::_OnCompleted_b__19_0(::System::Object* s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>*>(),
                                                                                         { "<OnCompleted>b__19_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
template <typename TResult>
inline void System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>::_SignalCompletion_b__21_0(
    ::by_ref<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>> s) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>*>(),
                                              { "<SignalCompletion>b__21_0", {}, { ::i2c::type_of<::by_ref<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
template <typename TResult> inline void System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>::_InvokeContinuation_b__22_0(::System::Object* s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>*>(),
                                                                                         { "<InvokeContinuation>b__22_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
template <typename TResult>
inline ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>* System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>*>());
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>::ManualResetValueTaskSourceCore_1___c() {}
template <typename TResult> inline bool System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>::get_RunContinuationsAsynchronously() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>>(), { "get_RunContinuationsAsynchronously", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TResult> inline void System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TResult> inline void System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>::SetResult(TResult result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>>(), { "SetResult", {}, { ::i2c::type_of<TResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result);
}
template <typename TResult> inline void System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>::SetException(::System::Exception* error) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>>(),
                                                                                         { "SetException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, error);
}
template <typename TResult> inline int16_t System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>::get_Version() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(*this, ___internal_method);
}
template <typename TResult> inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>::GetStatus(int16_t token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>>(), { "GetStatus", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Sources::ValueTaskSourceStatus>(*this, ___internal_method, token);
}
template <typename TResult> inline TResult System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>::GetResult(int16_t token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>>(), { "GetResult", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<TResult>(*this, ___internal_method, token);
}
template <typename TResult>
inline void System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>::OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, int16_t token,
                                                                                                      ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>>(),
                                                           { "OnCompleted",
                                                             {},
                                                             { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>(),
                                                               ::i2c::type_of<::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation, state, token, flags);
}
template <typename TResult> inline void System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>::ValidateToken(int16_t token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>>(), { "ValidateToken", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, token);
}
template <typename TResult> inline void System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>::SignalCompletion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>>(), { "SignalCompletion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TResult> inline void System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>::InvokeContinuation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>>(), { "InvokeContinuation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_continuation", ty: "::System::Action_1<::System::Object*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_continuationState", ty:
// "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_executionContext", ty: "::System::Threading::ExecutionContext*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_capturedContext", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_completed", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_result", ty: "TResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "_error", ty: "::System::Runtime::ExceptionServices::ExceptionDispatchInfo*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "_version", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_RunContinuationsAsynchronously_k__BackingField", ty: "bool", modifiers: "", def_value:
// Some("{}") }]
template <typename TResult>
constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>::ManualResetValueTaskSourceCore_1(
    ::System::Action_1<::System::Object*>* _continuation, ::System::Object* _continuationState, ::System::Threading::ExecutionContext* _executionContext, ::System::Object* _capturedContext,
    bool _completed, TResult _result, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _error, int16_t _version, bool _RunContinuationsAsynchronously_k__BackingField) noexcept {
  this->_continuation = _continuation;
  this->_continuationState = _continuationState;
  this->_executionContext = _executionContext;
  this->_capturedContext = _capturedContext;
  this->_completed = _completed;
  this->_result = _result;
  this->_error = _error;
  this->_version = _version;
  this->_RunContinuationsAsynchronously_k__BackingField = _RunContinuationsAsynchronously_k__BackingField;
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>::ManualResetValueTaskSourceCore_1() {}
