#pragma once
#include "GlobalNamespace/zzzz__OculusXPlatformAccessTokenRequestOperation_impl.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OculusXPlatformAccessTokenRequestOperation_def.hpp"
#include "GlobalNamespace/zzzz__OculusXPlatformAccessTokenRequestOperation_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState(
    int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState() {}
constexpr ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState
    GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState::NotStarted{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState
    GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState::Requesting{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState
    GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState::Succeeded{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState
    GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState::Failed{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::*)()>(
    &::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x2800574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x280084c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_attemptCount_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*> __t__builder,
    ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation* __4__this, ::System::Threading::CancellationToken cancellationToken, int32_t _attemptCount_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_attemptCount_5__2 = _attemptCount_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7() {}
//  Writing Method size for method: ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::*)()>(
    &::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28001d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* (*)(::System::Threading::CancellationToken)>(
        &::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::Run)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2800080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*>::get(), "Run", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation.RequestXPlatformAccessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* (
    ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::*)(::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::RequestXPlatformAccessToken)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x28001f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*>::get(), "RequestXPlatformAccessToken", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation.RequestAccessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::*)()>(
    &::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::RequestAccessToken)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x28002ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*>::get(), "RequestAccessToken",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation.OnCompleteLoadingOculusAccessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::*)(::Oculus::Platform::Message_1<::StringW>*)>(
    &::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::OnCompleteLoadingOculusAccessToken)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x28003f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*>::get(), "OnCompleteLoadingOculusAccessToken",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::XPlatformAccessTokenData*& GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::__get__tokenData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tokenData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::XPlatformAccessTokenData*> const& GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::__get__tokenData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tokenData;
}
constexpr void GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::__set__tokenData(::GlobalNamespace::XPlatformAccessTokenData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tokenData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState& GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::__get__operationState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____operationState;
}
constexpr ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState const&
GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::__get__operationState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____operationState;
}
constexpr void
GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::__set__operationState(::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____operationState = value;
}
inline ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation* GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*>());
}
inline void GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>*
GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::Run(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*>::get(), "Run", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>*, false>(nullptr, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>*
GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::RequestXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*>::get(), "RequestXPlatformAccessToken", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>*, false>(this, ___internal_method, cancellationToken);
}
inline void GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::RequestAccessToken() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*>::get(), "RequestAccessToken",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::OnCompleteLoadingOculusAccessToken(::Oculus::Platform::Message_1<::StringW>* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*>::get(), "OnCompleteLoadingOculusAccessToken", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::OculusXPlatformAccessTokenRequestOperation() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
