#pragma once
#include "BGNet/Core/GameLift/zzzz__PlayerSessionInfo_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameLiftConnectionManager_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_impl.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameLiftConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionInitParams_1_def.hpp"
#include "GlobalNamespace/zzzz__GameLiftConnectionManager_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "BGNet/Core/GameLift/zzzz__IGameLiftPlayerSessionProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "GlobalNamespace/zzzz__PublicServerInfo_def.hpp"
#include "GlobalNamespace/zzzz__GameLiftClientConnectionRequestHandler_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__IConnection_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionManager_def.hpp"
#include "BGNet/Core/zzzz__DeliveryMethod_def.hpp"
#include "GlobalNamespace/zzzz__ICertificateValidator_def.hpp"
#include "BGNet/Core/GameLift/zzzz__PlayerSessionInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState::__GameLiftConnectionManager__ConnectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState::__GameLiftConnectionManager__ConnectionState() {}
constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState GlobalNamespace::__GameLiftConnectionManager__ConnectionState::Unconnected{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState GlobalNamespace::__GameLiftConnectionManager__ConnectionState::Connecting{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState GlobalNamespace::__GameLiftConnectionManager__ConnectionState::Connected{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState GlobalNamespace::__GameLiftConnectionManager__ConnectionState::Disconnecting{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::*)()>(
    &::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe38c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>"
constexpr GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::operator ::GlobalNamespace::IConnectionInitParams_1<
    ::GlobalNamespace::GameLiftConnectionManager*>*() noexcept {
  return static_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>*>(static_cast<void*>(this));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*&
GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__get_authenticationTokenProviderTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authenticationTokenProviderTask;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*> const&
GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__get_authenticationTokenProviderTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authenticationTokenProviderTask;
}
constexpr void GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__set_authenticationTokenProviderTask(
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___authenticationTokenProviderTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*& GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__get_gameLiftPlayerSessionProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameLiftPlayerSessionProvider;
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*> const&
GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__get_gameLiftPlayerSessionProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameLiftPlayerSessionProvider;
}
constexpr void GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__set_gameLiftPlayerSessionProvider(::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameLiftPlayerSessionProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__get_selectionMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionMask;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__get_selectionMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionMask;
}
constexpr void GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectionMask = value;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__get_configuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configuration;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__get_configuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configuration;
}
constexpr void GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__set_configuration(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___configuration = value;
}
inline ::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase* GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase*>());
}
inline void GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase() {}
//  Writing Method size for method: ::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::*)()>(
    &::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe38c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::__get_secret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secret;
}
constexpr ::StringW const& GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::__get_secret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secret;
}
constexpr void GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::__set_secret(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___secret)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::__get_code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___code;
}
constexpr ::StringW const& GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::__get_code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___code;
}
constexpr void GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::__set_code(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___code)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams* GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams*>());
}
inline void GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::__GameLiftConnectionManager__ConnectToServerParams() {}
//  Writing Method size for method: ::GlobalNamespace::__GameLiftConnectionManager__StartClientParams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameLiftConnectionManager__StartClientParams::*)()>(
    &::GlobalNamespace::__GameLiftConnectionManager__StartClientParams::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe38ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameLiftConnectionManager__StartClientParams*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__GameLiftConnectionManager__StartClientParams* GlobalNamespace::__GameLiftConnectionManager__StartClientParams::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameLiftConnectionManager__StartClientParams*>());
}
inline void GlobalNamespace::__GameLiftConnectionManager__StartClientParams::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameLiftConnectionManager__StartClientParams*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameLiftConnectionManager__StartClientParams::__GameLiftConnectionManager__StartClientParams() {}
//  Writing Method size for method: ::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::*)()>(
    &::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::MoveNext)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0xe38ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe392d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GameLiftConnectionManager*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "secret", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IAuthenticationTokenProvider*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::PlayerSessionInfo*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__GameLiftConnectionManager___GameLiftConnectToServer_d__81(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::GameLiftConnectionManager* __4__this, ::StringW secret, ::StringW code,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IAuthenticationTokenProvider*> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::PlayerSessionInfo*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->secret = secret;
  this->code = code;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__GameLiftConnectionManager___GameLiftConnectToServer_d__81() {}
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.add_onInitializedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action*)>(
    &::GlobalNamespace::GameLiftConnectionManager::add_onInitializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe36c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "add_onInitializedEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.remove_onInitializedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action*)>(
    &::GlobalNamespace::GameLiftConnectionManager::remove_onInitializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe36cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "remove_onInitializedEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.add_onConnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action*)>(
    &::GlobalNamespace::GameLiftConnectionManager::add_onConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe36d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "add_onConnectedEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.remove_onConnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action*)>(
    &::GlobalNamespace::GameLiftConnectionManager::remove_onConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe36df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "remove_onConnectedEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.add_onDisconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(
    &::GlobalNamespace::GameLiftConnectionManager::add_onDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe36e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "add_onDisconnectedEvent", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.remove_onDisconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(
    &::GlobalNamespace::GameLiftConnectionManager::remove_onDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe36f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "remove_onDisconnectedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.add_onConnectionFailedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(
    ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)>(&::GlobalNamespace::GameLiftConnectionManager::add_onConnectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe36ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "add_onConnectionFailedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.remove_onConnectionFailedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(
    ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)>(&::GlobalNamespace::GameLiftConnectionManager::remove_onConnectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe370a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "remove_onConnectionFailedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.add_onConnectionConnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action_1<::GlobalNamespace::IConnection*>*)>(
    &::GlobalNamespace::GameLiftConnectionManager::add_onConnectionConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe37150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "add_onConnectionConnectedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnection*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.remove_onConnectionConnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action_1<::GlobalNamespace::IConnection*>*)>(
    &::GlobalNamespace::GameLiftConnectionManager::remove_onConnectionConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe37200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "remove_onConnectionConnectedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnection*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.add_onConnectionDisconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(
    ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::GameLiftConnectionManager::add_onConnectionDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe372b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "add_onConnectionDisconnectedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.remove_onConnectionDisconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(
    ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::GameLiftConnectionManager::remove_onConnectionDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe37360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "remove_onConnectionDisconnectedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.add_onReceivedDataEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*)>(
        &::GlobalNamespace::GameLiftConnectionManager::add_onReceivedDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe37410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "add_onReceivedDataEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.remove_onReceivedDataEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*)>(
        &::GlobalNamespace::GameLiftConnectionManager::remove_onReceivedDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe374c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "remove_onReceivedDataEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_userId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::GameLiftConnectionManager::*)()>(
    &::GlobalNamespace::GameLiftConnectionManager::get_userId)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xe37570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                               "get_userId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_userName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::GameLiftConnectionManager::*)()>(
    &::GlobalNamespace::GameLiftConnectionManager::get_userName)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xe3765c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                               "get_userName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_isConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameLiftConnectionManager::*)()>(
    &::GlobalNamespace::GameLiftConnectionManager::get_isConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe37748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                               "get_isConnected", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_isConnecting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameLiftConnectionManager::*)()>(
    &::GlobalNamespace::GameLiftConnectionManager::get_isConnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe37758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                               "get_isConnecting", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_isDisconnecting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameLiftConnectionManager::*)()>(
    &::GlobalNamespace::GameLiftConnectionManager::get_isDisconnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe37768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                               "get_isDisconnecting", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_connectionCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::GameLiftConnectionManager::*)()>(
    &::GlobalNamespace::GameLiftConnectionManager::get_connectionCount)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe37778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                               "get_connectionCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_isConnectionOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameLiftConnectionManager::*)()>(
    &::GlobalNamespace::GameLiftConnectionManager::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe3781c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                               "get_isConnectionOwner", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_isDisposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameLiftConnectionManager::*)()>(
    &::GlobalNamespace::GameLiftConnectionManager::get_isDisposed)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe378c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                               "get_isDisposed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_playerSessionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::GameLiftConnectionManager::*)()>(
    &::GlobalNamespace::GameLiftConnectionManager::get_playerSessionId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe37964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                               "get_playerSessionId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_selectionMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (::GlobalNamespace::GameLiftConnectionManager::*)()>(
    &::GlobalNamespace::GameLiftConnectionManager::get_selectionMask)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe37980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                               "get_selectionMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_configuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::GameLiftConnectionManager::*)()>(
    &::GlobalNamespace::GameLiftConnectionManager::get_configuration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe37994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                               "get_configuration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_code
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::GameLiftConnectionManager::*)()>(
    &::GlobalNamespace::GameLiftConnectionManager::get_code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe379a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "get_code",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_secret
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::GameLiftConnectionManager::*)()>(
    &::GlobalNamespace::GameLiftConnectionManager::get_secret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe379b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                               "get_secret", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.SendToAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::LiteNetLib::Utils::NetDataWriter*, ::BGNet::Core::DeliveryMethod)>(&::GlobalNamespace::GameLiftConnectionManager::SendToAll)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xe379b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "SendToAll", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.SendToAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(
    ::LiteNetLib::Utils::NetDataWriter*, ::BGNet::Core::DeliveryMethod, ::GlobalNamespace::IConnection*)>(&::GlobalNamespace::GameLiftConnectionManager::SendToAll)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xe37a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "SendToAll", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.PollUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)()>(
    &::GlobalNamespace::GameLiftConnectionManager::PollUpdate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xe37b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                               "PollUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)()>(&::GlobalNamespace::GameLiftConnectionManager::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xe37bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(
    ::BGNet::Core::ITimeProvider*, ::BGNet::Core::ITaskUtility*, ::GlobalNamespace::IConnectionManager*, ::GlobalNamespace::ICertificateValidator*)>(
    &::GlobalNamespace::GameLiftConnectionManager::_ctor)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0xe37d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionManager*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ICertificateValidator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.DisposeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::GameLiftConnectionManager::*)()>(
    &::GlobalNamespace::GameLiftConnectionManager::DisposeAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe3824c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                               "DisposeAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)()>(&::GlobalNamespace::GameLiftConnectionManager::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xe382f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::GameLiftConnectionManager::Disconnect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe38390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "Disconnect", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.DisconnectInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::GameLiftConnectionManager::DisconnectInternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe385fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "DisconnectInternal", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.DisconnectInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(
    ::GlobalNamespace::DisconnectedReason, ::GlobalNamespace::ConnectionFailedReason)>(&::GlobalNamespace::GameLiftConnectionManager::DisconnectInternal)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xe38398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "DisconnectInternal", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.GetConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnection* (::GlobalNamespace::GameLiftConnectionManager::*)(int32_t)>(
    &::GlobalNamespace::GameLiftConnectionManager::GetConnection)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xe38608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "GetConnection",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.HandleConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)()>(
    &::GlobalNamespace::GameLiftConnectionManager::HandleConnected)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xe386b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                               "HandleConnected", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.HandleConnectionConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::GlobalNamespace::IConnection*)>(
    &::GlobalNamespace::GameLiftConnectionManager::HandleConnectionConnected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe386e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "HandleConnectionConnected",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.HandleConnectionDisconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(
    ::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::GameLiftConnectionManager::HandleConnectionDisconnected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe38700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "HandleConnectionDisconnected", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.HandleConnectionFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::GameLiftConnectionManager::HandleConnectionFailed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe3871c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "HandleConnectionFailed", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.HandleReceivedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(
    ::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod)>(&::GlobalNamespace::GameLiftConnectionManager::HandleReceivedData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe38728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "HandleReceivedData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.GameLiftConnectToServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::StringW, ::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::GameLiftConnectionManager::GameLiftConnectToServer)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xe38744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "GameLiftConnectToServer", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.HandleConnectToServerSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(
    ::StringW, ::StringW, int32_t, ::StringW, ::StringW, ::StringW, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(
    &::GlobalNamespace::GameLiftConnectionManager::HandleConnectToServerSuccess)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0xe387fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "HandleConnectToServerSuccess", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.GetPublicServers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(
    ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>*, ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*,
    ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, int32_t, int32_t)>(&::GlobalNamespace::GameLiftConnectionManager::GetPublicServers)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xe38bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "GetPublicServers", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IConnectionManager"
constexpr GlobalNamespace::GameLiftConnectionManager::operator ::GlobalNamespace::IConnectionManager*() noexcept {
  return static_cast<::GlobalNamespace::IConnectionManager*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr GlobalNamespace::GameLiftConnectionManager::operator ::GlobalNamespace::IPollable*() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::GameLiftConnectionManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::BGNet::Core::ITimeProvider*& GlobalNamespace::GameLiftConnectionManager::__get__timeProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeProvider;
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITimeProvider*> const& GlobalNamespace::GameLiftConnectionManager::__get__timeProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeProvider;
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__timeProvider(::BGNet::Core::ITimeProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timeProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGNet::Core::ITaskUtility*& GlobalNamespace::GameLiftConnectionManager::__get__taskUtility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility;
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> const& GlobalNamespace::GameLiftConnectionManager::__get__taskUtility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility;
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__taskUtility(::BGNet::Core::ITaskUtility* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____taskUtility)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IConnectionManager*& GlobalNamespace::GameLiftConnectionManager::__get__connectionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectionManager*> const& GlobalNamespace::GameLiftConnectionManager::__get__connectionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionManager;
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__connectionManager(::GlobalNamespace::IConnectionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ICertificateValidator*& GlobalNamespace::GameLiftConnectionManager::__get__certificateValidator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certificateValidator;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICertificateValidator*> const& GlobalNamespace::GameLiftConnectionManager::__get__certificateValidator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certificateValidator;
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__certificateValidator(::GlobalNamespace::ICertificateValidator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____certificateValidator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::GameLiftConnectionManager::__get__code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____code;
}
constexpr ::StringW const& GlobalNamespace::GameLiftConnectionManager::__get__code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____code;
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__code(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____code)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::GameLiftConnectionManager::__get__secret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secret;
}
constexpr ::StringW const& GlobalNamespace::GameLiftConnectionManager::__get__secret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secret;
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__secret(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____secret)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::GameLiftConnectionManager::__get__selectionMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionMask;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::GameLiftConnectionManager::__get__selectionMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionMask;
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectionMask = value;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::GameLiftConnectionManager::__get__configuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::GameLiftConnectionManager::__get__configuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration;
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__configuration(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____configuration = value;
}
constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState& GlobalNamespace::GameLiftConnectionManager::__get__connectionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState;
}
constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState const& GlobalNamespace::GameLiftConnectionManager::__get__connectionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState;
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__connectionState(::GlobalNamespace::__GameLiftConnectionManager__ConnectionState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionState = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::GameLiftConnectionManager::__get__connectionCancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionCancellationTokenSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& GlobalNamespace::GameLiftConnectionManager::__get__connectionCancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionCancellationTokenSource;
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__connectionCancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectionCancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*& GlobalNamespace::GameLiftConnectionManager::__get__authenticationTokenProviderTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____authenticationTokenProviderTask;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*> const&
GlobalNamespace::GameLiftConnectionManager::__get__authenticationTokenProviderTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____authenticationTokenProviderTask;
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__authenticationTokenProviderTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____authenticationTokenProviderTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*& GlobalNamespace::GameLiftConnectionManager::__get__gameLiftPlayerSessionProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameLiftPlayerSessionProvider;
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*> const&
GlobalNamespace::GameLiftConnectionManager::__get__gameLiftPlayerSessionProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameLiftPlayerSessionProvider;
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__gameLiftPlayerSessionProvider(::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameLiftPlayerSessionProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameLiftClientConnectionRequestHandler*& GlobalNamespace::GameLiftConnectionManager::__get__connectionRequestHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionRequestHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameLiftClientConnectionRequestHandler*> const& GlobalNamespace::GameLiftConnectionManager::__get__connectionRequestHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionRequestHandler;
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__connectionRequestHandler(::GlobalNamespace::GameLiftClientConnectionRequestHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectionRequestHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::GameLiftConnectionManager::__get_onInitializedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onInitializedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::GameLiftConnectionManager::__get_onInitializedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onInitializedEvent;
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set_onInitializedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onInitializedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::GameLiftConnectionManager::__get_onConnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::GameLiftConnectionManager::__get_onConnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectedEvent;
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set_onConnectedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onConnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& GlobalNamespace::GameLiftConnectionManager::__get_onDisconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDisconnectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> const& GlobalNamespace::GameLiftConnectionManager::__get_onDisconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDisconnectedEvent;
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onDisconnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*& GlobalNamespace::GameLiftConnectionManager::__get_onConnectionFailedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionFailedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*> const& GlobalNamespace::GameLiftConnectionManager::__get_onConnectionFailedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionFailedEvent;
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onConnectionFailedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::IConnection*>*& GlobalNamespace::GameLiftConnectionManager::__get_onConnectionConnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionConnectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnection*>*> const& GlobalNamespace::GameLiftConnectionManager::__get_onConnectionConnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionConnectedEvent;
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onConnectionConnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*& GlobalNamespace::GameLiftConnectionManager::__get_onConnectionDisconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionDisconnectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*> const&
GlobalNamespace::GameLiftConnectionManager::__get_onConnectionDisconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionDisconnectedEvent;
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onConnectionDisconnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*&
GlobalNamespace::GameLiftConnectionManager::__get_onReceivedDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceivedDataEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*> const&
GlobalNamespace::GameLiftConnectionManager::__get_onReceivedDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceivedDataEvent;
}
constexpr void
GlobalNamespace::GameLiftConnectionManager::__set_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onReceivedDataEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameLiftConnectionManager::add_onInitializedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "add_onInitializedEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::remove_onInitializedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "remove_onInitializedEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::add_onConnectedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "add_onConnectedEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::remove_onConnectedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "remove_onConnectedEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::add_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "add_onDisconnectedEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::remove_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "remove_onDisconnectedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::add_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "add_onConnectionFailedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::remove_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "remove_onConnectionFailedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::add_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "add_onConnectionConnectedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnection*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::remove_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "remove_onConnectionConnectedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnection*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::add_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "add_onConnectionDisconnectedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::remove_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "remove_onConnectionDisconnectedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::GameLiftConnectionManager::add_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "add_onReceivedDataEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::GameLiftConnectionManager::remove_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "remove_onReceivedDataEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GameLiftConnectionManager::get_userId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "get_userId",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameLiftConnectionManager::get_userName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                             "get_userName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameLiftConnectionManager::get_isConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                             "get_isConnected", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameLiftConnectionManager::get_isConnecting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                             "get_isConnecting", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameLiftConnectionManager::get_isDisconnecting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                             "get_isDisconnecting", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GameLiftConnectionManager::get_connectionCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                             "get_connectionCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameLiftConnectionManager::get_isConnectionOwner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                             "get_isConnectionOwner", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameLiftConnectionManager::get_isDisposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                             "get_isDisposed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameLiftConnectionManager::get_playerSessionId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                             "get_playerSessionId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::GameLiftConnectionManager::get_selectionMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                             "get_selectionMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GameLiftConnectionManager::get_configuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                             "get_configuration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameLiftConnectionManager::get_code() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "get_code",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameLiftConnectionManager::get_secret() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "get_secret",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameLiftConnectionManager::SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "SendToAll", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, deliveryMethod);
}
inline void GlobalNamespace::GameLiftConnectionManager::SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod,
                                                                  ::GlobalNamespace::IConnection* excludingConnection) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "SendToAll", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, deliveryMethod, excludingConnection);
}
inline void GlobalNamespace::GameLiftConnectionManager::PollUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "PollUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameLiftConnectionManager* GlobalNamespace::GameLiftConnectionManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameLiftConnectionManager*>());
}
inline void GlobalNamespace::GameLiftConnectionManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameLiftConnectionManager* GlobalNamespace::GameLiftConnectionManager::New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                                                                                                          ::GlobalNamespace::IConnectionManager* connectionManager,
                                                                                                          ::GlobalNamespace::ICertificateValidator* certificateValidator) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameLiftConnectionManager*>(timeProvider, taskUtility, connectionManager, certificateValidator));
}
inline void GlobalNamespace::GameLiftConnectionManager::_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                                                              ::GlobalNamespace::IConnectionManager* connectionManager, ::GlobalNamespace::ICertificateValidator* certificateValidator) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionManager*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ICertificateValidator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeProvider, taskUtility, connectionManager, certificateValidator);
}
template <typename T> inline bool GlobalNamespace::GameLiftConnectionManager::Init(::GlobalNamespace::IConnectionInitParams_1<T>* initParams) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "Init",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionInitParams_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, initParams);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::GameLiftConnectionManager::DisposeAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                             "DisposeAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameLiftConnectionManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param disconnectedReason: ::GlobalNamespace::DisconnectedReason (default: static_cast<int32_t>(0x2))
inline void GlobalNamespace::GameLiftConnectionManager::Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "Disconnect", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::GameLiftConnectionManager::DisconnectInternal(::GlobalNamespace::ConnectionFailedReason connectionFailedReason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "DisconnectInternal", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectionFailedReason);
}
inline void GlobalNamespace::GameLiftConnectionManager::DisconnectInternal(::GlobalNamespace::DisconnectedReason disconnectedReason, ::GlobalNamespace::ConnectionFailedReason connectionFailedReason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "DisconnectInternal", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disconnectedReason, connectionFailedReason);
}
inline ::GlobalNamespace::IConnection* GlobalNamespace::GameLiftConnectionManager::GetConnection(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "GetConnection",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnection*, false>(this, ___internal_method, index);
}
inline void GlobalNamespace::GameLiftConnectionManager::HandleConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                                                                             "HandleConnected", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameLiftConnectionManager::HandleConnectionConnected(::GlobalNamespace::IConnection* connection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "HandleConnectionConnected",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connection);
}
inline void GlobalNamespace::GameLiftConnectionManager::HandleConnectionDisconnected(::GlobalNamespace::IConnection* connection, ::GlobalNamespace::DisconnectedReason reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "HandleConnectionDisconnected", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connection, reason);
}
inline void GlobalNamespace::GameLiftConnectionManager::HandleConnectionFailed(::GlobalNamespace::ConnectionFailedReason failedReason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "HandleConnectionFailed", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, failedReason);
}
inline void GlobalNamespace::GameLiftConnectionManager::HandleReceivedData(::GlobalNamespace::IConnection* connection, ::LiteNetLib::Utils::NetDataReader* reader,
                                                                           ::BGNet::Core::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "HandleReceivedData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connection, reader, deliveryMethod);
}
inline void GlobalNamespace::GameLiftConnectionManager::GameLiftConnectToServer(::StringW secret, ::StringW code, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "GameLiftConnectToServer", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, secret, code, cancellationToken);
}
inline void GlobalNamespace::GameLiftConnectionManager::HandleConnectToServerSuccess(::StringW playerSessionId, ::StringW hostName, int32_t port, ::StringW gameSessionId, ::StringW secret,
                                                                                     ::StringW code, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                     ::GlobalNamespace::GameplayServerConfiguration configuration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "HandleConnectToServerSuccess", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerSessionId, hostName, port, gameSessionId, secret, code, selectionMask, configuration);
}
/// @param offset: int32_t (default: static_cast<int32_t>(0x0))
/// @param count: int32_t (default: static_cast<int32_t>(0x14))
inline void GlobalNamespace::GameLiftConnectionManager::GetPublicServers(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>* onSuccess,
                                                                         ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onFailure,
                                                                         ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration,
                                                                         int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(), "GetPublicServers", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure, selectionMask, configuration, offset, count);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameLiftConnectionManager::GameLiftConnectionManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
