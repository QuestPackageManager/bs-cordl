#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Message)
namespace Oculus::Platform::Models {
class AvatarEditorResult;
}
namespace Oculus::Platform::Models {
class InstalledApplicationList;
}
namespace Oculus::Platform::Models {
class LaunchInvitePanelFlowResult;
}
namespace Oculus::Platform::Models {
class ApplicationVersion;
}
namespace Oculus::Platform::Models {
class LaunchUnblockFlowResult;
}
namespace Oculus::Platform::Models {
class ChallengeList;
}
namespace Oculus::Platform::Models {
class PartyUpdateNotification;
}
namespace Oculus::Platform::Models {
class SdkAccountList;
}
namespace Oculus::Platform::Models {
class AbuseReportRecording;
}
namespace Oculus::Platform::Models {
class LaunchBlockFlowResult;
}
namespace Oculus::Platform::Models {
class LeaderboardList;
}
namespace Oculus::Platform::Models {
class NetSyncConnection;
}
namespace Oculus::Platform::Models {
class MicrophoneAvailabilityState;
}
namespace Oculus::Platform::Models {
class NetSyncSetSessionPropertyResult;
}
namespace Oculus::Platform::Models {
class LivestreamingStatus;
}
namespace Oculus::Platform::Models {
class LivestreamingApplicationStatus;
}
namespace Oculus::Platform::Models {
class UserCapabilityList;
}
namespace Oculus::Platform::Models {
class PidList;
}
namespace Oculus::Platform::Models {
class AppDownloadResult;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadCancelResult;
}
namespace Oculus::Platform::Models {
class AssetDetails;
}
namespace Oculus::Platform::Models {
class LinkedAccountList;
}
namespace Oculus::Platform::Models {
class AchievementProgressList;
}
namespace Oculus::Platform::Models {
class PartyID;
}
namespace Oculus::Platform::Models {
class NetSyncSessionList;
}
namespace Oculus::Platform::Models {
class GroupPresenceLeaveIntent;
}
namespace Oculus::Platform::Models {
class AssetFileDeleteResult;
}
namespace Oculus::Platform::Models {
class LivestreamingStartResult;
}
namespace Oculus::Platform::Models {
class DestinationList;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
namespace Oculus::Platform::Models {
class NetSyncVoipAttenuationValueList;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace Oculus::Platform {
struct __Message__MessageType;
}
namespace Oculus::Platform::Models {
class BlockedUserList;
}
namespace Oculus::Platform::Models {
class PurchaseList;
}
namespace Oculus::Platform::Models {
class SendInvitesResult;
}
namespace Oculus::Platform::Models {
class ApplicationInviteList;
}
namespace Oculus::Platform::Models {
class LaunchFriendRequestFlowResult;
}
namespace Oculus::Platform::Models {
class UserProof;
}
namespace Oculus::Platform::Models {
class AchievementDefinitionList;
}
namespace Oculus::Platform::Models {
class AssetDetailsList;
}
namespace Oculus::Platform::Models {
class ChallengeEntryList;
}
namespace Oculus::Platform::Models {
class AppDownloadProgressResult;
}
namespace Oculus::Platform {
class __Message__ExtraMessageTypesHandler;
}
namespace Oculus::Platform::Models {
class ShareMediaResult;
}
namespace Oculus::Platform::Models {
class SystemVoipState;
}
namespace Oculus::Platform::Models {
class UserReportID;
}
namespace Oculus::Platform::Models {
class LeaderboardEntryList;
}
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform::Models {
class AchievementUpdate;
}
namespace Oculus::Platform::Models {
class HttpTransferUpdate;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadUpdate;
}
namespace Oculus::Platform::Models {
class UserDataStoreUpdateResponse;
}
namespace Oculus::Platform::Models {
class UserList;
}
namespace Oculus::Platform::Models {
class Party;
}
namespace Oculus::Platform::Models {
class LivestreamingVideoStats;
}
namespace Oculus::Platform::Models {
class OrgScopedID;
}
namespace Oculus::Platform {
class __Message__Callback;
}
namespace Oculus::Platform::Models {
class Error;
}
namespace Oculus::Platform::Models {
class LaunchReportFlowResult;
}
namespace Oculus::Platform::Models {
class InvitePanelResultInfo;
}
namespace Oculus::Platform::Models {
class User;
}
namespace Oculus::Platform::Models {
class GroupPresenceJoinIntent;
}
namespace Oculus::Platform::Models {
class ProductList;
}
namespace Oculus::Platform::Models {
class UserAccountAgeCategory;
}
namespace Oculus::Platform::Models {
class Challenge;
}
namespace Oculus::Platform::Models {
class RejoinDialogResult;
}
namespace Oculus::Platform::Models {
class Purchase;
}
namespace Oculus::Platform::Models {
class NetSyncSessionsChangedNotification;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Oculus::Platform {
struct __Message__MessageType;
}
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
class __Message__Callback;
}
namespace Oculus::Platform {
class __Message__ExtraMessageTypesHandler;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::__Message__MessageType);
MARK_REF_PTR_T(::Oculus::Platform::Message);
MARK_REF_PTR_T(::Oculus::Platform::__Message__Callback);
MARK_REF_PTR_T(::Oculus::Platform::__Message__ExtraMessageTypesHandler);
// Type: ::Callback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13263))
// CS Name: ::Message::Callback*
class CORDL_TYPE __Message__Callback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::Oculus::Platform::__Message__Callback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x26ca570 size 0x12c virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x26f0580 size 0x14 virtual true final false
  inline void Invoke(::Oculus::Platform::Message* message);

