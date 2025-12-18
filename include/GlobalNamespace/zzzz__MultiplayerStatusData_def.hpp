#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerStatusData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerStatusData)
namespace GlobalNamespace {
struct MultiplayerStatusData_AvailabilityStatus;
}
namespace GlobalNamespace {
class MultiplayerStatusData_UserMessage;
}
namespace GlobalNamespace {
class UserMessage_MultiplayerStatusData_LocalizedMessage;
}
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerStatusData_AvailabilityStatus;
}
namespace GlobalNamespace {
class MultiplayerStatusData;
}
namespace GlobalNamespace {
class MultiplayerStatusData_UserMessage;
}
namespace GlobalNamespace {
class UserMessage_MultiplayerStatusData_LocalizedMessage;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerStatusData);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerStatusData_UserMessage);
MARK_REF_PTR_T(::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerStatusData/AvailabilityStatus
struct CORDL_TYPE MultiplayerStatusData_AvailabilityStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerStatusData_AvailabilityStatus_Unwrapped
  enum struct __MultiplayerStatusData_AvailabilityStatus_Unwrapped : int32_t {
    __E_Online = static_cast<int32_t>(0x0),
    __E_MaintenanceUpcoming = static_cast<int32_t>(0x1),
    __E_Offline = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerStatusData_AvailabilityStatus_Unwrapped() const noexcept {
    return static_cast<__MultiplayerStatusData_AvailabilityStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerStatusData_AvailabilityStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerStatusData_AvailabilityStatus(int32_t value__) noexcept;

  /// @brief Field MaintenanceUpcoming value: I32(1)
  static ::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus const MaintenanceUpcoming;

  /// @brief Field Offline value: I32(2)
  static ::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus const Offline;

  /// @brief Field Online value: I32(0)
  static ::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus const Online;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18922 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerStatusData/UserMessage/LocalizedMessage
class CORDL_TYPE UserMessage_MultiplayerStatusData_LocalizedMessage : public ::System::Object {
public:
  // Declarations
  /// @brief Field language, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_language, put = __cordl_internal_set_language)) ::StringW language;

  /// @brief Field message, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_message, put = __cordl_internal_set_message)) ::StringW message;

  static inline ::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_language() const;

  constexpr ::StringW& __cordl_internal_get_language();

  constexpr ::StringW const& __cordl_internal_get_message() const;

  constexpr ::StringW& __cordl_internal_get_message();

  constexpr void __cordl_internal_set_language(::StringW value);

  constexpr void __cordl_internal_set_message(::StringW value);

  /// @brief Method .ctor, addr 0x31e3288, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserMessage_MultiplayerStatusData_LocalizedMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UserMessage_MultiplayerStatusData_LocalizedMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserMessage_MultiplayerStatusData_LocalizedMessage(UserMessage_MultiplayerStatusData_LocalizedMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserMessage_MultiplayerStatusData_LocalizedMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserMessage_MultiplayerStatusData_LocalizedMessage(UserMessage_MultiplayerStatusData_LocalizedMessage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18923 };

  /// @brief Field language, offset: 0x10, size: 0x8, def value: None
  ::StringW ___language;

  /// @brief Field message, offset: 0x18, size: 0x8, def value: None
  ::StringW ___message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage, ___language) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage, ___message) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerStatusData/UserMessage
class CORDL_TYPE MultiplayerStatusData_UserMessage : public ::System::Object {
public:
  // Declarations
  using LocalizedMessage = ::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage;

  /// @brief Field localizations, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_localizations, put = __cordl_internal_set_localizations)) ::ArrayW<::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage*,
                                                                                                                    ::Array<::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage*>*>
      localizations;

  static inline ::GlobalNamespace::MultiplayerStatusData_UserMessage* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage*, ::Array<::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage*>*> const&
  __cordl_internal_get_localizations() const;

  constexpr ::ArrayW<::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage*, ::Array<::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage*>*>&
  __cordl_internal_get_localizations();

  constexpr void __cordl_internal_set_localizations(
      ::ArrayW<::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage*, ::Array<::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage*>*> value);

  /// @brief Method .ctor, addr 0x31e3284, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerStatusData_UserMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerStatusData_UserMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerStatusData_UserMessage(MultiplayerStatusData_UserMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerStatusData_UserMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerStatusData_UserMessage(MultiplayerStatusData_UserMessage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18924 };

  /// @brief Field localizations, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage*, ::Array<::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage*>*> ___localizations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData_UserMessage, ___localizations) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerStatusData_UserMessage, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MultiplayerStatusData::AvailabilityStatus, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerStatusData
class CORDL_TYPE MultiplayerStatusData : public ::System::Object {
public:
  // Declarations
  using AvailabilityStatus = ::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus;

  using UserMessage = ::GlobalNamespace::MultiplayerStatusData_UserMessage;

  __declspec(property(get = get_localServerPort, put = set_localServerPort)) int32_t localServerPort;

  /// @brief Field local_server_port, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_local_server_port, put = __cordl_internal_set_local_server_port)) int32_t local_server_port;

  __declspec(property(get = get_maintenanceEndTime, put = set_maintenanceEndTime)) int64_t maintenanceEndTime;

  __declspec(property(get = get_maintenanceStartTime, put = set_maintenanceStartTime)) int64_t maintenanceStartTime;

  /// @brief Field maintenance_end_time, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_maintenance_end_time, put = __cordl_internal_set_maintenance_end_time)) int64_t maintenance_end_time;

  /// @brief Field maintenance_start_time, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_maintenance_start_time, put = __cordl_internal_set_maintenance_start_time)) int64_t maintenance_start_time;

  __declspec(property(get = get_minimumAppVersion, put = set_minimumAppVersion)) ::StringW minimumAppVersion;

  /// @brief Field minimum_app_version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_minimum_app_version, put = __cordl_internal_set_minimum_app_version)) ::StringW minimum_app_version;

  /// @brief Field status, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_status, put = __cordl_internal_set_status)) ::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus status;

  __declspec(property(get = get_useGameLiftUdpPingBeacons, put = set_useGameLiftUdpPingBeacons)) bool useGameLiftUdpPingBeacons;

  __declspec(property(get = get_useGamelift, put = set_useGamelift)) bool useGamelift;

  __declspec(property(get = get_useLocalServer, put = set_useLocalServer)) bool useLocalServer;

  __declspec(property(get = get_useXPlatformAuth, put = set_useXPlatformAuth)) bool useXPlatformAuth;

  /// @brief Field use_gamelift, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_use_gamelift, put = __cordl_internal_set_use_gamelift)) bool use_gamelift;

  /// @brief Field use_gamelift_udp_ping_beacons, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_use_gamelift_udp_ping_beacons, put = __cordl_internal_set_use_gamelift_udp_ping_beacons)) bool use_gamelift_udp_ping_beacons;

  /// @brief Field use_local_server, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_use_local_server, put = __cordl_internal_set_use_local_server)) bool use_local_server;

  /// @brief Field use_xplatform_auth, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_use_xplatform_auth, put = __cordl_internal_set_use_xplatform_auth)) bool use_xplatform_auth;

  __declspec(property(get = get_userMessage, put = set_userMessage)) ::GlobalNamespace::MultiplayerStatusData_UserMessage* userMessage;

  /// @brief Field user_message, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_user_message, put = __cordl_internal_set_user_message)) ::GlobalNamespace::MultiplayerStatusData_UserMessage* user_message;

  static inline ::GlobalNamespace::MultiplayerStatusData* New_ctor();

  constexpr int32_t const& __cordl_internal_get_local_server_port() const;

  constexpr int32_t& __cordl_internal_get_local_server_port();

  constexpr int64_t const& __cordl_internal_get_maintenance_end_time() const;

  constexpr int64_t& __cordl_internal_get_maintenance_end_time();

  constexpr int64_t const& __cordl_internal_get_maintenance_start_time() const;

  constexpr int64_t& __cordl_internal_get_maintenance_start_time();

  constexpr ::StringW const& __cordl_internal_get_minimum_app_version() const;

  constexpr ::StringW& __cordl_internal_get_minimum_app_version();

  constexpr ::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus const& __cordl_internal_get_status() const;

  constexpr ::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus& __cordl_internal_get_status();

  constexpr bool const& __cordl_internal_get_use_gamelift() const;

  constexpr bool& __cordl_internal_get_use_gamelift();

  constexpr bool const& __cordl_internal_get_use_gamelift_udp_ping_beacons() const;

  constexpr bool& __cordl_internal_get_use_gamelift_udp_ping_beacons();

  constexpr bool const& __cordl_internal_get_use_local_server() const;

  constexpr bool& __cordl_internal_get_use_local_server();

  constexpr bool const& __cordl_internal_get_use_xplatform_auth() const;

  constexpr bool& __cordl_internal_get_use_xplatform_auth();

  constexpr ::GlobalNamespace::MultiplayerStatusData_UserMessage* const& __cordl_internal_get_user_message() const;

  constexpr ::GlobalNamespace::MultiplayerStatusData_UserMessage*& __cordl_internal_get_user_message();

  constexpr void __cordl_internal_set_local_server_port(int32_t value);

  constexpr void __cordl_internal_set_maintenance_end_time(int64_t value);

  constexpr void __cordl_internal_set_maintenance_start_time(int64_t value);

  constexpr void __cordl_internal_set_minimum_app_version(::StringW value);

  constexpr void __cordl_internal_set_status(::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus value);

  constexpr void __cordl_internal_set_use_gamelift(bool value);

  constexpr void __cordl_internal_set_use_gamelift_udp_ping_beacons(bool value);

  constexpr void __cordl_internal_set_use_local_server(bool value);

  constexpr void __cordl_internal_set_use_xplatform_auth(bool value);

  constexpr void __cordl_internal_set_user_message(::GlobalNamespace::MultiplayerStatusData_UserMessage* value);

  /// @brief Method .ctor, addr 0x31e3280, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_localServerPort, addr 0x31e3250, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_localServerPort();

  /// @brief Method get_maintenanceEndTime, addr 0x31e3210, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_maintenanceEndTime();

  /// @brief Method get_maintenanceStartTime, addr 0x31e3200, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_maintenanceStartTime();

  /// @brief Method get_minimumAppVersion, addr 0x31e31f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_minimumAppVersion();

  /// @brief Method get_useGameLiftUdpPingBeacons, addr 0x31e3270, size 0x8, virtual false, abstract: false, final false
  inline bool get_useGameLiftUdpPingBeacons();

  /// @brief Method get_useGamelift, addr 0x31e3230, size 0x8, virtual false, abstract: false, final false
  inline bool get_useGamelift();

  /// @brief Method get_useLocalServer, addr 0x31e3240, size 0x8, virtual false, abstract: false, final false
  inline bool get_useLocalServer();

  /// @brief Method get_useXPlatformAuth, addr 0x31e3260, size 0x8, virtual false, abstract: false, final false
  inline bool get_useXPlatformAuth();

  /// @brief Method get_userMessage, addr 0x31e3220, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerStatusData_UserMessage* get_userMessage();

  /// @brief Method set_localServerPort, addr 0x31e3258, size 0x8, virtual false, abstract: false, final false
  inline void set_localServerPort(int32_t value);

  /// @brief Method set_maintenanceEndTime, addr 0x31e3218, size 0x8, virtual false, abstract: false, final false
  inline void set_maintenanceEndTime(int64_t value);

  /// @brief Method set_maintenanceStartTime, addr 0x31e3208, size 0x8, virtual false, abstract: false, final false
  inline void set_maintenanceStartTime(int64_t value);

  /// @brief Method set_minimumAppVersion, addr 0x31e31f8, size 0x8, virtual false, abstract: false, final false
  inline void set_minimumAppVersion(::StringW value);

  /// @brief Method set_useGameLiftUdpPingBeacons, addr 0x31e3278, size 0x8, virtual false, abstract: false, final false
  inline void set_useGameLiftUdpPingBeacons(bool value);

  /// @brief Method set_useGamelift, addr 0x31e3238, size 0x8, virtual false, abstract: false, final false
  inline void set_useGamelift(bool value);

  /// @brief Method set_useLocalServer, addr 0x31e3248, size 0x8, virtual false, abstract: false, final false
  inline void set_useLocalServer(bool value);

  /// @brief Method set_useXPlatformAuth, addr 0x31e3268, size 0x8, virtual false, abstract: false, final false
  inline void set_useXPlatformAuth(bool value);

  /// @brief Method set_userMessage, addr 0x31e3228, size 0x8, virtual false, abstract: false, final false
  inline void set_userMessage(::GlobalNamespace::MultiplayerStatusData_UserMessage* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerStatusData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerStatusData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerStatusData(MultiplayerStatusData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerStatusData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerStatusData(MultiplayerStatusData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18925 };

  /// @brief Field minimum_app_version, offset: 0x10, size: 0x8, def value: None
  ::StringW ___minimum_app_version;

  /// @brief Field status, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus ___status;

  /// @brief Field maintenance_start_time, offset: 0x20, size: 0x8, def value: None
  int64_t ___maintenance_start_time;

  /// @brief Field maintenance_end_time, offset: 0x28, size: 0x8, def value: None
  int64_t ___maintenance_end_time;

  /// @brief Field user_message, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerStatusData_UserMessage* ___user_message;

  /// @brief Field use_gamelift, offset: 0x38, size: 0x1, def value: None
  bool ___use_gamelift;

  /// @brief Field use_local_server, offset: 0x39, size: 0x1, def value: None
  bool ___use_local_server;

  /// @brief Field local_server_port, offset: 0x3c, size: 0x4, def value: None
  int32_t ___local_server_port;

  /// @brief Field use_xplatform_auth, offset: 0x40, size: 0x1, def value: None
  bool ___use_xplatform_auth;

  /// @brief Field use_gamelift_udp_ping_beacons, offset: 0x41, size: 0x1, def value: None
  bool ___use_gamelift_udp_ping_beacons;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___minimum_app_version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___status) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___maintenance_start_time) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___maintenance_end_time) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___user_message) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___use_gamelift) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___use_local_server) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___local_server_port) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___use_xplatform_auth) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___use_gamelift_udp_ping_beacons) == 0x41, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerStatusData, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus, "", "MultiplayerStatusData/AvailabilityStatus");
NEED_NO_BOX(::GlobalNamespace::MultiplayerStatusData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerStatusData*, "", "MultiplayerStatusData");
NEED_NO_BOX(::GlobalNamespace::MultiplayerStatusData_UserMessage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerStatusData_UserMessage*, "", "MultiplayerStatusData/UserMessage");
NEED_NO_BOX(::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage*, "", "MultiplayerStatusData/UserMessage/LocalizedMessage");
