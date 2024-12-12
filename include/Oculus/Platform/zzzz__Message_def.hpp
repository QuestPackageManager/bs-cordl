#pragma once
// IWYU pragma private; include "Oculus/Platform/Message.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Message)
namespace Oculus::Platform::Models {
class AbuseReportRecording;
}
namespace Oculus::Platform::Models {
class AchievementDefinitionList;
}
namespace Oculus::Platform::Models {
class AchievementProgressList;
}
namespace Oculus::Platform::Models {
class AchievementUpdate;
}
namespace Oculus::Platform::Models {
class AppDownloadProgressResult;
}
namespace Oculus::Platform::Models {
class AppDownloadResult;
}
namespace Oculus::Platform::Models {
class ApplicationInviteList;
}
namespace Oculus::Platform::Models {
class ApplicationVersion;
}
namespace Oculus::Platform::Models {
class AssetDetailsList;
}
namespace Oculus::Platform::Models {
class AssetDetails;
}
namespace Oculus::Platform::Models {
class AssetFileDeleteResult;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadCancelResult;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadUpdate;
}
namespace Oculus::Platform::Models {
class AvatarEditorResult;
}
namespace Oculus::Platform::Models {
class BlockedUserList;
}
namespace Oculus::Platform::Models {
class ChallengeEntryList;
}
namespace Oculus::Platform::Models {
class ChallengeList;
}
namespace Oculus::Platform::Models {
class Challenge;
}
namespace Oculus::Platform::Models {
class DestinationList;
}
namespace Oculus::Platform::Models {
class Error;
}
namespace Oculus::Platform::Models {
class GroupPresenceJoinIntent;
}
namespace Oculus::Platform::Models {
class GroupPresenceLeaveIntent;
}
namespace Oculus::Platform::Models {
class HttpTransferUpdate;
}
namespace Oculus::Platform::Models {
class InstalledApplicationList;
}
namespace Oculus::Platform::Models {
class InvitePanelResultInfo;
}
namespace Oculus::Platform::Models {
class LaunchBlockFlowResult;
}
namespace Oculus::Platform::Models {
class LaunchFriendRequestFlowResult;
}
namespace Oculus::Platform::Models {
class LaunchInvitePanelFlowResult;
}
namespace Oculus::Platform::Models {
class LaunchReportFlowResult;
}
namespace Oculus::Platform::Models {
class LaunchUnblockFlowResult;
}
namespace Oculus::Platform::Models {
class LeaderboardEntryList;
}
namespace Oculus::Platform::Models {
class LeaderboardList;
}
namespace Oculus::Platform::Models {
class LinkedAccountList;
}
namespace Oculus::Platform::Models {
class LivestreamingApplicationStatus;
}
namespace Oculus::Platform::Models {
class LivestreamingStartResult;
}
namespace Oculus::Platform::Models {
class LivestreamingStatus;
}
namespace Oculus::Platform::Models {
class LivestreamingVideoStats;
}
namespace Oculus::Platform::Models {
class MicrophoneAvailabilityState;
}
namespace Oculus::Platform::Models {
class NetSyncConnection;
}
namespace Oculus::Platform::Models {
class NetSyncSessionList;
}
namespace Oculus::Platform::Models {
class NetSyncSessionsChangedNotification;
}
namespace Oculus::Platform::Models {
class NetSyncSetSessionPropertyResult;
}
namespace Oculus::Platform::Models {
class NetSyncVoipAttenuationValueList;
}
namespace Oculus::Platform::Models {
class OrgScopedID;
}
namespace Oculus::Platform::Models {
class PartyID;
}
namespace Oculus::Platform::Models {
class PartyUpdateNotification;
}
namespace Oculus::Platform::Models {
class Party;
}
namespace Oculus::Platform::Models {
class PidList;
}
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform::Models {
class ProductList;
}
namespace Oculus::Platform::Models {
class PurchaseList;
}
namespace Oculus::Platform::Models {
class Purchase;
}
namespace Oculus::Platform::Models {
class RejoinDialogResult;
}
namespace Oculus::Platform::Models {
class SdkAccountList;
}
namespace Oculus::Platform::Models {
class SendInvitesResult;
}
namespace Oculus::Platform::Models {
class ShareMediaResult;
}
namespace Oculus::Platform::Models {
class SystemVoipState;
}
namespace Oculus::Platform::Models {
class UserAccountAgeCategory;
}
namespace Oculus::Platform::Models {
class UserCapabilityList;
}
namespace Oculus::Platform::Models {
class UserDataStoreUpdateResponse;
}
namespace Oculus::Platform::Models {
class UserList;
}
namespace Oculus::Platform::Models {
class UserProof;
}
namespace Oculus::Platform::Models {
class UserReportID;
}
namespace Oculus::Platform::Models {
class User;
}
namespace Oculus::Platform {
class Message_Callback;
}
namespace Oculus::Platform {
class Message_ExtraMessageTypesHandler;
}
namespace Oculus::Platform {
struct Message_MessageType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Oculus::Platform {
struct Message_MessageType;
}
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
class Message_Callback;
}
namespace Oculus::Platform {
class Message_ExtraMessageTypesHandler;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::Message_MessageType);
MARK_REF_PTR_T(::Oculus::Platform::Message);
MARK_REF_PTR_T(::Oculus::Platform::Message_Callback);
MARK_REF_PTR_T(::Oculus::Platform::Message_ExtraMessageTypesHandler);
// Dependencies System.MulticastDelegate
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Message/Callback
class CORDL_TYPE Message_Callback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3f7beac, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::Oculus::Platform::Message* message, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3f7becc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3f7be98, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::Oculus::Platform::Message* message);

  static inline ::Oculus::Platform::Message_Callback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3f565c4, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Message_Callback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Message_Callback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Message_Callback(Message_Callback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Message_Callback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Message_Callback(Message_Callback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15345 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Message_Callback, 0x80>, "Size mismatch!");

} // namespace Oculus::Platform
// Dependencies
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.Message/MessageType
struct CORDL_TYPE Message_MessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __Message_MessageType_Unwrapped
  enum struct __Message_MessageType_Unwrapped : uint32_t {
    __E_Unknown = static_cast<uint32_t>(0xfc86f000u),
    __E_AbuseReport_ReportRequestHandled = static_cast<uint32_t>(0x8efc86f0u),
    __E_Achievements_AddCount = static_cast<uint32_t>(0x3162e7c3u),
    __E_Achievements_AddFields = static_cast<uint32_t>(0x2921aad4u),
    __E_Achievements_GetAllDefinitions = static_cast<uint32_t>(0x8d45d3c3u),
    __E_Achievements_GetAllProgress = static_cast<uint32_t>(0x9fde1df0u),
    __E_Achievements_GetDefinitionsByName = static_cast<uint32_t>(0x9101bcf0u),
    __E_Achievements_GetNextAchievementDefinitionArrayPage = static_cast<uint32_t>(0x7dd255f0u),
    __E_Achievements_GetNextAchievementProgressArrayPage = static_cast<uint32_t>(0x42e727f0u),
    __E_Achievements_GetProgressByName = static_cast<uint32_t>(0xb16326d5u),
    __E_Achievements_Unlock = static_cast<uint32_t>(0x3ccbddf0u),
    __E_ApplicationLifecycle_GetRegisteredPIDs = static_cast<uint32_t>(0x62cfe5c4u),
    __E_ApplicationLifecycle_GetSessionKey = static_cast<uint32_t>(0xaf591df0u),
    __E_ApplicationLifecycle_RegisterSessionKey = static_cast<uint32_t>(0xb6aff8f0u),
    __E_Application_CancelAppDownload = static_cast<uint32_t>(0x2060def0u),
    __E_Application_CheckAppDownloadProgress = static_cast<uint32_t>(0x34a924f0u),
    __E_Application_GetVersion = static_cast<uint32_t>(0x670a0ef0u),
    __E_Application_InstallAppUpdateAndRelaunch = static_cast<uint32_t>(0x856b80d4u),
    __E_Application_LaunchOtherApp = static_cast<uint32_t>(0xe2d1f8f0u),
    __E_Application_StartAppDownload = static_cast<uint32_t>(0xfc006ef0u),
    __E_AssetFile_Delete = static_cast<uint32_t>(0x5d7886f0u),
    __E_AssetFile_DeleteById = static_cast<uint32_t>(0xe8cd52f0u),
    __E_AssetFile_DeleteByName = static_cast<uint32_t>(0xac1cff0u),
    __E_AssetFile_Download = static_cast<uint32_t>(0xc59f44d1u),
    __E_AssetFile_DownloadById = static_cast<uint32_t>(0x8992f0u),
    __E_AssetFile_DownloadByName = static_cast<uint32_t>(0x36cefaf0u),
    __E_AssetFile_DownloadCancel = static_cast<uint32_t>(0xc7d30ac8u),
    __E_AssetFile_DownloadCancelById = static_cast<uint32_t>(0x659514f0u),
    __E_AssetFile_DownloadCancelByName = static_cast<uint32_t>(0x6aecfaf0u),
    __E_AssetFile_GetList = static_cast<uint32_t>(0xfc6f74f0u),
    __E_AssetFile_Status = static_cast<uint32_t>(0x602fd3c2u),
    __E_AssetFile_StatusById = static_cast<uint32_t>(0x955d38f0u),
    __E_AssetFile_StatusByName = static_cast<uint32_t>(0xcfda50f0u),
    __E_Avatar_LaunchAvatarEditor = static_cast<uint32_t>(0x53e1f1c5u),
    __E_Challenges_Create = static_cast<uint32_t>(0x59d641f0u),
    __E_Challenges_DeclineInvite = static_cast<uint32_t>(0x8e76c0f0u),
    __E_Challenges_Delete = static_cast<uint32_t>(0x4885caf0u),
    __E_Challenges_Get = static_cast<uint32_t>(0x584ef3f0u),
    __E_Challenges_GetEntries = static_cast<uint32_t>(0x5fb41ad2u),
    __E_Challenges_GetEntriesAfterRank = static_cast<uint32_t>(0x7f1a89c8u),
    __E_Challenges_GetEntriesByIds = static_cast<uint32_t>(0x6509dcf0u),
    __E_Challenges_GetList = static_cast<uint32_t>(0x264356f0u),
    __E_Challenges_GetNextChallenges = static_cast<uint32_t>(0x7ca1b6f0u),
    __E_Challenges_GetNextEntries = static_cast<uint32_t>(0x4ca0c6f0u),
    __E_Challenges_GetPreviousChallenges = static_cast<uint32_t>(0xd04b4ceu),
    __E_Challenges_GetPreviousEntries = static_cast<uint32_t>(0xc90470f0u),
    __E_Challenges_Join = static_cast<uint32_t>(0x248069f0u),
    __E_Challenges_Leave = static_cast<uint32_t>(0x6116e5f0u),
    __E_Challenges_UpdateInfo = static_cast<uint32_t>(0x60be75d1u),
    __E_DeviceApplicationIntegrity_GetIntegrityToken = static_cast<uint32_t>(0x71abdaf0u),
    __E_Entitlement_GetIsViewerEntitled = static_cast<uint32_t>(0xb1586bd8u),
    __E_GroupPresence_Clear = static_cast<uint32_t>(0xaa9cc3f0u),
    __E_GroupPresence_GetInvitableUsers = static_cast<uint32_t>(0x4bc3f1f0u),
    __E_GroupPresence_GetNextApplicationInviteArrayPage = static_cast<uint32_t>(0xf2c0f8c4u),
    __E_GroupPresence_GetSentInvites = static_cast<uint32_t>(0xb10a26c8u),
    __E_GroupPresence_LaunchInvitePanel = static_cast<uint32_t>(0x9fcf9ecfu),
    __E_GroupPresence_LaunchMultiplayerErrorDialog = static_cast<uint32_t>(0x55af24f0u),
    __E_GroupPresence_LaunchRejoinDialog = static_cast<uint32_t>(0x6f0377d5u),
    __E_GroupPresence_LaunchRosterPanel = static_cast<uint32_t>(0x728882f0u),
    __E_GroupPresence_SendInvites = static_cast<uint32_t>(0x64d3cbcdu),
    __E_GroupPresence_Set = static_cast<uint32_t>(0x5f5c24f0u),
    __E_GroupPresence_SetDeeplinkMessageOverride = static_cast<uint32_t>(0x1adf0df0u),
    __E_GroupPresence_SetDestination = static_cast<uint32_t>(0x5b268af0u),
    __E_GroupPresence_SetIsJoinable = static_cast<uint32_t>(0x8f1055f0u),
    __E_GroupPresence_SetLobbySession = static_cast<uint32_t>(0xff55bef0u),
    __E_GroupPresence_SetMatchSession = static_cast<uint32_t>(0x4c84b8f0u),
    __E_IAP_ConsumePurchase = static_cast<uint32_t>(0xd972bbdfu),
    __E_IAP_GetNextProductArrayPage = static_cast<uint32_t>(0xaf4ad9dbu),
    __E_IAP_GetNextPurchaseArrayPage = static_cast<uint32_t>(0x570a95f0u),
    __E_IAP_GetProductsBySKU = static_cast<uint32_t>(0x9acaf5f0u),
    __E_IAP_GetViewerPurchases = static_cast<uint32_t>(0xf8419f0u),
    __E_IAP_GetViewerPurchasesDurableCache = static_cast<uint32_t>(0x599e2bf0u),
    __E_IAP_LaunchCheckoutFlow = static_cast<uint32_t>(0x9b0d0df0u),
    __E_LanguagePack_GetCurrent = static_cast<uint32_t>(0xd5f090dfu),
    __E_LanguagePack_SetCurrent = static_cast<uint32_t>(0x4fbbe0f0u),
    __E_Leaderboard_Get = static_cast<uint32_t>(0xd44ef8f0u),
    __E_Leaderboard_GetEntries = static_cast<uint32_t>(0xb3474cf0u),
    __E_Leaderboard_GetEntriesAfterRank = static_cast<uint32_t>(0xef8b37d8u),
    __E_Leaderboard_GetEntriesByIds = static_cast<uint32_t>(0x607bfcf0u),
    __E_Leaderboard_GetNextEntries = static_cast<uint32_t>(0x207cd9f0u),
    __E_Leaderboard_GetNextLeaderboardArrayPage = static_cast<uint32_t>(0xf6769bf0u),
    __E_Leaderboard_GetPreviousEntries = static_cast<uint32_t>(0x1dac0f0u),
    __E_Leaderboard_WriteEntry = static_cast<uint32_t>(0xfec87fd1u),
    __E_Leaderboard_WriteEntryWithSupplementaryMetric = static_cast<uint32_t>(0xc692faf0u),
    __E_Media_ShareToFacebook = static_cast<uint32_t>(0xef8ae3c0u),
    __E_Notification_MarkAsRead = static_cast<uint32_t>(0x7259e3f0u),
    __E_Party_GetCurrent = static_cast<uint32_t>(0x933760f0u),
    __E_RichPresence_Clear = static_cast<uint32_t>(0xb752b3f0u),
    __E_RichPresence_GetDestinations = static_cast<uint32_t>(0x6f2d14f0u),
    __E_RichPresence_GetNextDestinationArrayPage = static_cast<uint32_t>(0x367f45f0u),
    __E_RichPresence_Set = static_cast<uint32_t>(0x147509f0u),
    __E_UserAgeCategory_Get = static_cast<uint32_t>(0xcbe0c0f0u),
    __E_UserAgeCategory_Report = static_cast<uint32_t>(0x4dd8d6f0u),
    __E_UserDataStore_PrivateDeleteEntryByKey = static_cast<uint32_t>(0x896f3ef0u),
    __E_UserDataStore_PrivateGetEntries = static_cast<uint32_t>(0x8a8228f0u),
    __E_UserDataStore_PrivateGetEntryByKey = static_cast<uint32_t>(0x198306dcu),
    __E_UserDataStore_PrivateWriteEntry = static_cast<uint32_t>(0xd2828bf0u),
    __E_UserDataStore_PublicDeleteEntryByKey = static_cast<uint32_t>(0xfbe5d5ddu),
    __E_UserDataStore_PublicGetEntries = static_cast<uint32_t>(0xc24b7dd6u),
    __E_UserDataStore_PublicGetEntryByKey = static_cast<uint32_t>(0xc6665cd9u),
    __E_UserDataStore_PublicWriteEntry = static_cast<uint32_t>(0x364a0af0u),
    __E_User_Get = static_cast<uint32_t>(0xcf9e47f0u),
    __E_User_GetAccessToken = static_cast<uint32_t>(0xbe5aa8c6u),
    __E_User_GetBlockedUsers = static_cast<uint32_t>(0x201556f0u),
    __E_User_GetLoggedInUser = static_cast<uint32_t>(0x6f345df0u),
    __E_User_GetLoggedInUserFriends = static_cast<uint32_t>(0x7c2a8df0u),
    __E_User_GetNextBlockedUserArrayPage = static_cast<uint32_t>(0x2afdcbf0u),
    __E_User_GetNextUserArrayPage = static_cast<uint32_t>(0x7cf743f0u),
    __E_User_GetNextUserCapabilityArrayPage = static_cast<uint32_t>(0x9f399f0u),
    __E_User_GetOrgScopedID = static_cast<uint32_t>(0x1bb0f0d8u),
    __E_User_GetSdkAccounts = static_cast<uint32_t>(0x526a83f0u),
    __E_User_GetUserProof = static_cast<uint32_t>(0x810483f0u),
    __E_User_LaunchBlockFlow = static_cast<uint32_t>(0xd62528f0u),
    __E_User_LaunchFriendRequestFlow = static_cast<uint32_t>(0x98b504c9u),
    __E_User_LaunchUnblockFlow = static_cast<uint32_t>(0x972aa2d4u),
    __E_Voip_GetMicrophoneAvailability = static_cast<uint32_t>(0x4ce345f0u),
    __E_Voip_SetSystemVoipSuppressed = static_cast<uint32_t>(0x3fc9aaf0u),
    __E_Notification_AbuseReport_ReportButtonPressed = static_cast<uint32_t>(0x472f6cf0u),
    __E_Notification_ApplicationLifecycle_LaunchIntentChanged = static_cast<uint32_t>(0xa34cb3c4u),
    __E_Notification_AssetFile_DownloadUpdate = static_cast<uint32_t>(0xdd0ccdf0u),
    __E_Notification_GroupPresence_InvitationsSent = static_cast<uint32_t>(0x9a84b6f0u),
    __E_Notification_GroupPresence_JoinIntentReceived = static_cast<uint32_t>(0x3889f6f0u),
    __E_Notification_GroupPresence_LeaveIntentReceived = static_cast<uint32_t>(0x37ea1df0u),
    __E_Notification_HTTP_Transfer = static_cast<uint32_t>(0xd46e2ff0u),
    __E_Notification_Livestreaming_StatusChange = static_cast<uint32_t>(0x47596ef0u),
    __E_Notification_NetSync_ConnectionStatusChanged = static_cast<uint32_t>(0xca8434c7u),
    __E_Notification_NetSync_SessionsChanged = static_cast<uint32_t>(0x7e7f36f0u),
    __E_Notification_Party_PartyUpdate = static_cast<uint32_t>(0xb28a11ddu),
    __E_Notification_Voip_MicrophoneAvailabilityStateUpdate = static_cast<uint32_t>(0x20cb57f0u),
    __E_Notification_Voip_SystemVoipState = static_cast<uint32_t>(0xd254a5f0u),
    __E_Notification_Vrcamera_GetDataChannelMessageUpdate = static_cast<uint32_t>(0xe4f33cf0u),
    __E_Notification_Vrcamera_GetSurfaceUpdate = static_cast<uint32_t>(0xf21084f0u),
    __E_Platform_InitializeWithAccessToken = static_cast<uint32_t>(0x692f2bf0u),
    __E_Platform_InitializeStandaloneOculus = static_cast<uint32_t>(0xf8ce0cf0u),
    __E_Platform_InitializeAndroidAsynchronous = static_cast<uint32_t>(0xb407d3dau),
    __E_Platform_InitializeWindowsAsynchronous = static_cast<uint32_t>(0xa7ba8ff0u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Message_MessageType_Unwrapped() const noexcept {
    return static_cast<__Message_MessageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Message_MessageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr Message_MessageType(uint32_t value__) noexcept;

  /// @brief Field AbuseReport_ReportRequestHandled value: U32(2398914288)
  static ::Oculus::Platform::Message_MessageType const AbuseReport_ReportRequestHandled;

  /// @brief Field Achievements_AddCount value: U32(828565443)
  static ::Oculus::Platform::Message_MessageType const Achievements_AddCount;

  /// @brief Field Achievements_AddFields value: U32(690072276)
  static ::Oculus::Platform::Message_MessageType const Achievements_AddFields;

  /// @brief Field Achievements_GetAllDefinitions value: U32(2370163651)
  static ::Oculus::Platform::Message_MessageType const Achievements_GetAllDefinitions;

  /// @brief Field Achievements_GetAllProgress value: U32(2682134000)
  static ::Oculus::Platform::Message_MessageType const Achievements_GetAllProgress;

  /// @brief Field Achievements_GetDefinitionsByName value: U32(2432810224)
  static ::Oculus::Platform::Message_MessageType const Achievements_GetDefinitionsByName;

  /// @brief Field Achievements_GetNextAchievementDefinitionArrayPage value: U32(2110936560)
  static ::Oculus::Platform::Message_MessageType const Achievements_GetNextAchievementDefinitionArrayPage;

  /// @brief Field Achievements_GetNextAchievementProgressArrayPage value: U32(1122445296)
  static ::Oculus::Platform::Message_MessageType const Achievements_GetNextAchievementProgressArrayPage;

  /// @brief Field Achievements_GetProgressByName value: U32(2976065237)
  static ::Oculus::Platform::Message_MessageType const Achievements_GetProgressByName;

  /// @brief Field Achievements_Unlock value: U32(1019993584)
  static ::Oculus::Platform::Message_MessageType const Achievements_Unlock;

  /// @brief Field ApplicationLifecycle_GetRegisteredPIDs value: U32(1657791940)
  static ::Oculus::Platform::Message_MessageType const ApplicationLifecycle_GetRegisteredPIDs;

  /// @brief Field ApplicationLifecycle_GetSessionKey value: U32(2941853168)
  static ::Oculus::Platform::Message_MessageType const ApplicationLifecycle_GetSessionKey;

  /// @brief Field ApplicationLifecycle_RegisterSessionKey value: U32(3064985840)
  static ::Oculus::Platform::Message_MessageType const ApplicationLifecycle_RegisterSessionKey;

  /// @brief Field Application_CancelAppDownload value: U32(543219440)
  static ::Oculus::Platform::Message_MessageType const Application_CancelAppDownload;

  /// @brief Field Application_CheckAppDownloadProgress value: U32(883500272)
  static ::Oculus::Platform::Message_MessageType const Application_CheckAppDownloadProgress;

  /// @brief Field Application_GetVersion value: U32(1728712432)
  static ::Oculus::Platform::Message_MessageType const Application_GetVersion;

  /// @brief Field Application_InstallAppUpdateAndRelaunch value: U32(2238415060)
  static ::Oculus::Platform::Message_MessageType const Application_InstallAppUpdateAndRelaunch;

  /// @brief Field Application_LaunchOtherApp value: U32(3805411568)
  static ::Oculus::Platform::Message_MessageType const Application_LaunchOtherApp;

  /// @brief Field Application_StartAppDownload value: U32(4227886832)
  static ::Oculus::Platform::Message_MessageType const Application_StartAppDownload;

  /// @brief Field AssetFile_Delete value: U32(1568179952)
  static ::Oculus::Platform::Message_MessageType const AssetFile_Delete;

  /// @brief Field AssetFile_DeleteById value: U32(3905770224)
  static ::Oculus::Platform::Message_MessageType const AssetFile_DeleteById;

  /// @brief Field AssetFile_DeleteByName value: U32(180473840)
  static ::Oculus::Platform::Message_MessageType const AssetFile_DeleteByName;

  /// @brief Field AssetFile_Download value: U32(3315549393)
  static ::Oculus::Platform::Message_MessageType const AssetFile_Download;

  /// @brief Field AssetFile_DownloadById value: U32(9016048)
  static ::Oculus::Platform::Message_MessageType const AssetFile_DownloadById;

  /// @brief Field AssetFile_DownloadByName value: U32(919534320)
  static ::Oculus::Platform::Message_MessageType const AssetFile_DownloadByName;

  /// @brief Field AssetFile_DownloadCancel value: U32(3352496840)
  static ::Oculus::Platform::Message_MessageType const AssetFile_DownloadCancel;

  /// @brief Field AssetFile_DownloadCancelById value: U32(1704269040)
  static ::Oculus::Platform::Message_MessageType const AssetFile_DownloadCancelById;

  /// @brief Field AssetFile_DownloadCancelByName value: U32(1793915632)
  static ::Oculus::Platform::Message_MessageType const AssetFile_DownloadCancelByName;

  /// @brief Field AssetFile_GetList value: U32(4235162864)
  static ::Oculus::Platform::Message_MessageType const AssetFile_GetList;

  /// @brief Field AssetFile_Status value: U32(1613747138)
  static ::Oculus::Platform::Message_MessageType const AssetFile_Status;

  /// @brief Field AssetFile_StatusById value: U32(2505914608)
  static ::Oculus::Platform::Message_MessageType const AssetFile_StatusById;

  /// @brief Field AssetFile_StatusByName value: U32(3487191280)
  static ::Oculus::Platform::Message_MessageType const AssetFile_StatusByName;

  /// @brief Field Avatar_LaunchAvatarEditor value: U32(1407316421)
  static ::Oculus::Platform::Message_MessageType const Avatar_LaunchAvatarEditor;

  /// @brief Field Challenges_Create value: U32(1507213808)
  static ::Oculus::Platform::Message_MessageType const Challenges_Create;

  /// @brief Field Challenges_DeclineInvite value: U32(2390147312)
  static ::Oculus::Platform::Message_MessageType const Challenges_DeclineInvite;

  /// @brief Field Challenges_Delete value: U32(1216727792)
  static ::Oculus::Platform::Message_MessageType const Challenges_Delete;

  /// @brief Field Challenges_Get value: U32(1481569264)
  static ::Oculus::Platform::Message_MessageType const Challenges_Get;

  /// @brief Field Challenges_GetEntries value: U32(1605638866)
  static ::Oculus::Platform::Message_MessageType const Challenges_GetEntries;

  /// @brief Field Challenges_GetEntriesAfterRank value: U32(2132445640)
  static ::Oculus::Platform::Message_MessageType const Challenges_GetEntriesAfterRank;

  /// @brief Field Challenges_GetEntriesByIds value: U32(1695145200)
  static ::Oculus::Platform::Message_MessageType const Challenges_GetEntriesByIds;

  /// @brief Field Challenges_GetList value: U32(641947376)
  static ::Oculus::Platform::Message_MessageType const Challenges_GetList;

  /// @brief Field Challenges_GetNextChallenges value: U32(2090972912)
  static ::Oculus::Platform::Message_MessageType const Challenges_GetNextChallenges;

  /// @brief Field Challenges_GetNextEntries value: U32(1285605104)
  static ::Oculus::Platform::Message_MessageType const Challenges_GetNextEntries;

  /// @brief Field Challenges_GetPreviousChallenges value: U32(218412238)
  static ::Oculus::Platform::Message_MessageType const Challenges_GetPreviousChallenges;

  /// @brief Field Challenges_GetPreviousEntries value: U32(3372511472)
  static ::Oculus::Platform::Message_MessageType const Challenges_GetPreviousEntries;

  /// @brief Field Challenges_Join value: U32(612395504)
  static ::Oculus::Platform::Message_MessageType const Challenges_Join;

  /// @brief Field Challenges_Leave value: U32(1628890608)
  static ::Oculus::Platform::Message_MessageType const Challenges_Leave;

  /// @brief Field Challenges_UpdateInfo value: U32(1623094737)
  static ::Oculus::Platform::Message_MessageType const Challenges_UpdateInfo;

  /// @brief Field DeviceApplicationIntegrity_GetIntegrityToken value: U32(1907088112)
  static ::Oculus::Platform::Message_MessageType const DeviceApplicationIntegrity_GetIntegrityToken;

  /// @brief Field Entitlement_GetIsViewerEntitled value: U32(2975362008)
  static ::Oculus::Platform::Message_MessageType const Entitlement_GetIsViewerEntitled;

  /// @brief Field GroupPresence_Clear value: U32(2862400496)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_Clear;

  /// @brief Field GroupPresence_GetInvitableUsers value: U32(1271132656)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_GetInvitableUsers;

  /// @brief Field GroupPresence_GetNextApplicationInviteArrayPage value: U32(4072732868)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_GetNextApplicationInviteArrayPage;

  /// @brief Field GroupPresence_GetSentInvites value: U32(2970232520)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_GetSentInvites;

  /// @brief Field GroupPresence_LaunchInvitePanel value: U32(2681183951)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_LaunchInvitePanel;

  /// @brief Field GroupPresence_LaunchMultiplayerErrorDialog value: U32(1437541616)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_LaunchMultiplayerErrorDialog;

  /// @brief Field GroupPresence_LaunchRejoinDialog value: U32(1862498261)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_LaunchRejoinDialog;

  /// @brief Field GroupPresence_LaunchRosterPanel value: U32(1921549040)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_LaunchRosterPanel;

  /// @brief Field GroupPresence_SendInvites value: U32(1691601869)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_SendInvites;

  /// @brief Field GroupPresence_Set value: U32(1599874288)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_Set;

  /// @brief Field GroupPresence_SetDeeplinkMessageOverride value: U32(450825712)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_SetDeeplinkMessageOverride;

  /// @brief Field GroupPresence_SetDestination value: U32(1529252592)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_SetDestination;

  /// @brief Field GroupPresence_SetIsJoinable value: U32(2400212464)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_SetIsJoinable;

  /// @brief Field GroupPresence_SetLobbySession value: U32(4283809520)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_SetLobbySession;

  /// @brief Field GroupPresence_SetMatchSession value: U32(1283766512)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_SetMatchSession;

  /// @brief Field IAP_ConsumePurchase value: U32(3648175071)
  static ::Oculus::Platform::Message_MessageType const IAP_ConsumePurchase;

  /// @brief Field IAP_GetNextProductArrayPage value: U32(2940918235)
  static ::Oculus::Platform::Message_MessageType const IAP_GetNextProductArrayPage;

  /// @brief Field IAP_GetNextPurchaseArrayPage value: U32(1460311536)
  static ::Oculus::Platform::Message_MessageType const IAP_GetNextPurchaseArrayPage;

  /// @brief Field IAP_GetProductsBySKU value: U32(2596992496)
  static ::Oculus::Platform::Message_MessageType const IAP_GetProductsBySKU;

  /// @brief Field IAP_GetViewerPurchases value: U32(260315632)
  static ::Oculus::Platform::Message_MessageType const IAP_GetViewerPurchases;

  /// @brief Field IAP_GetViewerPurchasesDurableCache value: U32(1503538160)
  static ::Oculus::Platform::Message_MessageType const IAP_GetViewerPurchasesDurableCache;

  /// @brief Field IAP_LaunchCheckoutFlow value: U32(2601324016)
  static ::Oculus::Platform::Message_MessageType const IAP_LaunchCheckoutFlow;

  /// @brief Field LanguagePack_GetCurrent value: U32(3589312735)
  static ::Oculus::Platform::Message_MessageType const LanguagePack_GetCurrent;

  /// @brief Field LanguagePack_SetCurrent value: U32(1337712880)
  static ::Oculus::Platform::Message_MessageType const LanguagePack_SetCurrent;

  /// @brief Field Leaderboard_Get value: U32(3561945328)
  static ::Oculus::Platform::Message_MessageType const Leaderboard_Get;

  /// @brief Field Leaderboard_GetEntries value: U32(3007794416)
  static ::Oculus::Platform::Message_MessageType const Leaderboard_GetEntries;

  /// @brief Field Leaderboard_GetEntriesAfterRank value: U32(4018878424)
  static ::Oculus::Platform::Message_MessageType const Leaderboard_GetEntriesAfterRank;

  /// @brief Field Leaderboard_GetEntriesByIds value: U32(1618738416)
  static ::Oculus::Platform::Message_MessageType const Leaderboard_GetEntriesByIds;

  /// @brief Field Leaderboard_GetNextEntries value: U32(545053168)
  static ::Oculus::Platform::Message_MessageType const Leaderboard_GetNextEntries;

  /// @brief Field Leaderboard_GetNextLeaderboardArrayPage value: U32(4134968304)
  static ::Oculus::Platform::Message_MessageType const Leaderboard_GetNextLeaderboardArrayPage;

  /// @brief Field Leaderboard_GetPreviousEntries value: U32(31113456)
  static ::Oculus::Platform::Message_MessageType const Leaderboard_GetPreviousEntries;

  /// @brief Field Leaderboard_WriteEntry value: U32(4274552785)
  static ::Oculus::Platform::Message_MessageType const Leaderboard_WriteEntry;

  /// @brief Field Leaderboard_WriteEntryWithSupplementaryMetric value: U32(3331521264)
  static ::Oculus::Platform::Message_MessageType const Leaderboard_WriteEntryWithSupplementaryMetric;

  /// @brief Field Media_ShareToFacebook value: U32(4018856896)
  static ::Oculus::Platform::Message_MessageType const Media_ShareToFacebook;

  /// @brief Field Notification_AbuseReport_ReportButtonPressed value: U32(1194290416)
  static ::Oculus::Platform::Message_MessageType const Notification_AbuseReport_ReportButtonPressed;

  /// @brief Field Notification_ApplicationLifecycle_LaunchIntentChanged value: U32(2739712964)
  static ::Oculus::Platform::Message_MessageType const Notification_ApplicationLifecycle_LaunchIntentChanged;

  /// @brief Field Notification_AssetFile_DownloadUpdate value: U32(3708603888)
  static ::Oculus::Platform::Message_MessageType const Notification_AssetFile_DownloadUpdate;

  /// @brief Field Notification_GroupPresence_InvitationsSent value: U32(2592388848)
  static ::Oculus::Platform::Message_MessageType const Notification_GroupPresence_InvitationsSent;

  /// @brief Field Notification_GroupPresence_JoinIntentReceived value: U32(948565744)
  static ::Oculus::Platform::Message_MessageType const Notification_GroupPresence_JoinIntentReceived;

  /// @brief Field Notification_GroupPresence_LeaveIntentReceived value: U32(938089968)
  static ::Oculus::Platform::Message_MessageType const Notification_GroupPresence_LeaveIntentReceived;

  /// @brief Field Notification_HTTP_Transfer value: U32(3563991024)
  static ::Oculus::Platform::Message_MessageType const Notification_HTTP_Transfer;

  /// @brief Field Notification_Livestreaming_StatusChange value: U32(1197043440)
  static ::Oculus::Platform::Message_MessageType const Notification_Livestreaming_StatusChange;

  /// @brief Field Notification_MarkAsRead value: U32(1918493680)
  static ::Oculus::Platform::Message_MessageType const Notification_MarkAsRead;

  /// @brief Field Notification_NetSync_ConnectionStatusChanged value: U32(3397661895)
  static ::Oculus::Platform::Message_MessageType const Notification_NetSync_ConnectionStatusChanged;

  /// @brief Field Notification_NetSync_SessionsChanged value: U32(2122266352)
  static ::Oculus::Platform::Message_MessageType const Notification_NetSync_SessionsChanged;

  /// @brief Field Notification_Party_PartyUpdate value: U32(2995392989)
  static ::Oculus::Platform::Message_MessageType const Notification_Party_PartyUpdate;

  /// @brief Field Notification_Voip_MicrophoneAvailabilityStateUpdate value: U32(550197232)
  static ::Oculus::Platform::Message_MessageType const Notification_Voip_MicrophoneAvailabilityStateUpdate;

  /// @brief Field Notification_Voip_SystemVoipState value: U32(3528762864)
  static ::Oculus::Platform::Message_MessageType const Notification_Voip_SystemVoipState;

  /// @brief Field Notification_Vrcamera_GetDataChannelMessageUpdate value: U32(3841146096)
  static ::Oculus::Platform::Message_MessageType const Notification_Vrcamera_GetDataChannelMessageUpdate;

  /// @brief Field Notification_Vrcamera_GetSurfaceUpdate value: U32(4061168880)
  static ::Oculus::Platform::Message_MessageType const Notification_Vrcamera_GetSurfaceUpdate;

  /// @brief Field Party_GetCurrent value: U32(2469880048)
  static ::Oculus::Platform::Message_MessageType const Party_GetCurrent;

  /// @brief Field Platform_InitializeAndroidAsynchronous value: U32(3020411866)
  static ::Oculus::Platform::Message_MessageType const Platform_InitializeAndroidAsynchronous;

  /// @brief Field Platform_InitializeStandaloneOculus value: U32(4174253296)
  static ::Oculus::Platform::Message_MessageType const Platform_InitializeStandaloneOculus;

  /// @brief Field Platform_InitializeWindowsAsynchronous value: U32(2814021616)
  static ::Oculus::Platform::Message_MessageType const Platform_InitializeWindowsAsynchronous;

  /// @brief Field Platform_InitializeWithAccessToken value: U32(1764699120)
  static ::Oculus::Platform::Message_MessageType const Platform_InitializeWithAccessToken;

  /// @brief Field RichPresence_Clear value: U32(3075650544)
  static ::Oculus::Platform::Message_MessageType const RichPresence_Clear;

  /// @brief Field RichPresence_GetDestinations value: U32(1865225456)
  static ::Oculus::Platform::Message_MessageType const RichPresence_GetDestinations;

  /// @brief Field RichPresence_GetNextDestinationArrayPage value: U32(914310640)
  static ::Oculus::Platform::Message_MessageType const RichPresence_GetNextDestinationArrayPage;

  /// @brief Field RichPresence_Set value: U32(343214576)
  static ::Oculus::Platform::Message_MessageType const RichPresence_Set;

  /// @brief Field Unknown value: U32(4236701696)
  static ::Oculus::Platform::Message_MessageType const Unknown;

  /// @brief Field UserAgeCategory_Get value: U32(3420504304)
  static ::Oculus::Platform::Message_MessageType const UserAgeCategory_Get;

  /// @brief Field UserAgeCategory_Report value: U32(1306056432)
  static ::Oculus::Platform::Message_MessageType const UserAgeCategory_Report;

  /// @brief Field UserDataStore_PrivateDeleteEntryByKey value: U32(2305769200)
  static ::Oculus::Platform::Message_MessageType const UserDataStore_PrivateDeleteEntryByKey;

  /// @brief Field UserDataStore_PrivateGetEntries value: U32(2323785968)
  static ::Oculus::Platform::Message_MessageType const UserDataStore_PrivateGetEntries;

  /// @brief Field UserDataStore_PrivateGetEntryByKey value: U32(428017372)
  static ::Oculus::Platform::Message_MessageType const UserDataStore_PrivateGetEntryByKey;

  /// @brief Field UserDataStore_PrivateWriteEntry value: U32(3531770864)
  static ::Oculus::Platform::Message_MessageType const UserDataStore_PrivateWriteEntry;

  /// @brief Field UserDataStore_PublicDeleteEntryByKey value: U32(4226143709)
  static ::Oculus::Platform::Message_MessageType const UserDataStore_PublicDeleteEntryByKey;

  /// @brief Field UserDataStore_PublicGetEntries value: U32(3259727318)
  static ::Oculus::Platform::Message_MessageType const UserDataStore_PublicGetEntries;

  /// @brief Field UserDataStore_PublicGetEntryByKey value: U32(3328597209)
  static ::Oculus::Platform::Message_MessageType const UserDataStore_PublicGetEntryByKey;

  /// @brief Field UserDataStore_PublicWriteEntry value: U32(910822128)
  static ::Oculus::Platform::Message_MessageType const UserDataStore_PublicWriteEntry;

  /// @brief Field User_Get value: U32(3483256816)
  static ::Oculus::Platform::Message_MessageType const User_Get;

  /// @brief Field User_GetAccessToken value: U32(3193612486)
  static ::Oculus::Platform::Message_MessageType const User_GetAccessToken;

  /// @brief Field User_GetBlockedUsers value: U32(538269424)
  static ::Oculus::Platform::Message_MessageType const User_GetBlockedUsers;

  /// @brief Field User_GetLoggedInUser value: U32(1865702896)
  static ::Oculus::Platform::Message_MessageType const User_GetLoggedInUser;

  /// @brief Field User_GetLoggedInUserFriends value: U32(2083163632)
  static ::Oculus::Platform::Message_MessageType const User_GetLoggedInUserFriends;

  /// @brief Field User_GetNextBlockedUserArrayPage value: U32(721275888)
  static ::Oculus::Platform::Message_MessageType const User_GetNextBlockedUserArrayPage;

  /// @brief Field User_GetNextUserArrayPage value: U32(2096579568)
  static ::Oculus::Platform::Message_MessageType const User_GetNextUserArrayPage;

  /// @brief Field User_GetNextUserCapabilityArrayPage value: U32(166959600)
  static ::Oculus::Platform::Message_MessageType const User_GetNextUserCapabilityArrayPage;

  /// @brief Field User_GetOrgScopedID value: U32(464580824)
  static ::Oculus::Platform::Message_MessageType const User_GetOrgScopedID;

  /// @brief Field User_GetSdkAccounts value: U32(1382712304)
  static ::Oculus::Platform::Message_MessageType const User_GetSdkAccounts;

  /// @brief Field User_GetUserProof value: U32(2164556784)
  static ::Oculus::Platform::Message_MessageType const User_GetUserProof;

  /// @brief Field User_LaunchBlockFlow value: U32(3592759536)
  static ::Oculus::Platform::Message_MessageType const User_LaunchBlockFlow;

  /// @brief Field User_LaunchFriendRequestFlow value: U32(2562000073)
  static ::Oculus::Platform::Message_MessageType const User_LaunchFriendRequestFlow;

  /// @brief Field User_LaunchUnblockFlow value: U32(2536153812)
  static ::Oculus::Platform::Message_MessageType const User_LaunchUnblockFlow;

  /// @brief Field Voip_GetMicrophoneAvailability value: U32(1289962992)
  static ::Oculus::Platform::Message_MessageType const Voip_GetMicrophoneAvailability;

  /// @brief Field Voip_SetSystemVoipSuppressed value: U32(1070181104)
  static ::Oculus::Platform::Message_MessageType const Voip_SetSystemVoipSuppressed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15346 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Message_MessageType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Message_MessageType, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
// Dependencies System.MulticastDelegate
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Message/ExtraMessageTypesHandler
class CORDL_TYPE Message_ExtraMessageTypesHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3f7bf78, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr messageHandle, ::Oculus::Platform::Message_MessageType message_type, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3f7c030, size 0xc, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Message* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3f7bf64, size 0x14, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Message* Invoke(::System::IntPtr messageHandle, ::Oculus::Platform::Message_MessageType message_type);

  static inline ::Oculus::Platform::Message_ExtraMessageTypesHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3f7bed8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Message_ExtraMessageTypesHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Message_ExtraMessageTypesHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Message_ExtraMessageTypesHandler(Message_ExtraMessageTypesHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Message_ExtraMessageTypesHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Message_ExtraMessageTypesHandler(Message_ExtraMessageTypesHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15347 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Message_ExtraMessageTypesHandler, 0x80>, "Size mismatch!");

} // namespace Oculus::Platform
// Dependencies Oculus.Platform.Message::MessageType, System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Message
class CORDL_TYPE Message : public ::System::Object {
public:
  // Declarations
  using Callback = ::Oculus::Platform::Message_Callback;

  using ExtraMessageTypesHandler = ::Oculus::Platform::Message_ExtraMessageTypesHandler;

  using MessageType = ::Oculus::Platform::Message_MessageType;

  __declspec(property(get = get_IsError)) bool IsError;

  __declspec(property(get = get_RequestID)) uint64_t RequestID;

  __declspec(property(get = get_Type)) ::Oculus::Platform::Message_MessageType Type;

  /// @brief Field <HandleExtraMessageTypes>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__HandleExtraMessageTypes_k__BackingField,
                      put = setStaticF__HandleExtraMessageTypes_k__BackingField)) ::Oculus::Platform::Message_ExtraMessageTypesHandler* _HandleExtraMessageTypes_k__BackingField;

  /// @brief Field error, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_error, put = __cordl_internal_set_error)) ::Oculus::Platform::Models::Error* error;

  /// @brief Field requestID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_requestID, put = __cordl_internal_set_requestID)) uint64_t requestID;

  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::Oculus::Platform::Message_MessageType type;

  /// @brief Method Finalize, addr 0x3f78824, size 0x8, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetAbuseReportRecording, addr 0x3f78854, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AbuseReportRecording* GetAbuseReportRecording();

  /// @brief Method GetAchievementDefinitions, addr 0x3f7885c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AchievementDefinitionList* GetAchievementDefinitions();

  /// @brief Method GetAchievementProgressList, addr 0x3f78864, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AchievementProgressList* GetAchievementProgressList();

  /// @brief Method GetAchievementUpdate, addr 0x3f7886c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AchievementUpdate* GetAchievementUpdate();

  /// @brief Method GetAppDownloadProgressResult, addr 0x3f78874, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AppDownloadProgressResult* GetAppDownloadProgressResult();

  /// @brief Method GetAppDownloadResult, addr 0x3f7887c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AppDownloadResult* GetAppDownloadResult();

  /// @brief Method GetApplicationInviteList, addr 0x3f78884, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ApplicationInviteList* GetApplicationInviteList();

  /// @brief Method GetApplicationVersion, addr 0x3f7888c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ApplicationVersion* GetApplicationVersion();

  /// @brief Method GetAssetDetails, addr 0x3f78894, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetDetails* GetAssetDetails();

  /// @brief Method GetAssetDetailsList, addr 0x3f7889c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetDetailsList* GetAssetDetailsList();

  /// @brief Method GetAssetFileDeleteResult, addr 0x3f788a4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetFileDeleteResult* GetAssetFileDeleteResult();

  /// @brief Method GetAssetFileDownloadCancelResult, addr 0x3f788ac, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* GetAssetFileDownloadCancelResult();

  /// @brief Method GetAssetFileDownloadResult, addr 0x3f788b4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetFileDownloadResult* GetAssetFileDownloadResult();

  /// @brief Method GetAssetFileDownloadUpdate, addr 0x3f788bc, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetFileDownloadUpdate* GetAssetFileDownloadUpdate();

  /// @brief Method GetAvatarEditorResult, addr 0x3f788c4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AvatarEditorResult* GetAvatarEditorResult();

  /// @brief Method GetBlockedUserList, addr 0x3f788cc, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::BlockedUserList* GetBlockedUserList();

  /// @brief Method GetChallenge, addr 0x3f788d4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::Challenge* GetChallenge();

  /// @brief Method GetChallengeEntryList, addr 0x3f788dc, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ChallengeEntryList* GetChallengeEntryList();

  /// @brief Method GetChallengeList, addr 0x3f788e4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ChallengeList* GetChallengeList();

  /// @brief Method GetDataStore, addr 0x3f788ec, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetDataStore();

  /// @brief Method GetDestinationList, addr 0x3f788f4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::DestinationList* GetDestinationList();

  /// @brief Method GetError, addr 0x3f7883c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::Error* GetError();

  /// @brief Method GetGroupPresenceJoinIntent, addr 0x3f788fc, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::GroupPresenceJoinIntent* GetGroupPresenceJoinIntent();

  /// @brief Method GetGroupPresenceLeaveIntent, addr 0x3f78904, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* GetGroupPresenceLeaveIntent();

  /// @brief Method GetHttpTransferUpdate, addr 0x3f78844, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::HttpTransferUpdate* GetHttpTransferUpdate();

  /// @brief Method GetInstalledApplicationList, addr 0x3f7890c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::InstalledApplicationList* GetInstalledApplicationList();

  /// @brief Method GetInvitePanelResultInfo, addr 0x3f78914, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::InvitePanelResultInfo* GetInvitePanelResultInfo();

  /// @brief Method GetLaunchBlockFlowResult, addr 0x3f7891c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LaunchBlockFlowResult* GetLaunchBlockFlowResult();

  /// @brief Method GetLaunchFriendRequestFlowResult, addr 0x3f78924, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LaunchFriendRequestFlowResult* GetLaunchFriendRequestFlowResult();

  /// @brief Method GetLaunchInvitePanelFlowResult, addr 0x3f7892c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LaunchInvitePanelFlowResult* GetLaunchInvitePanelFlowResult();

  /// @brief Method GetLaunchReportFlowResult, addr 0x3f78934, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LaunchReportFlowResult* GetLaunchReportFlowResult();

  /// @brief Method GetLaunchUnblockFlowResult, addr 0x3f7893c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LaunchUnblockFlowResult* GetLaunchUnblockFlowResult();

  /// @brief Method GetLeaderboardDidUpdate, addr 0x3f78944, size 0x8, virtual true, abstract: false, final false
  inline bool GetLeaderboardDidUpdate();

  /// @brief Method GetLeaderboardEntryList, addr 0x3f7894c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LeaderboardEntryList* GetLeaderboardEntryList();

  /// @brief Method GetLeaderboardList, addr 0x3f78954, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LeaderboardList* GetLeaderboardList();

  /// @brief Method GetLinkedAccountList, addr 0x3f7895c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LinkedAccountList* GetLinkedAccountList();

  /// @brief Method GetLivestreamingApplicationStatus, addr 0x3f78964, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LivestreamingApplicationStatus* GetLivestreamingApplicationStatus();

  /// @brief Method GetLivestreamingStartResult, addr 0x3f7896c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LivestreamingStartResult* GetLivestreamingStartResult();

  /// @brief Method GetLivestreamingStatus, addr 0x3f78974, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LivestreamingStatus* GetLivestreamingStatus();

  /// @brief Method GetLivestreamingVideoStats, addr 0x3f7897c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LivestreamingVideoStats* GetLivestreamingVideoStats();

  /// @brief Method GetMicrophoneAvailabilityState, addr 0x3f78984, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* GetMicrophoneAvailabilityState();

  /// @brief Method GetNetSyncConnection, addr 0x3f7898c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::NetSyncConnection* GetNetSyncConnection();

  /// @brief Method GetNetSyncSessionList, addr 0x3f78994, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::NetSyncSessionList* GetNetSyncSessionList();

  /// @brief Method GetNetSyncSessionsChangedNotification, addr 0x3f7899c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::NetSyncSessionsChangedNotification* GetNetSyncSessionsChangedNotification();

  /// @brief Method GetNetSyncSetSessionPropertyResult, addr 0x3f789a4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* GetNetSyncSetSessionPropertyResult();

  /// @brief Method GetNetSyncVoipAttenuationValueList, addr 0x3f789ac, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* GetNetSyncVoipAttenuationValueList();

  /// @brief Method GetOrgScopedID, addr 0x3f789b4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::OrgScopedID* GetOrgScopedID();

  /// @brief Method GetParty, addr 0x3f789bc, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::Party* GetParty();

  /// @brief Method GetPartyID, addr 0x3f789c4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PartyID* GetPartyID();

  /// @brief Method GetPartyUpdateNotification, addr 0x3f789cc, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PartyUpdateNotification* GetPartyUpdateNotification();

  /// @brief Method GetPidList, addr 0x3f789d4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PidList* GetPidList();

  /// @brief Method GetPlatformInitialize, addr 0x3f7884c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PlatformInitialize* GetPlatformInitialize();

  /// @brief Method GetProductList, addr 0x3f789dc, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ProductList* GetProductList();

  /// @brief Method GetPurchase, addr 0x3f789e4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::Purchase* GetPurchase();

  /// @brief Method GetPurchaseList, addr 0x3f789ec, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PurchaseList* GetPurchaseList();

  /// @brief Method GetRejoinDialogResult, addr 0x3f789f4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::RejoinDialogResult* GetRejoinDialogResult();

  /// @brief Method GetSdkAccountList, addr 0x3f789fc, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::SdkAccountList* GetSdkAccountList();

  /// @brief Method GetSendInvitesResult, addr 0x3f78a04, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::SendInvitesResult* GetSendInvitesResult();

  /// @brief Method GetShareMediaResult, addr 0x3f78a0c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ShareMediaResult* GetShareMediaResult();

  /// @brief Method GetString, addr 0x3f78a14, size 0x8, virtual true, abstract: false, final false
  inline ::StringW GetString();

  /// @brief Method GetSystemVoipState, addr 0x3f78a1c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::SystemVoipState* GetSystemVoipState();

  /// @brief Method GetUser, addr 0x3f78a24, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::User* GetUser();

  /// @brief Method GetUserAccountAgeCategory, addr 0x3f78a2c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserAccountAgeCategory* GetUserAccountAgeCategory();

  /// @brief Method GetUserCapabilityList, addr 0x3f78a34, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserCapabilityList* GetUserCapabilityList();

  /// @brief Method GetUserDataStoreUpdateResponse, addr 0x3f78a3c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserDataStoreUpdateResponse* GetUserDataStoreUpdateResponse();

  /// @brief Method GetUserList, addr 0x3f78a44, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserList* GetUserList();

  /// @brief Method GetUserProof, addr 0x3f78a4c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserProof* GetUserProof();

  /// @brief Method GetUserReportID, addr 0x3f78a54, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserReportID* GetUserReportID();

  static inline ::Oculus::Platform::Message* New_ctor(::System::IntPtr c_message);

  /// @brief Method ParseMessageHandle, addr 0x3f78a5c, size 0x1800, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Message* ParseMessageHandle(::System::IntPtr messageHandle);

  /// @brief Method PopMessage, addr 0x3f5b148, size 0xd4, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Message* PopMessage();

  constexpr ::Oculus::Platform::Models::Error* const& __cordl_internal_get_error() const;

  constexpr ::Oculus::Platform::Models::Error*& __cordl_internal_get_error();

  constexpr uint64_t const& __cordl_internal_get_requestID() const;

  constexpr uint64_t& __cordl_internal_get_requestID();

  constexpr ::Oculus::Platform::Message_MessageType const& __cordl_internal_get_type() const;

  constexpr ::Oculus::Platform::Message_MessageType& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_error(::Oculus::Platform::Models::Error* value);

  constexpr void __cordl_internal_set_requestID(uint64_t value);

  constexpr void __cordl_internal_set_type(::Oculus::Platform::Message_MessageType value);

  /// @brief Method .ctor, addr 0x3f78578, size 0x2ac, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

  static inline ::Oculus::Platform::Message_ExtraMessageTypesHandler* getStaticF__HandleExtraMessageTypes_k__BackingField();

  /// @brief Method get_HandleExtraMessageTypes, addr 0x3f7be50, size 0x48, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Message_ExtraMessageTypesHandler* get_HandleExtraMessageTypes();

  /// @brief Method get_IsError, addr 0x3f571b0, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsError();

  /// @brief Method get_RequestID, addr 0x3f78834, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_RequestID();

  /// @brief Method get_Type, addr 0x3f7882c, size 0x8, virtual false, abstract: false, final false
  inline ::Oculus::Platform::Message_MessageType get_Type();

  static inline void setStaticF__HandleExtraMessageTypes_k__BackingField(::Oculus::Platform::Message_ExtraMessageTypesHandler* value);

  /// @brief Method set_HandleExtraMessageTypes, addr 0x3f7be04, size 0x4c, virtual false, abstract: false, final false
  static inline void set_HandleExtraMessageTypes(::Oculus::Platform::Message_ExtraMessageTypesHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Message();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Message", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Message(Message&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Message", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Message(Message const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15348 };

  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  ::Oculus::Platform::Message_MessageType ___type;

  /// @brief Field requestID, offset: 0x18, size: 0x8, def value: None
  uint64_t ___requestID;

  /// @brief Field error, offset: 0x20, size: 0x8, def value: None
  ::Oculus::Platform::Models::Error* ___error;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Message, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Message, ___requestID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Message, ___error) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Message, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Message_MessageType, "Oculus.Platform", "Message/MessageType");
NEED_NO_BOX(::Oculus::Platform::Message);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Message*, "Oculus.Platform", "Message");
NEED_NO_BOX(::Oculus::Platform::Message_Callback);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Message_Callback*, "Oculus.Platform", "Message/Callback");
NEED_NO_BOX(::Oculus::Platform::Message_ExtraMessageTypesHandler);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Message_ExtraMessageTypesHandler*, "Oculus.Platform", "Message/ExtraMessageTypesHandler");