  /// @brief Method BeginInvoke addr 0x26f0594 size 0x20 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::Oculus::Platform::Message* message, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x26f05b4 size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__Message__Callback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Message__Callback(__Message__Callback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Message__Callback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Message__Callback(__Message__Callback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Message__Callback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__Message__Callback, 0x80>, "Size mismatch!");

} // namespace Oculus::Platform
// Type: ::MessageType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13264))
// CS Name: ::Message::MessageType
struct CORDL_TYPE __Message__MessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct ____Message__MessageType_Unwrapped
  enum struct ____Message__MessageType_Unwrapped : uint32_t {
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
  constexpr operator ____Message__MessageType_Unwrapped() const noexcept {
    return static_cast<____Message__MessageType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __Message__MessageType(uint32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Message__MessageType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<uint32_t>(0xfc86f000u)
  static ::Oculus::Platform::__Message__MessageType const Unknown;

  /// @brief Field AbuseReport_ReportRequestHandled value: static_cast<uint32_t>(0x8efc86f0u)
  static ::Oculus::Platform::__Message__MessageType const AbuseReport_ReportRequestHandled;

  /// @brief Field Achievements_AddCount value: static_cast<uint32_t>(0x3162e7c3u)
  static ::Oculus::Platform::__Message__MessageType const Achievements_AddCount;

  /// @brief Field Achievements_AddFields value: static_cast<uint32_t>(0x2921aad4u)
  static ::Oculus::Platform::__Message__MessageType const Achievements_AddFields;

  /// @brief Field Achievements_GetAllDefinitions value: static_cast<uint32_t>(0x8d45d3c3u)
  static ::Oculus::Platform::__Message__MessageType const Achievements_GetAllDefinitions;

  /// @brief Field Achievements_GetAllProgress value: static_cast<uint32_t>(0x9fde1df0u)
  static ::Oculus::Platform::__Message__MessageType const Achievements_GetAllProgress;

  /// @brief Field Achievements_GetDefinitionsByName value: static_cast<uint32_t>(0x9101bcf0u)
  static ::Oculus::Platform::__Message__MessageType const Achievements_GetDefinitionsByName;

  /// @brief Field Achievements_GetNextAchievementDefinitionArrayPage value: static_cast<uint32_t>(0x7dd255f0u)
  static ::Oculus::Platform::__Message__MessageType const Achievements_GetNextAchievementDefinitionArrayPage;

  /// @brief Field Achievements_GetNextAchievementProgressArrayPage value: static_cast<uint32_t>(0x42e727f0u)
  static ::Oculus::Platform::__Message__MessageType const Achievements_GetNextAchievementProgressArrayPage;

  /// @brief Field Achievements_GetProgressByName value: static_cast<uint32_t>(0xb16326d5u)
  static ::Oculus::Platform::__Message__MessageType const Achievements_GetProgressByName;

  /// @brief Field Achievements_Unlock value: static_cast<uint32_t>(0x3ccbddf0u)
  static ::Oculus::Platform::__Message__MessageType const Achievements_Unlock;

  /// @brief Field ApplicationLifecycle_GetRegisteredPIDs value: static_cast<uint32_t>(0x62cfe5c4u)
  static ::Oculus::Platform::__Message__MessageType const ApplicationLifecycle_GetRegisteredPIDs;

  /// @brief Field ApplicationLifecycle_GetSessionKey value: static_cast<uint32_t>(0xaf591df0u)
  static ::Oculus::Platform::__Message__MessageType const ApplicationLifecycle_GetSessionKey;

  /// @brief Field ApplicationLifecycle_RegisterSessionKey value: static_cast<uint32_t>(0xb6aff8f0u)
  static ::Oculus::Platform::__Message__MessageType const ApplicationLifecycle_RegisterSessionKey;

  /// @brief Field Application_CancelAppDownload value: static_cast<uint32_t>(0x2060def0u)
  static ::Oculus::Platform::__Message__MessageType const Application_CancelAppDownload;

  /// @brief Field Application_CheckAppDownloadProgress value: static_cast<uint32_t>(0x34a924f0u)
  static ::Oculus::Platform::__Message__MessageType const Application_CheckAppDownloadProgress;

  /// @brief Field Application_GetVersion value: static_cast<uint32_t>(0x670a0ef0u)
  static ::Oculus::Platform::__Message__MessageType const Application_GetVersion;

  /// @brief Field Application_InstallAppUpdateAndRelaunch value: static_cast<uint32_t>(0x856b80d4u)
  static ::Oculus::Platform::__Message__MessageType const Application_InstallAppUpdateAndRelaunch;

  /// @brief Field Application_LaunchOtherApp value: static_cast<uint32_t>(0xe2d1f8f0u)
  static ::Oculus::Platform::__Message__MessageType const Application_LaunchOtherApp;

  /// @brief Field Application_StartAppDownload value: static_cast<uint32_t>(0xfc006ef0u)
  static ::Oculus::Platform::__Message__MessageType const Application_StartAppDownload;

  /// @brief Field AssetFile_Delete value: static_cast<uint32_t>(0x5d7886f0u)
  static ::Oculus::Platform::__Message__MessageType const AssetFile_Delete;

  /// @brief Field AssetFile_DeleteById value: static_cast<uint32_t>(0xe8cd52f0u)
  static ::Oculus::Platform::__Message__MessageType const AssetFile_DeleteById;

  /// @brief Field AssetFile_DeleteByName value: static_cast<uint32_t>(0xac1cff0u)
  static ::Oculus::Platform::__Message__MessageType const AssetFile_DeleteByName;

  /// @brief Field AssetFile_Download value: static_cast<uint32_t>(0xc59f44d1u)
  static ::Oculus::Platform::__Message__MessageType const AssetFile_Download;

  /// @brief Field AssetFile_DownloadById value: static_cast<uint32_t>(0x8992f0u)
  static ::Oculus::Platform::__Message__MessageType const AssetFile_DownloadById;

  /// @brief Field AssetFile_DownloadByName value: static_cast<uint32_t>(0x36cefaf0u)
  static ::Oculus::Platform::__Message__MessageType const AssetFile_DownloadByName;

  /// @brief Field AssetFile_DownloadCancel value: static_cast<uint32_t>(0xc7d30ac8u)
  static ::Oculus::Platform::__Message__MessageType const AssetFile_DownloadCancel;

  /// @brief Field AssetFile_DownloadCancelById value: static_cast<uint32_t>(0x659514f0u)
  static ::Oculus::Platform::__Message__MessageType const AssetFile_DownloadCancelById;

  /// @brief Field AssetFile_DownloadCancelByName value: static_cast<uint32_t>(0x6aecfaf0u)
  static ::Oculus::Platform::__Message__MessageType const AssetFile_DownloadCancelByName;

  /// @brief Field AssetFile_GetList value: static_cast<uint32_t>(0xfc6f74f0u)
  static ::Oculus::Platform::__Message__MessageType const AssetFile_GetList;

  /// @brief Field AssetFile_Status value: static_cast<uint32_t>(0x602fd3c2u)
  static ::Oculus::Platform::__Message__MessageType const AssetFile_Status;

  /// @brief Field AssetFile_StatusById value: static_cast<uint32_t>(0x955d38f0u)
  static ::Oculus::Platform::__Message__MessageType const AssetFile_StatusById;

  /// @brief Field AssetFile_StatusByName value: static_cast<uint32_t>(0xcfda50f0u)
  static ::Oculus::Platform::__Message__MessageType const AssetFile_StatusByName;

  /// @brief Field Avatar_LaunchAvatarEditor value: static_cast<uint32_t>(0x53e1f1c5u)
  static ::Oculus::Platform::__Message__MessageType const Avatar_LaunchAvatarEditor;

  /// @brief Field Challenges_Create value: static_cast<uint32_t>(0x59d641f0u)
  static ::Oculus::Platform::__Message__MessageType const Challenges_Create;

  /// @brief Field Challenges_DeclineInvite value: static_cast<uint32_t>(0x8e76c0f0u)
  static ::Oculus::Platform::__Message__MessageType const Challenges_DeclineInvite;

  /// @brief Field Challenges_Delete value: static_cast<uint32_t>(0x4885caf0u)
  static ::Oculus::Platform::__Message__MessageType const Challenges_Delete;

  /// @brief Field Challenges_Get value: static_cast<uint32_t>(0x584ef3f0u)
  static ::Oculus::Platform::__Message__MessageType const Challenges_Get;

  /// @brief Field Challenges_GetEntries value: static_cast<uint32_t>(0x5fb41ad2u)
  static ::Oculus::Platform::__Message__MessageType const Challenges_GetEntries;

  /// @brief Field Challenges_GetEntriesAfterRank value: static_cast<uint32_t>(0x7f1a89c8u)
  static ::Oculus::Platform::__Message__MessageType const Challenges_GetEntriesAfterRank;

  /// @brief Field Challenges_GetEntriesByIds value: static_cast<uint32_t>(0x6509dcf0u)
  static ::Oculus::Platform::__Message__MessageType const Challenges_GetEntriesByIds;

  /// @brief Field Challenges_GetList value: static_cast<uint32_t>(0x264356f0u)
  static ::Oculus::Platform::__Message__MessageType const Challenges_GetList;

  /// @brief Field Challenges_GetNextChallenges value: static_cast<uint32_t>(0x7ca1b6f0u)
  static ::Oculus::Platform::__Message__MessageType const Challenges_GetNextChallenges;

  /// @brief Field Challenges_GetNextEntries value: static_cast<uint32_t>(0x4ca0c6f0u)
  static ::Oculus::Platform::__Message__MessageType const Challenges_GetNextEntries;

  /// @brief Field Challenges_GetPreviousChallenges value: static_cast<uint32_t>(0xd04b4ceu)
  static ::Oculus::Platform::__Message__MessageType const Challenges_GetPreviousChallenges;

  /// @brief Field Challenges_GetPreviousEntries value: static_cast<uint32_t>(0xc90470f0u)
  static ::Oculus::Platform::__Message__MessageType const Challenges_GetPreviousEntries;

  /// @brief Field Challenges_Join value: static_cast<uint32_t>(0x248069f0u)
  static ::Oculus::Platform::__Message__MessageType const Challenges_Join;

  /// @brief Field Challenges_Leave value: static_cast<uint32_t>(0x6116e5f0u)
  static ::Oculus::Platform::__Message__MessageType const Challenges_Leave;

  /// @brief Field Challenges_UpdateInfo value: static_cast<uint32_t>(0x60be75d1u)
  static ::Oculus::Platform::__Message__MessageType const Challenges_UpdateInfo;

  /// @brief Field DeviceApplicationIntegrity_GetIntegrityToken value: static_cast<uint32_t>(0x71abdaf0u)
  static ::Oculus::Platform::__Message__MessageType const DeviceApplicationIntegrity_GetIntegrityToken;

  /// @brief Field Entitlement_GetIsViewerEntitled value: static_cast<uint32_t>(0xb1586bd8u)
  static ::Oculus::Platform::__Message__MessageType const Entitlement_GetIsViewerEntitled;

  /// @brief Field GroupPresence_Clear value: static_cast<uint32_t>(0xaa9cc3f0u)
  static ::Oculus::Platform::__Message__MessageType const GroupPresence_Clear;

  /// @brief Field GroupPresence_GetInvitableUsers value: static_cast<uint32_t>(0x4bc3f1f0u)
  static ::Oculus::Platform::__Message__MessageType const GroupPresence_GetInvitableUsers;

  /// @brief Field GroupPresence_GetNextApplicationInviteArrayPage value: static_cast<uint32_t>(0xf2c0f8c4u)
  static ::Oculus::Platform::__Message__MessageType const GroupPresence_GetNextApplicationInviteArrayPage;

  /// @brief Field GroupPresence_GetSentInvites value: static_cast<uint32_t>(0xb10a26c8u)
  static ::Oculus::Platform::__Message__MessageType const GroupPresence_GetSentInvites;

  /// @brief Field GroupPresence_LaunchInvitePanel value: static_cast<uint32_t>(0x9fcf9ecfu)
  static ::Oculus::Platform::__Message__MessageType const GroupPresence_LaunchInvitePanel;

  /// @brief Field GroupPresence_LaunchMultiplayerErrorDialog value: static_cast<uint32_t>(0x55af24f0u)
  static ::Oculus::Platform::__Message__MessageType const GroupPresence_LaunchMultiplayerErrorDialog;

  /// @brief Field GroupPresence_LaunchRejoinDialog value: static_cast<uint32_t>(0x6f0377d5u)
  static ::Oculus::Platform::__Message__MessageType const GroupPresence_LaunchRejoinDialog;

  /// @brief Field GroupPresence_LaunchRosterPanel value: static_cast<uint32_t>(0x728882f0u)
  static ::Oculus::Platform::__Message__MessageType const GroupPresence_LaunchRosterPanel;

  /// @brief Field GroupPresence_SendInvites value: static_cast<uint32_t>(0x64d3cbcdu)
  static ::Oculus::Platform::__Message__MessageType const GroupPresence_SendInvites;

  /// @brief Field GroupPresence_Set value: static_cast<uint32_t>(0x5f5c24f0u)
  static ::Oculus::Platform::__Message__MessageType const GroupPresence_Set;

  /// @brief Field GroupPresence_SetDeeplinkMessageOverride value: static_cast<uint32_t>(0x1adf0df0u)
  static ::Oculus::Platform::__Message__MessageType const GroupPresence_SetDeeplinkMessageOverride;

  /// @brief Field GroupPresence_SetDestination value: static_cast<uint32_t>(0x5b268af0u)
  static ::Oculus::Platform::__Message__MessageType const GroupPresence_SetDestination;

  /// @brief Field GroupPresence_SetIsJoinable value: static_cast<uint32_t>(0x8f1055f0u)
  static ::Oculus::Platform::__Message__MessageType const GroupPresence_SetIsJoinable;

  /// @brief Field GroupPresence_SetLobbySession value: static_cast<uint32_t>(0xff55bef0u)
  static ::Oculus::Platform::__Message__MessageType const GroupPresence_SetLobbySession;

  /// @brief Field GroupPresence_SetMatchSession value: static_cast<uint32_t>(0x4c84b8f0u)
  static ::Oculus::Platform::__Message__MessageType const GroupPresence_SetMatchSession;

  /// @brief Field IAP_ConsumePurchase value: static_cast<uint32_t>(0xd972bbdfu)
  static ::Oculus::Platform::__Message__MessageType const IAP_ConsumePurchase;

  /// @brief Field IAP_GetNextProductArrayPage value: static_cast<uint32_t>(0xaf4ad9dbu)
  static ::Oculus::Platform::__Message__MessageType const IAP_GetNextProductArrayPage;

  /// @brief Field IAP_GetNextPurchaseArrayPage value: static_cast<uint32_t>(0x570a95f0u)
  static ::Oculus::Platform::__Message__MessageType const IAP_GetNextPurchaseArrayPage;

  /// @brief Field IAP_GetProductsBySKU value: static_cast<uint32_t>(0x9acaf5f0u)
  static ::Oculus::Platform::__Message__MessageType const IAP_GetProductsBySKU;

  /// @brief Field IAP_GetViewerPurchases value: static_cast<uint32_t>(0xf8419f0u)
  static ::Oculus::Platform::__Message__MessageType const IAP_GetViewerPurchases;

  /// @brief Field IAP_GetViewerPurchasesDurableCache value: static_cast<uint32_t>(0x599e2bf0u)
  static ::Oculus::Platform::__Message__MessageType const IAP_GetViewerPurchasesDurableCache;

  /// @brief Field IAP_LaunchCheckoutFlow value: static_cast<uint32_t>(0x9b0d0df0u)
  static ::Oculus::Platform::__Message__MessageType const IAP_LaunchCheckoutFlow;

  /// @brief Field LanguagePack_GetCurrent value: static_cast<uint32_t>(0xd5f090dfu)
  static ::Oculus::Platform::__Message__MessageType const LanguagePack_GetCurrent;

  /// @brief Field LanguagePack_SetCurrent value: static_cast<uint32_t>(0x4fbbe0f0u)
  static ::Oculus::Platform::__Message__MessageType const LanguagePack_SetCurrent;

  /// @brief Field Leaderboard_Get value: static_cast<uint32_t>(0xd44ef8f0u)
  static ::Oculus::Platform::__Message__MessageType const Leaderboard_Get;

  /// @brief Field Leaderboard_GetEntries value: static_cast<uint32_t>(0xb3474cf0u)
  static ::Oculus::Platform::__Message__MessageType const Leaderboard_GetEntries;

  /// @brief Field Leaderboard_GetEntriesAfterRank value: static_cast<uint32_t>(0xef8b37d8u)
  static ::Oculus::Platform::__Message__MessageType const Leaderboard_GetEntriesAfterRank;

  /// @brief Field Leaderboard_GetEntriesByIds value: static_cast<uint32_t>(0x607bfcf0u)
  static ::Oculus::Platform::__Message__MessageType const Leaderboard_GetEntriesByIds;

  /// @brief Field Leaderboard_GetNextEntries value: static_cast<uint32_t>(0x207cd9f0u)
  static ::Oculus::Platform::__Message__MessageType const Leaderboard_GetNextEntries;

  /// @brief Field Leaderboard_GetNextLeaderboardArrayPage value: static_cast<uint32_t>(0xf6769bf0u)
  static ::Oculus::Platform::__Message__MessageType const Leaderboard_GetNextLeaderboardArrayPage;

  /// @brief Field Leaderboard_GetPreviousEntries value: static_cast<uint32_t>(0x1dac0f0u)
  static ::Oculus::Platform::__Message__MessageType const Leaderboard_GetPreviousEntries;

  /// @brief Field Leaderboard_WriteEntry value: static_cast<uint32_t>(0xfec87fd1u)
  static ::Oculus::Platform::__Message__MessageType const Leaderboard_WriteEntry;

  /// @brief Field Leaderboard_WriteEntryWithSupplementaryMetric value: static_cast<uint32_t>(0xc692faf0u)
  static ::Oculus::Platform::__Message__MessageType const Leaderboard_WriteEntryWithSupplementaryMetric;

  /// @brief Field Media_ShareToFacebook value: static_cast<uint32_t>(0xef8ae3c0u)
  static ::Oculus::Platform::__Message__MessageType const Media_ShareToFacebook;

  /// @brief Field Notification_MarkAsRead value: static_cast<uint32_t>(0x7259e3f0u)
  static ::Oculus::Platform::__Message__MessageType const Notification_MarkAsRead;

  /// @brief Field Party_GetCurrent value: static_cast<uint32_t>(0x933760f0u)
  static ::Oculus::Platform::__Message__MessageType const Party_GetCurrent;

  /// @brief Field RichPresence_Clear value: static_cast<uint32_t>(0xb752b3f0u)
  static ::Oculus::Platform::__Message__MessageType const RichPresence_Clear;

  /// @brief Field RichPresence_GetDestinations value: static_cast<uint32_t>(0x6f2d14f0u)
  static ::Oculus::Platform::__Message__MessageType const RichPresence_GetDestinations;

  /// @brief Field RichPresence_GetNextDestinationArrayPage value: static_cast<uint32_t>(0x367f45f0u)
  static ::Oculus::Platform::__Message__MessageType const RichPresence_GetNextDestinationArrayPage;

  /// @brief Field RichPresence_Set value: static_cast<uint32_t>(0x147509f0u)
  static ::Oculus::Platform::__Message__MessageType const RichPresence_Set;

  /// @brief Field UserAgeCategory_Get value: static_cast<uint32_t>(0xcbe0c0f0u)
  static ::Oculus::Platform::__Message__MessageType const UserAgeCategory_Get;

  /// @brief Field UserAgeCategory_Report value: static_cast<uint32_t>(0x4dd8d6f0u)
  static ::Oculus::Platform::__Message__MessageType const UserAgeCategory_Report;

  /// @brief Field UserDataStore_PrivateDeleteEntryByKey value: static_cast<uint32_t>(0x896f3ef0u)
  static ::Oculus::Platform::__Message__MessageType const UserDataStore_PrivateDeleteEntryByKey;

  /// @brief Field UserDataStore_PrivateGetEntries value: static_cast<uint32_t>(0x8a8228f0u)
  static ::Oculus::Platform::__Message__MessageType const UserDataStore_PrivateGetEntries;

  /// @brief Field UserDataStore_PrivateGetEntryByKey value: static_cast<uint32_t>(0x198306dcu)
  static ::Oculus::Platform::__Message__MessageType const UserDataStore_PrivateGetEntryByKey;

  /// @brief Field UserDataStore_PrivateWriteEntry value: static_cast<uint32_t>(0xd2828bf0u)
  static ::Oculus::Platform::__Message__MessageType const UserDataStore_PrivateWriteEntry;

  /// @brief Field UserDataStore_PublicDeleteEntryByKey value: static_cast<uint32_t>(0xfbe5d5ddu)
  static ::Oculus::Platform::__Message__MessageType const UserDataStore_PublicDeleteEntryByKey;

  /// @brief Field UserDataStore_PublicGetEntries value: static_cast<uint32_t>(0xc24b7dd6u)
  static ::Oculus::Platform::__Message__MessageType const UserDataStore_PublicGetEntries;

  /// @brief Field UserDataStore_PublicGetEntryByKey value: static_cast<uint32_t>(0xc6665cd9u)
  static ::Oculus::Platform::__Message__MessageType const UserDataStore_PublicGetEntryByKey;

  /// @brief Field UserDataStore_PublicWriteEntry value: static_cast<uint32_t>(0x364a0af0u)
  static ::Oculus::Platform::__Message__MessageType const UserDataStore_PublicWriteEntry;

  /// @brief Field User_Get value: static_cast<uint32_t>(0xcf9e47f0u)
  static ::Oculus::Platform::__Message__MessageType const User_Get;

  /// @brief Field User_GetAccessToken value: static_cast<uint32_t>(0xbe5aa8c6u)
  static ::Oculus::Platform::__Message__MessageType const User_GetAccessToken;

  /// @brief Field User_GetBlockedUsers value: static_cast<uint32_t>(0x201556f0u)
  static ::Oculus::Platform::__Message__MessageType const User_GetBlockedUsers;

  /// @brief Field User_GetLoggedInUser value: static_cast<uint32_t>(0x6f345df0u)
  static ::Oculus::Platform::__Message__MessageType const User_GetLoggedInUser;

  /// @brief Field User_GetLoggedInUserFriends value: static_cast<uint32_t>(0x7c2a8df0u)
  static ::Oculus::Platform::__Message__MessageType const User_GetLoggedInUserFriends;

  /// @brief Field User_GetNextBlockedUserArrayPage value: static_cast<uint32_t>(0x2afdcbf0u)
  static ::Oculus::Platform::__Message__MessageType const User_GetNextBlockedUserArrayPage;

  /// @brief Field User_GetNextUserArrayPage value: static_cast<uint32_t>(0x7cf743f0u)
  static ::Oculus::Platform::__Message__MessageType const User_GetNextUserArrayPage;

  /// @brief Field User_GetNextUserCapabilityArrayPage value: static_cast<uint32_t>(0x9f399f0u)
  static ::Oculus::Platform::__Message__MessageType const User_GetNextUserCapabilityArrayPage;

  /// @brief Field User_GetOrgScopedID value: static_cast<uint32_t>(0x1bb0f0d8u)
  static ::Oculus::Platform::__Message__MessageType const User_GetOrgScopedID;

  /// @brief Field User_GetSdkAccounts value: static_cast<uint32_t>(0x526a83f0u)
  static ::Oculus::Platform::__Message__MessageType const User_GetSdkAccounts;

  /// @brief Field User_GetUserProof value: static_cast<uint32_t>(0x810483f0u)
  static ::Oculus::Platform::__Message__MessageType const User_GetUserProof;

  /// @brief Field User_LaunchBlockFlow value: static_cast<uint32_t>(0xd62528f0u)
  static ::Oculus::Platform::__Message__MessageType const User_LaunchBlockFlow;

  /// @brief Field User_LaunchFriendRequestFlow value: static_cast<uint32_t>(0x98b504c9u)
  static ::Oculus::Platform::__Message__MessageType const User_LaunchFriendRequestFlow;

  /// @brief Field User_LaunchUnblockFlow value: static_cast<uint32_t>(0x972aa2d4u)
  static ::Oculus::Platform::__Message__MessageType const User_LaunchUnblockFlow;

  /// @brief Field Voip_GetMicrophoneAvailability value: static_cast<uint32_t>(0x4ce345f0u)
  static ::Oculus::Platform::__Message__MessageType const Voip_GetMicrophoneAvailability;

  /// @brief Field Voip_SetSystemVoipSuppressed value: static_cast<uint32_t>(0x3fc9aaf0u)
  static ::Oculus::Platform::__Message__MessageType const Voip_SetSystemVoipSuppressed;

  /// @brief Field Notification_AbuseReport_ReportButtonPressed value: static_cast<uint32_t>(0x472f6cf0u)
  static ::Oculus::Platform::__Message__MessageType const Notification_AbuseReport_ReportButtonPressed;

  /// @brief Field Notification_ApplicationLifecycle_LaunchIntentChanged value: static_cast<uint32_t>(0xa34cb3c4u)
  static ::Oculus::Platform::__Message__MessageType const Notification_ApplicationLifecycle_LaunchIntentChanged;

  /// @brief Field Notification_AssetFile_DownloadUpdate value: static_cast<uint32_t>(0xdd0ccdf0u)
  static ::Oculus::Platform::__Message__MessageType const Notification_AssetFile_DownloadUpdate;

  /// @brief Field Notification_GroupPresence_InvitationsSent value: static_cast<uint32_t>(0x9a84b6f0u)
  static ::Oculus::Platform::__Message__MessageType const Notification_GroupPresence_InvitationsSent;

  /// @brief Field Notification_GroupPresence_JoinIntentReceived value: static_cast<uint32_t>(0x3889f6f0u)
  static ::Oculus::Platform::__Message__MessageType const Notification_GroupPresence_JoinIntentReceived;

  /// @brief Field Notification_GroupPresence_LeaveIntentReceived value: static_cast<uint32_t>(0x37ea1df0u)
  static ::Oculus::Platform::__Message__MessageType const Notification_GroupPresence_LeaveIntentReceived;

  /// @brief Field Notification_HTTP_Transfer value: static_cast<uint32_t>(0xd46e2ff0u)
  static ::Oculus::Platform::__Message__MessageType const Notification_HTTP_Transfer;

  /// @brief Field Notification_Livestreaming_StatusChange value: static_cast<uint32_t>(0x47596ef0u)
  static ::Oculus::Platform::__Message__MessageType const Notification_Livestreaming_StatusChange;

  /// @brief Field Notification_NetSync_ConnectionStatusChanged value: static_cast<uint32_t>(0xca8434c7u)
  static ::Oculus::Platform::__Message__MessageType const Notification_NetSync_ConnectionStatusChanged;

  /// @brief Field Notification_NetSync_SessionsChanged value: static_cast<uint32_t>(0x7e7f36f0u)
  static ::Oculus::Platform::__Message__MessageType const Notification_NetSync_SessionsChanged;

  /// @brief Field Notification_Party_PartyUpdate value: static_cast<uint32_t>(0xb28a11ddu)
  static ::Oculus::Platform::__Message__MessageType const Notification_Party_PartyUpdate;

  /// @brief Field Notification_Voip_MicrophoneAvailabilityStateUpdate value: static_cast<uint32_t>(0x20cb57f0u)
  static ::Oculus::Platform::__Message__MessageType const Notification_Voip_MicrophoneAvailabilityStateUpdate;

  /// @brief Field Notification_Voip_SystemVoipState value: static_cast<uint32_t>(0xd254a5f0u)
  static ::Oculus::Platform::__Message__MessageType const Notification_Voip_SystemVoipState;

  /// @brief Field Notification_Vrcamera_GetDataChannelMessageUpdate value: static_cast<uint32_t>(0xe4f33cf0u)
  static ::Oculus::Platform::__Message__MessageType const Notification_Vrcamera_GetDataChannelMessageUpdate;

  /// @brief Field Notification_Vrcamera_GetSurfaceUpdate value: static_cast<uint32_t>(0xf21084f0u)
  static ::Oculus::Platform::__Message__MessageType const Notification_Vrcamera_GetSurfaceUpdate;

  /// @brief Field Platform_InitializeWithAccessToken value: static_cast<uint32_t>(0x692f2bf0u)
  static ::Oculus::Platform::__Message__MessageType const Platform_InitializeWithAccessToken;

  /// @brief Field Platform_InitializeStandaloneOculus value: static_cast<uint32_t>(0xf8ce0cf0u)
  static ::Oculus::Platform::__Message__MessageType const Platform_InitializeStandaloneOculus;

  /// @brief Field Platform_InitializeAndroidAsynchronous value: static_cast<uint32_t>(0xb407d3dau)
  static ::Oculus::Platform::__Message__MessageType const Platform_InitializeAndroidAsynchronous;

  /// @brief Field Platform_InitializeWindowsAsynchronous value: static_cast<uint32_t>(0xa7ba8ff0u)
  static ::Oculus::Platform::__Message__MessageType const Platform_InitializeWindowsAsynchronous;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__Message__MessageType, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
// Type: ::ExtraMessageTypesHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13265))
// CS Name: ::Message::ExtraMessageTypesHandler*
class CORDL_TYPE __Message__ExtraMessageTypesHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::Oculus::Platform::__Message__ExtraMessageTypesHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x26f05c0 size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x26f0684 size 0x14 virtual true final false
  inline ::Oculus::Platform::Message* Invoke(void* messageHandle, ::Oculus::Platform::__Message__MessageType message_type);

  /// @brief Method BeginInvoke addr 0x26f0698 size 0xb4 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(void* messageHandle, ::Oculus::Platform::__Message__MessageType message_type, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x26f074c size 0xc virtual true final false
  inline ::Oculus::Platform::Message* EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__Message__ExtraMessageTypesHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Message__ExtraMessageTypesHandler(__Message__ExtraMessageTypesHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Message__ExtraMessageTypesHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Message__ExtraMessageTypesHandler(__Message__ExtraMessageTypesHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Message__ExtraMessageTypesHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__Message__ExtraMessageTypesHandler, 0x80>, "Size mismatch!");

} // namespace Oculus::Platform
// Type: Oculus.Platform::Message
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(13264))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13266))
// CS Name: ::Oculus.Platform::Message*
class CORDL_TYPE Message : public ::System::Object {
public:
  // Declarations
  using ExtraMessageTypesHandler = ::Oculus::Platform::__Message__ExtraMessageTypesHandler;

