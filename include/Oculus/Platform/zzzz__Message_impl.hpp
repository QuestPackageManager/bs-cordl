#pragma once
// IWYU pragma private; include "Oculus/Platform/Message.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "Oculus/Platform/Models/zzzz__AbuseReportRecording_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementDefinitionList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementProgressList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__AppDownloadProgressResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AppDownloadResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInviteList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationVersion_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetailsList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetails_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDeleteResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadCancelResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__AvatarEditorResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__BlockedUserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeEntryList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeList_def.hpp"
#include "Oculus/Platform/Models/zzzz__Challenge_def.hpp"
#include "Oculus/Platform/Models/zzzz__CowatchViewerList_def.hpp"
#include "Oculus/Platform/Models/zzzz__CowatchViewerUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__CowatchingState_def.hpp"
#include "Oculus/Platform/Models/zzzz__DestinationList_def.hpp"
#include "Oculus/Platform/Models/zzzz__Error_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceJoinIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceLeaveIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__HttpTransferUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__InstalledApplicationList_def.hpp"
#include "Oculus/Platform/Models/zzzz__InvitePanelResultInfo_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchBlockFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchFriendRequestFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchInvitePanelFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchReportFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchUnblockFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardEntryList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LinkedAccountList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingApplicationStatus_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStartResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStatus_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingVideoStats_def.hpp"
#include "Oculus/Platform/Models/zzzz__MicrophoneAvailabilityState_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncConnection_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionList_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionsChangedNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSetSessionPropertyResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncVoipAttenuationValueList_def.hpp"
#include "Oculus/Platform/Models/zzzz__OrgScopedID_def.hpp"
#include "Oculus/Platform/Models/zzzz__PartyID_def.hpp"
#include "Oculus/Platform/Models/zzzz__PartyUpdateNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__Party_def.hpp"
#include "Oculus/Platform/Models/zzzz__PidList_def.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/Models/zzzz__ProductList_def.hpp"
#include "Oculus/Platform/Models/zzzz__PurchaseList_def.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include "Oculus/Platform/Models/zzzz__PushNotificationResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__RejoinDialogResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__SdkAccountList_def.hpp"
#include "Oculus/Platform/Models/zzzz__SendInvitesResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__ShareMediaResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__SystemVoipState_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserAccountAgeCategory_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserCapabilityList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserProof_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserReportID_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Message_Callback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Message_Callback::*)(::System::Object*, ::System::IntPtr)>(&::Oculus::Platform::Message_Callback::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5dd6a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message_Callback*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message_Callback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Message_Callback::*)(::Oculus::Platform::Message*)>(&::Oculus::Platform::Message_Callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5dd6b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message_Callback*>(), { ::i2c::class_of<::Oculus::Platform::Message_Callback*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message_Callback.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Oculus::Platform::Message_Callback::*)(::Oculus::Platform::Message*, ::System::AsyncCallback*, ::System::Object*)>(
    &::Oculus::Platform::Message_Callback::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5dd6b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message_Callback*>(), { ::i2c::class_of<::Oculus::Platform::Message_Callback*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message_Callback.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Message_Callback::*)(::System::IAsyncResult*)>(&::Oculus::Platform::Message_Callback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5dd6bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message_Callback*>(), { ::i2c::class_of<::Oculus::Platform::Message_Callback*>(), 15 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::Message_Callback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message_Callback*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Oculus::Platform::Message_Callback::Invoke(::Oculus::Platform::Message* message) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message_Callback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::System::IAsyncResult* Oculus::Platform::Message_Callback::BeginInvoke(::Oculus::Platform::Message* message, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message_Callback*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, message, callback, object);
}
inline void Oculus::Platform::Message_Callback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message_Callback*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Oculus::Platform::Message_Callback* Oculus::Platform::Message_Callback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Message_Callback*>(object, method));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Message_Callback::Message_Callback() {}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::Message_MessageType::Message_MessageType(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Message_MessageType::Message_MessageType() {}
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Unknown{ static_cast<uint32_t>(0x0u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::AbuseReport_ReportRequestHandled{ static_cast<uint32_t>(0x4b8efc86u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Achievements_AddCount{ static_cast<uint32_t>(0x3e76231u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Achievements_AddFields{ static_cast<uint32_t>(0x14aa2129u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Achievements_GetAllDefinitions{ static_cast<uint32_t>(0x3d3458du) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Achievements_GetAllProgress{ static_cast<uint32_t>(0x4f9fde1du) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Achievements_GetDefinitionsByName{ static_cast<uint32_t>(0x629101bcu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Achievements_GetNextAchievementDefinitionArrayPage{ static_cast<uint32_t>(0x2a7dd255u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Achievements_GetNextAchievementProgressArrayPage{ static_cast<uint32_t>(0x2f42e727u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Achievements_GetProgressByName{ static_cast<uint32_t>(0x152663b1u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Achievements_Unlock{ static_cast<uint32_t>(0x593ccbddu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::ApplicationLifecycle_GetRegisteredPIDs{ static_cast<uint32_t>(0x4e5cf62u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::ApplicationLifecycle_GetSessionKey{ static_cast<uint32_t>(0x3aaf591du) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::ApplicationLifecycle_RegisterSessionKey{ static_cast<uint32_t>(0x4db6aff8u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Application_CancelAppDownload{ static_cast<uint32_t>(0x7c2060deu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Application_CheckAppDownloadProgress{ static_cast<uint32_t>(0x5534a924u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Application_GetVersion{ static_cast<uint32_t>(0x68670a0eu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Application_InstallAppUpdateAndRelaunch{ static_cast<uint32_t>(0x14806b85u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Application_LaunchOtherApp{ static_cast<uint32_t>(0x54e2d1f8u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Application_StartAppDownload{ static_cast<uint32_t>(0x44fc006eu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::AssetFile_Delete{ static_cast<uint32_t>(0x6d5d7886u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::AssetFile_DeleteById{ static_cast<uint32_t>(0x5ae8cd52u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::AssetFile_DeleteByName{ static_cast<uint32_t>(0x420ac1cfu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::AssetFile_Download{ static_cast<uint32_t>(0x11449fc5u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::AssetFile_DownloadById{ static_cast<uint32_t>(0x2d008992u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::AssetFile_DownloadByName{ static_cast<uint32_t>(0x6336cefau) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::AssetFile_DownloadCancel{ static_cast<uint32_t>(0x80ad3c7u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::AssetFile_DownloadCancelById{ static_cast<uint32_t>(0x51659514u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::AssetFile_DownloadCancelByName{ static_cast<uint32_t>(0x446aecfau) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::AssetFile_GetList{ static_cast<uint32_t>(0x4afc6f74u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::AssetFile_Status{ static_cast<uint32_t>(0x2d32f60u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::AssetFile_StatusById{ static_cast<uint32_t>(0x5d955d38u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::AssetFile_StatusByName{ static_cast<uint32_t>(0x41cfda50u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Avatar_LaunchAvatarEditor{ static_cast<uint32_t>(0x5f1e153u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Challenges_Create{ static_cast<uint32_t>(0x6859d641u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Challenges_DeclineInvite{ static_cast<uint32_t>(0x568e76c0u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Challenges_Delete{ static_cast<uint32_t>(0x264885cau) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Challenges_Get{ static_cast<uint32_t>(0x77584ef3u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Challenges_GetEntries{ static_cast<uint32_t>(0x121ab45fu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Challenges_GetEntriesAfterRank{ static_cast<uint32_t>(0x8891a7fu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Challenges_GetEntriesByIds{ static_cast<uint32_t>(0x316509dcu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Challenges_GetList{ static_cast<uint32_t>(0x43264356u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Challenges_GetNextChallenges{ static_cast<uint32_t>(0x5b7ca1b6u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Challenges_GetNextEntries{ static_cast<uint32_t>(0x7f4ca0c6u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Challenges_GetPreviousChallenges{ static_cast<uint32_t>(0xeb4040du) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Challenges_GetPreviousEntries{ static_cast<uint32_t>(0x78c90470u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Challenges_Join{ static_cast<uint32_t>(0x21248069u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Challenges_Leave{ static_cast<uint32_t>(0x296116e5u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Challenges_UpdateInfo{ static_cast<uint32_t>(0x1175be60u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Cowatching_GetNextCowatchViewerArrayPage{ static_cast<uint32_t>(0x1d403932u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Cowatching_GetPresenterData{ static_cast<uint32_t>(0x49864735u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Cowatching_GetViewersData{ static_cast<uint32_t>(0x5cd7a24fu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Cowatching_IsInSession{ static_cast<uint32_t>(0x651b4884u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Cowatching_JoinSession{ static_cast<uint32_t>(0x6388a554u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Cowatching_LaunchInviteDialog{ static_cast<uint32_t>(0x22933297u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Cowatching_LeaveSession{ static_cast<uint32_t>(0x3c9e46cdu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Cowatching_RequestToPresent{ static_cast<uint32_t>(0x7f79bcaau) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Cowatching_ResignFromPresenting{ static_cast<uint32_t>(0x4b49c202u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Cowatching_SetPresenterData{ static_cast<uint32_t>(0x6d1c8906u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Cowatching_SetViewerData{ static_cast<uint32_t>(0x3cdbe826u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::DeviceApplicationIntegrity_GetIntegrityToken{ static_cast<uint32_t>(0x3271abdau) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Entitlement_GetIsViewerEntitled{ static_cast<uint32_t>(0x186b58b1u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::GroupPresence_Clear{ static_cast<uint32_t>(0x6daa9cc3u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::GroupPresence_GetInvitableUsers{ static_cast<uint32_t>(0x234bc3f1u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::GroupPresence_GetNextApplicationInviteArrayPage{ static_cast<uint32_t>(0x4f8c0f2u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::GroupPresence_GetSentInvites{ static_cast<uint32_t>(0x8260ab1u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::GroupPresence_LaunchInvitePanel{ static_cast<uint32_t>(0xf9ecf9fu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::GroupPresence_LaunchMultiplayerErrorDialog{ static_cast<uint32_t>(0x2955af24u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::GroupPresence_LaunchRejoinDialog{ static_cast<uint32_t>(0x1577036fu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::GroupPresence_LaunchRosterPanel{ static_cast<uint32_t>(0x35728882u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::GroupPresence_SendInvites{ static_cast<uint32_t>(0xdcbd364u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::GroupPresence_Set{ static_cast<uint32_t>(0x675f5c24u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::GroupPresence_SetDeeplinkMessageOverride{ static_cast<uint32_t>(0x521adf0du) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::GroupPresence_SetDestination{ static_cast<uint32_t>(0x4c5b268au) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::GroupPresence_SetIsJoinable{ static_cast<uint32_t>(0x2a8f1055u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::GroupPresence_SetLobbySession{ static_cast<uint32_t>(0x48ff55beu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::GroupPresence_SetMatchSession{ static_cast<uint32_t>(0x314c84b8u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::IAP_ConsumePurchase{ static_cast<uint32_t>(0x1fbb72d9u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::IAP_GetNextProductArrayPage{ static_cast<uint32_t>(0x1bd94aafu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::IAP_GetNextPurchaseArrayPage{ static_cast<uint32_t>(0x47570a95u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::IAP_GetProductsBySKU{ static_cast<uint32_t>(0x7e9acaf5u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::IAP_GetViewerPurchases{ static_cast<uint32_t>(0x3a0f8419u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::IAP_GetViewerPurchasesDurableCache{ static_cast<uint32_t>(0x63599e2bu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::IAP_LaunchCheckoutFlow{ static_cast<uint32_t>(0x3f9b0d0du) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::LanguagePack_GetCurrent{ static_cast<uint32_t>(0x1f90f0d5u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::LanguagePack_SetCurrent{ static_cast<uint32_t>(0x5b4fbbe0u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Leaderboard_Get{ static_cast<uint32_t>(0x6ad44ef8u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Leaderboard_GetEntries{ static_cast<uint32_t>(0x5db3474cu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Leaderboard_GetEntriesAfterRank{ static_cast<uint32_t>(0x18378befu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Leaderboard_GetEntriesByIds{ static_cast<uint32_t>(0x39607bfcu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Leaderboard_GetNextEntries{ static_cast<uint32_t>(0x4e207cd9u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Leaderboard_GetNextLeaderboardArrayPage{ static_cast<uint32_t>(0x35f6769bu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Leaderboard_GetPreviousEntries{ static_cast<uint32_t>(0x4901dac0u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Leaderboard_WriteEntry{ static_cast<uint32_t>(0x117fc8feu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Leaderboard_WriteEntryWithSupplementaryMetric{ static_cast<uint32_t>(0x72c692fau) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Media_ShareToFacebook{ static_cast<uint32_t>(0xe38aefu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_MarkAsRead{ static_cast<uint32_t>(0x717259e3u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Party_GetCurrent{ static_cast<uint32_t>(0x47933760u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::PushNotification_Register{ static_cast<uint32_t>(0x663a8b5fu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::RichPresence_Clear{ static_cast<uint32_t>(0x57b752b3u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::RichPresence_GetDestinations{ static_cast<uint32_t>(0x586f2d14u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::RichPresence_GetNextDestinationArrayPage{ static_cast<uint32_t>(0x67367f45u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::RichPresence_Set{ static_cast<uint32_t>(0x3c147509u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::UserAgeCategory_Get{ static_cast<uint32_t>(0x21cbe0c0u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::UserAgeCategory_Report{ static_cast<uint32_t>(0x2e4dd8d6u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_Get{ static_cast<uint32_t>(0x6bcf9e47u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_GetAccessToken{ static_cast<uint32_t>(0x6a85abeu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_GetBlockedUsers{ static_cast<uint32_t>(0x7d201556u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_GetLinkedAccounts{ static_cast<uint32_t>(0x5793f456u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_GetLoggedInUser{ static_cast<uint32_t>(0x436f345du) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_GetLoggedInUserFriends{ static_cast<uint32_t>(0x587c2a8du) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_GetLoggedInUserManagedInfo{ static_cast<uint32_t>(0x70ba3aeeu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_GetNextBlockedUserArrayPage{ static_cast<uint32_t>(0x7c2afdcbu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_GetNextUserArrayPage{ static_cast<uint32_t>(0x267cf743u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_GetNextUserCapabilityArrayPage{ static_cast<uint32_t>(0x2309f399u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_GetOrgScopedID{ static_cast<uint32_t>(0x18f0b01bu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_GetSdkAccounts{ static_cast<uint32_t>(0x67526a83u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_GetUserProof{ static_cast<uint32_t>(0x22810483u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_LaunchBlockFlow{ static_cast<uint32_t>(0x6fd62528u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_LaunchFriendRequestFlow{ static_cast<uint32_t>(0x904b598u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_LaunchUnblockFlow{ static_cast<uint32_t>(0x14a22a97u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Voip_GetMicrophoneAvailability{ static_cast<uint32_t>(0x744ce345u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Voip_SetSystemVoipSuppressed{ static_cast<uint32_t>(0x453fc9aau) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_AbuseReport_ReportButtonPressed{ static_cast<uint32_t>(0x24472f6cu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_ApplicationLifecycle_LaunchIntentChanged{ static_cast<uint32_t>(0x4b34ca3u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_AssetFile_DownloadUpdate{ static_cast<uint32_t>(0x2fdd0ccdu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_Cowatching_ApiNotReady{ static_cast<uint32_t>(0x66093981u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_Cowatching_ApiReady{ static_cast<uint32_t>(0x9956693u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_Cowatching_InSessionChanged{ static_cast<uint32_t>(0xdf93113u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_Cowatching_Initialized{ static_cast<uint32_t>(0x74d948f3u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_Cowatching_PresenterDataChanged{ static_cast<uint32_t>(0x4e078eeeu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_Cowatching_SessionStarted{ static_cast<uint32_t>(0x7321939cu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_Cowatching_SessionStopped{ static_cast<uint32_t>(0x49e6dbfau) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_Cowatching_ViewersDataChanged{ static_cast<uint32_t>(0x68f2f1ffu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_GroupPresence_InvitationsSent{ static_cast<uint32_t>(0x679a84b6u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_GroupPresence_JoinIntentReceived{ static_cast<uint32_t>(0x773889f6u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_GroupPresence_LeaveIntentReceived{ static_cast<uint32_t>(0x4737ea1du) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_HTTP_Transfer{ static_cast<uint32_t>(0x7dd46e2fu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_Livestreaming_StatusChange{ static_cast<uint32_t>(0x2247596eu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_NetSync_ConnectionStatusChanged{ static_cast<uint32_t>(0x73484cau) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_NetSync_SessionsChanged{ static_cast<uint32_t>(0x387e7f36u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_Party_PartyUpdate{ static_cast<uint32_t>(0x1d118ab2u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_Voip_MicrophoneAvailabilityStateUpdate{ static_cast<uint32_t>(0x3e20cb57u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_Voip_SystemVoipState{ static_cast<uint32_t>(0x58d254a5u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_Vrcamera_GetDataChannelMessageUpdate{ static_cast<uint32_t>(0x6ee4f33cu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Notification_Vrcamera_GetSurfaceUpdate{ static_cast<uint32_t>(0x37f21084u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Platform_InitializeWithAccessToken{ static_cast<uint32_t>(0x35692f2bu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Platform_InitializeStandaloneOculus{ static_cast<uint32_t>(0x51f8ce0cu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Platform_InitializeAndroidAsynchronous{ static_cast<uint32_t>(0x1ad307b4u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::Platform_InitializeWindowsAsynchronous{ static_cast<uint32_t>(0x6da7ba8fu) };
//  Writing Method size for method: ::Oculus::Platform::Message_ExtraMessageTypesHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Message_ExtraMessageTypesHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::Oculus::Platform::Message_ExtraMessageTypesHandler::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dd6bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message_ExtraMessageTypesHandler.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Message* (
    ::Oculus::Platform::Message_ExtraMessageTypesHandler::*)(::System::IntPtr, ::Oculus::Platform::Message_MessageType)>(&::Oculus::Platform::Message_ExtraMessageTypesHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5dd6c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message_ExtraMessageTypesHandler.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Oculus::Platform::Message_ExtraMessageTypesHandler::*)(::System::IntPtr, ::Oculus::Platform::Message_MessageType,
                                                                                                                                         ::System::AsyncCallback*, ::System::Object*)>(
    &::Oculus::Platform::Message_ExtraMessageTypesHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5dd6c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message_ExtraMessageTypesHandler.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Message* (::Oculus::Platform::Message_ExtraMessageTypesHandler::*)(::System::IAsyncResult*)>(
    &::Oculus::Platform::Message_ExtraMessageTypesHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5dd6ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(), 15 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::Message_ExtraMessageTypesHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::Oculus::Platform::Message* Oculus::Platform::Message_ExtraMessageTypesHandler::Invoke(::System::IntPtr messageHandle, ::Oculus::Platform::Message_MessageType message_type) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message*>(this, ___internal_method, messageHandle, message_type);
}
inline ::System::IAsyncResult* Oculus::Platform::Message_ExtraMessageTypesHandler::BeginInvoke(::System::IntPtr messageHandle, ::Oculus::Platform::Message_MessageType message_type,
                                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, messageHandle, message_type, callback, object);
}
inline ::Oculus::Platform::Message* Oculus::Platform::Message_ExtraMessageTypesHandler::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message*>(this, ___internal_method, result);
}
inline ::Oculus::Platform::Message_ExtraMessageTypesHandler* Oculus::Platform::Message_ExtraMessageTypesHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Message_ExtraMessageTypesHandler::Message_ExtraMessageTypesHandler() {}
//  Writing Method size for method: ::Oculus::Platform::Message._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Message::*)(::System::IntPtr)>(&::Oculus::Platform::Message::_ctor)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5dd2e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::Finalize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dd30cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Message_MessageType (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd30d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.get_IsError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::get_IsError)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5dd30d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { "get_IsError", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.get_RequestID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::get_RequestID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd30e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { "get_RequestID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::Error* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd30f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetHttpTransferUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::HttpTransferUpdate* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetHttpTransferUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd30f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPlatformInitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PlatformInitialize* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPlatformInitialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAbuseReportRecording
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AbuseReportRecording* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAbuseReportRecording)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAchievementDefinitions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AchievementDefinitionList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetAchievementDefinitions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAchievementProgressList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AchievementProgressList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetAchievementProgressList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAchievementUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AchievementUpdate* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAchievementUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAppDownloadProgressResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AppDownloadProgressResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetAppDownloadProgressResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAppDownloadResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AppDownloadResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAppDownloadResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetApplicationInviteList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ApplicationInviteList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetApplicationInviteList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetApplicationVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ApplicationVersion* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetApplicationVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetDetails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AssetDetails* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAssetDetails)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetDetailsList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AssetDetailsList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAssetDetailsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetFileDeleteResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AssetFileDeleteResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAssetFileDeleteResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetFileDownloadCancelResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AssetFileDownloadCancelResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetAssetFileDownloadCancelResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetFileDownloadResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AssetFileDownloadResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetAssetFileDownloadResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetFileDownloadUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AssetFileDownloadUpdate* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetAssetFileDownloadUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAvatarEditorResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AvatarEditorResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAvatarEditorResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetBlockedUserList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::BlockedUserList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetBlockedUserList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetChallenge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::Challenge* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetChallenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetChallengeEntryList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ChallengeEntryList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetChallengeEntryList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetChallengeList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ChallengeList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetChallengeList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetCowatchingState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::CowatchingState* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetCowatchingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd31a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetCowatchViewerList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::CowatchViewerList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetCowatchViewerList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd31a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetCowatchViewerUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::CowatchViewerUpdate* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetCowatchViewerUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd31b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetDestinationList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::DestinationList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetDestinationList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd31b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetGroupPresenceJoinIntent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::GroupPresenceJoinIntent* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetGroupPresenceJoinIntent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd31c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetGroupPresenceLeaveIntent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::GroupPresenceLeaveIntent* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetGroupPresenceLeaveIntent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd31c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetInstalledApplicationList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::InstalledApplicationList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetInstalledApplicationList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd31d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetInvitePanelResultInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::InvitePanelResultInfo* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetInvitePanelResultInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd31d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLaunchBlockFlowResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LaunchBlockFlowResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLaunchBlockFlowResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd31e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLaunchFriendRequestFlowResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LaunchFriendRequestFlowResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetLaunchFriendRequestFlowResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd31e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLaunchInvitePanelFlowResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LaunchInvitePanelFlowResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetLaunchInvitePanelFlowResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd31f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLaunchReportFlowResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LaunchReportFlowResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetLaunchReportFlowResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd31f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLaunchUnblockFlowResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LaunchUnblockFlowResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetLaunchUnblockFlowResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLeaderboardDidUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLeaderboardDidUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLeaderboardEntryList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LeaderboardEntryList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLeaderboardEntryList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLeaderboardList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LeaderboardList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLeaderboardList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLinkedAccountList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LinkedAccountList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLinkedAccountList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLivestreamingApplicationStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LivestreamingApplicationStatus* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetLivestreamingApplicationStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLivestreamingStartResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LivestreamingStartResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetLivestreamingStartResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLivestreamingStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LivestreamingStatus* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLivestreamingStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLivestreamingVideoStats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LivestreamingVideoStats* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetLivestreamingVideoStats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetMicrophoneAvailabilityState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::MicrophoneAvailabilityState* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetMicrophoneAvailabilityState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetSyncConnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::NetSyncConnection* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetNetSyncConnection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetSyncSessionList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::NetSyncSessionList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetNetSyncSessionList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetSyncSessionsChangedNotification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::NetSyncSessionsChangedNotification* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetNetSyncSessionsChangedNotification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetSyncSetSessionPropertyResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetNetSyncSetSessionPropertyResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetSyncVoipAttenuationValueList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetNetSyncVoipAttenuationValueList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetOrgScopedID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::OrgScopedID* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetOrgScopedID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetParty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::Party* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetParty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPartyID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PartyID* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPartyID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPartyUpdateNotification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PartyUpdateNotification* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetPartyUpdateNotification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPidList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PidList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPidList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 57 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetProductList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ProductList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetProductList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd32a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 58 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPurchase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::Purchase* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPurchase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd32a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPurchaseList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PurchaseList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPurchaseList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd32b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPushNotificationResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PushNotificationResult* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetPushNotificationResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd32b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetRejoinDialogResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::RejoinDialogResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetRejoinDialogResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd32c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetSdkAccountList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::SdkAccountList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetSdkAccountList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd32c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 63 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetSendInvitesResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::SendInvitesResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetSendInvitesResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd32d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 64 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetShareMediaResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ShareMediaResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetShareMediaResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd32d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 65 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd32e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 66 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetSystemVoipState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::SystemVoipState* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetSystemVoipState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd32e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 67 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUser
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::User* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetUser)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd32f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 68 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserAccountAgeCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::UserAccountAgeCategory* (::Oculus::Platform::Message::*)()>(
    &::Oculus::Platform::Message::GetUserAccountAgeCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd32f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 69 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserCapabilityList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::UserCapabilityList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetUserCapabilityList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 70 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::UserList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetUserList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 71 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserProof
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::UserProof* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetUserProof)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 72 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserReportID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::UserReportID* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetUserReportID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd3318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ::i2c::class_of<::Oculus::Platform::Message*>(), 73 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.ParseMessageHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Message* (*)(::System::IntPtr)>(&::Oculus::Platform::Message::ParseMessageHandle)> {
  constexpr static std::size_t size = 0x1940;
  constexpr static std::size_t addrs = 0x5dd3320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { "ParseMessageHandle", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.PopMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Message* (*)()>(&::Oculus::Platform::Message::PopMessage)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5db3328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { "PopMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.set_HandleExtraMessageTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_ExtraMessageTypesHandler*)>(&::Oculus::Platform::Message::set_HandleExtraMessageTypes)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5dd69a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { "set_HandleExtraMessageTypes", {}, { ::i2c::type_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.get_HandleExtraMessageTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Message_ExtraMessageTypesHandler* (*)()>(&::Oculus::Platform::Message::get_HandleExtraMessageTypes)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5dd69f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { "get_HandleExtraMessageTypes", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Message_MessageType& Oculus::Platform::Message::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::Oculus::Platform::Message_MessageType const& Oculus::Platform::Message::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Oculus::Platform::Message::__cordl_internal_set_type(::Oculus::Platform::Message_MessageType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr uint64_t& Oculus::Platform::Message::__cordl_internal_get_requestID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestID;
}
constexpr uint64_t const& Oculus::Platform::Message::__cordl_internal_get_requestID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestID;
}
constexpr void Oculus::Platform::Message::__cordl_internal_set_requestID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestID = value;
}
constexpr ::Oculus::Platform::Models::Error*& Oculus::Platform::Message::__cordl_internal_get_error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr ::Oculus::Platform::Models::Error* const& Oculus::Platform::Message::__cordl_internal_get_error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr void Oculus::Platform::Message::__cordl_internal_set_error(::Oculus::Platform::Models::Error* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___error = value;
}
inline void Oculus::Platform::Message::setStaticF__HandleExtraMessageTypes_k__BackingField(::Oculus::Platform::Message_ExtraMessageTypesHandler* value) {
  ::cordl_internals::setStaticField<::Oculus::Platform::Message_ExtraMessageTypesHandler*, "<HandleExtraMessageTypes>k__BackingField", ::Oculus::Platform::Message*>(
      std::forward<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(value));
}
inline ::Oculus::Platform::Message_ExtraMessageTypesHandler* Oculus::Platform::Message::getStaticF__HandleExtraMessageTypes_k__BackingField() {
  return ::cordl_internals::getStaticField<::Oculus::Platform::Message_ExtraMessageTypesHandler*, "<HandleExtraMessageTypes>k__BackingField", ::Oculus::Platform::Message*>();
}
inline void Oculus::Platform::Message::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline void Oculus::Platform::Message::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::Message_MessageType Oculus::Platform::Message::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message_MessageType>(this, ___internal_method);
}
inline bool Oculus::Platform::Message::get_IsError() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { "get_IsError", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint64_t Oculus::Platform::Message::get_RequestID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { "get_RequestID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Error* Oculus::Platform::Message::GetError() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Error*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::HttpTransferUpdate* Oculus::Platform::Message::GetHttpTransferUpdate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::HttpTransferUpdate*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PlatformInitialize* Oculus::Platform::Message::GetPlatformInitialize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PlatformInitialize*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AbuseReportRecording* Oculus::Platform::Message::GetAbuseReportRecording() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AbuseReportRecording*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AchievementDefinitionList* Oculus::Platform::Message::GetAchievementDefinitions() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AchievementDefinitionList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AchievementProgressList* Oculus::Platform::Message::GetAchievementProgressList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AchievementProgressList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AchievementUpdate* Oculus::Platform::Message::GetAchievementUpdate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AchievementUpdate*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AppDownloadProgressResult* Oculus::Platform::Message::GetAppDownloadProgressResult() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AppDownloadProgressResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AppDownloadResult* Oculus::Platform::Message::GetAppDownloadResult() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AppDownloadResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ApplicationInviteList* Oculus::Platform::Message::GetApplicationInviteList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ApplicationInviteList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ApplicationVersion* Oculus::Platform::Message::GetApplicationVersion() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ApplicationVersion*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetDetails* Oculus::Platform::Message::GetAssetDetails() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetDetails*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetDetailsList* Oculus::Platform::Message::GetAssetDetailsList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetDetailsList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetFileDeleteResult* Oculus::Platform::Message::GetAssetFileDeleteResult() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDeleteResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* Oculus::Platform::Message::GetAssetFileDownloadCancelResult() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetFileDownloadResult* Oculus::Platform::Message::GetAssetFileDownloadResult() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetFileDownloadUpdate* Oculus::Platform::Message::GetAssetFileDownloadUpdate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadUpdate*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AvatarEditorResult* Oculus::Platform::Message::GetAvatarEditorResult() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AvatarEditorResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::BlockedUserList* Oculus::Platform::Message::GetBlockedUserList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::BlockedUserList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Challenge* Oculus::Platform::Message::GetChallenge() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Challenge*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ChallengeEntryList* Oculus::Platform::Message::GetChallengeEntryList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ChallengeEntryList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ChallengeList* Oculus::Platform::Message::GetChallengeList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ChallengeList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::CowatchingState* Oculus::Platform::Message::GetCowatchingState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CowatchingState*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::CowatchViewerList* Oculus::Platform::Message::GetCowatchViewerList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CowatchViewerList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::CowatchViewerUpdate* Oculus::Platform::Message::GetCowatchViewerUpdate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CowatchViewerUpdate*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::DestinationList* Oculus::Platform::Message::GetDestinationList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::DestinationList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::GroupPresenceJoinIntent* Oculus::Platform::Message::GetGroupPresenceJoinIntent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::GroupPresenceJoinIntent*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* Oculus::Platform::Message::GetGroupPresenceLeaveIntent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::InstalledApplicationList* Oculus::Platform::Message::GetInstalledApplicationList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::InstalledApplicationList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::InvitePanelResultInfo* Oculus::Platform::Message::GetInvitePanelResultInfo() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::InvitePanelResultInfo*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LaunchBlockFlowResult* Oculus::Platform::Message::GetLaunchBlockFlowResult() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchBlockFlowResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LaunchFriendRequestFlowResult* Oculus::Platform::Message::GetLaunchFriendRequestFlowResult() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LaunchInvitePanelFlowResult* Oculus::Platform::Message::GetLaunchInvitePanelFlowResult() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LaunchReportFlowResult* Oculus::Platform::Message::GetLaunchReportFlowResult() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchReportFlowResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LaunchUnblockFlowResult* Oculus::Platform::Message::GetLaunchUnblockFlowResult() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchUnblockFlowResult*>(this, ___internal_method);
}
inline bool Oculus::Platform::Message::GetLeaderboardDidUpdate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LeaderboardEntryList* Oculus::Platform::Message::GetLeaderboardEntryList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LeaderboardEntryList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LeaderboardList* Oculus::Platform::Message::GetLeaderboardList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LeaderboardList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LinkedAccountList* Oculus::Platform::Message::GetLinkedAccountList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LinkedAccountList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LivestreamingApplicationStatus* Oculus::Platform::Message::GetLivestreamingApplicationStatus() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingApplicationStatus*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LivestreamingStartResult* Oculus::Platform::Message::GetLivestreamingStartResult() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingStartResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LivestreamingStatus* Oculus::Platform::Message::GetLivestreamingStatus() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingStatus*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LivestreamingVideoStats* Oculus::Platform::Message::GetLivestreamingVideoStats() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingVideoStats*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* Oculus::Platform::Message::GetMicrophoneAvailabilityState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MicrophoneAvailabilityState*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncConnection* Oculus::Platform::Message::GetNetSyncConnection() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncConnection*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncSessionList* Oculus::Platform::Message::GetNetSyncSessionList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSessionList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncSessionsChangedNotification* Oculus::Platform::Message::GetNetSyncSessionsChangedNotification() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* Oculus::Platform::Message::GetNetSyncSetSessionPropertyResult() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* Oculus::Platform::Message::GetNetSyncVoipAttenuationValueList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::OrgScopedID* Oculus::Platform::Message::GetOrgScopedID() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::OrgScopedID*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Party* Oculus::Platform::Message::GetParty() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Party*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PartyID* Oculus::Platform::Message::GetPartyID() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PartyID*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PartyUpdateNotification* Oculus::Platform::Message::GetPartyUpdateNotification() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PartyUpdateNotification*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PidList* Oculus::Platform::Message::GetPidList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 57 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PidList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ProductList* Oculus::Platform::Message::GetProductList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ProductList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Purchase* Oculus::Platform::Message::GetPurchase() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Purchase*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PurchaseList* Oculus::Platform::Message::GetPurchaseList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PurchaseList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PushNotificationResult* Oculus::Platform::Message::GetPushNotificationResult() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PushNotificationResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::RejoinDialogResult* Oculus::Platform::Message::GetRejoinDialogResult() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::RejoinDialogResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::SdkAccountList* Oculus::Platform::Message::GetSdkAccountList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 63 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SdkAccountList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::SendInvitesResult* Oculus::Platform::Message::GetSendInvitesResult() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 64 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SendInvitesResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ShareMediaResult* Oculus::Platform::Message::GetShareMediaResult() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ShareMediaResult*>(this, ___internal_method);
}
inline ::StringW Oculus::Platform::Message::GetString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 66 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::SystemVoipState* Oculus::Platform::Message::GetSystemVoipState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SystemVoipState*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::User* Oculus::Platform::Message::GetUser() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 68 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::User*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserAccountAgeCategory* Oculus::Platform::Message::GetUserAccountAgeCategory() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 69 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserAccountAgeCategory*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserCapabilityList* Oculus::Platform::Message::GetUserCapabilityList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 70 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserCapabilityList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserList* Oculus::Platform::Message::GetUserList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 71 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserProof* Oculus::Platform::Message::GetUserProof() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 72 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserProof*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserReportID* Oculus::Platform::Message::GetUserReportID() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message*>(), 73 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserReportID*>(this, ___internal_method);
}
inline ::Oculus::Platform::Message* Oculus::Platform::Message::ParseMessageHandle(::System::IntPtr messageHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { "ParseMessageHandle", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message*>(nullptr, ___internal_method, messageHandle);
}
inline ::Oculus::Platform::Message* Oculus::Platform::Message::PopMessage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { "PopMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message*>(nullptr, ___internal_method);
}
inline void Oculus::Platform::Message::set_HandleExtraMessageTypes(::Oculus::Platform::Message_ExtraMessageTypesHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { "set_HandleExtraMessageTypes", {}, { ::i2c::type_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::Oculus::Platform::Message_ExtraMessageTypesHandler* Oculus::Platform::Message::get_HandleExtraMessageTypes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message*>(), { "get_HandleExtraMessageTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Message* Oculus::Platform::Message::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Message*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Message::Message() {}
