#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerStatusData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus::MultiplayerStatusData_AvailabilityStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus::MultiplayerStatusData_AvailabilityStatus() {}
constexpr ::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus GlobalNamespace::MultiplayerStatusData_AvailabilityStatus::Online{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus GlobalNamespace::MultiplayerStatusData_AvailabilityStatus::MaintenanceUpcoming{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus GlobalNamespace::MultiplayerStatusData_AvailabilityStatus::Offline{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage::*)()>(
    &::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b8d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage::__cordl_internal_get_language() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr ::StringW const& GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage::__cordl_internal_get_language() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr void GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage::__cordl_internal_set_language(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___language = value;
}
constexpr ::StringW& GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage::__cordl_internal_get_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr ::StringW const& GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage::__cordl_internal_get_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr void GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage::__cordl_internal_set_message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___message = value;
}
inline void GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage* GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage::UserMessage_MultiplayerStatusData_LocalizedMessage() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData_UserMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerStatusData_UserMessage::*)()>(&::GlobalNamespace::MultiplayerStatusData_UserMessage::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b8d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData_UserMessage*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage*>& GlobalNamespace::MultiplayerStatusData_UserMessage::__cordl_internal_get_localizations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizations;
}
constexpr ::ArrayW<::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage*> const& GlobalNamespace::MultiplayerStatusData_UserMessage::__cordl_internal_get_localizations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizations;
}
constexpr void GlobalNamespace::MultiplayerStatusData_UserMessage::__cordl_internal_set_localizations(::ArrayW<::GlobalNamespace::UserMessage_MultiplayerStatusData_LocalizedMessage*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localizations = value;
}
inline void GlobalNamespace::MultiplayerStatusData_UserMessage::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData_UserMessage*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerStatusData_UserMessage* GlobalNamespace::MultiplayerStatusData_UserMessage::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerStatusData_UserMessage*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerStatusData_UserMessage::MultiplayerStatusData_UserMessage() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get_minimumAppVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::get_minimumAppVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "get_minimumAppVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set_minimumAppVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(::StringW)>(&::GlobalNamespace::MultiplayerStatusData::set_minimumAppVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "set_minimumAppVersion", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get_maintenanceStartTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::get_maintenanceStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "get_maintenanceStartTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set_maintenanceStartTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(int64_t)>(&::GlobalNamespace::MultiplayerStatusData::set_maintenanceStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "set_maintenanceStartTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get_maintenanceEndTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::get_maintenanceEndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "get_maintenanceEndTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set_maintenanceEndTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(int64_t)>(&::GlobalNamespace::MultiplayerStatusData::set_maintenanceEndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "set_maintenanceEndTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get_userMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerStatusData_UserMessage* (::GlobalNamespace::MultiplayerStatusData::*)()>(
    &::GlobalNamespace::MultiplayerStatusData::get_userMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "get_userMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set_userMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(::GlobalNamespace::MultiplayerStatusData_UserMessage*)>(
    &::GlobalNamespace::MultiplayerStatusData::set_userMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(),
                                                                                           { "set_userMessage", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerStatusData_UserMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get_useGamelift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::get_useGamelift)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "get_useGamelift", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set_useGamelift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(bool)>(&::GlobalNamespace::MultiplayerStatusData::set_useGamelift)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "set_useGamelift", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get_useLocalServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::get_useLocalServer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "get_useLocalServer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set_useLocalServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(bool)>(&::GlobalNamespace::MultiplayerStatusData::set_useLocalServer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "set_useLocalServer", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get_localServerPort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::get_localServerPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "get_localServerPort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set_localServerPort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(int32_t)>(&::GlobalNamespace::MultiplayerStatusData::set_localServerPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "set_localServerPort", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get_useGameLiftUdpPingBeacons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::get_useGameLiftUdpPingBeacons)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "get_useGameLiftUdpPingBeacons", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set_useGameLiftUdpPingBeacons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(bool)>(&::GlobalNamespace::MultiplayerStatusData::set_useGameLiftUdpPingBeacons)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "set_useGameLiftUdpPingBeacons", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b8d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MultiplayerStatusData::__cordl_internal_get_minimum_app_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minimum_app_version;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerStatusData::__cordl_internal_get_minimum_app_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minimum_app_version;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__cordl_internal_set_minimum_app_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minimum_app_version = value;
}
constexpr ::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus& GlobalNamespace::MultiplayerStatusData::__cordl_internal_get_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr ::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus const& GlobalNamespace::MultiplayerStatusData::__cordl_internal_get_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__cordl_internal_set_status(::GlobalNamespace::MultiplayerStatusData_AvailabilityStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___status = value;
}
constexpr int64_t& GlobalNamespace::MultiplayerStatusData::__cordl_internal_get_maintenance_start_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintenance_start_time;
}
constexpr int64_t const& GlobalNamespace::MultiplayerStatusData::__cordl_internal_get_maintenance_start_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintenance_start_time;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__cordl_internal_set_maintenance_start_time(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maintenance_start_time = value;
}
constexpr int64_t& GlobalNamespace::MultiplayerStatusData::__cordl_internal_get_maintenance_end_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintenance_end_time;
}
constexpr int64_t const& GlobalNamespace::MultiplayerStatusData::__cordl_internal_get_maintenance_end_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintenance_end_time;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__cordl_internal_set_maintenance_end_time(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maintenance_end_time = value;
}
constexpr ::GlobalNamespace::MultiplayerStatusData_UserMessage*& GlobalNamespace::MultiplayerStatusData::__cordl_internal_get_user_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_message;
}
constexpr ::GlobalNamespace::MultiplayerStatusData_UserMessage* const& GlobalNamespace::MultiplayerStatusData::__cordl_internal_get_user_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_message;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__cordl_internal_set_user_message(::GlobalNamespace::MultiplayerStatusData_UserMessage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___user_message = value;
}
constexpr bool& GlobalNamespace::MultiplayerStatusData::__cordl_internal_get_use_gamelift() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___use_gamelift;
}
constexpr bool const& GlobalNamespace::MultiplayerStatusData::__cordl_internal_get_use_gamelift() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___use_gamelift;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__cordl_internal_set_use_gamelift(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___use_gamelift = value;
}
constexpr bool& GlobalNamespace::MultiplayerStatusData::__cordl_internal_get_use_local_server() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___use_local_server;
}
constexpr bool const& GlobalNamespace::MultiplayerStatusData::__cordl_internal_get_use_local_server() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___use_local_server;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__cordl_internal_set_use_local_server(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___use_local_server = value;
}
constexpr int32_t& GlobalNamespace::MultiplayerStatusData::__cordl_internal_get_local_server_port() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___local_server_port;
}
constexpr int32_t const& GlobalNamespace::MultiplayerStatusData::__cordl_internal_get_local_server_port() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___local_server_port;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__cordl_internal_set_local_server_port(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___local_server_port = value;
}
constexpr bool& GlobalNamespace::MultiplayerStatusData::__cordl_internal_get_use_gamelift_udp_ping_beacons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___use_gamelift_udp_ping_beacons;
}
constexpr bool const& GlobalNamespace::MultiplayerStatusData::__cordl_internal_get_use_gamelift_udp_ping_beacons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___use_gamelift_udp_ping_beacons;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__cordl_internal_set_use_gamelift_udp_ping_beacons(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___use_gamelift_udp_ping_beacons = value;
}
inline ::StringW GlobalNamespace::MultiplayerStatusData::get_minimumAppVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "get_minimumAppVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set_minimumAppVersion(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "set_minimumAppVersion", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t GlobalNamespace::MultiplayerStatusData::get_maintenanceStartTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "get_maintenanceStartTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set_maintenanceStartTime(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "set_maintenanceStartTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t GlobalNamespace::MultiplayerStatusData::get_maintenanceEndTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "get_maintenanceEndTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set_maintenanceEndTime(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "set_maintenanceEndTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MultiplayerStatusData_UserMessage* GlobalNamespace::MultiplayerStatusData::get_userMessage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "get_userMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerStatusData_UserMessage*>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set_userMessage(::GlobalNamespace::MultiplayerStatusData_UserMessage* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(),
                                                                                         { "set_userMessage", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerStatusData_UserMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MultiplayerStatusData::get_useGamelift() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "get_useGamelift", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set_useGamelift(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "set_useGamelift", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MultiplayerStatusData::get_useLocalServer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "get_useLocalServer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set_useLocalServer(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "set_useLocalServer", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MultiplayerStatusData::get_localServerPort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "get_localServerPort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set_localServerPort(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "set_localServerPort", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MultiplayerStatusData::get_useGameLiftUdpPingBeacons() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "get_useGameLiftUdpPingBeacons", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set_useGameLiftUdpPingBeacons(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { "set_useGameLiftUdpPingBeacons", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerStatusData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerStatusData* GlobalNamespace::MultiplayerStatusData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerStatusData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerStatusData::MultiplayerStatusData() {}
