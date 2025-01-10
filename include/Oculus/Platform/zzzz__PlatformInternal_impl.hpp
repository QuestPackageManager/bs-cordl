#pragma once
// IWYU pragma private; include "Oculus/Platform/PlatformInternal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__PlatformInternal_def.hpp"
#include "Oculus/Platform/Models/zzzz__HttpTransferUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__LinkedAccountList_def.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "Oculus/Platform/zzzz__PlatformInternal_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__ServiceProvider_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal::PlatformInternal_MessageTypeInternal(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal::PlatformInternal_MessageTypeInternal() {}
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::AbuseReport_LaunchAdvancedReportFlow{ static_cast<uint32_t>(0x4cb13a6eu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Application_ExecuteCoordinatedLaunch{ static_cast<uint32_t>(0x267db4f4u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Application_GetInstalledApplications{ static_cast<uint32_t>(0x520f744cu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Avatar_UpdateMetaData{ static_cast<uint32_t>(0x7bcfd98eu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Cal_FinalizeApplication{ static_cast<uint32_t>(0x1da9cbd5u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Cal_GetSuggestedApplications{ static_cast<uint32_t>(0x56707015u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Cal_ProposeApplication{ static_cast<uint32_t>(0x4e83f2ddu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Colocation_GetCurrentMapUuid{ static_cast<uint32_t>(0x34557eb2u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Colocation_RequestMap{ static_cast<uint32_t>(0x3215666du) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Colocation_ShareMap{ static_cast<uint32_t>(0x186dc4ddu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::DeviceApplicationIntegrity_GetAttestationToken{ static_cast<uint32_t>(
    0x102fa3deu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::GraphAPI_Get{ static_cast<uint32_t>(0x30ff006eu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::GraphAPI_Post{ static_cast<uint32_t>(0x76a5a7c4u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::HTTP_Get{ static_cast<uint32_t>(0x6fb63223u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::HTTP_GetToFile{ static_cast<uint32_t>(0x4e81dc59u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::HTTP_MultiPartPost{ static_cast<uint32_t>(0x5842d210u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::HTTP_Post{ static_cast<uint32_t>(0x6b36a54fu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Livestreaming_IsAllowedForApplication{ static_cast<uint32_t>(0xb6d8d76u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Livestreaming_StartPartyStream{ static_cast<uint32_t>(0x7b2f5cdcu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Livestreaming_StartStream{ static_cast<uint32_t>(0x501ac7beu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Livestreaming_StopPartyStream{ static_cast<uint32_t>(0x27670f58u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Livestreaming_StopStream{ static_cast<uint32_t>(0x44e40dcau) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Livestreaming_UpdateMicStatus{ static_cast<uint32_t>(0x1c577d87u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::NetSync_Connect{ static_cast<uint32_t>(0x646d855fu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::NetSync_Disconnect{ static_cast<uint32_t>(0x1569feb5u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::NetSync_GetSessions{ static_cast<uint32_t>(0x6ed60a35u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::NetSync_GetVoipAttenuation{ static_cast<uint32_t>(0x112aca17u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::NetSync_GetVoipAttenuationDefault{ static_cast<uint32_t>(0x577ba8a0u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::NetSync_SetVoipAttenuation{ static_cast<uint32_t>(0x3497d7f6u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::NetSync_SetVoipAttenuationModel{ static_cast<uint32_t>(0x6a94ad8eu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::NetSync_SetVoipChannelCfg{ static_cast<uint32_t>(0x5c95a4f3u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::NetSync_SetVoipGroup{ static_cast<uint32_t>(0x58129c8eu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::NetSync_SetVoipListentoChannels{ static_cast<uint32_t>(0x5ed0ea32u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::NetSync_SetVoipMicSource{ static_cast<uint32_t>(0x3302f770u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::NetSync_SetVoipSessionMuted{ static_cast<uint32_t>(0x5585ff0au) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::NetSync_SetVoipSpeaktoChannels{ static_cast<uint32_t>(0x2dafcdd5u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::NetSync_SetVoipStreamMode{ static_cast<uint32_t>(0x67e19d37u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Party_Create{ static_cast<uint32_t>(0x1ad31b4fu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Party_GatherInApplication{ static_cast<uint32_t>(0x7287c183u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Party_Get{ static_cast<uint32_t>(0x5e8953bdu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Party_GetCurrentForUser{ static_cast<uint32_t>(0x58cbff2au) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Party_Invite{ static_cast<uint32_t>(0x35b5c4e3u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Party_Join{ static_cast<uint32_t>(0x68027c73u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Party_Leave{ static_cast<uint32_t>(0x329206d1u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::RichPresence_SetDestination{ static_cast<uint32_t>(0x4f32e10du) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::RichPresence_SetIsJoinable{ static_cast<uint32_t>(0x3e9b1f61u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::RichPresence_SetLobbySession{ static_cast<uint32_t>(0x71010917u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::RichPresence_SetMatchSession{ static_cast<uint32_t>(0x63dffc8eu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Room_CreateOrUpdateAndJoinNamed{ static_cast<uint32_t>(0x7c8e0a91u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Room_GetNamedRooms{ static_cast<uint32_t>(0x77d6e8cu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Room_GetSocialRooms{ static_cast<uint32_t>(0x61881d76u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::User_CancelRecordingForReportFlow{ static_cast<uint32_t>(0x3e0d149u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::User_GetLinkedAccounts{ static_cast<uint32_t>(0x5793f456u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::User_GetUserCapabilities{ static_cast<uint32_t>(0x121c317cu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::User_LaunchReportFlow{ static_cast<uint32_t>(0x5662a011u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::User_LaunchReportFlow2{ static_cast<uint32_t>(0x7f835863u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::User_NewEntitledTestUser{ static_cast<uint32_t>(0x11741f03u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::User_NewTestUser{ static_cast<uint32_t>(0x36e84f8cu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::User_NewTestUserFriends{ static_cast<uint32_t>(0x1ed726c7u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::User_StartRecordingForReportFlow{ static_cast<uint32_t>(0x6c6e33e3u) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::User_StopRecordingAndLaunchReportFlow{ static_cast<uint32_t>(0x60788c8bu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::User_StopRecordingAndLaunchReportFlow2{ static_cast<uint32_t>(0x19c2b32bu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::User_TestUserCreateDeviceManifest{ static_cast<uint32_t>(0x6570b2bdu) };
constexpr ::Oculus::Platform::PlatformInternal_MessageTypeInternal Oculus::Platform::PlatformInternal_MessageTypeInternal::Voip_ReportAppVoipSessions{ static_cast<uint32_t>(0x185251ceu) };
//  Writing Method size for method: ::Oculus::Platform::PlatformInternal_HTTP.SetHttpTransferUpdateCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::HttpTransferUpdate*>*)>(
    &::Oculus::Platform::PlatformInternal_HTTP::SetHttpTransferUpdateCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3f8b73c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::PlatformInternal_HTTP*>::get(), "SetHttpTransferUpdateCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::HttpTransferUpdate*>*>::get() })));
    return ___internal_method;
  }
};
inline void Oculus::Platform::PlatformInternal_HTTP::SetHttpTransferUpdateCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::HttpTransferUpdate*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::PlatformInternal_HTTP*>::get(), "SetHttpTransferUpdateCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::HttpTransferUpdate*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::PlatformInternal_HTTP::PlatformInternal_HTTP() {}
//  Writing Method size for method: ::Oculus::Platform::PlatformInternal_Users.GetLinkedAccounts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LinkedAccountList*>* (*)(::ArrayW<::Oculus::Platform::ServiceProvider, ::Array<::Oculus::Platform::ServiceProvider>*>)>(
        &::Oculus::Platform::PlatformInternal_Users::GetLinkedAccounts)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3f8b7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::PlatformInternal_Users*>::get(), "GetLinkedAccounts", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Oculus::Platform::ServiceProvider, ::Array<::Oculus::Platform::ServiceProvider>*>>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LinkedAccountList*>*
Oculus::Platform::PlatformInternal_Users::GetLinkedAccounts(::ArrayW<::Oculus::Platform::ServiceProvider, ::Array<::Oculus::Platform::ServiceProvider>*> providers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::PlatformInternal_Users*>::get(), "GetLinkedAccounts", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Oculus::Platform::ServiceProvider, ::Array<::Oculus::Platform::ServiceProvider>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LinkedAccountList*>*, false>(nullptr, ___internal_method, providers);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::PlatformInternal_Users::PlatformInternal_Users() {}
//  Writing Method size for method: ::Oculus::Platform::PlatformInternal.CrashApplication
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Oculus::Platform::PlatformInternal::CrashApplication)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3f8b4dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::PlatformInternal*>::get(), "CrashApplication",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::PlatformInternal.ParseMessageHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Message* (*)(::System::IntPtr, ::Oculus::Platform::Message_MessageType)>(
    &::Oculus::Platform::PlatformInternal::ParseMessageHandle)> {
  constexpr static std::size_t size = 0x868;
  constexpr static std::size_t addrs = 0x3f7b59c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::PlatformInternal*>::get(), "ParseMessageHandle", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_MessageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::PlatformInternal.InitializeStandaloneAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* (*)(uint64_t, ::StringW)>(
    &::Oculus::Platform::PlatformInternal::InitializeStandaloneAsync)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3f8b528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::PlatformInternal*>::get(), "InitializeStandaloneAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Oculus::Platform::PlatformInternal::CrashApplication() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::PlatformInternal*>::get(), "CrashApplication",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Message* Oculus::Platform::PlatformInternal::ParseMessageHandle(::System::IntPtr messageHandle, ::Oculus::Platform::Message_MessageType messageType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::PlatformInternal*>::get(), "ParseMessageHandle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_MessageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message*, false>(nullptr, ___internal_method, messageHandle, messageType);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* Oculus::Platform::PlatformInternal::InitializeStandaloneAsync(uint64_t appID, ::StringW accessToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::PlatformInternal*>::get(), "InitializeStandaloneAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>*, false>(nullptr, ___internal_method, appID, accessToken);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::PlatformInternal::PlatformInternal() {}
