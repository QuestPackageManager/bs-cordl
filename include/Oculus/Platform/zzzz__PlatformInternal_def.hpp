#pragma once
// IWYU pragma private; include "Oculus/Platform/PlatformInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
template <typename T> class Message_1_Callback;
}
namespace Oculus::Platform {
struct Message_MessageType;
}
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
class PlatformInternal_HTTP;
}
namespace Oculus::Platform {
struct PlatformInternal_MessageTypeInternal;
}
namespace Oculus::Platform {
class PlatformInternal_Users;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace Oculus::Platform {
struct ServiceProvider;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
struct PlatformInternal_MessageTypeInternal;
}
namespace Oculus::Platform {
class PlatformInternal;
}
namespace Oculus::Platform {
class PlatformInternal_HTTP;
}
namespace Oculus::Platform {
class PlatformInternal_Users;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::PlatformInternal_MessageTypeInternal);
MARK_REF_PTR_T(::Oculus::Platform::PlatformInternal);
MARK_REF_PTR_T(::Oculus::Platform::PlatformInternal_HTTP);
MARK_REF_PTR_T(::Oculus::Platform::PlatformInternal_Users);
// Dependencies
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.PlatformInternal/MessageTypeInternal
struct CORDL_TYPE PlatformInternal_MessageTypeInternal {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __PlatformInternal_MessageTypeInternal_Unwrapped
  enum struct __PlatformInternal_MessageTypeInternal_Unwrapped : uint32_t {
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
  constexpr operator __PlatformInternal_MessageTypeInternal_Unwrapped() const noexcept {
    return static_cast<__PlatformInternal_MessageTypeInternal_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInternal_MessageTypeInternal();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr PlatformInternal_MessageTypeInternal(uint32_t value__) noexcept;

  /// @brief Field AbuseReport_LaunchAdvancedReportFlow value: U32(2973396720)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const AbuseReport_LaunchAdvancedReportFlow;

  /// @brief Field Application_ExecuteCoordinatedLaunch value: U32(2109011184)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Application_ExecuteCoordinatedLaunch;

  /// @brief Field Application_GetInstalledApplications value: U32(259280112)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Application_GetInstalledApplications;

  /// @brief Field Avatar_UpdateMetaData value: U32(3487141616)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Avatar_UpdateMetaData;

  /// @brief Field Cal_FinalizeApplication value: U32(3586894301)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Cal_FinalizeApplication;

  /// @brief Field Cal_GetSuggestedApplications value: U32(1886393840)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Cal_GetSuggestedApplications;

  /// @brief Field Cal_ProposeApplication value: U32(2213731824)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Cal_ProposeApplication;

  /// @brief Field Colocation_GetCurrentMapUuid value: U32(1434366704)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Colocation_GetCurrentMapUuid;

  /// @brief Field Colocation_RequestMap value: U32(359034352)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Colocation_RequestMap;

  /// @brief Field Colocation_ShareMap value: U32(3720637912)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Colocation_ShareMap;

  /// @brief Field DeviceApplicationIntegrity_GetAttestationToken value: U32(3735236560)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const DeviceApplicationIntegrity_GetAttestationToken;

  /// @brief Field GraphAPI_Get value: U32(4278218480)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const GraphAPI_Get;

  /// @brief Field GraphAPI_Post value: U32(2779235568)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const GraphAPI_Post;

  /// @brief Field HTTP_Get value: U32(3056739312)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const HTTP_Get;

  /// @brief Field HTTP_GetToFile value: U32(2178701808)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const HTTP_GetToFile;

  /// @brief Field HTTP_MultiPartPost value: U32(1121063152)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const HTTP_MultiPartPost;

  /// @brief Field HTTP_Post value: U32(916803568)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const HTTP_Post;

  /// @brief Field Livestreaming_IsAllowedForApplication value: U32(1988980171)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Livestreaming_IsAllowedForApplication;

  /// @brief Field Livestreaming_StartPartyStream value: U32(794615024)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Livestreaming_StartPartyStream;

  /// @brief Field Livestreaming_StartStream value: U32(449298160)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Livestreaming_StartStream;

  /// @brief Field Livestreaming_StopPartyStream value: U32(1729059056)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Livestreaming_StopPartyStream;

  /// @brief Field Livestreaming_StopStream value: U32(3826109168)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Livestreaming_StopStream;

  /// @brief Field Livestreaming_UpdateMicStatus value: U32(2273138652)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Livestreaming_UpdateMicStatus;

  /// @brief Field NetSync_Connect value: U32(1837457392)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const NetSync_Connect;

  /// @brief Field NetSync_Disconnect value: U32(3053349333)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const NetSync_Disconnect;

  /// @brief Field NetSync_GetSessions value: U32(3590993392)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const NetSync_GetSessions;

  /// @brief Field NetSync_GetVoipAttenuation value: U32(399125201)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const NetSync_GetVoipAttenuation;

  /// @brief Field NetSync_GetVoipAttenuationDefault value: U32(2074648816)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const NetSync_GetVoipAttenuationDefault;

  /// @brief Field NetSync_SetVoipAttenuation value: U32(2547513072)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const NetSync_SetVoipAttenuation;

  /// @brief Field NetSync_SetVoipAttenuationModel value: U32(2494402288)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const NetSync_SetVoipAttenuationModel;

  /// @brief Field NetSync_SetVoipChannelCfg value: U32(2510615536)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const NetSync_SetVoipChannelCfg;

  /// @brief Field NetSync_SetVoipGroup value: U32(312250096)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const NetSync_SetVoipGroup;

  /// @brief Field NetSync_SetVoipListentoChannels value: U32(3505009392)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const NetSync_SetVoipListentoChannels;

  /// @brief Field NetSync_SetVoipMicSource value: U32(49770736)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const NetSync_SetVoipMicSource;

  /// @brief Field NetSync_SetVoipSessionMuted value: U32(2248084208)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const NetSync_SetVoipSessionMuted;

  /// @brief Field NetSync_SetVoipSpeaktoChannels value: U32(2949502448)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const NetSync_SetVoipSpeaktoChannels;

  /// @brief Field NetSync_SetVoipStreamMode value: U32(3785177072)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const NetSync_SetVoipStreamMode;

  /// @brief Field Party_Create value: U32(1327223770)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Party_Create;

  /// @brief Field Party_GatherInApplication value: U32(2277606384)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Party_GatherInApplication;

  /// @brief Field Party_Get value: U32(2303966704)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Party_Get;

  /// @brief Field Party_GetCurrentForUser value: U32(3422497520)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Party_GetCurrentForUser;

  /// @brief Field Party_Invite value: U32(3049579504)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Party_Invite;

  /// @brief Field Party_Join value: U32(41710576)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Party_Join;

  /// @brief Field Party_Leave value: U32(2449920496)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Party_Leave;

  /// @brief Field RichPresence_SetDestination value: U32(853609968)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const RichPresence_SetDestination;

  /// @brief Field RichPresence_SetIsJoinable value: U32(2602525168)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const RichPresence_SetIsJoinable;

  /// @brief Field RichPresence_SetLobbySession value: U32(17373168)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const RichPresence_SetLobbySession;

  /// @brief Field RichPresence_SetMatchSession value: U32(3757870832)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const RichPresence_SetMatchSession;

  /// @brief Field Room_CreateOrUpdateAndJoinNamed value: U32(2383057392)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Room_CreateOrUpdateAndJoinNamed;

  /// @brief Field Room_GetNamedRooms value: U32(2356051399)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Room_GetNamedRooms;

  /// @brief Field Room_GetSocialRooms value: U32(2283632368)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Room_GetSocialRooms;

  /// @brief Field User_CancelRecordingForReportFlow value: U32(1238491331)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const User_CancelRecordingForReportFlow;

  /// @brief Field User_GetLinkedAccounts value: U32(2482263792)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const User_GetLinkedAccounts;

  /// @brief Field User_GetUserCapabilities value: U32(2083593426)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const User_GetUserCapabilities;

  /// @brief Field User_LaunchReportFlow value: U32(1654657520)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const User_LaunchReportFlow;

  /// @brief Field User_LaunchReportFlow2 value: U32(2203608048)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const User_LaunchReportFlow2;

  /// @brief Field User_NewEntitledTestUser value: U32(52393169)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const User_NewEntitledTestUser;

  /// @brief Field User_NewTestUser value: U32(3897527536)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const User_NewTestUser;

  /// @brief Field User_NewTestUserFriends value: U32(3341211614)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const User_NewTestUserFriends;

  /// @brief Field User_StartRecordingForReportFlow value: U32(1848894448)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const User_StartRecordingForReportFlow;

  /// @brief Field User_StopRecordingAndLaunchReportFlow value: U32(2022476784)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const User_StopRecordingAndLaunchReportFlow;

  /// @brief Field User_StopRecordingAndLaunchReportFlow2 value: U32(733201113)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const User_StopRecordingAndLaunchReportFlow2;

  /// @brief Field User_TestUserCreateDeviceManifest value: U32(1890762224)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const User_TestUserCreateDeviceManifest;

  /// @brief Field Voip_ReportAppVoipSessions value: U32(3461436120)
  static ::Oculus::Platform::PlatformInternal_MessageTypeInternal const Voip_ReportAppVoipSessions;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15456 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::PlatformInternal_MessageTypeInternal, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::PlatformInternal_MessageTypeInternal, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.PlatformInternal/HTTP
class CORDL_TYPE PlatformInternal_HTTP : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetHttpTransferUpdateCallback, addr 0x3f8b73c, size 0x74, virtual false, abstract: false, final false
  static inline void SetHttpTransferUpdateCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::HttpTransferUpdate*>* callback);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInternal_HTTP();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformInternal_HTTP", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformInternal_HTTP(PlatformInternal_HTTP&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformInternal_HTTP", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformInternal_HTTP(PlatformInternal_HTTP const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15457 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::PlatformInternal_HTTP, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.PlatformInternal/Users
class CORDL_TYPE PlatformInternal_Users : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetLinkedAccounts, addr 0x3f8b7b0, size 0x198, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LinkedAccountList*>*
  GetLinkedAccounts(::ArrayW<::Oculus::Platform::ServiceProvider, ::Array<::Oculus::Platform::ServiceProvider>*> providers);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInternal_Users();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformInternal_Users", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformInternal_Users(PlatformInternal_Users&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformInternal_Users", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformInternal_Users(PlatformInternal_Users const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15458 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::PlatformInternal_Users, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.PlatformInternal
class CORDL_TYPE PlatformInternal : public ::System::Object {
public:
  // Declarations
  using HTTP = ::Oculus::Platform::PlatformInternal_HTTP;

  using MessageTypeInternal = ::Oculus::Platform::PlatformInternal_MessageTypeInternal;

  using Users = ::Oculus::Platform::PlatformInternal_Users;

  /// @brief Method CrashApplication, addr 0x3f8b4dc, size 0x4c, virtual false, abstract: false, final false
  static inline void CrashApplication();

  /// @brief Method InitializeStandaloneAsync, addr 0x3f8b528, size 0x154, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* InitializeStandaloneAsync(uint64_t appID, ::StringW accessToken);

  /// @brief Method ParseMessageHandle, addr 0x3f7b59c, size 0x868, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Message* ParseMessageHandle(::System::IntPtr messageHandle, ::Oculus::Platform::Message_MessageType messageType);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15459 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::PlatformInternal, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PlatformInternal_MessageTypeInternal, "Oculus.Platform", "PlatformInternal/MessageTypeInternal");
NEED_NO_BOX(::Oculus::Platform::PlatformInternal);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PlatformInternal*, "Oculus.Platform", "PlatformInternal");
NEED_NO_BOX(::Oculus::Platform::PlatformInternal_HTTP);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PlatformInternal_HTTP*, "Oculus.Platform", "PlatformInternal/HTTP");
NEED_NO_BOX(::Oculus::Platform::PlatformInternal_Users);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PlatformInternal_Users*, "Oculus.Platform", "PlatformInternal/Users");
