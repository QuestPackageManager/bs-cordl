#pragma once
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
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal::__PlatformInternal__MessageTypeInternal(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal::__PlatformInternal__MessageTypeInternal() {}
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::AbuseReport_LaunchAdvancedReportFlow{ static_cast<uint32_t>(
    0xb13a6ef0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Application_ExecuteCoordinatedLaunch{ static_cast<uint32_t>(
    0x7db4f4f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Application_GetInstalledApplications{ static_cast<uint32_t>(
    0xf744cf0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Avatar_UpdateMetaData{ static_cast<uint32_t>(0xcfd98ef0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Cal_FinalizeApplication{ static_cast<uint32_t>(0xd5cba9ddu) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Cal_GetSuggestedApplications{ static_cast<uint32_t>(0x707015f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Cal_ProposeApplication{ static_cast<uint32_t>(0x83f2ddf0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Colocation_GetCurrentMapUuid{ static_cast<uint32_t>(0x557eb2f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Colocation_RequestMap{ static_cast<uint32_t>(0x15666df0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Colocation_ShareMap{ static_cast<uint32_t>(0xddc46dd8u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::DeviceApplicationIntegrity_GetAttestationToken{ static_cast<uint32_t>(
    0xdea32fd0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::GraphAPI_Get{ static_cast<uint32_t>(0xff006ef0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::GraphAPI_Post{ static_cast<uint32_t>(0xa5a7c4f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::HTTP_Get{ static_cast<uint32_t>(0xb63223f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::HTTP_GetToFile{ static_cast<uint32_t>(0x81dc59f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::HTTP_MultiPartPost{ static_cast<uint32_t>(0x42d210f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::HTTP_Post{ static_cast<uint32_t>(0x36a54ff0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Livestreaming_IsAllowedForApplication{ static_cast<uint32_t>(
    0x768d6dcbu) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Livestreaming_StartPartyStream{ static_cast<uint32_t>(0x2f5cdcf0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Livestreaming_StartStream{ static_cast<uint32_t>(0x1ac7bef0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Livestreaming_StopPartyStream{ static_cast<uint32_t>(0x670f58f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Livestreaming_StopStream{ static_cast<uint32_t>(0xe40dcaf0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Livestreaming_UpdateMicStatus{ static_cast<uint32_t>(0x877d57dcu) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::NetSync_Connect{ static_cast<uint32_t>(0x6d855ff0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::NetSync_Disconnect{ static_cast<uint32_t>(0xb5fe69d5u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::NetSync_GetSessions{ static_cast<uint32_t>(0xd60a35f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::NetSync_GetVoipAttenuation{ static_cast<uint32_t>(0x17ca2ad1u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::NetSync_GetVoipAttenuationDefault{ static_cast<uint32_t>(
    0x7ba8a0f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::NetSync_SetVoipAttenuation{ static_cast<uint32_t>(0x97d7f6f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::NetSync_SetVoipAttenuationModel{ static_cast<uint32_t>(0x94ad8ef0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::NetSync_SetVoipChannelCfg{ static_cast<uint32_t>(0x95a4f3f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::NetSync_SetVoipGroup{ static_cast<uint32_t>(0x129c8ef0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::NetSync_SetVoipListentoChannels{ static_cast<uint32_t>(0xd0ea32f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::NetSync_SetVoipMicSource{ static_cast<uint32_t>(0x2f770f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::NetSync_SetVoipSessionMuted{ static_cast<uint32_t>(0x85ff0af0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::NetSync_SetVoipSpeaktoChannels{ static_cast<uint32_t>(0xafcdd5f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::NetSync_SetVoipStreamMode{ static_cast<uint32_t>(0xe19d37f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Party_Create{ static_cast<uint32_t>(0x4f1bd3dau) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Party_GatherInApplication{ static_cast<uint32_t>(0x87c183f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Party_Get{ static_cast<uint32_t>(0x8953bdf0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Party_GetCurrentForUser{ static_cast<uint32_t>(0xcbff2af0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Party_Invite{ static_cast<uint32_t>(0xb5c4e3f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Party_Join{ static_cast<uint32_t>(0x27c73f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Party_Leave{ static_cast<uint32_t>(0x9206d1f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::RichPresence_SetDestination{ static_cast<uint32_t>(0x32e10df0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::RichPresence_SetIsJoinable{ static_cast<uint32_t>(0x9b1f61f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::RichPresence_SetLobbySession{ static_cast<uint32_t>(0x10917f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::RichPresence_SetMatchSession{ static_cast<uint32_t>(0xdffc8ef0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Room_CreateOrUpdateAndJoinNamed{ static_cast<uint32_t>(0x8e0a91f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Room_GetNamedRooms{ static_cast<uint32_t>(0x8c6e7dc7u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Room_GetSocialRooms{ static_cast<uint32_t>(0x881d76f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::User_CancelRecordingForReportFlow{ static_cast<uint32_t>(
    0x49d1e0c3u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::User_GetLinkedAccounts{ static_cast<uint32_t>(0x93f456f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::User_GetUserCapabilities{ static_cast<uint32_t>(0x7c311cd2u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::User_LaunchReportFlow{ static_cast<uint32_t>(0x62a011f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::User_LaunchReportFlow2{ static_cast<uint32_t>(0x835863f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::User_NewEntitledTestUser{ static_cast<uint32_t>(0x31f74d1u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::User_NewTestUser{ static_cast<uint32_t>(0xe84f8cf0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::User_NewTestUserFriends{ static_cast<uint32_t>(0xc726d7deu) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::User_StartRecordingForReportFlow{ static_cast<uint32_t>(0x6e33e3f0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::User_StopRecordingAndLaunchReportFlow{ static_cast<uint32_t>(
    0x788c8bf0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::User_StopRecordingAndLaunchReportFlow2{ static_cast<uint32_t>(
    0x2bb3c2d9u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::User_TestUserCreateDeviceManifest{ static_cast<uint32_t>(
    0x70b2bdf0u) };
constexpr ::Oculus::Platform::__PlatformInternal__MessageTypeInternal Oculus::Platform::__PlatformInternal__MessageTypeInternal::Voip_ReportAppVoipSessions{ static_cast<uint32_t>(0xce5152d8u) };
//  Writing Method size for method: ::Oculus::Platform::__PlatformInternal__HTTP.SetHttpTransferUpdateCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::HttpTransferUpdate*>*)>(
    &::Oculus::Platform::__PlatformInternal__HTTP::SetHttpTransferUpdateCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x27f2038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__PlatformInternal__HTTP*>::get(), "SetHttpTransferUpdateCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::HttpTransferUpdate*>*>::get() })));
    return ___internal_method;
  }
};
inline void Oculus::Platform::__PlatformInternal__HTTP::SetHttpTransferUpdateCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::HttpTransferUpdate*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__PlatformInternal__HTTP*>::get(), "SetHttpTransferUpdateCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::HttpTransferUpdate*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::__PlatformInternal__HTTP::__PlatformInternal__HTTP() {}
//  Writing Method size for method: ::Oculus::Platform::__PlatformInternal__Users.GetLinkedAccounts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LinkedAccountList*>* (*)(::ArrayW<::Oculus::Platform::ServiceProvider, ::Array<::Oculus::Platform::ServiceProvider>*>)>(
        &::Oculus::Platform::__PlatformInternal__Users::GetLinkedAccounts)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x27f20ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__PlatformInternal__Users*>::get(), "GetLinkedAccounts", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Oculus::Platform::ServiceProvider, ::Array<::Oculus::Platform::ServiceProvider>*>>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LinkedAccountList*>*
Oculus::Platform::__PlatformInternal__Users::GetLinkedAccounts(::ArrayW<::Oculus::Platform::ServiceProvider, ::Array<::Oculus::Platform::ServiceProvider>*> providers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__PlatformInternal__Users*>::get(), "GetLinkedAccounts", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Oculus::Platform::ServiceProvider, ::Array<::Oculus::Platform::ServiceProvider>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LinkedAccountList*>*, false>(nullptr, ___internal_method, providers);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::__PlatformInternal__Users::__PlatformInternal__Users() {}
//  Writing Method size for method: ::Oculus::Platform::PlatformInternal.CrashApplication
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Oculus::Platform::PlatformInternal::CrashApplication)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x27f1db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::PlatformInternal*>::get(), "CrashApplication",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::PlatformInternal.ParseMessageHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Message* (*)(void*, ::Oculus::Platform::__Message__MessageType)>(
    &::Oculus::Platform::PlatformInternal::ParseMessageHandle)> {
  constexpr static std::size_t size = 0x8b4;
  constexpr static std::size_t addrs = 0x27e1540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::PlatformInternal*>::get(), "ParseMessageHandle", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message__MessageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::PlatformInternal.InitializeStandaloneAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* (*)(uint64_t, ::StringW)>(
    &::Oculus::Platform::PlatformInternal::InitializeStandaloneAsync)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x27f1e00;

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
inline ::Oculus::Platform::Message* Oculus::Platform::PlatformInternal::ParseMessageHandle(void* messageHandle, ::Oculus::Platform::__Message__MessageType messageType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::PlatformInternal*>::get(), "ParseMessageHandle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message__MessageType>::get() })));
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
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
