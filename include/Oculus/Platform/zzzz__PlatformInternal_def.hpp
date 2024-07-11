#pragma once
// IWYU pragma private; include "Oculus/Platform/PlatformInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformInternal)
namespace Oculus::Platform::Models {
class HttpTransferUpdate;
}
namespace Oculus::Platform::Models {
class LinkedAccountList;
}
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace Oculus::Platform {
struct ServiceProvider;
}
namespace Oculus::Platform {
template <typename T> class __Message_1__Callback;
}
namespace Oculus::Platform {
struct __Message__MessageType;
}
namespace Oculus::Platform {
class __PlatformInternal__HTTP;
}
namespace Oculus::Platform {
struct __PlatformInternal__MessageTypeInternal;
}
namespace Oculus::Platform {
class __PlatformInternal__Users;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
struct __PlatformInternal__MessageTypeInternal;
}
namespace Oculus::Platform {
class PlatformInternal;
}
namespace Oculus::Platform {
class __PlatformInternal__HTTP;
}
namespace Oculus::Platform {
class __PlatformInternal__Users;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::__PlatformInternal__MessageTypeInternal);
MARK_REF_PTR_T(::Oculus::Platform::PlatformInternal);
MARK_REF_PTR_T(::Oculus::Platform::__PlatformInternal__HTTP);
MARK_REF_PTR_T(::Oculus::Platform::__PlatformInternal__Users);
// Type: ::MessageTypeInternal
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// CS Name: ::PlatformInternal::MessageTypeInternal
struct CORDL_TYPE __PlatformInternal__MessageTypeInternal {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct ____PlatformInternal__MessageTypeInternal_Unwrapped
  enum struct ____PlatformInternal__MessageTypeInternal_Unwrapped : uint32_t {
    __E_AbuseReport_LaunchAdvancedReportFlow = static_cast<uint32_t>(0xb13a6ef0u),
    __E_Application_ExecuteCoordinatedLaunch = static_cast<uint32_t>(0x7db4f4f0u),
    __E_Application_GetInstalledApplications = static_cast<uint32_t>(0xf744cf0u),
    __E_Avatar_UpdateMetaData = static_cast<uint32_t>(0xcfd98ef0u),
    __E_Cal_FinalizeApplication = static_cast<uint32_t>(0xd5cba9ddu),
    __E_Cal_GetSuggestedApplications = static_cast<uint32_t>(0x707015f0u),
    __E_Cal_ProposeApplication = static_cast<uint32_t>(0x83f2ddf0u),
    __E_Colocation_GetCurrentMapUuid = static_cast<uint32_t>(0x557eb2f0u),
    __E_Colocation_RequestMap = static_cast<uint32_t>(0x15666df0u),
    __E_Colocation_ShareMap = static_cast<uint32_t>(0xddc46dd8u),
    __E_DeviceApplicationIntegrity_GetAttestationToken = static_cast<uint32_t>(0xdea32fd0u),
    __E_GraphAPI_Get = static_cast<uint32_t>(0xff006ef0u),
    __E_GraphAPI_Post = static_cast<uint32_t>(0xa5a7c4f0u),
    __E_HTTP_Get = static_cast<uint32_t>(0xb63223f0u),
    __E_HTTP_GetToFile = static_cast<uint32_t>(0x81dc59f0u),
    __E_HTTP_MultiPartPost = static_cast<uint32_t>(0x42d210f0u),
    __E_HTTP_Post = static_cast<uint32_t>(0x36a54ff0u),
    __E_Livestreaming_IsAllowedForApplication = static_cast<uint32_t>(0x768d6dcbu),
    __E_Livestreaming_StartPartyStream = static_cast<uint32_t>(0x2f5cdcf0u),
    __E_Livestreaming_StartStream = static_cast<uint32_t>(0x1ac7bef0u),
    __E_Livestreaming_StopPartyStream = static_cast<uint32_t>(0x670f58f0u),
    __E_Livestreaming_StopStream = static_cast<uint32_t>(0xe40dcaf0u),
    __E_Livestreaming_UpdateMicStatus = static_cast<uint32_t>(0x877d57dcu),
    __E_NetSync_Connect = static_cast<uint32_t>(0x6d855ff0u),
    __E_NetSync_Disconnect = static_cast<uint32_t>(0xb5fe69d5u),
    __E_NetSync_GetSessions = static_cast<uint32_t>(0xd60a35f0u),
    __E_NetSync_GetVoipAttenuation = static_cast<uint32_t>(0x17ca2ad1u),
    __E_NetSync_GetVoipAttenuationDefault = static_cast<uint32_t>(0x7ba8a0f0u),
    __E_NetSync_SetVoipAttenuation = static_cast<uint32_t>(0x97d7f6f0u),
    __E_NetSync_SetVoipAttenuationModel = static_cast<uint32_t>(0x94ad8ef0u),
    __E_NetSync_SetVoipChannelCfg = static_cast<uint32_t>(0x95a4f3f0u),
    __E_NetSync_SetVoipGroup = static_cast<uint32_t>(0x129c8ef0u),
    __E_NetSync_SetVoipListentoChannels = static_cast<uint32_t>(0xd0ea32f0u),
    __E_NetSync_SetVoipMicSource = static_cast<uint32_t>(0x2f770f0u),
    __E_NetSync_SetVoipSessionMuted = static_cast<uint32_t>(0x85ff0af0u),
    __E_NetSync_SetVoipSpeaktoChannels = static_cast<uint32_t>(0xafcdd5f0u),
    __E_NetSync_SetVoipStreamMode = static_cast<uint32_t>(0xe19d37f0u),
    __E_Party_Create = static_cast<uint32_t>(0x4f1bd3dau),
    __E_Party_GatherInApplication = static_cast<uint32_t>(0x87c183f0u),
    __E_Party_Get = static_cast<uint32_t>(0x8953bdf0u),
    __E_Party_GetCurrentForUser = static_cast<uint32_t>(0xcbff2af0u),
    __E_Party_Invite = static_cast<uint32_t>(0xb5c4e3f0u),
    __E_Party_Join = static_cast<uint32_t>(0x27c73f0u),
    __E_Party_Leave = static_cast<uint32_t>(0x9206d1f0u),
    __E_RichPresence_SetDestination = static_cast<uint32_t>(0x32e10df0u),
    __E_RichPresence_SetIsJoinable = static_cast<uint32_t>(0x9b1f61f0u),
    __E_RichPresence_SetLobbySession = static_cast<uint32_t>(0x10917f0u),
    __E_RichPresence_SetMatchSession = static_cast<uint32_t>(0xdffc8ef0u),
    __E_Room_CreateOrUpdateAndJoinNamed = static_cast<uint32_t>(0x8e0a91f0u),
    __E_Room_GetNamedRooms = static_cast<uint32_t>(0x8c6e7dc7u),
    __E_Room_GetSocialRooms = static_cast<uint32_t>(0x881d76f0u),
    __E_User_CancelRecordingForReportFlow = static_cast<uint32_t>(0x49d1e0c3u),
    __E_User_GetLinkedAccounts = static_cast<uint32_t>(0x93f456f0u),
    __E_User_GetUserCapabilities = static_cast<uint32_t>(0x7c311cd2u),
    __E_User_LaunchReportFlow = static_cast<uint32_t>(0x62a011f0u),
    __E_User_LaunchReportFlow2 = static_cast<uint32_t>(0x835863f0u),
    __E_User_NewEntitledTestUser = static_cast<uint32_t>(0x31f74d1u),
    __E_User_NewTestUser = static_cast<uint32_t>(0xe84f8cf0u),
    __E_User_NewTestUserFriends = static_cast<uint32_t>(0xc726d7deu),
    __E_User_StartRecordingForReportFlow = static_cast<uint32_t>(0x6e33e3f0u),
    __E_User_StopRecordingAndLaunchReportFlow = static_cast<uint32_t>(0x788c8bf0u),
    __E_User_StopRecordingAndLaunchReportFlow2 = static_cast<uint32_t>(0x2bb3c2d9u),
    __E_User_TestUserCreateDeviceManifest = static_cast<uint32_t>(0x70b2bdf0u),
    __E_Voip_ReportAppVoipSessions = static_cast<uint32_t>(0xce5152d8u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PlatformInternal__MessageTypeInternal_Unwrapped() const noexcept {
    return static_cast<____PlatformInternal__MessageTypeInternal_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformInternal__MessageTypeInternal();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __PlatformInternal__MessageTypeInternal(uint32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  /// @brief Field AbuseReport_LaunchAdvancedReportFlow value: static_cast<uint32_t>(0xb13a6ef0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const AbuseReport_LaunchAdvancedReportFlow;

  /// @brief Field Application_ExecuteCoordinatedLaunch value: static_cast<uint32_t>(0x7db4f4f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Application_ExecuteCoordinatedLaunch;

  /// @brief Field Application_GetInstalledApplications value: static_cast<uint32_t>(0xf744cf0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Application_GetInstalledApplications;

  /// @brief Field Avatar_UpdateMetaData value: static_cast<uint32_t>(0xcfd98ef0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Avatar_UpdateMetaData;

  /// @brief Field Cal_FinalizeApplication value: static_cast<uint32_t>(0xd5cba9ddu)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Cal_FinalizeApplication;

  /// @brief Field Cal_GetSuggestedApplications value: static_cast<uint32_t>(0x707015f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Cal_GetSuggestedApplications;

  /// @brief Field Cal_ProposeApplication value: static_cast<uint32_t>(0x83f2ddf0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Cal_ProposeApplication;

  /// @brief Field Colocation_GetCurrentMapUuid value: static_cast<uint32_t>(0x557eb2f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Colocation_GetCurrentMapUuid;

  /// @brief Field Colocation_RequestMap value: static_cast<uint32_t>(0x15666df0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Colocation_RequestMap;

  /// @brief Field Colocation_ShareMap value: static_cast<uint32_t>(0xddc46dd8u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Colocation_ShareMap;

  /// @brief Field DeviceApplicationIntegrity_GetAttestationToken value: static_cast<uint32_t>(0xdea32fd0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const DeviceApplicationIntegrity_GetAttestationToken;

  /// @brief Field GraphAPI_Get value: static_cast<uint32_t>(0xff006ef0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const GraphAPI_Get;

  /// @brief Field GraphAPI_Post value: static_cast<uint32_t>(0xa5a7c4f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const GraphAPI_Post;

  /// @brief Field HTTP_Get value: static_cast<uint32_t>(0xb63223f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const HTTP_Get;

  /// @brief Field HTTP_GetToFile value: static_cast<uint32_t>(0x81dc59f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const HTTP_GetToFile;

  /// @brief Field HTTP_MultiPartPost value: static_cast<uint32_t>(0x42d210f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const HTTP_MultiPartPost;

  /// @brief Field HTTP_Post value: static_cast<uint32_t>(0x36a54ff0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const HTTP_Post;

  /// @brief Field Livestreaming_IsAllowedForApplication value: static_cast<uint32_t>(0x768d6dcbu)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Livestreaming_IsAllowedForApplication;

  /// @brief Field Livestreaming_StartPartyStream value: static_cast<uint32_t>(0x2f5cdcf0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Livestreaming_StartPartyStream;

  /// @brief Field Livestreaming_StartStream value: static_cast<uint32_t>(0x1ac7bef0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Livestreaming_StartStream;

  /// @brief Field Livestreaming_StopPartyStream value: static_cast<uint32_t>(0x670f58f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Livestreaming_StopPartyStream;

  /// @brief Field Livestreaming_StopStream value: static_cast<uint32_t>(0xe40dcaf0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Livestreaming_StopStream;

  /// @brief Field Livestreaming_UpdateMicStatus value: static_cast<uint32_t>(0x877d57dcu)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Livestreaming_UpdateMicStatus;

  /// @brief Field NetSync_Connect value: static_cast<uint32_t>(0x6d855ff0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const NetSync_Connect;

  /// @brief Field NetSync_Disconnect value: static_cast<uint32_t>(0xb5fe69d5u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const NetSync_Disconnect;

  /// @brief Field NetSync_GetSessions value: static_cast<uint32_t>(0xd60a35f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const NetSync_GetSessions;

  /// @brief Field NetSync_GetVoipAttenuation value: static_cast<uint32_t>(0x17ca2ad1u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const NetSync_GetVoipAttenuation;

  /// @brief Field NetSync_GetVoipAttenuationDefault value: static_cast<uint32_t>(0x7ba8a0f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const NetSync_GetVoipAttenuationDefault;

  /// @brief Field NetSync_SetVoipAttenuation value: static_cast<uint32_t>(0x97d7f6f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const NetSync_SetVoipAttenuation;

  /// @brief Field NetSync_SetVoipAttenuationModel value: static_cast<uint32_t>(0x94ad8ef0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const NetSync_SetVoipAttenuationModel;

  /// @brief Field NetSync_SetVoipChannelCfg value: static_cast<uint32_t>(0x95a4f3f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const NetSync_SetVoipChannelCfg;

  /// @brief Field NetSync_SetVoipGroup value: static_cast<uint32_t>(0x129c8ef0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const NetSync_SetVoipGroup;

  /// @brief Field NetSync_SetVoipListentoChannels value: static_cast<uint32_t>(0xd0ea32f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const NetSync_SetVoipListentoChannels;

  /// @brief Field NetSync_SetVoipMicSource value: static_cast<uint32_t>(0x2f770f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const NetSync_SetVoipMicSource;

  /// @brief Field NetSync_SetVoipSessionMuted value: static_cast<uint32_t>(0x85ff0af0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const NetSync_SetVoipSessionMuted;

  /// @brief Field NetSync_SetVoipSpeaktoChannels value: static_cast<uint32_t>(0xafcdd5f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const NetSync_SetVoipSpeaktoChannels;

  /// @brief Field NetSync_SetVoipStreamMode value: static_cast<uint32_t>(0xe19d37f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const NetSync_SetVoipStreamMode;

  /// @brief Field Party_Create value: static_cast<uint32_t>(0x4f1bd3dau)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Party_Create;

  /// @brief Field Party_GatherInApplication value: static_cast<uint32_t>(0x87c183f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Party_GatherInApplication;

  /// @brief Field Party_Get value: static_cast<uint32_t>(0x8953bdf0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Party_Get;

  /// @brief Field Party_GetCurrentForUser value: static_cast<uint32_t>(0xcbff2af0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Party_GetCurrentForUser;

  /// @brief Field Party_Invite value: static_cast<uint32_t>(0xb5c4e3f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Party_Invite;

  /// @brief Field Party_Join value: static_cast<uint32_t>(0x27c73f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Party_Join;

  /// @brief Field Party_Leave value: static_cast<uint32_t>(0x9206d1f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Party_Leave;

  /// @brief Field RichPresence_SetDestination value: static_cast<uint32_t>(0x32e10df0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const RichPresence_SetDestination;

  /// @brief Field RichPresence_SetIsJoinable value: static_cast<uint32_t>(0x9b1f61f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const RichPresence_SetIsJoinable;

  /// @brief Field RichPresence_SetLobbySession value: static_cast<uint32_t>(0x10917f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const RichPresence_SetLobbySession;

  /// @brief Field RichPresence_SetMatchSession value: static_cast<uint32_t>(0xdffc8ef0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const RichPresence_SetMatchSession;

  /// @brief Field Room_CreateOrUpdateAndJoinNamed value: static_cast<uint32_t>(0x8e0a91f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Room_CreateOrUpdateAndJoinNamed;

  /// @brief Field Room_GetNamedRooms value: static_cast<uint32_t>(0x8c6e7dc7u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Room_GetNamedRooms;

  /// @brief Field Room_GetSocialRooms value: static_cast<uint32_t>(0x881d76f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Room_GetSocialRooms;

  /// @brief Field User_CancelRecordingForReportFlow value: static_cast<uint32_t>(0x49d1e0c3u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const User_CancelRecordingForReportFlow;

  /// @brief Field User_GetLinkedAccounts value: static_cast<uint32_t>(0x93f456f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const User_GetLinkedAccounts;

  /// @brief Field User_GetUserCapabilities value: static_cast<uint32_t>(0x7c311cd2u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const User_GetUserCapabilities;

  /// @brief Field User_LaunchReportFlow value: static_cast<uint32_t>(0x62a011f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const User_LaunchReportFlow;

  /// @brief Field User_LaunchReportFlow2 value: static_cast<uint32_t>(0x835863f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const User_LaunchReportFlow2;

  /// @brief Field User_NewEntitledTestUser value: static_cast<uint32_t>(0x31f74d1u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const User_NewEntitledTestUser;

  /// @brief Field User_NewTestUser value: static_cast<uint32_t>(0xe84f8cf0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const User_NewTestUser;

  /// @brief Field User_NewTestUserFriends value: static_cast<uint32_t>(0xc726d7deu)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const User_NewTestUserFriends;

  /// @brief Field User_StartRecordingForReportFlow value: static_cast<uint32_t>(0x6e33e3f0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const User_StartRecordingForReportFlow;

  /// @brief Field User_StopRecordingAndLaunchReportFlow value: static_cast<uint32_t>(0x788c8bf0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const User_StopRecordingAndLaunchReportFlow;

  /// @brief Field User_StopRecordingAndLaunchReportFlow2 value: static_cast<uint32_t>(0x2bb3c2d9u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const User_StopRecordingAndLaunchReportFlow2;

  /// @brief Field User_TestUserCreateDeviceManifest value: static_cast<uint32_t>(0x70b2bdf0u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const User_TestUserCreateDeviceManifest;

  /// @brief Field Voip_ReportAppVoipSessions value: static_cast<uint32_t>(0xce5152d8u)
  static ::Oculus::Platform::__PlatformInternal__MessageTypeInternal const Voip_ReportAppVoipSessions;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__PlatformInternal__MessageTypeInternal, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::__PlatformInternal__MessageTypeInternal, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
// Type: ::HTTP
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::PlatformInternal::HTTP*
class CORDL_TYPE __PlatformInternal__HTTP : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetHttpTransferUpdateCallback, addr 0x2b0a984, size 0x74, virtual false, abstract: false, final false
  static inline void SetHttpTransferUpdateCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::HttpTransferUpdate*>* callback);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformInternal__HTTP();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlatformInternal__HTTP", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlatformInternal__HTTP(__PlatformInternal__HTTP&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlatformInternal__HTTP", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlatformInternal__HTTP(__PlatformInternal__HTTP const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__PlatformInternal__HTTP, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
// Type: ::Users
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::PlatformInternal::Users*
class CORDL_TYPE __PlatformInternal__Users : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetLinkedAccounts, addr 0x2b0a9f8, size 0x1b0, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LinkedAccountList*>*
  GetLinkedAccounts(::ArrayW<::Oculus::Platform::ServiceProvider, ::Array<::Oculus::Platform::ServiceProvider>*> providers);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformInternal__Users();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlatformInternal__Users", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlatformInternal__Users(__PlatformInternal__Users&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlatformInternal__Users", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlatformInternal__Users(__PlatformInternal__Users const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__PlatformInternal__Users, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
// Type: Oculus.Platform::PlatformInternal
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::PlatformInternal*
class CORDL_TYPE PlatformInternal : public ::System::Object {
public:
  // Declarations
  using HTTP = ::Oculus::Platform::__PlatformInternal__HTTP;

  using MessageTypeInternal = ::Oculus::Platform::__PlatformInternal__MessageTypeInternal;

  using Users = ::Oculus::Platform::__PlatformInternal__Users;

  /// @brief Method CrashApplication, addr 0x2b0a700, size 0x4c, virtual false, abstract: false, final false
  static inline void CrashApplication();

  /// @brief Method InitializeStandaloneAsync, addr 0x2b0a74c, size 0x154, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* InitializeStandaloneAsync(uint64_t appID, ::StringW accessToken);

  /// @brief Method ParseMessageHandle, addr 0x2af9e8c, size 0x8b4, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Message* ParseMessageHandle(::System::IntPtr messageHandle, ::Oculus::Platform::__Message__MessageType messageType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformInternal(PlatformInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformInternal(PlatformInternal const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::PlatformInternal, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__PlatformInternal__MessageTypeInternal, "Oculus.Platform", "PlatformInternal/MessageTypeInternal");
NEED_NO_BOX(::Oculus::Platform::PlatformInternal);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PlatformInternal*, "Oculus.Platform", "PlatformInternal");
NEED_NO_BOX(::Oculus::Platform::__PlatformInternal__HTTP);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__PlatformInternal__HTTP*, "Oculus.Platform", "PlatformInternal/HTTP");
NEED_NO_BOX(::Oculus::Platform::__PlatformInternal__Users);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__PlatformInternal__Users*, "Oculus.Platform", "PlatformInternal/Users");
