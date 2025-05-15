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
#include "Oculus/Platform/Models/zzzz__RejoinDialogResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__SdkAccountList_def.hpp"
#include "Oculus/Platform/Models/zzzz__SendInvitesResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__ShareMediaResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__SystemVoipState_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserAccountAgeCategory_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserCapabilityList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserDataStoreUpdateResponse_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserProof_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserReportID_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Message_Callback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Message_Callback::*)(::System::Object*, ::System::IntPtr)>(
    &::Oculus::Platform::Message_Callback::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3f57eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_Callback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message_Callback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Message_Callback::*)(::Oculus::Platform::Message*)>(
    &::Oculus::Platform::Message_Callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3f7d880;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_Callback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_Callback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message_Callback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Oculus::Platform::Message_Callback::*)(::Oculus::Platform::Message*, ::System::AsyncCallback*, ::System::Object*)>(&::Oculus::Platform::Message_Callback::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3f7d894;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_Callback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_Callback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message_Callback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Message_Callback::*)(::System::IAsyncResult*)>(
    &::Oculus::Platform::Message_Callback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3f7d8b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_Callback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_Callback*>::get(), 15));
    return ___internal_method;
  }
};
inline void Oculus::Platform::Message_Callback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_Callback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Oculus::Platform::Message_Callback::Invoke(::Oculus::Platform::Message* message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_Callback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::System::IAsyncResult* Oculus::Platform::Message_Callback::BeginInvoke(::Oculus::Platform::Message* message, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_Callback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, message, callback, object);
}
inline void Oculus::Platform::Message_Callback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_Callback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::Oculus::Platform::Message_Callback* Oculus::Platform::Message_Callback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Message_Callback*>(object, method));
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
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::RichPresence_Clear{ static_cast<uint32_t>(0x57b752b3u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::RichPresence_GetDestinations{ static_cast<uint32_t>(0x586f2d14u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::RichPresence_GetNextDestinationArrayPage{ static_cast<uint32_t>(0x67367f45u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::RichPresence_Set{ static_cast<uint32_t>(0x3c147509u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::UserAgeCategory_Get{ static_cast<uint32_t>(0x21cbe0c0u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::UserAgeCategory_Report{ static_cast<uint32_t>(0x2e4dd8d6u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::UserDataStore_PrivateDeleteEntryByKey{ static_cast<uint32_t>(0x5c896f3eu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::UserDataStore_PrivateGetEntries{ static_cast<uint32_t>(0x6c8a8228u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::UserDataStore_PrivateGetEntryByKey{ static_cast<uint32_t>(0x1c068319u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::UserDataStore_PrivateWriteEntry{ static_cast<uint32_t>(0x41d2828bu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::UserDataStore_PublicDeleteEntryByKey{ static_cast<uint32_t>(0x1dd5e5fbu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::UserDataStore_PublicGetEntries{ static_cast<uint32_t>(0x167d4bc2u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::UserDataStore_PublicGetEntryByKey{ static_cast<uint32_t>(0x195c66c6u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::UserDataStore_PublicWriteEntry{ static_cast<uint32_t>(0x34364a0au) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_Get{ static_cast<uint32_t>(0x6bcf9e47u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_GetAccessToken{ static_cast<uint32_t>(0x6a85abeu) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_GetBlockedUsers{ static_cast<uint32_t>(0x7d201556u) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_GetLoggedInUser{ static_cast<uint32_t>(0x436f345du) };
constexpr ::Oculus::Platform::Message_MessageType Oculus::Platform::Message_MessageType::User_GetLoggedInUserFriends{ static_cast<uint32_t>(0x587c2a8du) };
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Message_ExtraMessageTypesHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::Oculus::Platform::Message_ExtraMessageTypesHandler::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3f7d8c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_ExtraMessageTypesHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message_ExtraMessageTypesHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Message* (
    ::Oculus::Platform::Message_ExtraMessageTypesHandler::*)(::System::IntPtr, ::Oculus::Platform::Message_MessageType)>(&::Oculus::Platform::Message_ExtraMessageTypesHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3f7d94c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_ExtraMessageTypesHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_ExtraMessageTypesHandler*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message_ExtraMessageTypesHandler.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Oculus::Platform::Message_ExtraMessageTypesHandler::*)(::System::IntPtr, ::Oculus::Platform::Message_MessageType, ::System::AsyncCallback*, ::System::Object*)>(
    &::Oculus::Platform::Message_ExtraMessageTypesHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3f7d960;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_ExtraMessageTypesHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_ExtraMessageTypesHandler*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message_ExtraMessageTypesHandler.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Message* (::Oculus::Platform::Message_ExtraMessageTypesHandler::*)(::System::IAsyncResult*)>(
    &::Oculus::Platform::Message_ExtraMessageTypesHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3f7da18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_ExtraMessageTypesHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_ExtraMessageTypesHandler*>::get(), 15));
    return ___internal_method;
  }
};
inline void Oculus::Platform::Message_ExtraMessageTypesHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_ExtraMessageTypesHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Oculus::Platform::Message* Oculus::Platform::Message_ExtraMessageTypesHandler::Invoke(::System::IntPtr messageHandle, ::Oculus::Platform::Message_MessageType message_type) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_ExtraMessageTypesHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message*, false>(this, ___internal_method, messageHandle, message_type);
}
inline ::System::IAsyncResult* Oculus::Platform::Message_ExtraMessageTypesHandler::BeginInvoke(::System::IntPtr messageHandle, ::Oculus::Platform::Message_MessageType message_type,
                                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_ExtraMessageTypesHandler*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, messageHandle, message_type, callback, object);
}
inline ::Oculus::Platform::Message* Oculus::Platform::Message_ExtraMessageTypesHandler::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message_ExtraMessageTypesHandler*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message*, false>(this, ___internal_method, result);
}
inline ::Oculus::Platform::Message_ExtraMessageTypesHandler* Oculus::Platform::Message_ExtraMessageTypesHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Message_ExtraMessageTypesHandler::Message_ExtraMessageTypesHandler() {}
//  Writing Method size for method: ::Oculus::Platform::Message._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Message::*)(::System::IntPtr)>(&::Oculus::Platform::Message::_ctor)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x3f79f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::Finalize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f7a20c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Message_MessageType (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f7a214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "get_Type",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.get_IsError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::get_IsError)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3f58a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "get_IsError",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.get_RequestID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::get_RequestID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f7a21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "get_RequestID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Error* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f7a224;

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
  constexpr static std::size_t addrs = 0x3f7a22c;

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
  constexpr static std::size_t addrs = 0x3f7a234;

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
  constexpr static std::size_t addrs = 0x3f7a23c;

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
  constexpr static std::size_t addrs = 0x3f7a244;

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
  constexpr static std::size_t addrs = 0x3f7a24c;

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
  constexpr static std::size_t addrs = 0x3f7a254;

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
  constexpr static std::size_t addrs = 0x3f7a25c;

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
  constexpr static std::size_t addrs = 0x3f7a264;

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
  constexpr static std::size_t addrs = 0x3f7a26c;

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
  constexpr static std::size_t addrs = 0x3f7a274;

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
  constexpr static std::size_t addrs = 0x3f7a27c;

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
  constexpr static std::size_t addrs = 0x3f7a284;

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
  constexpr static std::size_t addrs = 0x3f7a28c;

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
  constexpr static std::size_t addrs = 0x3f7a294;

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
  constexpr static std::size_t addrs = 0x3f7a29c;

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
  constexpr static std::size_t addrs = 0x3f7a2a4;

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
  constexpr static std::size_t addrs = 0x3f7a2ac;

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
  constexpr static std::size_t addrs = 0x3f7a2b4;

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
  constexpr static std::size_t addrs = 0x3f7a2bc;

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
  constexpr static std::size_t addrs = 0x3f7a2c4;

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
  constexpr static std::size_t addrs = 0x3f7a2cc;

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
  constexpr static std::size_t addrs = 0x3f7a2d4;

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
  constexpr static std::size_t addrs = 0x3f7a2dc;

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
  constexpr static std::size_t addrs = 0x3f7a2e4;

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
  constexpr static std::size_t addrs = 0x3f7a2ec;

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
  constexpr static std::size_t addrs = 0x3f7a2f4;

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
  constexpr static std::size_t addrs = 0x3f7a2fc;

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
  constexpr static std::size_t addrs = 0x3f7a304;

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
  constexpr static std::size_t addrs = 0x3f7a30c;

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
  constexpr static std::size_t addrs = 0x3f7a314;

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
  constexpr static std::size_t addrs = 0x3f7a31c;

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
  constexpr static std::size_t addrs = 0x3f7a324;

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
  constexpr static std::size_t addrs = 0x3f7a32c;

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
  constexpr static std::size_t addrs = 0x3f7a334;

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
  constexpr static std::size_t addrs = 0x3f7a33c;

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
  constexpr static std::size_t addrs = 0x3f7a344;

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
  constexpr static std::size_t addrs = 0x3f7a34c;

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
  constexpr static std::size_t addrs = 0x3f7a354;

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
  constexpr static std::size_t addrs = 0x3f7a35c;

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
  constexpr static std::size_t addrs = 0x3f7a364;

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
  constexpr static std::size_t addrs = 0x3f7a36c;

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
  constexpr static std::size_t addrs = 0x3f7a374;

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
  constexpr static std::size_t addrs = 0x3f7a37c;

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
  constexpr static std::size_t addrs = 0x3f7a384;

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
  constexpr static std::size_t addrs = 0x3f7a38c;

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
  constexpr static std::size_t addrs = 0x3f7a394;

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
  constexpr static std::size_t addrs = 0x3f7a39c;

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
  constexpr static std::size_t addrs = 0x3f7a3a4;

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
  constexpr static std::size_t addrs = 0x3f7a3ac;

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
  constexpr static std::size_t addrs = 0x3f7a3b4;

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
  constexpr static std::size_t addrs = 0x3f7a3bc;

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
  constexpr static std::size_t addrs = 0x3f7a3c4;

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
  constexpr static std::size_t addrs = 0x3f7a3cc;

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
  constexpr static std::size_t addrs = 0x3f7a3d4;

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
  constexpr static std::size_t addrs = 0x3f7a3dc;

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
  constexpr static std::size_t addrs = 0x3f7a3e4;

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
  constexpr static std::size_t addrs = 0x3f7a3ec;

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
  constexpr static std::size_t addrs = 0x3f7a3f4;

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
  constexpr static std::size_t addrs = 0x3f7a3fc;

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
  constexpr static std::size_t addrs = 0x3f7a404;

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
  constexpr static std::size_t addrs = 0x3f7a40c;

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
  constexpr static std::size_t addrs = 0x3f7a414;

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
  constexpr static std::size_t addrs = 0x3f7a41c;

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
  constexpr static std::size_t addrs = 0x3f7a424;

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
  constexpr static std::size_t addrs = 0x3f7a42c;

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
  constexpr static std::size_t addrs = 0x3f7a434;

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
  constexpr static std::size_t addrs = 0x3f7a43c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 71));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.ParseMessageHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Message* (*)(::System::IntPtr)>(&::Oculus::Platform::Message::ParseMessageHandle)> {
  constexpr static std::size_t size = 0x1800;
  constexpr static std::size_t addrs = 0x3f7a444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "ParseMessageHandle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.PopMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Message* (*)()>(&::Oculus::Platform::Message::PopMessage)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3f5cb30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "PopMessage",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.set_HandleExtraMessageTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::Message_ExtraMessageTypesHandler*)>(
    &::Oculus::Platform::Message::set_HandleExtraMessageTypes)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3f7d7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "set_HandleExtraMessageTypes", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_ExtraMessageTypesHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.get_HandleExtraMessageTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Message_ExtraMessageTypesHandler* (*)()>(
    &::Oculus::Platform::Message::get_HandleExtraMessageTypes)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3f7d838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(),
                                                                               "get_HandleExtraMessageTypes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___error)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Oculus::Platform::Message::setStaticF__HandleExtraMessageTypes_k__BackingField(::Oculus::Platform::Message_ExtraMessageTypesHandler* value) {
  ::cordl_internals::setStaticField<::Oculus::Platform::Message_ExtraMessageTypesHandler*, "<HandleExtraMessageTypes>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get>(
      std::forward<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(value));
}
inline ::Oculus::Platform::Message_ExtraMessageTypesHandler* Oculus::Platform::Message::getStaticF__HandleExtraMessageTypes_k__BackingField() {
  return ::cordl_internals::getStaticField<::Oculus::Platform::Message_ExtraMessageTypesHandler*, "<HandleExtraMessageTypes>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get>();
}
inline void Oculus::Platform::Message::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline void Oculus::Platform::Message::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Message_MessageType Oculus::Platform::Message::get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "get_Type",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message_MessageType, false>(this, ___internal_method);
}
inline bool Oculus::Platform::Message::get_IsError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "get_IsError",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline uint64_t Oculus::Platform::Message::get_RequestID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "get_RequestID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
inline ::Oculus::Platform::Message* Oculus::Platform::Message::ParseMessageHandle(::System::IntPtr messageHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "ParseMessageHandle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message*, false>(nullptr, ___internal_method, messageHandle);
}
inline ::Oculus::Platform::Message* Oculus::Platform::Message::PopMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "PopMessage",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message*, false>(nullptr, ___internal_method);
}
inline void Oculus::Platform::Message::set_HandleExtraMessageTypes(::Oculus::Platform::Message_ExtraMessageTypesHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "set_HandleExtraMessageTypes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_ExtraMessageTypesHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::Oculus::Platform::Message_ExtraMessageTypesHandler* Oculus::Platform::Message::get_HandleExtraMessageTypes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message*>::get(), "get_HandleExtraMessageTypes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message_ExtraMessageTypesHandler*, false>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Message* Oculus::Platform::Message::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Message*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Message::Message() {}
