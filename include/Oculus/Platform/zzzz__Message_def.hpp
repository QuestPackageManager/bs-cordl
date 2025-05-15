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
  /// @brief Method BeginInvoke, addr 0x3f7d894, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::Oculus::Platform::Message* message, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3f7d8b4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3f7d880, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::Oculus::Platform::Message* message);

  static inline ::Oculus::Platform::Message_Callback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3f57eb0, size 0x100, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15354 };

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
    __E_Unknown = static_cast<uint32_t>(0x0u),
    __E_AbuseReport_ReportRequestHandled = static_cast<uint32_t>(0x4b8efc86u),
    __E_Achievements_AddCount = static_cast<uint32_t>(0x3e76231u),
    __E_Achievements_AddFields = static_cast<uint32_t>(0x14aa2129u),
    __E_Achievements_GetAllDefinitions = static_cast<uint32_t>(0x3d3458du),
    __E_Achievements_GetAllProgress = static_cast<uint32_t>(0x4f9fde1du),
    __E_Achievements_GetDefinitionsByName = static_cast<uint32_t>(0x629101bcu),
    __E_Achievements_GetNextAchievementDefinitionArrayPage = static_cast<uint32_t>(0x2a7dd255u),
    __E_Achievements_GetNextAchievementProgressArrayPage = static_cast<uint32_t>(0x2f42e727u),
    __E_Achievements_GetProgressByName = static_cast<uint32_t>(0x152663b1u),
    __E_Achievements_Unlock = static_cast<uint32_t>(0x593ccbddu),
    __E_ApplicationLifecycle_GetRegisteredPIDs = static_cast<uint32_t>(0x4e5cf62u),
    __E_ApplicationLifecycle_GetSessionKey = static_cast<uint32_t>(0x3aaf591du),
    __E_ApplicationLifecycle_RegisterSessionKey = static_cast<uint32_t>(0x4db6aff8u),
    __E_Application_CancelAppDownload = static_cast<uint32_t>(0x7c2060deu),
    __E_Application_CheckAppDownloadProgress = static_cast<uint32_t>(0x5534a924u),
    __E_Application_GetVersion = static_cast<uint32_t>(0x68670a0eu),
    __E_Application_InstallAppUpdateAndRelaunch = static_cast<uint32_t>(0x14806b85u),
    __E_Application_LaunchOtherApp = static_cast<uint32_t>(0x54e2d1f8u),
    __E_Application_StartAppDownload = static_cast<uint32_t>(0x44fc006eu),
    __E_AssetFile_Delete = static_cast<uint32_t>(0x6d5d7886u),
    __E_AssetFile_DeleteById = static_cast<uint32_t>(0x5ae8cd52u),
    __E_AssetFile_DeleteByName = static_cast<uint32_t>(0x420ac1cfu),
    __E_AssetFile_Download = static_cast<uint32_t>(0x11449fc5u),
    __E_AssetFile_DownloadById = static_cast<uint32_t>(0x2d008992u),
    __E_AssetFile_DownloadByName = static_cast<uint32_t>(0x6336cefau),
    __E_AssetFile_DownloadCancel = static_cast<uint32_t>(0x80ad3c7u),
    __E_AssetFile_DownloadCancelById = static_cast<uint32_t>(0x51659514u),
    __E_AssetFile_DownloadCancelByName = static_cast<uint32_t>(0x446aecfau),
    __E_AssetFile_GetList = static_cast<uint32_t>(0x4afc6f74u),
    __E_AssetFile_Status = static_cast<uint32_t>(0x2d32f60u),
    __E_AssetFile_StatusById = static_cast<uint32_t>(0x5d955d38u),
    __E_AssetFile_StatusByName = static_cast<uint32_t>(0x41cfda50u),
    __E_Avatar_LaunchAvatarEditor = static_cast<uint32_t>(0x5f1e153u),
    __E_Challenges_Create = static_cast<uint32_t>(0x6859d641u),
    __E_Challenges_DeclineInvite = static_cast<uint32_t>(0x568e76c0u),
    __E_Challenges_Delete = static_cast<uint32_t>(0x264885cau),
    __E_Challenges_Get = static_cast<uint32_t>(0x77584ef3u),
    __E_Challenges_GetEntries = static_cast<uint32_t>(0x121ab45fu),
    __E_Challenges_GetEntriesAfterRank = static_cast<uint32_t>(0x8891a7fu),
    __E_Challenges_GetEntriesByIds = static_cast<uint32_t>(0x316509dcu),
    __E_Challenges_GetList = static_cast<uint32_t>(0x43264356u),
    __E_Challenges_GetNextChallenges = static_cast<uint32_t>(0x5b7ca1b6u),
    __E_Challenges_GetNextEntries = static_cast<uint32_t>(0x7f4ca0c6u),
    __E_Challenges_GetPreviousChallenges = static_cast<uint32_t>(0xeb4040du),
    __E_Challenges_GetPreviousEntries = static_cast<uint32_t>(0x78c90470u),
    __E_Challenges_Join = static_cast<uint32_t>(0x21248069u),
    __E_Challenges_Leave = static_cast<uint32_t>(0x296116e5u),
    __E_Challenges_UpdateInfo = static_cast<uint32_t>(0x1175be60u),
    __E_DeviceApplicationIntegrity_GetIntegrityToken = static_cast<uint32_t>(0x3271abdau),
    __E_Entitlement_GetIsViewerEntitled = static_cast<uint32_t>(0x186b58b1u),
    __E_GroupPresence_Clear = static_cast<uint32_t>(0x6daa9cc3u),
    __E_GroupPresence_GetInvitableUsers = static_cast<uint32_t>(0x234bc3f1u),
    __E_GroupPresence_GetNextApplicationInviteArrayPage = static_cast<uint32_t>(0x4f8c0f2u),
    __E_GroupPresence_GetSentInvites = static_cast<uint32_t>(0x8260ab1u),
    __E_GroupPresence_LaunchInvitePanel = static_cast<uint32_t>(0xf9ecf9fu),
    __E_GroupPresence_LaunchMultiplayerErrorDialog = static_cast<uint32_t>(0x2955af24u),
    __E_GroupPresence_LaunchRejoinDialog = static_cast<uint32_t>(0x1577036fu),
    __E_GroupPresence_LaunchRosterPanel = static_cast<uint32_t>(0x35728882u),
    __E_GroupPresence_SendInvites = static_cast<uint32_t>(0xdcbd364u),
    __E_GroupPresence_Set = static_cast<uint32_t>(0x675f5c24u),
    __E_GroupPresence_SetDeeplinkMessageOverride = static_cast<uint32_t>(0x521adf0du),
    __E_GroupPresence_SetDestination = static_cast<uint32_t>(0x4c5b268au),
    __E_GroupPresence_SetIsJoinable = static_cast<uint32_t>(0x2a8f1055u),
    __E_GroupPresence_SetLobbySession = static_cast<uint32_t>(0x48ff55beu),
    __E_GroupPresence_SetMatchSession = static_cast<uint32_t>(0x314c84b8u),
    __E_IAP_ConsumePurchase = static_cast<uint32_t>(0x1fbb72d9u),
    __E_IAP_GetNextProductArrayPage = static_cast<uint32_t>(0x1bd94aafu),
    __E_IAP_GetNextPurchaseArrayPage = static_cast<uint32_t>(0x47570a95u),
    __E_IAP_GetProductsBySKU = static_cast<uint32_t>(0x7e9acaf5u),
    __E_IAP_GetViewerPurchases = static_cast<uint32_t>(0x3a0f8419u),
    __E_IAP_GetViewerPurchasesDurableCache = static_cast<uint32_t>(0x63599e2bu),
    __E_IAP_LaunchCheckoutFlow = static_cast<uint32_t>(0x3f9b0d0du),
    __E_LanguagePack_GetCurrent = static_cast<uint32_t>(0x1f90f0d5u),
    __E_LanguagePack_SetCurrent = static_cast<uint32_t>(0x5b4fbbe0u),
    __E_Leaderboard_Get = static_cast<uint32_t>(0x6ad44ef8u),
    __E_Leaderboard_GetEntries = static_cast<uint32_t>(0x5db3474cu),
    __E_Leaderboard_GetEntriesAfterRank = static_cast<uint32_t>(0x18378befu),
    __E_Leaderboard_GetEntriesByIds = static_cast<uint32_t>(0x39607bfcu),
    __E_Leaderboard_GetNextEntries = static_cast<uint32_t>(0x4e207cd9u),
    __E_Leaderboard_GetNextLeaderboardArrayPage = static_cast<uint32_t>(0x35f6769bu),
    __E_Leaderboard_GetPreviousEntries = static_cast<uint32_t>(0x4901dac0u),
    __E_Leaderboard_WriteEntry = static_cast<uint32_t>(0x117fc8feu),
    __E_Leaderboard_WriteEntryWithSupplementaryMetric = static_cast<uint32_t>(0x72c692fau),
    __E_Media_ShareToFacebook = static_cast<uint32_t>(0xe38aefu),
    __E_Notification_MarkAsRead = static_cast<uint32_t>(0x717259e3u),
    __E_Party_GetCurrent = static_cast<uint32_t>(0x47933760u),
    __E_RichPresence_Clear = static_cast<uint32_t>(0x57b752b3u),
    __E_RichPresence_GetDestinations = static_cast<uint32_t>(0x586f2d14u),
    __E_RichPresence_GetNextDestinationArrayPage = static_cast<uint32_t>(0x67367f45u),
    __E_RichPresence_Set = static_cast<uint32_t>(0x3c147509u),
    __E_UserAgeCategory_Get = static_cast<uint32_t>(0x21cbe0c0u),
    __E_UserAgeCategory_Report = static_cast<uint32_t>(0x2e4dd8d6u),
    __E_UserDataStore_PrivateDeleteEntryByKey = static_cast<uint32_t>(0x5c896f3eu),
    __E_UserDataStore_PrivateGetEntries = static_cast<uint32_t>(0x6c8a8228u),
    __E_UserDataStore_PrivateGetEntryByKey = static_cast<uint32_t>(0x1c068319u),
    __E_UserDataStore_PrivateWriteEntry = static_cast<uint32_t>(0x41d2828bu),
    __E_UserDataStore_PublicDeleteEntryByKey = static_cast<uint32_t>(0x1dd5e5fbu),
    __E_UserDataStore_PublicGetEntries = static_cast<uint32_t>(0x167d4bc2u),
    __E_UserDataStore_PublicGetEntryByKey = static_cast<uint32_t>(0x195c66c6u),
    __E_UserDataStore_PublicWriteEntry = static_cast<uint32_t>(0x34364a0au),
    __E_User_Get = static_cast<uint32_t>(0x6bcf9e47u),
    __E_User_GetAccessToken = static_cast<uint32_t>(0x6a85abeu),
    __E_User_GetBlockedUsers = static_cast<uint32_t>(0x7d201556u),
    __E_User_GetLoggedInUser = static_cast<uint32_t>(0x436f345du),
    __E_User_GetLoggedInUserFriends = static_cast<uint32_t>(0x587c2a8du),
    __E_User_GetNextBlockedUserArrayPage = static_cast<uint32_t>(0x7c2afdcbu),
    __E_User_GetNextUserArrayPage = static_cast<uint32_t>(0x267cf743u),
    __E_User_GetNextUserCapabilityArrayPage = static_cast<uint32_t>(0x2309f399u),
    __E_User_GetOrgScopedID = static_cast<uint32_t>(0x18f0b01bu),
    __E_User_GetSdkAccounts = static_cast<uint32_t>(0x67526a83u),
    __E_User_GetUserProof = static_cast<uint32_t>(0x22810483u),
    __E_User_LaunchBlockFlow = static_cast<uint32_t>(0x6fd62528u),
    __E_User_LaunchFriendRequestFlow = static_cast<uint32_t>(0x904b598u),
    __E_User_LaunchUnblockFlow = static_cast<uint32_t>(0x14a22a97u),
    __E_Voip_GetMicrophoneAvailability = static_cast<uint32_t>(0x744ce345u),
    __E_Voip_SetSystemVoipSuppressed = static_cast<uint32_t>(0x453fc9aau),
    __E_Notification_AbuseReport_ReportButtonPressed = static_cast<uint32_t>(0x24472f6cu),
    __E_Notification_ApplicationLifecycle_LaunchIntentChanged = static_cast<uint32_t>(0x4b34ca3u),
    __E_Notification_AssetFile_DownloadUpdate = static_cast<uint32_t>(0x2fdd0ccdu),
    __E_Notification_GroupPresence_InvitationsSent = static_cast<uint32_t>(0x679a84b6u),
    __E_Notification_GroupPresence_JoinIntentReceived = static_cast<uint32_t>(0x773889f6u),
    __E_Notification_GroupPresence_LeaveIntentReceived = static_cast<uint32_t>(0x4737ea1du),
    __E_Notification_HTTP_Transfer = static_cast<uint32_t>(0x7dd46e2fu),
    __E_Notification_Livestreaming_StatusChange = static_cast<uint32_t>(0x2247596eu),
    __E_Notification_NetSync_ConnectionStatusChanged = static_cast<uint32_t>(0x73484cau),
    __E_Notification_NetSync_SessionsChanged = static_cast<uint32_t>(0x387e7f36u),
    __E_Notification_Party_PartyUpdate = static_cast<uint32_t>(0x1d118ab2u),
    __E_Notification_Voip_MicrophoneAvailabilityStateUpdate = static_cast<uint32_t>(0x3e20cb57u),
    __E_Notification_Voip_SystemVoipState = static_cast<uint32_t>(0x58d254a5u),
    __E_Notification_Vrcamera_GetDataChannelMessageUpdate = static_cast<uint32_t>(0x6ee4f33cu),
    __E_Notification_Vrcamera_GetSurfaceUpdate = static_cast<uint32_t>(0x37f21084u),
    __E_Platform_InitializeWithAccessToken = static_cast<uint32_t>(0x35692f2bu),
    __E_Platform_InitializeStandaloneOculus = static_cast<uint32_t>(0x51f8ce0cu),
    __E_Platform_InitializeAndroidAsynchronous = static_cast<uint32_t>(0x1ad307b4u),
    __E_Platform_InitializeWindowsAsynchronous = static_cast<uint32_t>(0x6da7ba8fu),
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

  /// @brief Field AbuseReport_ReportRequestHandled value: U32(1267661958)
  static ::Oculus::Platform::Message_MessageType const AbuseReport_ReportRequestHandled;

  /// @brief Field Achievements_AddCount value: U32(65495601)
  static ::Oculus::Platform::Message_MessageType const Achievements_AddCount;

  /// @brief Field Achievements_AddFields value: U32(346693929)
  static ::Oculus::Platform::Message_MessageType const Achievements_AddFields;

  /// @brief Field Achievements_GetAllDefinitions value: U32(64177549)
  static ::Oculus::Platform::Message_MessageType const Achievements_GetAllDefinitions;

  /// @brief Field Achievements_GetAllProgress value: U32(1335877149)
  static ::Oculus::Platform::Message_MessageType const Achievements_GetAllProgress;

  /// @brief Field Achievements_GetDefinitionsByName value: U32(1653670332)
  static ::Oculus::Platform::Message_MessageType const Achievements_GetDefinitionsByName;

  /// @brief Field Achievements_GetNextAchievementDefinitionArrayPage value: U32(712888917)
  static ::Oculus::Platform::Message_MessageType const Achievements_GetNextAchievementDefinitionArrayPage;

  /// @brief Field Achievements_GetNextAchievementProgressArrayPage value: U32(792913703)
  static ::Oculus::Platform::Message_MessageType const Achievements_GetNextAchievementProgressArrayPage;

  /// @brief Field Achievements_GetProgressByName value: U32(354837425)
  static ::Oculus::Platform::Message_MessageType const Achievements_GetProgressByName;

  /// @brief Field Achievements_Unlock value: U32(1497156573)
  static ::Oculus::Platform::Message_MessageType const Achievements_Unlock;

  /// @brief Field ApplicationLifecycle_GetRegisteredPIDs value: U32(82169698)
  static ::Oculus::Platform::Message_MessageType const ApplicationLifecycle_GetRegisteredPIDs;

  /// @brief Field ApplicationLifecycle_GetSessionKey value: U32(984570141)
  static ::Oculus::Platform::Message_MessageType const ApplicationLifecycle_GetSessionKey;

  /// @brief Field ApplicationLifecycle_RegisterSessionKey value: U32(1303818232)
  static ::Oculus::Platform::Message_MessageType const ApplicationLifecycle_RegisterSessionKey;

  /// @brief Field Application_CancelAppDownload value: U32(2082496734)
  static ::Oculus::Platform::Message_MessageType const Application_CancelAppDownload;

  /// @brief Field Application_CheckAppDownloadProgress value: U32(1429514532)
  static ::Oculus::Platform::Message_MessageType const Application_CheckAppDownloadProgress;

  /// @brief Field Application_GetVersion value: U32(1751583246)
  static ::Oculus::Platform::Message_MessageType const Application_GetVersion;

  /// @brief Field Application_InstallAppUpdateAndRelaunch value: U32(343960453)
  static ::Oculus::Platform::Message_MessageType const Application_InstallAppUpdateAndRelaunch;

  /// @brief Field Application_LaunchOtherApp value: U32(1424151032)
  static ::Oculus::Platform::Message_MessageType const Application_LaunchOtherApp;

  /// @brief Field Application_StartAppDownload value: U32(1157365870)
  static ::Oculus::Platform::Message_MessageType const Application_StartAppDownload;

  /// @brief Field AssetFile_Delete value: U32(1834842246)
  static ::Oculus::Platform::Message_MessageType const AssetFile_Delete;

  /// @brief Field AssetFile_DeleteById value: U32(1525206354)
  static ::Oculus::Platform::Message_MessageType const AssetFile_DeleteById;

  /// @brief Field AssetFile_DeleteByName value: U32(1108001231)
  static ::Oculus::Platform::Message_MessageType const AssetFile_DeleteByName;

  /// @brief Field AssetFile_Download value: U32(289710021)
  static ::Oculus::Platform::Message_MessageType const AssetFile_Download;

  /// @brief Field AssetFile_DownloadById value: U32(755009938)
  static ::Oculus::Platform::Message_MessageType const AssetFile_DownloadById;

  /// @brief Field AssetFile_DownloadByName value: U32(1664536314)
  static ::Oculus::Platform::Message_MessageType const AssetFile_DownloadByName;

  /// @brief Field AssetFile_DownloadCancel value: U32(134927303)
  static ::Oculus::Platform::Message_MessageType const AssetFile_DownloadCancel;

  /// @brief Field AssetFile_DownloadCancelById value: U32(1365611796)
  static ::Oculus::Platform::Message_MessageType const AssetFile_DownloadCancelById;

  /// @brief Field AssetFile_DownloadCancelByName value: U32(1147858170)
  static ::Oculus::Platform::Message_MessageType const AssetFile_DownloadCancelByName;

  /// @brief Field AssetFile_GetList value: U32(1258057588)
  static ::Oculus::Platform::Message_MessageType const AssetFile_GetList;

  /// @brief Field AssetFile_Status value: U32(47394656)
  static ::Oculus::Platform::Message_MessageType const AssetFile_Status;

  /// @brief Field AssetFile_StatusById value: U32(1570069816)
  static ::Oculus::Platform::Message_MessageType const AssetFile_StatusById;

  /// @brief Field AssetFile_StatusByName value: U32(1104140880)
  static ::Oculus::Platform::Message_MessageType const AssetFile_StatusByName;

  /// @brief Field Avatar_LaunchAvatarEditor value: U32(99737939)
  static ::Oculus::Platform::Message_MessageType const Avatar_LaunchAvatarEditor;

  /// @brief Field Challenges_Create value: U32(1750718017)
  static ::Oculus::Platform::Message_MessageType const Challenges_Create;

  /// @brief Field Challenges_DeclineInvite value: U32(1452177088)
  static ::Oculus::Platform::Message_MessageType const Challenges_DeclineInvite;

  /// @brief Field Challenges_Delete value: U32(642287050)
  static ::Oculus::Platform::Message_MessageType const Challenges_Delete;

  /// @brief Field Challenges_Get value: U32(2002276083)
  static ::Oculus::Platform::Message_MessageType const Challenges_Get;

  /// @brief Field Challenges_GetEntries value: U32(303739999)
  static ::Oculus::Platform::Message_MessageType const Challenges_GetEntries;

  /// @brief Field Challenges_GetEntriesAfterRank value: U32(143202943)
  static ::Oculus::Platform::Message_MessageType const Challenges_GetEntriesAfterRank;

  /// @brief Field Challenges_GetEntriesByIds value: U32(828705244)
  static ::Oculus::Platform::Message_MessageType const Challenges_GetEntriesByIds;

  /// @brief Field Challenges_GetList value: U32(1126581078)
  static ::Oculus::Platform::Message_MessageType const Challenges_GetList;

  /// @brief Field Challenges_GetNextChallenges value: U32(1534894518)
  static ::Oculus::Platform::Message_MessageType const Challenges_GetNextChallenges;

  /// @brief Field Challenges_GetNextEntries value: U32(2135728326)
  static ::Oculus::Platform::Message_MessageType const Challenges_GetNextEntries;

  /// @brief Field Challenges_GetPreviousChallenges value: U32(246678541)
  static ::Oculus::Platform::Message_MessageType const Challenges_GetPreviousChallenges;

  /// @brief Field Challenges_GetPreviousEntries value: U32(2026439792)
  static ::Oculus::Platform::Message_MessageType const Challenges_GetPreviousEntries;

  /// @brief Field Challenges_Join value: U32(556040297)
  static ::Oculus::Platform::Message_MessageType const Challenges_Join;

  /// @brief Field Challenges_Leave value: U32(694228709)
  static ::Oculus::Platform::Message_MessageType const Challenges_Leave;

  /// @brief Field Challenges_UpdateInfo value: U32(292929120)
  static ::Oculus::Platform::Message_MessageType const Challenges_UpdateInfo;

  /// @brief Field DeviceApplicationIntegrity_GetIntegrityToken value: U32(846310362)
  static ::Oculus::Platform::Message_MessageType const DeviceApplicationIntegrity_GetIntegrityToken;

  /// @brief Field Entitlement_GetIsViewerEntitled value: U32(409688241)
  static ::Oculus::Platform::Message_MessageType const Entitlement_GetIsViewerEntitled;

  /// @brief Field GroupPresence_Clear value: U32(1839897795)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_Clear;

  /// @brief Field GroupPresence_GetInvitableUsers value: U32(592167921)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_GetInvitableUsers;

  /// @brief Field GroupPresence_GetNextApplicationInviteArrayPage value: U32(83411186)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_GetNextApplicationInviteArrayPage;

  /// @brief Field GroupPresence_GetSentInvites value: U32(136710833)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_GetSentInvites;

  /// @brief Field GroupPresence_LaunchInvitePanel value: U32(262066079)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_LaunchInvitePanel;

  /// @brief Field GroupPresence_LaunchMultiplayerErrorDialog value: U32(693481252)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_LaunchMultiplayerErrorDialog;

  /// @brief Field GroupPresence_LaunchRejoinDialog value: U32(360121199)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_LaunchRejoinDialog;

  /// @brief Field GroupPresence_LaunchRosterPanel value: U32(896698498)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_LaunchRosterPanel;

  /// @brief Field GroupPresence_SendInvites value: U32(231461732)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_SendInvites;

  /// @brief Field GroupPresence_Set value: U32(1734302756)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_Set;

  /// @brief Field GroupPresence_SetDeeplinkMessageOverride value: U32(1377492749)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_SetDeeplinkMessageOverride;

  /// @brief Field GroupPresence_SetDestination value: U32(1281042058)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_SetDestination;

  /// @brief Field GroupPresence_SetIsJoinable value: U32(714018901)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_SetIsJoinable;

  /// @brief Field GroupPresence_SetLobbySession value: U32(1224693182)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_SetLobbySession;

  /// @brief Field GroupPresence_SetMatchSession value: U32(827098296)
  static ::Oculus::Platform::Message_MessageType const GroupPresence_SetMatchSession;

  /// @brief Field IAP_ConsumePurchase value: U32(532378329)
  static ::Oculus::Platform::Message_MessageType const IAP_ConsumePurchase;

  /// @brief Field IAP_GetNextProductArrayPage value: U32(467225263)
  static ::Oculus::Platform::Message_MessageType const IAP_GetNextProductArrayPage;

  /// @brief Field IAP_GetNextPurchaseArrayPage value: U32(1196886677)
  static ::Oculus::Platform::Message_MessageType const IAP_GetNextPurchaseArrayPage;

  /// @brief Field IAP_GetProductsBySKU value: U32(2124073717)
  static ::Oculus::Platform::Message_MessageType const IAP_GetProductsBySKU;

  /// @brief Field IAP_GetViewerPurchases value: U32(974095385)
  static ::Oculus::Platform::Message_MessageType const IAP_GetViewerPurchases;

  /// @brief Field IAP_GetViewerPurchasesDurableCache value: U32(1666817579)
  static ::Oculus::Platform::Message_MessageType const IAP_GetViewerPurchasesDurableCache;

  /// @brief Field IAP_LaunchCheckoutFlow value: U32(1067126029)
  static ::Oculus::Platform::Message_MessageType const IAP_LaunchCheckoutFlow;

  /// @brief Field LanguagePack_GetCurrent value: U32(529592533)
  static ::Oculus::Platform::Message_MessageType const LanguagePack_GetCurrent;

  /// @brief Field LanguagePack_SetCurrent value: U32(1531952096)
  static ::Oculus::Platform::Message_MessageType const LanguagePack_SetCurrent;

  /// @brief Field Leaderboard_Get value: U32(1792298744)
  static ::Oculus::Platform::Message_MessageType const Leaderboard_Get;

  /// @brief Field Leaderboard_GetEntries value: U32(1572030284)
  static ::Oculus::Platform::Message_MessageType const Leaderboard_GetEntries;

  /// @brief Field Leaderboard_GetEntriesAfterRank value: U32(406293487)
  static ::Oculus::Platform::Message_MessageType const Leaderboard_GetEntriesAfterRank;

  /// @brief Field Leaderboard_GetEntriesByIds value: U32(962624508)
  static ::Oculus::Platform::Message_MessageType const Leaderboard_GetEntriesByIds;

  /// @brief Field Leaderboard_GetNextEntries value: U32(1310751961)
  static ::Oculus::Platform::Message_MessageType const Leaderboard_GetNextEntries;

  /// @brief Field Leaderboard_GetNextLeaderboardArrayPage value: U32(905344667)
  static ::Oculus::Platform::Message_MessageType const Leaderboard_GetNextLeaderboardArrayPage;

  /// @brief Field Leaderboard_GetPreviousEntries value: U32(1224858304)
  static ::Oculus::Platform::Message_MessageType const Leaderboard_GetPreviousEntries;

  /// @brief Field Leaderboard_WriteEntry value: U32(293587198)
  static ::Oculus::Platform::Message_MessageType const Leaderboard_WriteEntry;

  /// @brief Field Leaderboard_WriteEntryWithSupplementaryMetric value: U32(1925616378)
  static ::Oculus::Platform::Message_MessageType const Leaderboard_WriteEntryWithSupplementaryMetric;

  /// @brief Field Media_ShareToFacebook value: U32(14912239)
  static ::Oculus::Platform::Message_MessageType const Media_ShareToFacebook;

  /// @brief Field Notification_AbuseReport_ReportButtonPressed value: U32(608644972)
  static ::Oculus::Platform::Message_MessageType const Notification_AbuseReport_ReportButtonPressed;

  /// @brief Field Notification_ApplicationLifecycle_LaunchIntentChanged value: U32(78859427)
  static ::Oculus::Platform::Message_MessageType const Notification_ApplicationLifecycle_LaunchIntentChanged;

  /// @brief Field Notification_AssetFile_DownloadUpdate value: U32(803015885)
  static ::Oculus::Platform::Message_MessageType const Notification_AssetFile_DownloadUpdate;

  /// @brief Field Notification_GroupPresence_InvitationsSent value: U32(1738179766)
  static ::Oculus::Platform::Message_MessageType const Notification_GroupPresence_InvitationsSent;

  /// @brief Field Notification_GroupPresence_JoinIntentReceived value: U32(2000194038)
  static ::Oculus::Platform::Message_MessageType const Notification_GroupPresence_JoinIntentReceived;

  /// @brief Field Notification_GroupPresence_LeaveIntentReceived value: U32(1194846749)
  static ::Oculus::Platform::Message_MessageType const Notification_GroupPresence_LeaveIntentReceived;

  /// @brief Field Notification_HTTP_Transfer value: U32(2111073839)
  static ::Oculus::Platform::Message_MessageType const Notification_HTTP_Transfer;

  /// @brief Field Notification_Livestreaming_StatusChange value: U32(575101294)
  static ::Oculus::Platform::Message_MessageType const Notification_Livestreaming_StatusChange;

  /// @brief Field Notification_MarkAsRead value: U32(1903319523)
  static ::Oculus::Platform::Message_MessageType const Notification_MarkAsRead;

  /// @brief Field Notification_NetSync_ConnectionStatusChanged value: U32(120882378)
  static ::Oculus::Platform::Message_MessageType const Notification_NetSync_ConnectionStatusChanged;

  /// @brief Field Notification_NetSync_SessionsChanged value: U32(947814198)
  static ::Oculus::Platform::Message_MessageType const Notification_NetSync_SessionsChanged;

  /// @brief Field Notification_Party_PartyUpdate value: U32(487688882)
  static ::Oculus::Platform::Message_MessageType const Notification_Party_PartyUpdate;

  /// @brief Field Notification_Voip_MicrophoneAvailabilityStateUpdate value: U32(1042336599)
  static ::Oculus::Platform::Message_MessageType const Notification_Voip_MicrophoneAvailabilityStateUpdate;

  /// @brief Field Notification_Voip_SystemVoipState value: U32(1490179237)
  static ::Oculus::Platform::Message_MessageType const Notification_Voip_SystemVoipState;

  /// @brief Field Notification_Vrcamera_GetDataChannelMessageUpdate value: U32(1860498236)
  static ::Oculus::Platform::Message_MessageType const Notification_Vrcamera_GetDataChannelMessageUpdate;

  /// @brief Field Notification_Vrcamera_GetSurfaceUpdate value: U32(938610820)
  static ::Oculus::Platform::Message_MessageType const Notification_Vrcamera_GetSurfaceUpdate;

  /// @brief Field Party_GetCurrent value: U32(1200830304)
  static ::Oculus::Platform::Message_MessageType const Party_GetCurrent;

  /// @brief Field Platform_InitializeAndroidAsynchronous value: U32(450037684)
  static ::Oculus::Platform::Message_MessageType const Platform_InitializeAndroidAsynchronous;

  /// @brief Field Platform_InitializeStandaloneOculus value: U32(1375260172)
  static ::Oculus::Platform::Message_MessageType const Platform_InitializeStandaloneOculus;

  /// @brief Field Platform_InitializeWindowsAsynchronous value: U32(1839708815)
  static ::Oculus::Platform::Message_MessageType const Platform_InitializeWindowsAsynchronous;

  /// @brief Field Platform_InitializeWithAccessToken value: U32(896085803)
  static ::Oculus::Platform::Message_MessageType const Platform_InitializeWithAccessToken;

  /// @brief Field RichPresence_Clear value: U32(1471632051)
  static ::Oculus::Platform::Message_MessageType const RichPresence_Clear;

  /// @brief Field RichPresence_GetDestinations value: U32(1483681044)
  static ::Oculus::Platform::Message_MessageType const RichPresence_GetDestinations;

  /// @brief Field RichPresence_GetNextDestinationArrayPage value: U32(1731624773)
  static ::Oculus::Platform::Message_MessageType const RichPresence_GetNextDestinationArrayPage;

  /// @brief Field RichPresence_Set value: U32(1007973641)
  static ::Oculus::Platform::Message_MessageType const RichPresence_Set;

  /// @brief Field Unknown value: U32(0)
  static ::Oculus::Platform::Message_MessageType const Unknown;

  /// @brief Field UserAgeCategory_Get value: U32(567009472)
  static ::Oculus::Platform::Message_MessageType const UserAgeCategory_Get;

  /// @brief Field UserAgeCategory_Report value: U32(776853718)
  static ::Oculus::Platform::Message_MessageType const UserAgeCategory_Report;

  /// @brief Field UserDataStore_PrivateDeleteEntryByKey value: U32(1552510782)
  static ::Oculus::Platform::Message_MessageType const UserDataStore_PrivateDeleteEntryByKey;

  /// @brief Field UserDataStore_PrivateGetEntries value: U32(1821016616)
  static ::Oculus::Platform::Message_MessageType const UserDataStore_PrivateGetEntries;

  /// @brief Field UserDataStore_PrivateGetEntryByKey value: U32(470188825)
  static ::Oculus::Platform::Message_MessageType const UserDataStore_PrivateGetEntryByKey;

  /// @brief Field UserDataStore_PrivateWriteEntry value: U32(1104315019)
  static ::Oculus::Platform::Message_MessageType const UserDataStore_PrivateWriteEntry;

  /// @brief Field UserDataStore_PublicDeleteEntryByKey value: U32(500557307)
  static ::Oculus::Platform::Message_MessageType const UserDataStore_PublicDeleteEntryByKey;

  /// @brief Field UserDataStore_PublicGetEntries value: U32(377310146)
  static ::Oculus::Platform::Message_MessageType const UserDataStore_PublicGetEntries;

  /// @brief Field UserDataStore_PublicGetEntryByKey value: U32(425486022)
  static ::Oculus::Platform::Message_MessageType const UserDataStore_PublicGetEntryByKey;

  /// @brief Field UserDataStore_PublicWriteEntry value: U32(875973130)
  static ::Oculus::Platform::Message_MessageType const UserDataStore_PublicWriteEntry;

  /// @brief Field User_Get value: U32(1808768583)
  static ::Oculus::Platform::Message_MessageType const User_Get;

  /// @brief Field User_GetAccessToken value: U32(111696574)
  static ::Oculus::Platform::Message_MessageType const User_GetAccessToken;

  /// @brief Field User_GetBlockedUsers value: U32(2099254614)
  static ::Oculus::Platform::Message_MessageType const User_GetBlockedUsers;

  /// @brief Field User_GetLoggedInUser value: U32(1131361373)
  static ::Oculus::Platform::Message_MessageType const User_GetLoggedInUser;

  /// @brief Field User_GetLoggedInUserFriends value: U32(1484532365)
  static ::Oculus::Platform::Message_MessageType const User_GetLoggedInUserFriends;

  /// @brief Field User_GetNextBlockedUserArrayPage value: U32(2083192267)
  static ::Oculus::Platform::Message_MessageType const User_GetNextBlockedUserArrayPage;

  /// @brief Field User_GetNextUserArrayPage value: U32(645723971)
  static ::Oculus::Platform::Message_MessageType const User_GetNextUserArrayPage;

  /// @brief Field User_GetNextUserCapabilityArrayPage value: U32(587854745)
  static ::Oculus::Platform::Message_MessageType const User_GetNextUserCapabilityArrayPage;

  /// @brief Field User_GetOrgScopedID value: U32(418426907)
  static ::Oculus::Platform::Message_MessageType const User_GetOrgScopedID;

  /// @brief Field User_GetSdkAccounts value: U32(1733454467)
  static ::Oculus::Platform::Message_MessageType const User_GetSdkAccounts;

  /// @brief Field User_GetUserProof value: U32(578880643)
  static ::Oculus::Platform::Message_MessageType const User_GetUserProof;

  /// @brief Field User_LaunchBlockFlow value: U32(1876305192)
  static ::Oculus::Platform::Message_MessageType const User_LaunchBlockFlow;

  /// @brief Field User_LaunchFriendRequestFlow value: U32(151303576)
  static ::Oculus::Platform::Message_MessageType const User_LaunchFriendRequestFlow;

  /// @brief Field User_LaunchUnblockFlow value: U32(346172055)
  static ::Oculus::Platform::Message_MessageType const User_LaunchUnblockFlow;

  /// @brief Field Voip_GetMicrophoneAvailability value: U32(1951195973)
  static ::Oculus::Platform::Message_MessageType const Voip_GetMicrophoneAvailability;

  /// @brief Field Voip_SetSystemVoipSuppressed value: U32(1161808298)
  static ::Oculus::Platform::Message_MessageType const Voip_SetSystemVoipSuppressed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15355 };

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
  /// @brief Method BeginInvoke, addr 0x3f7d960, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr messageHandle, ::Oculus::Platform::Message_MessageType message_type, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3f7da18, size 0xc, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Message* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3f7d94c, size 0x14, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Message* Invoke(::System::IntPtr messageHandle, ::Oculus::Platform::Message_MessageType message_type);

  static inline ::Oculus::Platform::Message_ExtraMessageTypesHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3f7d8c0, size 0x8c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15356 };

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

  /// @brief Method Finalize, addr 0x3f7a20c, size 0x8, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetAbuseReportRecording, addr 0x3f7a23c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AbuseReportRecording* GetAbuseReportRecording();

  /// @brief Method GetAchievementDefinitions, addr 0x3f7a244, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AchievementDefinitionList* GetAchievementDefinitions();

  /// @brief Method GetAchievementProgressList, addr 0x3f7a24c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AchievementProgressList* GetAchievementProgressList();

  /// @brief Method GetAchievementUpdate, addr 0x3f7a254, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AchievementUpdate* GetAchievementUpdate();

  /// @brief Method GetAppDownloadProgressResult, addr 0x3f7a25c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AppDownloadProgressResult* GetAppDownloadProgressResult();

  /// @brief Method GetAppDownloadResult, addr 0x3f7a264, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AppDownloadResult* GetAppDownloadResult();

  /// @brief Method GetApplicationInviteList, addr 0x3f7a26c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ApplicationInviteList* GetApplicationInviteList();

  /// @brief Method GetApplicationVersion, addr 0x3f7a274, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ApplicationVersion* GetApplicationVersion();

  /// @brief Method GetAssetDetails, addr 0x3f7a27c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetDetails* GetAssetDetails();

  /// @brief Method GetAssetDetailsList, addr 0x3f7a284, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetDetailsList* GetAssetDetailsList();

  /// @brief Method GetAssetFileDeleteResult, addr 0x3f7a28c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetFileDeleteResult* GetAssetFileDeleteResult();

  /// @brief Method GetAssetFileDownloadCancelResult, addr 0x3f7a294, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* GetAssetFileDownloadCancelResult();

  /// @brief Method GetAssetFileDownloadResult, addr 0x3f7a29c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetFileDownloadResult* GetAssetFileDownloadResult();

  /// @brief Method GetAssetFileDownloadUpdate, addr 0x3f7a2a4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetFileDownloadUpdate* GetAssetFileDownloadUpdate();

  /// @brief Method GetAvatarEditorResult, addr 0x3f7a2ac, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AvatarEditorResult* GetAvatarEditorResult();

  /// @brief Method GetBlockedUserList, addr 0x3f7a2b4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::BlockedUserList* GetBlockedUserList();

  /// @brief Method GetChallenge, addr 0x3f7a2bc, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::Challenge* GetChallenge();

  /// @brief Method GetChallengeEntryList, addr 0x3f7a2c4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ChallengeEntryList* GetChallengeEntryList();

  /// @brief Method GetChallengeList, addr 0x3f7a2cc, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ChallengeList* GetChallengeList();

  /// @brief Method GetDataStore, addr 0x3f7a2d4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetDataStore();

  /// @brief Method GetDestinationList, addr 0x3f7a2dc, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::DestinationList* GetDestinationList();

  /// @brief Method GetError, addr 0x3f7a224, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::Error* GetError();

  /// @brief Method GetGroupPresenceJoinIntent, addr 0x3f7a2e4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::GroupPresenceJoinIntent* GetGroupPresenceJoinIntent();

  /// @brief Method GetGroupPresenceLeaveIntent, addr 0x3f7a2ec, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* GetGroupPresenceLeaveIntent();

  /// @brief Method GetHttpTransferUpdate, addr 0x3f7a22c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::HttpTransferUpdate* GetHttpTransferUpdate();

  /// @brief Method GetInstalledApplicationList, addr 0x3f7a2f4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::InstalledApplicationList* GetInstalledApplicationList();

  /// @brief Method GetInvitePanelResultInfo, addr 0x3f7a2fc, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::InvitePanelResultInfo* GetInvitePanelResultInfo();

  /// @brief Method GetLaunchBlockFlowResult, addr 0x3f7a304, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LaunchBlockFlowResult* GetLaunchBlockFlowResult();

  /// @brief Method GetLaunchFriendRequestFlowResult, addr 0x3f7a30c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LaunchFriendRequestFlowResult* GetLaunchFriendRequestFlowResult();

  /// @brief Method GetLaunchInvitePanelFlowResult, addr 0x3f7a314, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LaunchInvitePanelFlowResult* GetLaunchInvitePanelFlowResult();

  /// @brief Method GetLaunchReportFlowResult, addr 0x3f7a31c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LaunchReportFlowResult* GetLaunchReportFlowResult();

  /// @brief Method GetLaunchUnblockFlowResult, addr 0x3f7a324, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LaunchUnblockFlowResult* GetLaunchUnblockFlowResult();

  /// @brief Method GetLeaderboardDidUpdate, addr 0x3f7a32c, size 0x8, virtual true, abstract: false, final false
  inline bool GetLeaderboardDidUpdate();

  /// @brief Method GetLeaderboardEntryList, addr 0x3f7a334, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LeaderboardEntryList* GetLeaderboardEntryList();

  /// @brief Method GetLeaderboardList, addr 0x3f7a33c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LeaderboardList* GetLeaderboardList();

  /// @brief Method GetLinkedAccountList, addr 0x3f7a344, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LinkedAccountList* GetLinkedAccountList();

  /// @brief Method GetLivestreamingApplicationStatus, addr 0x3f7a34c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LivestreamingApplicationStatus* GetLivestreamingApplicationStatus();

  /// @brief Method GetLivestreamingStartResult, addr 0x3f7a354, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LivestreamingStartResult* GetLivestreamingStartResult();

  /// @brief Method GetLivestreamingStatus, addr 0x3f7a35c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LivestreamingStatus* GetLivestreamingStatus();

  /// @brief Method GetLivestreamingVideoStats, addr 0x3f7a364, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LivestreamingVideoStats* GetLivestreamingVideoStats();

  /// @brief Method GetMicrophoneAvailabilityState, addr 0x3f7a36c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* GetMicrophoneAvailabilityState();

  /// @brief Method GetNetSyncConnection, addr 0x3f7a374, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::NetSyncConnection* GetNetSyncConnection();

  /// @brief Method GetNetSyncSessionList, addr 0x3f7a37c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::NetSyncSessionList* GetNetSyncSessionList();

  /// @brief Method GetNetSyncSessionsChangedNotification, addr 0x3f7a384, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::NetSyncSessionsChangedNotification* GetNetSyncSessionsChangedNotification();

  /// @brief Method GetNetSyncSetSessionPropertyResult, addr 0x3f7a38c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* GetNetSyncSetSessionPropertyResult();

  /// @brief Method GetNetSyncVoipAttenuationValueList, addr 0x3f7a394, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* GetNetSyncVoipAttenuationValueList();

  /// @brief Method GetOrgScopedID, addr 0x3f7a39c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::OrgScopedID* GetOrgScopedID();

  /// @brief Method GetParty, addr 0x3f7a3a4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::Party* GetParty();

  /// @brief Method GetPartyID, addr 0x3f7a3ac, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PartyID* GetPartyID();

  /// @brief Method GetPartyUpdateNotification, addr 0x3f7a3b4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PartyUpdateNotification* GetPartyUpdateNotification();

  /// @brief Method GetPidList, addr 0x3f7a3bc, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PidList* GetPidList();

  /// @brief Method GetPlatformInitialize, addr 0x3f7a234, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PlatformInitialize* GetPlatformInitialize();

  /// @brief Method GetProductList, addr 0x3f7a3c4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ProductList* GetProductList();

  /// @brief Method GetPurchase, addr 0x3f7a3cc, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::Purchase* GetPurchase();

  /// @brief Method GetPurchaseList, addr 0x3f7a3d4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PurchaseList* GetPurchaseList();

  /// @brief Method GetRejoinDialogResult, addr 0x3f7a3dc, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::RejoinDialogResult* GetRejoinDialogResult();

  /// @brief Method GetSdkAccountList, addr 0x3f7a3e4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::SdkAccountList* GetSdkAccountList();

  /// @brief Method GetSendInvitesResult, addr 0x3f7a3ec, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::SendInvitesResult* GetSendInvitesResult();

  /// @brief Method GetShareMediaResult, addr 0x3f7a3f4, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ShareMediaResult* GetShareMediaResult();

  /// @brief Method GetString, addr 0x3f7a3fc, size 0x8, virtual true, abstract: false, final false
  inline ::StringW GetString();

  /// @brief Method GetSystemVoipState, addr 0x3f7a404, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::SystemVoipState* GetSystemVoipState();

  /// @brief Method GetUser, addr 0x3f7a40c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::User* GetUser();

  /// @brief Method GetUserAccountAgeCategory, addr 0x3f7a414, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserAccountAgeCategory* GetUserAccountAgeCategory();

  /// @brief Method GetUserCapabilityList, addr 0x3f7a41c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserCapabilityList* GetUserCapabilityList();

  /// @brief Method GetUserDataStoreUpdateResponse, addr 0x3f7a424, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserDataStoreUpdateResponse* GetUserDataStoreUpdateResponse();

  /// @brief Method GetUserList, addr 0x3f7a42c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserList* GetUserList();

  /// @brief Method GetUserProof, addr 0x3f7a434, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserProof* GetUserProof();

  /// @brief Method GetUserReportID, addr 0x3f7a43c, size 0x8, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserReportID* GetUserReportID();

  static inline ::Oculus::Platform::Message* New_ctor(::System::IntPtr c_message);

  /// @brief Method ParseMessageHandle, addr 0x3f7a444, size 0x1800, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Message* ParseMessageHandle(::System::IntPtr messageHandle);

  /// @brief Method PopMessage, addr 0x3f5cb30, size 0xd4, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x3f79f60, size 0x2ac, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

  static inline ::Oculus::Platform::Message_ExtraMessageTypesHandler* getStaticF__HandleExtraMessageTypes_k__BackingField();

  /// @brief Method get_HandleExtraMessageTypes, addr 0x3f7d838, size 0x48, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Message_ExtraMessageTypesHandler* get_HandleExtraMessageTypes();

  /// @brief Method get_IsError, addr 0x3f58a9c, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsError();

  /// @brief Method get_RequestID, addr 0x3f7a21c, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_RequestID();

  /// @brief Method get_Type, addr 0x3f7a214, size 0x8, virtual false, abstract: false, final false
  inline ::Oculus::Platform::Message_MessageType get_Type();

  static inline void setStaticF__HandleExtraMessageTypes_k__BackingField(::Oculus::Platform::Message_ExtraMessageTypesHandler* value);

  /// @brief Method set_HandleExtraMessageTypes, addr 0x3f7d7ec, size 0x4c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15357 };

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
