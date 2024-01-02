#pragma once
#include "Oculus/Platform/zzzz__Message_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "Oculus/Platform/Models/zzzz__AppDownloadProgressResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__DestinationList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInviteList_def.hpp"
#include "Oculus/Platform/Models/zzzz__SendInvitesResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AbuseReportRecording_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationVersion_def.hpp"
#include "Oculus/Platform/Models/zzzz__ShareMediaResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDeleteResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserProof_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionsChangedNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncVoipAttenuationValueList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ProductList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadCancelResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__InstalledApplicationList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStartResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include "Oculus/Platform/Models/zzzz__SdkAccountList_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserCapabilityList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchFriendRequestFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeEntryList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AvatarEditorResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__HttpTransferUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__Error_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetails_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncConnection_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionList_def.hpp"
#include "Oculus/Platform/Models/zzzz__SystemVoipState_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceLeaveIntent_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchUnblockFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__InvitePanelResultInfo_def.hpp"
#include "Oculus/Platform/Models/zzzz__AppDownloadResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LinkedAccountList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchReportFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__Challenge_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetailsList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchInvitePanelFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardList_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSetSessionPropertyResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__PurchaseList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementDefinitionList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserAccountAgeCategory_def.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/Models/zzzz__RejoinDialogResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserDataStoreUpdateResponse_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingVideoStats_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingApplicationStatus_def.hpp"
#include "Oculus/Platform/Models/zzzz__PartyUpdateNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementProgressList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardEntryList_def.hpp"
#include "Oculus/Platform/Models/zzzz__Party_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserReportID_def.hpp"
#include "Oculus/Platform/Models/zzzz__PartyID_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__PidList_def.hpp"
#include "Oculus/Platform/Models/zzzz__BlockedUserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchBlockFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__MicrophoneAvailabilityState_def.hpp"
#include "Oculus/Platform/Models/zzzz__OrgScopedID_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStatus_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceJoinIntent_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::__Message__Callback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::__Message__Callback::*)(::System::Object*, void*)>(
    &::Oculus::Platform::__Message__Callback::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x26ca570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__Callback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::__Message__Callback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::__Message__Callback::*)(::Oculus::Platform::Message*)>(
    &::Oculus::Platform::__Message__Callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26f0580;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__Callback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__Callback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::__Message__Callback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Oculus::Platform::__Message__Callback::*)(::Oculus::Platform::Message*, ::System::AsyncCallback*, ::System::Object*)>(&::Oculus::Platform::__Message__Callback::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26f0594;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__Callback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__Callback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::__Message__Callback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::__Message__Callback::*)(::System::IAsyncResult*)>(
    &::Oculus::Platform::__Message__Callback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26f05b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__Callback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__Callback*>::get(), 15));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::__Message__Callback* Oculus::Platform::__Message__Callback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::__Message__Callback*>(object, method));
}
inline void Oculus::Platform::__Message__Callback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__Callback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Oculus::Platform::__Message__Callback::Invoke(::Oculus::Platform::Message* message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__Callback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::System::IAsyncResult* Oculus::Platform::__Message__Callback::BeginInvoke(::Oculus::Platform::Message* message, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__Callback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, message, callback, object);
}
inline void Oculus::Platform::__Message__Callback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__Callback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::__Message__Callback::__Message__Callback() {}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::__Message__MessageType::__Message__MessageType(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::__Message__MessageType::__Message__MessageType() {}
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Unknown{ static_cast<uint32_t>(0xfc86f000u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::AbuseReport_ReportRequestHandled{ static_cast<uint32_t>(0x8efc86f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Achievements_AddCount{ static_cast<uint32_t>(0x3162e7c3u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Achievements_AddFields{ static_cast<uint32_t>(0x2921aad4u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Achievements_GetAllDefinitions{ static_cast<uint32_t>(0x8d45d3c3u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Achievements_GetAllProgress{ static_cast<uint32_t>(0x9fde1df0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Achievements_GetDefinitionsByName{ static_cast<uint32_t>(0x9101bcf0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Achievements_GetNextAchievementDefinitionArrayPage{ static_cast<uint32_t>(0x7dd255f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Achievements_GetNextAchievementProgressArrayPage{ static_cast<uint32_t>(0x42e727f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Achievements_GetProgressByName{ static_cast<uint32_t>(0xb16326d5u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Achievements_Unlock{ static_cast<uint32_t>(0x3ccbddf0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::ApplicationLifecycle_GetRegisteredPIDs{ static_cast<uint32_t>(0x62cfe5c4u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::ApplicationLifecycle_GetSessionKey{ static_cast<uint32_t>(0xaf591df0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::ApplicationLifecycle_RegisterSessionKey{ static_cast<uint32_t>(0xb6aff8f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Application_CancelAppDownload{ static_cast<uint32_t>(0x2060def0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Application_CheckAppDownloadProgress{ static_cast<uint32_t>(0x34a924f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Application_GetVersion{ static_cast<uint32_t>(0x670a0ef0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Application_InstallAppUpdateAndRelaunch{ static_cast<uint32_t>(0x856b80d4u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Application_LaunchOtherApp{ static_cast<uint32_t>(0xe2d1f8f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Application_StartAppDownload{ static_cast<uint32_t>(0xfc006ef0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::AssetFile_Delete{ static_cast<uint32_t>(0x5d7886f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::AssetFile_DeleteById{ static_cast<uint32_t>(0xe8cd52f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::AssetFile_DeleteByName{ static_cast<uint32_t>(0xac1cff0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::AssetFile_Download{ static_cast<uint32_t>(0xc59f44d1u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::AssetFile_DownloadById{ static_cast<uint32_t>(0x8992f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::AssetFile_DownloadByName{ static_cast<uint32_t>(0x36cefaf0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::AssetFile_DownloadCancel{ static_cast<uint32_t>(0xc7d30ac8u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::AssetFile_DownloadCancelById{ static_cast<uint32_t>(0x659514f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::AssetFile_DownloadCancelByName{ static_cast<uint32_t>(0x6aecfaf0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::AssetFile_GetList{ static_cast<uint32_t>(0xfc6f74f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::AssetFile_Status{ static_cast<uint32_t>(0x602fd3c2u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::AssetFile_StatusById{ static_cast<uint32_t>(0x955d38f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::AssetFile_StatusByName{ static_cast<uint32_t>(0xcfda50f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Avatar_LaunchAvatarEditor{ static_cast<uint32_t>(0x53e1f1c5u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Challenges_Create{ static_cast<uint32_t>(0x59d641f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Challenges_DeclineInvite{ static_cast<uint32_t>(0x8e76c0f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Challenges_Delete{ static_cast<uint32_t>(0x4885caf0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Challenges_Get{ static_cast<uint32_t>(0x584ef3f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Challenges_GetEntries{ static_cast<uint32_t>(0x5fb41ad2u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Challenges_GetEntriesAfterRank{ static_cast<uint32_t>(0x7f1a89c8u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Challenges_GetEntriesByIds{ static_cast<uint32_t>(0x6509dcf0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Challenges_GetList{ static_cast<uint32_t>(0x264356f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Challenges_GetNextChallenges{ static_cast<uint32_t>(0x7ca1b6f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Challenges_GetNextEntries{ static_cast<uint32_t>(0x4ca0c6f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Challenges_GetPreviousChallenges{ static_cast<uint32_t>(0xd04b4ceu) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Challenges_GetPreviousEntries{ static_cast<uint32_t>(0xc90470f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Challenges_Join{ static_cast<uint32_t>(0x248069f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Challenges_Leave{ static_cast<uint32_t>(0x6116e5f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Challenges_UpdateInfo{ static_cast<uint32_t>(0x60be75d1u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::DeviceApplicationIntegrity_GetIntegrityToken{ static_cast<uint32_t>(0x71abdaf0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Entitlement_GetIsViewerEntitled{ static_cast<uint32_t>(0xb1586bd8u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::GroupPresence_Clear{ static_cast<uint32_t>(0xaa9cc3f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::GroupPresence_GetInvitableUsers{ static_cast<uint32_t>(0x4bc3f1f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::GroupPresence_GetNextApplicationInviteArrayPage{ static_cast<uint32_t>(0xf2c0f8c4u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::GroupPresence_GetSentInvites{ static_cast<uint32_t>(0xb10a26c8u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::GroupPresence_LaunchInvitePanel{ static_cast<uint32_t>(0x9fcf9ecfu) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::GroupPresence_LaunchMultiplayerErrorDialog{ static_cast<uint32_t>(0x55af24f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::GroupPresence_LaunchRejoinDialog{ static_cast<uint32_t>(0x6f0377d5u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::GroupPresence_LaunchRosterPanel{ static_cast<uint32_t>(0x728882f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::GroupPresence_SendInvites{ static_cast<uint32_t>(0x64d3cbcdu) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::GroupPresence_Set{ static_cast<uint32_t>(0x5f5c24f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::GroupPresence_SetDeeplinkMessageOverride{ static_cast<uint32_t>(0x1adf0df0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::GroupPresence_SetDestination{ static_cast<uint32_t>(0x5b268af0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::GroupPresence_SetIsJoinable{ static_cast<uint32_t>(0x8f1055f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::GroupPresence_SetLobbySession{ static_cast<uint32_t>(0xff55bef0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::GroupPresence_SetMatchSession{ static_cast<uint32_t>(0x4c84b8f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::IAP_ConsumePurchase{ static_cast<uint32_t>(0xd972bbdfu) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::IAP_GetNextProductArrayPage{ static_cast<uint32_t>(0xaf4ad9dbu) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::IAP_GetNextPurchaseArrayPage{ static_cast<uint32_t>(0x570a95f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::IAP_GetProductsBySKU{ static_cast<uint32_t>(0x9acaf5f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::IAP_GetViewerPurchases{ static_cast<uint32_t>(0xf8419f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::IAP_GetViewerPurchasesDurableCache{ static_cast<uint32_t>(0x599e2bf0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::IAP_LaunchCheckoutFlow{ static_cast<uint32_t>(0x9b0d0df0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::LanguagePack_GetCurrent{ static_cast<uint32_t>(0xd5f090dfu) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::LanguagePack_SetCurrent{ static_cast<uint32_t>(0x4fbbe0f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Leaderboard_Get{ static_cast<uint32_t>(0xd44ef8f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Leaderboard_GetEntries{ static_cast<uint32_t>(0xb3474cf0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Leaderboard_GetEntriesAfterRank{ static_cast<uint32_t>(0xef8b37d8u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Leaderboard_GetEntriesByIds{ static_cast<uint32_t>(0x607bfcf0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Leaderboard_GetNextEntries{ static_cast<uint32_t>(0x207cd9f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Leaderboard_GetNextLeaderboardArrayPage{ static_cast<uint32_t>(0xf6769bf0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Leaderboard_GetPreviousEntries{ static_cast<uint32_t>(0x1dac0f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Leaderboard_WriteEntry{ static_cast<uint32_t>(0xfec87fd1u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Leaderboard_WriteEntryWithSupplementaryMetric{ static_cast<uint32_t>(0xc692faf0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Media_ShareToFacebook{ static_cast<uint32_t>(0xef8ae3c0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Notification_MarkAsRead{ static_cast<uint32_t>(0x7259e3f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Party_GetCurrent{ static_cast<uint32_t>(0x933760f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::RichPresence_Clear{ static_cast<uint32_t>(0xb752b3f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::RichPresence_GetDestinations{ static_cast<uint32_t>(0x6f2d14f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::RichPresence_GetNextDestinationArrayPage{ static_cast<uint32_t>(0x367f45f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::RichPresence_Set{ static_cast<uint32_t>(0x147509f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::UserAgeCategory_Get{ static_cast<uint32_t>(0xcbe0c0f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::UserAgeCategory_Report{ static_cast<uint32_t>(0x4dd8d6f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::UserDataStore_PrivateDeleteEntryByKey{ static_cast<uint32_t>(0x896f3ef0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::UserDataStore_PrivateGetEntries{ static_cast<uint32_t>(0x8a8228f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::UserDataStore_PrivateGetEntryByKey{ static_cast<uint32_t>(0x198306dcu) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::UserDataStore_PrivateWriteEntry{ static_cast<uint32_t>(0xd2828bf0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::UserDataStore_PublicDeleteEntryByKey{ static_cast<uint32_t>(0xfbe5d5ddu) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::UserDataStore_PublicGetEntries{ static_cast<uint32_t>(0xc24b7dd6u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::UserDataStore_PublicGetEntryByKey{ static_cast<uint32_t>(0xc6665cd9u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::UserDataStore_PublicWriteEntry{ static_cast<uint32_t>(0x364a0af0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::User_Get{ static_cast<uint32_t>(0xcf9e47f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::User_GetAccessToken{ static_cast<uint32_t>(0xbe5aa8c6u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::User_GetBlockedUsers{ static_cast<uint32_t>(0x201556f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::User_GetLoggedInUser{ static_cast<uint32_t>(0x6f345df0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::User_GetLoggedInUserFriends{ static_cast<uint32_t>(0x7c2a8df0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::User_GetNextBlockedUserArrayPage{ static_cast<uint32_t>(0x2afdcbf0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::User_GetNextUserArrayPage{ static_cast<uint32_t>(0x7cf743f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::User_GetNextUserCapabilityArrayPage{ static_cast<uint32_t>(0x9f399f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::User_GetOrgScopedID{ static_cast<uint32_t>(0x1bb0f0d8u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::User_GetSdkAccounts{ static_cast<uint32_t>(0x526a83f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::User_GetUserProof{ static_cast<uint32_t>(0x810483f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::User_LaunchBlockFlow{ static_cast<uint32_t>(0xd62528f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::User_LaunchFriendRequestFlow{ static_cast<uint32_t>(0x98b504c9u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::User_LaunchUnblockFlow{ static_cast<uint32_t>(0x972aa2d4u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Voip_GetMicrophoneAvailability{ static_cast<uint32_t>(0x4ce345f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Voip_SetSystemVoipSuppressed{ static_cast<uint32_t>(0x3fc9aaf0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Notification_AbuseReport_ReportButtonPressed{ static_cast<uint32_t>(0x472f6cf0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Notification_ApplicationLifecycle_LaunchIntentChanged{ static_cast<uint32_t>(0xa34cb3c4u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Notification_AssetFile_DownloadUpdate{ static_cast<uint32_t>(0xdd0ccdf0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Notification_GroupPresence_InvitationsSent{ static_cast<uint32_t>(0x9a84b6f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Notification_GroupPresence_JoinIntentReceived{ static_cast<uint32_t>(0x3889f6f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Notification_GroupPresence_LeaveIntentReceived{ static_cast<uint32_t>(0x37ea1df0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Notification_HTTP_Transfer{ static_cast<uint32_t>(0xd46e2ff0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Notification_Livestreaming_StatusChange{ static_cast<uint32_t>(0x47596ef0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Notification_NetSync_ConnectionStatusChanged{ static_cast<uint32_t>(0xca8434c7u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Notification_NetSync_SessionsChanged{ static_cast<uint32_t>(0x7e7f36f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Notification_Party_PartyUpdate{ static_cast<uint32_t>(0xb28a11ddu) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Notification_Voip_MicrophoneAvailabilityStateUpdate{ static_cast<uint32_t>(0x20cb57f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Notification_Voip_SystemVoipState{ static_cast<uint32_t>(0xd254a5f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Notification_Vrcamera_GetDataChannelMessageUpdate{ static_cast<uint32_t>(0xe4f33cf0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Notification_Vrcamera_GetSurfaceUpdate{ static_cast<uint32_t>(0xf21084f0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Platform_InitializeWithAccessToken{ static_cast<uint32_t>(0x692f2bf0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Platform_InitializeStandaloneOculus{ static_cast<uint32_t>(0xf8ce0cf0u) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Platform_InitializeAndroidAsynchronous{ static_cast<uint32_t>(0xb407d3dau) };
constexpr ::Oculus::Platform::__Message__MessageType Oculus::Platform::__Message__MessageType::Platform_InitializeWindowsAsynchronous{ static_cast<uint32_t>(0xa7ba8ff0u) };
//  Writing Method size for method: ::Oculus::Platform::__Message__ExtraMessageTypesHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::__Message__ExtraMessageTypesHandler::*)(::System::Object*, void*)>(
    &::Oculus::Platform::__Message__ExtraMessageTypesHandler::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26f05c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__ExtraMessageTypesHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::__Message__ExtraMessageTypesHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Message* (
    ::Oculus::Platform::__Message__ExtraMessageTypesHandler::*)(void*, ::Oculus::Platform::__Message__MessageType)>(&::Oculus::Platform::__Message__ExtraMessageTypesHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26f0684;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__ExtraMessageTypesHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__ExtraMessageTypesHandler*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::__Message__ExtraMessageTypesHandler.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::Oculus::Platform::__Message__ExtraMessageTypesHandler::*)(void*, ::Oculus::Platform::__Message__MessageType, ::System::AsyncCallback*, ::System::Object*)>(
        &::Oculus::Platform::__Message__ExtraMessageTypesHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x26f0698;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__ExtraMessageTypesHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__ExtraMessageTypesHandler*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::__Message__ExtraMessageTypesHandler.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Message* (::Oculus::Platform::__Message__ExtraMessageTypesHandler::*)(::System::IAsyncResult*)>(
    &::Oculus::Platform::__Message__ExtraMessageTypesHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26f074c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__ExtraMessageTypesHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__ExtraMessageTypesHandler*>::get(), 15));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::__Message__ExtraMessageTypesHandler* Oculus::Platform::__Message__ExtraMessageTypesHandler::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::__Message__ExtraMessageTypesHandler*>(object, method));
}
inline void Oculus::Platform::__Message__ExtraMessageTypesHandler::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__ExtraMessageTypesHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Oculus::Platform::Message* Oculus::Platform::__Message__ExtraMessageTypesHandler::Invoke(void* messageHandle, ::Oculus::Platform::__Message__MessageType message_type) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__ExtraMessageTypesHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message*, false>(this, ___internal_method, messageHandle, message_type);
}
inline ::System::IAsyncResult* Oculus::Platform::__Message__ExtraMessageTypesHandler::BeginInvoke(void* messageHandle, ::Oculus::Platform::__Message__MessageType message_type,
                                                                                                  ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__ExtraMessageTypesHandler*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, messageHandle, message_type, callback, object);
}
inline ::Oculus::Platform::Message* Oculus::Platform::__Message__ExtraMessageTypesHandler::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Message__ExtraMessageTypesHandler*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message*, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::__Message__ExtraMessageTypesHandler::__Message__ExtraMessageTypesHandler() {}
//  Writing Method size for method: ::Oculus::Platform::Message._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Message::*)(void*)>(&::Oculus::Platform::Message::_ctor)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x26ecb24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::Finalize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecdd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::__Message__MessageType (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "get_Type",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.get_IsError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::get_IsError)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26cb31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "get_IsError",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.get_RequestID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::get_RequestID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecde4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "get_RequestID",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Error* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecdec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetHttpTransferUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::HttpTransferUpdate* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetHttpTransferUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecdf4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPlatformInitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PlatformInitialize* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetPlatformInitialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecdfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAbuseReportRecording
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AbuseReportRecording* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetAbuseReportRecording)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ece04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAchievementDefinitions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AchievementDefinitionList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetAchievementDefinitions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ece0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAchievementProgressList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AchievementProgressList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetAchievementProgressList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ece14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAchievementUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AchievementUpdate* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetAchievementUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ece1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAppDownloadProgressResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AppDownloadProgressResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetAppDownloadProgressResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ece24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAppDownloadResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AppDownloadResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetAppDownloadResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ece2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetApplicationInviteList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ApplicationInviteList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetApplicationInviteList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ece34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetApplicationVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ApplicationVersion* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetApplicationVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ece3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetDetails
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetDetails* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetAssetDetails)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ece44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetDetailsList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetDetailsList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetAssetDetailsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ece4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetFileDeleteResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetFileDeleteResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetAssetFileDeleteResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ece54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetFileDownloadCancelResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetFileDownloadCancelResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetAssetFileDownloadCancelResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ece5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetFileDownloadResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetFileDownloadResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetAssetFileDownloadResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ece64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetFileDownloadUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetFileDownloadUpdate* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetAssetFileDownloadUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ece6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAvatarEditorResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AvatarEditorResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetAvatarEditorResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ece74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetBlockedUserList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::BlockedUserList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetBlockedUserList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ece7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetChallenge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Challenge* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetChallenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ece84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetChallengeEntryList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ChallengeEntryList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetChallengeEntryList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ece8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetChallengeList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ChallengeList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetChallengeList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ece94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetDataStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetDataStore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ece9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetDestinationList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::DestinationList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetDestinationList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecea4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetGroupPresenceJoinIntent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::GroupPresenceJoinIntent* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetGroupPresenceJoinIntent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26eceac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetGroupPresenceLeaveIntent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::GroupPresenceLeaveIntent* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetGroupPresenceLeaveIntent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26eceb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetInstalledApplicationList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::InstalledApplicationList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetInstalledApplicationList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecebc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetInvitePanelResultInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::InvitePanelResultInfo* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetInvitePanelResultInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecec4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLaunchBlockFlowResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LaunchBlockFlowResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetLaunchBlockFlowResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ececc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLaunchFriendRequestFlowResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LaunchFriendRequestFlowResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetLaunchFriendRequestFlowResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26eced4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLaunchInvitePanelFlowResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LaunchInvitePanelFlowResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetLaunchInvitePanelFlowResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecedc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLaunchReportFlowResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LaunchReportFlowResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetLaunchReportFlowResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecee4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLaunchUnblockFlowResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LaunchUnblockFlowResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetLaunchUnblockFlowResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26eceec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLeaderboardDidUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLeaderboardDidUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecef4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLeaderboardEntryList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LeaderboardEntryList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetLeaderboardEntryList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecefc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLeaderboardList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LeaderboardList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetLeaderboardList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecf04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLinkedAccountList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LinkedAccountList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetLinkedAccountList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecf0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLivestreamingApplicationStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LivestreamingApplicationStatus* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetLivestreamingApplicationStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecf14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLivestreamingStartResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LivestreamingStartResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetLivestreamingStartResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecf1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLivestreamingStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LivestreamingStatus* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetLivestreamingStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecf24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLivestreamingVideoStats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LivestreamingVideoStats* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetLivestreamingVideoStats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecf2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetMicrophoneAvailabilityState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MicrophoneAvailabilityState* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetMicrophoneAvailabilityState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecf34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetSyncConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncConnection* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetNetSyncConnection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecf3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetSyncSessionList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncSessionList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetNetSyncSessionList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecf44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetSyncSessionsChangedNotification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncSessionsChangedNotification* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetNetSyncSessionsChangedNotification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecf4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetSyncSetSessionPropertyResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetNetSyncSetSessionPropertyResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecf54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 49));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetSyncVoipAttenuationValueList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetNetSyncVoipAttenuationValueList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecf5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 50));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetOrgScopedID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::OrgScopedID* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetOrgScopedID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecf64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetParty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Party* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetParty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecf6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 52));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPartyID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PartyID* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPartyID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecf74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 53));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPartyUpdateNotification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PartyUpdateNotification* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetPartyUpdateNotification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecf7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 54));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPidList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PidList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPidList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecf84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetProductList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ProductList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetProductList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecf8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 56));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPurchase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Purchase* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetPurchase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecf94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 57));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPurchaseList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PurchaseList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetPurchaseList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecf9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 58));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetRejoinDialogResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::RejoinDialogResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetRejoinDialogResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecfa4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 59));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetSdkAccountList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::SdkAccountList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetSdkAccountList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecfac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 60));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetSendInvitesResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::SendInvitesResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetSendInvitesResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecfb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 61));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetShareMediaResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ShareMediaResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetShareMediaResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecfbc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 62));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecfc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 63));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetSystemVoipState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::SystemVoipState* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetSystemVoipState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecfcc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 64));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::User* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetUser)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecfd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 65));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserAccountAgeCategory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserAccountAgeCategory* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetUserAccountAgeCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecfdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 66));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserCapabilityList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserCapabilityList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetUserCapabilityList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecfe4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 67));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserDataStoreUpdateResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserDataStoreUpdateResponse* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetUserDataStoreUpdateResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecfec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 68));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetUserList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecff4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 69));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserProof
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserProof* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetUserProof)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecffc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 70));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserReportID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserReportID* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetUserReportID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ed004;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 71));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.ParseMessageHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Message* (*)(void*)>(&::Oculus::Platform::Message::ParseMessageHandle)> {
  constexpr static std::size_t size = 0x18ec;
  constexpr static std::size_t addrs = 0x26ed00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "ParseMessageHandle", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.PopMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Message* (*)()>(&::Oculus::Platform::Message::PopMessage)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x26cf514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "PopMessage",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.set_HandleExtraMessageTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::__Message__ExtraMessageTypesHandler*)>(
    &::Oculus::Platform::Message::set_HandleExtraMessageTypes)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x26f04ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "set_HandleExtraMessageTypes", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message__ExtraMessageTypesHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.get_HandleExtraMessageTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::__Message__ExtraMessageTypesHandler* (*)()>(
    &::Oculus::Platform::Message::get_HandleExtraMessageTypes)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26f0538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                               "get_HandleExtraMessageTypes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::__Message__MessageType& Oculus::Platform::Message::__get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::Oculus::Platform::__Message__MessageType const& Oculus::Platform::Message::__get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Oculus::Platform::Message::__set_type(::Oculus::Platform::__Message__MessageType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr uint64_t& Oculus::Platform::Message::__get_requestID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestID;
}
constexpr uint64_t const& Oculus::Platform::Message::__get_requestID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestID;
}
constexpr void Oculus::Platform::Message::__set_requestID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestID = value;
}
constexpr ::Oculus::Platform::Models::Error*& Oculus::Platform::Message::__get_error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Error*> const& Oculus::Platform::Message::__get_error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr void Oculus::Platform::Message::__set_error(::Oculus::Platform::Models::Error* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___error)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Oculus::Platform::Message::setStaticF__HandleExtraMessageTypes_k__BackingField(::Oculus::Platform::__Message__ExtraMessageTypesHandler* value) {
  ::cordl_internals::setStaticField<::Oculus::Platform::__Message__ExtraMessageTypesHandler*, "<HandleExtraMessageTypes>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get>(
      std::forward<::Oculus::Platform::__Message__ExtraMessageTypesHandler*>(value));
}
inline ::Oculus::Platform::__Message__ExtraMessageTypesHandler* Oculus::Platform::Message::getStaticF__HandleExtraMessageTypes_k__BackingField() {
  return ::cordl_internals::getStaticField<::Oculus::Platform::__Message__ExtraMessageTypesHandler*, "<HandleExtraMessageTypes>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get>();
}
inline ::Oculus::Platform::Message* Oculus::Platform::Message::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Message*>(c_message));
}
inline void Oculus::Platform::Message::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline void Oculus::Platform::Message::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Oculus::Platform::__Message__MessageType Oculus::Platform::Message::get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "get_Type",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::__Message__MessageType, false>(this, ___internal_method);
}
inline bool Oculus::Platform::Message::get_IsError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "get_IsError",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline uint64_t Oculus::Platform::Message::get_RequestID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "get_RequestID",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Error* Oculus::Platform::Message::GetError() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Error*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::HttpTransferUpdate* Oculus::Platform::Message::GetHttpTransferUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::HttpTransferUpdate*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PlatformInitialize* Oculus::Platform::Message::GetPlatformInitialize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PlatformInitialize*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AbuseReportRecording* Oculus::Platform::Message::GetAbuseReportRecording() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AbuseReportRecording*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AchievementDefinitionList* Oculus::Platform::Message::GetAchievementDefinitions() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AchievementDefinitionList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AchievementProgressList* Oculus::Platform::Message::GetAchievementProgressList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AchievementProgressList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AchievementUpdate* Oculus::Platform::Message::GetAchievementUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AchievementUpdate*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AppDownloadProgressResult* Oculus::Platform::Message::GetAppDownloadProgressResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AppDownloadProgressResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AppDownloadResult* Oculus::Platform::Message::GetAppDownloadResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AppDownloadResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ApplicationInviteList* Oculus::Platform::Message::GetApplicationInviteList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ApplicationInviteList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ApplicationVersion* Oculus::Platform::Message::GetApplicationVersion() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ApplicationVersion*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetDetails* Oculus::Platform::Message::GetAssetDetails() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetDetails*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetDetailsList* Oculus::Platform::Message::GetAssetDetailsList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetDetailsList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetFileDeleteResult* Oculus::Platform::Message::GetAssetFileDeleteResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDeleteResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* Oculus::Platform::Message::GetAssetFileDownloadCancelResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadCancelResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetFileDownloadResult* Oculus::Platform::Message::GetAssetFileDownloadResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetFileDownloadUpdate* Oculus::Platform::Message::GetAssetFileDownloadUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadUpdate*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AvatarEditorResult* Oculus::Platform::Message::GetAvatarEditorResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AvatarEditorResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::BlockedUserList* Oculus::Platform::Message::GetBlockedUserList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::BlockedUserList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Challenge* Oculus::Platform::Message::GetChallenge() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Challenge*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ChallengeEntryList* Oculus::Platform::Message::GetChallengeEntryList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ChallengeEntryList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ChallengeList* Oculus::Platform::Message::GetChallengeList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ChallengeList*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Oculus::Platform::Message::GetDataStore() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::DestinationList* Oculus::Platform::Message::GetDestinationList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::DestinationList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::GroupPresenceJoinIntent* Oculus::Platform::Message::GetGroupPresenceJoinIntent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::GroupPresenceJoinIntent*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* Oculus::Platform::Message::GetGroupPresenceLeaveIntent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::GroupPresenceLeaveIntent*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::InstalledApplicationList* Oculus::Platform::Message::GetInstalledApplicationList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::InstalledApplicationList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::InvitePanelResultInfo* Oculus::Platform::Message::GetInvitePanelResultInfo() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::InvitePanelResultInfo*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LaunchBlockFlowResult* Oculus::Platform::Message::GetLaunchBlockFlowResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchBlockFlowResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LaunchFriendRequestFlowResult* Oculus::Platform::Message::GetLaunchFriendRequestFlowResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LaunchInvitePanelFlowResult* Oculus::Platform::Message::GetLaunchInvitePanelFlowResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LaunchReportFlowResult* Oculus::Platform::Message::GetLaunchReportFlowResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchReportFlowResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LaunchUnblockFlowResult* Oculus::Platform::Message::GetLaunchUnblockFlowResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchUnblockFlowResult*, false>(this, ___internal_method);
}
inline bool Oculus::Platform::Message::GetLeaderboardDidUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LeaderboardEntryList* Oculus::Platform::Message::GetLeaderboardEntryList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LeaderboardEntryList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LeaderboardList* Oculus::Platform::Message::GetLeaderboardList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LeaderboardList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LinkedAccountList* Oculus::Platform::Message::GetLinkedAccountList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LinkedAccountList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LivestreamingApplicationStatus* Oculus::Platform::Message::GetLivestreamingApplicationStatus() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingApplicationStatus*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LivestreamingStartResult* Oculus::Platform::Message::GetLivestreamingStartResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingStartResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LivestreamingStatus* Oculus::Platform::Message::GetLivestreamingStatus() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingStatus*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LivestreamingVideoStats* Oculus::Platform::Message::GetLivestreamingVideoStats() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingVideoStats*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* Oculus::Platform::Message::GetMicrophoneAvailabilityState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MicrophoneAvailabilityState*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncConnection* Oculus::Platform::Message::GetNetSyncConnection() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncConnection*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncSessionList* Oculus::Platform::Message::GetNetSyncSessionList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSessionList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncSessionsChangedNotification* Oculus::Platform::Message::GetNetSyncSessionsChangedNotification() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* Oculus::Platform::Message::GetNetSyncSetSessionPropertyResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* Oculus::Platform::Message::GetNetSyncVoipAttenuationValueList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 50)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::OrgScopedID* Oculus::Platform::Message::GetOrgScopedID() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::OrgScopedID*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Party* Oculus::Platform::Message::GetParty() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 52)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Party*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PartyID* Oculus::Platform::Message::GetPartyID() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 53)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PartyID*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PartyUpdateNotification* Oculus::Platform::Message::GetPartyUpdateNotification() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 54)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PartyUpdateNotification*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PidList* Oculus::Platform::Message::GetPidList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 55)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PidList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ProductList* Oculus::Platform::Message::GetProductList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 56)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ProductList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Purchase* Oculus::Platform::Message::GetPurchase() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 57)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Purchase*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PurchaseList* Oculus::Platform::Message::GetPurchaseList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 58)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PurchaseList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::RejoinDialogResult* Oculus::Platform::Message::GetRejoinDialogResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 59)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::RejoinDialogResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::SdkAccountList* Oculus::Platform::Message::GetSdkAccountList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 60)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SdkAccountList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::SendInvitesResult* Oculus::Platform::Message::GetSendInvitesResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 61)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SendInvitesResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ShareMediaResult* Oculus::Platform::Message::GetShareMediaResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 62)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ShareMediaResult*, false>(this, ___internal_method);
}
inline ::StringW Oculus::Platform::Message::GetString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 63)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::SystemVoipState* Oculus::Platform::Message::GetSystemVoipState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 64)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SystemVoipState*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::User* Oculus::Platform::Message::GetUser() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 65)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::User*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserAccountAgeCategory* Oculus::Platform::Message::GetUserAccountAgeCategory() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 66)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserAccountAgeCategory*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserCapabilityList* Oculus::Platform::Message::GetUserCapabilityList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 67)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserCapabilityList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserDataStoreUpdateResponse* Oculus::Platform::Message::GetUserDataStoreUpdateResponse() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 68)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserDataStoreUpdateResponse*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserList* Oculus::Platform::Message::GetUserList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 69)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserProof* Oculus::Platform::Message::GetUserProof() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 70)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserProof*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserReportID* Oculus::Platform::Message::GetUserReportID() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 71)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserReportID*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Message* Oculus::Platform::Message::ParseMessageHandle(void* messageHandle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "ParseMessageHandle", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message*, false>(nullptr, ___internal_method, messageHandle);
}
inline ::Oculus::Platform::Message* Oculus::Platform::Message::PopMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "PopMessage",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message*, false>(nullptr, ___internal_method);
}
inline void Oculus::Platform::Message::set_HandleExtraMessageTypes(::Oculus::Platform::__Message__ExtraMessageTypesHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "set_HandleExtraMessageTypes", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message__ExtraMessageTypesHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::Oculus::Platform::__Message__ExtraMessageTypesHandler* Oculus::Platform::Message::get_HandleExtraMessageTypes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "get_HandleExtraMessageTypes",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::__Message__ExtraMessageTypesHandler*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Message::Message() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
