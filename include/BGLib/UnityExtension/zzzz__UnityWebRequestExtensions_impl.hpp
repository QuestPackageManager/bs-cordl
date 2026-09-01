#pragma once
// IWYU pragma private; include "BGLib\UnityExtension\UnityWebRequestExtensions.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_impl.hpp"
#include "BGLib/UnityExtension/zzzz__UnityWebRequestExtensions_def.hpp"
#include "BGLib/UnityExtension/zzzz__UnityWebRequestExtensions_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0::*)()>(
    &::BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x332ad0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0._GetAwaiter_g__SetResult_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0::*)(::UnityEngine::AsyncOperation*)>(
    &::BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0::_GetAwaiter_g__SetResult_0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x332ad10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0*>(),
                                                                                           { "<GetAwaiter>g__SetResult|0", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0::__cordl_internal_get_webRequestOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___webRequestOperation;
}
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation* const& BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0::__cordl_internal_get_webRequestOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___webRequestOperation;
}
constexpr void BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0::__cordl_internal_set_webRequestOperation(::UnityEngine::Networking::UnityWebRequestAsyncOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___webRequestOperation = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::UnityWebRequest_Result>*&
BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0::__cordl_internal_get_tcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::UnityWebRequest_Result>* const&
BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0::__cordl_internal_get_tcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr void BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0::__cordl_internal_set_tcs(
    ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::UnityWebRequest_Result>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tcs = value;
}
inline void BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0::_GetAwaiter_g__SetResult_0(::UnityEngine::AsyncOperation* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0*>(),
                                                                                         { "<GetAwaiter>g__SetResult|0", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0* BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::UnityWebRequestExtensions___c__DisplayClass1_0::UnityWebRequestExtensions___c__DisplayClass1_0() {}
//  Writing Method size for method: ::BGLib::UnityExtension::UnityWebRequestExtensions__SendWebRequestAsync_d__0.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::UnityWebRequestExtensions__SendWebRequestAsync_d__0::*)()>(
    &::BGLib::UnityExtension::UnityWebRequestExtensions__SendWebRequestAsync_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x332ade8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::UnityWebRequestExtensions__SendWebRequestAsync_d__0>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::UnityWebRequestExtensions__SendWebRequestAsync_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::UnityWebRequestExtensions__SendWebRequestAsync_d__0::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::UnityExtension::UnityWebRequestExtensions__SendWebRequestAsync_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x332b444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::UnityWebRequestExtensions__SendWebRequestAsync_d__0>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::UnityExtension::UnityWebRequestExtensions__SendWebRequestAsync_d__0::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::UnityWebRequestExtensions__SendWebRequestAsync_d__0>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGLib::UnityExtension::UnityWebRequestExtensions__SendWebRequestAsync_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::UnityWebRequestExtensions__SendWebRequestAsync_d__0>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::UnityExtension::UnityWebRequestExtensions__SendWebRequestAsync_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::UnityExtension::UnityWebRequestExtensions__SendWebRequestAsync_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Networking::UnityWebRequest_Result>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "request", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "_cancellationTokenRegistration_5__2", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty:
// "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap4", ty:
// "::UnityEngine::Networking::UnityWebRequest_Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "",
// def_value: Some("{}") }]
constexpr ::BGLib::UnityExtension::UnityWebRequestExtensions__SendWebRequestAsync_d__0::UnityWebRequestExtensions__SendWebRequestAsync_d__0(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Networking::UnityWebRequest_Result> __t__builder,
    ::System::Threading::CancellationToken cancellationToken, ::UnityEngine::Networking::UnityWebRequest* request,
    ::System::Threading::CancellationTokenRegistration _cancellationTokenRegistration_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result> __u__1, ::System::Object* __7__wrap2, int32_t __7__wrap3,
    ::UnityEngine::Networking::UnityWebRequest_Result __7__wrap4, ::System::Runtime::CompilerServices::ValueTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->request = request;
  this->_cancellationTokenRegistration_5__2 = _cancellationTokenRegistration_5__2;
  this->__u__1 = __u__1;
  this->__7__wrap2 = __7__wrap2;
  this->__7__wrap3 = __7__wrap3;
  this->__7__wrap4 = __7__wrap4;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::UnityWebRequestExtensions__SendWebRequestAsync_d__0::UnityWebRequestExtensions__SendWebRequestAsync_d__0() {}
//  Writing Method size for method: ::BGLib::UnityExtension::UnityWebRequestExtensions.SendWebRequestAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::Networking::UnityWebRequest_Result>* (*)(::UnityEngine::Networking::UnityWebRequest*, ::System::Threading::CancellationToken)>(
        &::BGLib::UnityExtension::UnityWebRequestExtensions::SendWebRequestAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x332ac18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::UnityWebRequestExtensions*>(),
                                         { "SendWebRequestAsync", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::UnityWebRequestExtensions.GetAwaiter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result> (*)(
    ::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&::BGLib::UnityExtension::UnityWebRequestExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x3328ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::UnityWebRequestExtensions*>(),
                                                                                           { "GetAwaiter", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>() } })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::UnityEngine::Networking::UnityWebRequest_Result>*
BGLib::UnityExtension::UnityWebRequestExtensions::SendWebRequestAsync(::UnityEngine::Networking::UnityWebRequest* request, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::UnityWebRequestExtensions*>(),
                                       { "SendWebRequestAsync", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::Networking::UnityWebRequest_Result>*>(nullptr, ___internal_method, request, cancellationToken);
}
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result>
BGLib::UnityExtension::UnityWebRequestExtensions::GetAwaiter(::UnityEngine::Networking::UnityWebRequestAsyncOperation* webRequestOperation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::UnityWebRequestExtensions*>(),
                                                                                         { "GetAwaiter", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result>>(nullptr, ___internal_method, webRequestOperation);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::UnityWebRequestExtensions::UnityWebRequestExtensions() {}