  using MessageType = ::Oculus::Platform::__Message__MessageType;

  using Callback = ::Oculus::Platform::__Message__Callback;

  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __get_type, put = __set_type))::Oculus::Platform::__Message__MessageType type;

  /// @brief Field requestID, offset 0x18, size 0x8
  __declspec(property(get = __get_requestID, put = __set_requestID)) uint64_t requestID;

  /// @brief Field error, offset 0x20, size 0x8
  __declspec(property(get = __get_error, put = __set_error))::Oculus::Platform::Models::Error* error;

  /// @brief Field <HandleExtraMessageTypes>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__HandleExtraMessageTypes_k__BackingField,
                             put = setStaticF__HandleExtraMessageTypes_k__BackingField))::Oculus::Platform::__Message__ExtraMessageTypesHandler* _HandleExtraMessageTypes_k__BackingField;

  __declspec(property(get = get_Type))::Oculus::Platform::__Message__MessageType Type;

  __declspec(property(get = get_IsError)) bool IsError;

  __declspec(property(get = get_RequestID)) uint64_t RequestID;

  constexpr ::Oculus::Platform::__Message__MessageType& __get_type();

  constexpr ::Oculus::Platform::__Message__MessageType const& __get_type() const;

  constexpr void __set_type(::Oculus::Platform::__Message__MessageType value);

  constexpr uint64_t& __get_requestID();

  constexpr uint64_t const& __get_requestID() const;

  constexpr void __set_requestID(uint64_t value);

  constexpr ::Oculus::Platform::Models::Error*& __get_error();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Error*> const& __get_error() const;

  constexpr void __set_error(::Oculus::Platform::Models::Error* value);

  static inline void setStaticF__HandleExtraMessageTypes_k__BackingField(::Oculus::Platform::__Message__ExtraMessageTypesHandler* value);

  static inline ::Oculus::Platform::__Message__ExtraMessageTypesHandler* getStaticF__HandleExtraMessageTypes_k__BackingField();

  static inline ::Oculus::Platform::Message* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x26ecb24 size 0x2b0 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method Finalize addr 0x26ecdd4 size 0x8 virtual true final false
  inline void Finalize();

  /// @brief Method get_Type addr 0x26ecddc size 0x8 virtual false final false
  inline ::Oculus::Platform::__Message__MessageType get_Type();

  /// @brief Method get_IsError addr 0x26cb31c size 0x10 virtual false final false
  inline bool get_IsError();

  /// @brief Method get_RequestID addr 0x26ecde4 size 0x8 virtual false final false
  inline uint64_t get_RequestID();

  /// @brief Method GetError addr 0x26ecdec size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::Error* GetError();

  /// @brief Method GetHttpTransferUpdate addr 0x26ecdf4 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::HttpTransferUpdate* GetHttpTransferUpdate();

  /// @brief Method GetPlatformInitialize addr 0x26ecdfc size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::PlatformInitialize* GetPlatformInitialize();

  /// @brief Method GetAbuseReportRecording addr 0x26ece04 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::AbuseReportRecording* GetAbuseReportRecording();

  /// @brief Method GetAchievementDefinitions addr 0x26ece0c size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::AchievementDefinitionList* GetAchievementDefinitions();

  /// @brief Method GetAchievementProgressList addr 0x26ece14 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::AchievementProgressList* GetAchievementProgressList();

  /// @brief Method GetAchievementUpdate addr 0x26ece1c size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::AchievementUpdate* GetAchievementUpdate();

  /// @brief Method GetAppDownloadProgressResult addr 0x26ece24 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::AppDownloadProgressResult* GetAppDownloadProgressResult();

  /// @brief Method GetAppDownloadResult addr 0x26ece2c size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::AppDownloadResult* GetAppDownloadResult();

  /// @brief Method GetApplicationInviteList addr 0x26ece34 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::ApplicationInviteList* GetApplicationInviteList();

  /// @brief Method GetApplicationVersion addr 0x26ece3c size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::ApplicationVersion* GetApplicationVersion();

  /// @brief Method GetAssetDetails addr 0x26ece44 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::AssetDetails* GetAssetDetails();

  /// @brief Method GetAssetDetailsList addr 0x26ece4c size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::AssetDetailsList* GetAssetDetailsList();

  /// @brief Method GetAssetFileDeleteResult addr 0x26ece54 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::AssetFileDeleteResult* GetAssetFileDeleteResult();

  /// @brief Method GetAssetFileDownloadCancelResult addr 0x26ece5c size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* GetAssetFileDownloadCancelResult();

  /// @brief Method GetAssetFileDownloadResult addr 0x26ece64 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::AssetFileDownloadResult* GetAssetFileDownloadResult();

  /// @brief Method GetAssetFileDownloadUpdate addr 0x26ece6c size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::AssetFileDownloadUpdate* GetAssetFileDownloadUpdate();

  /// @brief Method GetAvatarEditorResult addr 0x26ece74 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::AvatarEditorResult* GetAvatarEditorResult();

  /// @brief Method GetBlockedUserList addr 0x26ece7c size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::BlockedUserList* GetBlockedUserList();

  /// @brief Method GetChallenge addr 0x26ece84 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::Challenge* GetChallenge();

  /// @brief Method GetChallengeEntryList addr 0x26ece8c size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::ChallengeEntryList* GetChallengeEntryList();

  /// @brief Method GetChallengeList addr 0x26ece94 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::ChallengeList* GetChallengeList();

  /// @brief Method GetDataStore addr 0x26ece9c size 0x8 virtual true final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetDataStore();

  /// @brief Method GetDestinationList addr 0x26ecea4 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::DestinationList* GetDestinationList();

  /// @brief Method GetGroupPresenceJoinIntent addr 0x26eceac size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::GroupPresenceJoinIntent* GetGroupPresenceJoinIntent();

  /// @brief Method GetGroupPresenceLeaveIntent addr 0x26eceb4 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* GetGroupPresenceLeaveIntent();

  /// @brief Method GetInstalledApplicationList addr 0x26ecebc size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::InstalledApplicationList* GetInstalledApplicationList();

  /// @brief Method GetInvitePanelResultInfo addr 0x26ecec4 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::InvitePanelResultInfo* GetInvitePanelResultInfo();

  /// @brief Method GetLaunchBlockFlowResult addr 0x26ececc size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::LaunchBlockFlowResult* GetLaunchBlockFlowResult();

  /// @brief Method GetLaunchFriendRequestFlowResult addr 0x26eced4 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::LaunchFriendRequestFlowResult* GetLaunchFriendRequestFlowResult();

  /// @brief Method GetLaunchInvitePanelFlowResult addr 0x26ecedc size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::LaunchInvitePanelFlowResult* GetLaunchInvitePanelFlowResult();

  /// @brief Method GetLaunchReportFlowResult addr 0x26ecee4 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::LaunchReportFlowResult* GetLaunchReportFlowResult();

  /// @brief Method GetLaunchUnblockFlowResult addr 0x26eceec size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::LaunchUnblockFlowResult* GetLaunchUnblockFlowResult();

  /// @brief Method GetLeaderboardDidUpdate addr 0x26ecef4 size 0x8 virtual true final false
  inline bool GetLeaderboardDidUpdate();

  /// @brief Method GetLeaderboardEntryList addr 0x26ecefc size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::LeaderboardEntryList* GetLeaderboardEntryList();

  /// @brief Method GetLeaderboardList addr 0x26ecf04 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::LeaderboardList* GetLeaderboardList();

  /// @brief Method GetLinkedAccountList addr 0x26ecf0c size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::LinkedAccountList* GetLinkedAccountList();

  /// @brief Method GetLivestreamingApplicationStatus addr 0x26ecf14 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::LivestreamingApplicationStatus* GetLivestreamingApplicationStatus();

  /// @brief Method GetLivestreamingStartResult addr 0x26ecf1c size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::LivestreamingStartResult* GetLivestreamingStartResult();

  /// @brief Method GetLivestreamingStatus addr 0x26ecf24 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::LivestreamingStatus* GetLivestreamingStatus();

  /// @brief Method GetLivestreamingVideoStats addr 0x26ecf2c size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::LivestreamingVideoStats* GetLivestreamingVideoStats();

  /// @brief Method GetMicrophoneAvailabilityState addr 0x26ecf34 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* GetMicrophoneAvailabilityState();

  /// @brief Method GetNetSyncConnection addr 0x26ecf3c size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::NetSyncConnection* GetNetSyncConnection();

  /// @brief Method GetNetSyncSessionList addr 0x26ecf44 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::NetSyncSessionList* GetNetSyncSessionList();

  /// @brief Method GetNetSyncSessionsChangedNotification addr 0x26ecf4c size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::NetSyncSessionsChangedNotification* GetNetSyncSessionsChangedNotification();

  /// @brief Method GetNetSyncSetSessionPropertyResult addr 0x26ecf54 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* GetNetSyncSetSessionPropertyResult();

  /// @brief Method GetNetSyncVoipAttenuationValueList addr 0x26ecf5c size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* GetNetSyncVoipAttenuationValueList();

  /// @brief Method GetOrgScopedID addr 0x26ecf64 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::OrgScopedID* GetOrgScopedID();

  /// @brief Method GetParty addr 0x26ecf6c size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::Party* GetParty();

  /// @brief Method GetPartyID addr 0x26ecf74 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::PartyID* GetPartyID();

  /// @brief Method GetPartyUpdateNotification addr 0x26ecf7c size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::PartyUpdateNotification* GetPartyUpdateNotification();

  /// @brief Method GetPidList addr 0x26ecf84 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::PidList* GetPidList();

  /// @brief Method GetProductList addr 0x26ecf8c size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::ProductList* GetProductList();

  /// @brief Method GetPurchase addr 0x26ecf94 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::Purchase* GetPurchase();

  /// @brief Method GetPurchaseList addr 0x26ecf9c size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::PurchaseList* GetPurchaseList();

  /// @brief Method GetRejoinDialogResult addr 0x26ecfa4 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::RejoinDialogResult* GetRejoinDialogResult();

  /// @brief Method GetSdkAccountList addr 0x26ecfac size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::SdkAccountList* GetSdkAccountList();

  /// @brief Method GetSendInvitesResult addr 0x26ecfb4 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::SendInvitesResult* GetSendInvitesResult();

  /// @brief Method GetShareMediaResult addr 0x26ecfbc size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::ShareMediaResult* GetShareMediaResult();

  /// @brief Method GetString addr 0x26ecfc4 size 0x8 virtual true final false
  inline ::StringW GetString();

  /// @brief Method GetSystemVoipState addr 0x26ecfcc size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::SystemVoipState* GetSystemVoipState();

  /// @brief Method GetUser addr 0x26ecfd4 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::User* GetUser();

  /// @brief Method GetUserAccountAgeCategory addr 0x26ecfdc size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::UserAccountAgeCategory* GetUserAccountAgeCategory();

  /// @brief Method GetUserCapabilityList addr 0x26ecfe4 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::UserCapabilityList* GetUserCapabilityList();

  /// @brief Method GetUserDataStoreUpdateResponse addr 0x26ecfec size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::UserDataStoreUpdateResponse* GetUserDataStoreUpdateResponse();

  /// @brief Method GetUserList addr 0x26ecff4 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::UserList* GetUserList();

  /// @brief Method GetUserProof addr 0x26ecffc size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::UserProof* GetUserProof();

  /// @brief Method GetUserReportID addr 0x26ed004 size 0x8 virtual true final false
  inline ::Oculus::Platform::Models::UserReportID* GetUserReportID();

  /// @brief Method ParseMessageHandle addr 0x26ed00c size 0x18ec virtual false final false
  static inline ::Oculus::Platform::Message* ParseMessageHandle(void* messageHandle);

  /// @brief Method PopMessage addr 0x26cf514 size 0xd4 virtual false final false
  static inline ::Oculus::Platform::Message* PopMessage();

  /// @brief Method set_HandleExtraMessageTypes addr 0x26f04ec size 0x4c virtual false final false
  static inline void set_HandleExtraMessageTypes(::Oculus::Platform::__Message__ExtraMessageTypesHandler* value);

  /// @brief Method get_HandleExtraMessageTypes addr 0x26f0538 size 0x48 virtual false final false
  static inline ::Oculus::Platform::__Message__ExtraMessageTypesHandler* get_HandleExtraMessageTypes();

  // Ctor Parameters [CppParam { name: "", ty: "Message", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Message(Message&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Message", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Message(Message const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Message();

public:
  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  ::Oculus::Platform::__Message__MessageType ___type;

  /// @brief Field requestID, offset: 0x18, size: 0x8, def value: None
  uint64_t ___requestID;

  /// @brief Field error, offset: 0x20, size: 0x8, def value: None
  ::Oculus::Platform::Models::Error* ___error;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Message, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__Message__MessageType, "Oculus.Platform", "Message/MessageType");
NEED_NO_BOX(::Oculus::Platform::Message);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Message*, "Oculus.Platform", "Message");
NEED_NO_BOX(::Oculus::Platform::__Message__Callback);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__Message__Callback*, "Oculus.Platform", "Message/Callback");
NEED_NO_BOX(::Oculus::Platform::__Message__ExtraMessageTypesHandler);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__Message__ExtraMessageTypesHandler*, "Oculus.Platform", "Message/ExtraMessageTypesHandler");
