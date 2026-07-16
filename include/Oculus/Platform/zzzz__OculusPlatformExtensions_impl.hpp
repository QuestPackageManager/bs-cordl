#pragma once
// IWYU pragma private; include "Oculus/Platform/OculusPlatformExtensions.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Oculus/Platform/zzzz__OculusPlatformExtensions_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "Oculus/Platform/zzzz__OculusPlatformExtensions_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
template <typename T>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<T>*>*& Oculus::Platform::OculusPlatformExtensions___c__DisplayClass0_0_1<T>::__cordl_internal_get_tcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
template <typename T>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<T>*>* const&
Oculus::Platform::OculusPlatformExtensions___c__DisplayClass0_0_1<T>::__cordl_internal_get_tcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
template <typename T>
constexpr void
Oculus::Platform::OculusPlatformExtensions___c__DisplayClass0_0_1<T>::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tcs = value;
}
template <typename T> constexpr ::System::Threading::CancellationToken& Oculus::Platform::OculusPlatformExtensions___c__DisplayClass0_0_1<T>::__cordl_internal_get_cancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
template <typename T> constexpr ::System::Threading::CancellationToken const& Oculus::Platform::OculusPlatformExtensions___c__DisplayClass0_0_1<T>::__cordl_internal_get_cancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
template <typename T> constexpr void Oculus::Platform::OculusPlatformExtensions___c__DisplayClass0_0_1<T>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancellationToken = value;
}
template <typename T> inline void Oculus::Platform::OculusPlatformExtensions___c__DisplayClass0_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::OculusPlatformExtensions___c__DisplayClass0_0_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void Oculus::Platform::OculusPlatformExtensions___c__DisplayClass0_0_1<T>::_WaitAsync_b__0(::Oculus::Platform::Message_1<T>* result) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::OculusPlatformExtensions___c__DisplayClass0_0_1<T>*>(),
                                                                                         { "<WaitAsync>b__0", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template <typename T> inline void Oculus::Platform::OculusPlatformExtensions___c__DisplayClass0_0_1<T>::_WaitAsync_b__1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::OculusPlatformExtensions___c__DisplayClass0_0_1<T>*>(), { "<WaitAsync>b__1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::Oculus::Platform::OculusPlatformExtensions___c__DisplayClass0_0_1<T>* Oculus::Platform::OculusPlatformExtensions___c__DisplayClass0_0_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::OculusPlatformExtensions___c__DisplayClass0_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Oculus::Platform::OculusPlatformExtensions___c__DisplayClass0_0_1<T>::OculusPlatformExtensions___c__DisplayClass0_0_1() {}
template <typename T> inline void Oculus::Platform::OculusPlatformExtensions__WaitAsync_d__0_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::OculusPlatformExtensions__WaitAsync_d__0_1<T>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void Oculus::Platform::OculusPlatformExtensions__WaitAsync_d__0_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::OculusPlatformExtensions__WaitAsync_d__0_1<T>>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr Oculus::Platform::OculusPlatformExtensions__WaitAsync_d__0_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Oculus::Platform::OculusPlatformExtensions__WaitAsync_d__0_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<T>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "oculusRequest", ty: "::Oculus::Platform::Request_1<T>*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__7__wrap1", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty: "::System::Object*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap4", ty: "::Oculus::Platform::Message_1<T>*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<T>*>", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "__u__2", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Oculus::Platform::OculusPlatformExtensions__WaitAsync_d__0_1<T>::OculusPlatformExtensions__WaitAsync_d__0_1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<T>*> __t__builder, ::System::Threading::CancellationToken cancellationToken,
    ::Oculus::Platform::Request_1<T>* oculusRequest, ::System::Threading::CancellationTokenRegistration __7__wrap1, ::System::Object* __7__wrap2, int32_t __7__wrap3,
    ::Oculus::Platform::Message_1<T>* __7__wrap4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<T>*> __u__1,
    ::System::Runtime::CompilerServices::ValueTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->oculusRequest = oculusRequest;
  this->__7__wrap1 = __7__wrap1;
  this->__7__wrap2 = __7__wrap2;
  this->__7__wrap3 = __7__wrap3;
  this->__7__wrap4 = __7__wrap4;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
template <typename T> constexpr ::Oculus::Platform::OculusPlatformExtensions__WaitAsync_d__0_1<T>::OculusPlatformExtensions__WaitAsync_d__0_1() {}
template <typename T> inline void Oculus::Platform::OculusPlatformExtensions__WaitWithTimeoutAsync_d__1_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::OculusPlatformExtensions__WaitWithTimeoutAsync_d__1_1<T>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void Oculus::Platform::OculusPlatformExtensions__WaitWithTimeoutAsync_d__1_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::OculusPlatformExtensions__WaitWithTimeoutAsync_d__1_1<T>>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr Oculus::Platform::OculusPlatformExtensions__WaitWithTimeoutAsync_d__1_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Oculus::Platform::OculusPlatformExtensions__WaitWithTimeoutAsync_d__1_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<T>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeout", ty: "::System::TimeSpan",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "oculusRequest",
// ty: "::Oculus::Platform::Request_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_timeoutTokenSource_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_combinedTokenSource_5__3", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<T>*>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Oculus::Platform::OculusPlatformExtensions__WaitWithTimeoutAsync_d__1_1<T>::OculusPlatformExtensions__WaitWithTimeoutAsync_d__1_1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<T>*> __t__builder, ::System::TimeSpan timeout,
    ::System::Threading::CancellationToken cancellationToken, ::Oculus::Platform::Request_1<T>* oculusRequest, ::System::Threading::CancellationTokenSource* _timeoutTokenSource_5__2,
    ::System::Threading::CancellationTokenSource* _combinedTokenSource_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<T>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->timeout = timeout;
  this->cancellationToken = cancellationToken;
  this->oculusRequest = oculusRequest;
  this->_timeoutTokenSource_5__2 = _timeoutTokenSource_5__2;
  this->_combinedTokenSource_5__3 = _combinedTokenSource_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::Oculus::Platform::OculusPlatformExtensions__WaitWithTimeoutAsync_d__1_1<T>::OculusPlatformExtensions__WaitWithTimeoutAsync_d__1_1() {}
//  Writing Method size for method: ::Oculus::Platform::OculusPlatformExtensions.GetAwaiter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*> (*)(::Oculus::Platform::Request*)>(
    &::Oculus::Platform::OculusPlatformExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5deb2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::OculusPlatformExtensions*>(), { "GetAwaiter", {}, { ::i2c::type_of<::Oculus::Platform::Request*>() } })));
    return ___internal_method;
  }
};
template <typename T>
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<T>*>* Oculus::Platform::OculusPlatformExtensions::WaitAsync(::Oculus::Platform::Request_1<T>* oculusRequest,
                                                                                                                                    ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Platform::OculusPlatformExtensions*>(),
                                       { "WaitAsync", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Oculus::Platform::Request_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<T>*>*>(nullptr, ___internal_method, oculusRequest, cancellationToken);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<T>*>*
Oculus::Platform::OculusPlatformExtensions::WaitWithTimeoutAsync(::Oculus::Platform::Request_1<T>* oculusRequest, ::System::TimeSpan timeout,
                                                                 ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Platform::OculusPlatformExtensions*>(),
                                       { "WaitWithTimeoutAsync",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::Oculus::Platform::Request_1<T>*>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<T>*>*>(nullptr, ___internal_method, oculusRequest, timeout, cancellationToken);
}
template <typename T>
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<T>*> Oculus::Platform::OculusPlatformExtensions::GetAwaiter(::Oculus::Platform::Request_1<T>* oculusRequest) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::OculusPlatformExtensions*>(),
                                                                                              { "GetAwaiter", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Oculus::Platform::Request_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<T>*>>(nullptr, ___internal_method, oculusRequest);
}
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*> Oculus::Platform::OculusPlatformExtensions::GetAwaiter(::Oculus::Platform::Request* oculusRequest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::OculusPlatformExtensions*>(), { "GetAwaiter", {}, { ::i2c::type_of<::Oculus::Platform::Request*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*>>(nullptr, ___internal_method, oculusRequest);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::OculusPlatformExtensions::OculusPlatformExtensions() {}
