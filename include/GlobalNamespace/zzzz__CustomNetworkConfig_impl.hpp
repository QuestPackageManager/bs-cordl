#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomNetworkConfig.hpp"
#include "GlobalNamespace/zzzz__ServiceEnvironment_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CustomNetworkConfig_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "GlobalNamespace/zzzz__ServiceEnvironment_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomNetworkConfig.get_maxPartySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CustomNetworkConfig::*)()>(&::GlobalNamespace::CustomNetworkConfig::get_maxPartySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a7984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_maxPartySize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomNetworkConfig.get_discoveryPort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CustomNetworkConfig::*)()>(&::GlobalNamespace::CustomNetworkConfig::get_discoveryPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a798c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_discoveryPort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomNetworkConfig.get_partyPort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CustomNetworkConfig::*)()>(&::GlobalNamespace::CustomNetworkConfig::get_partyPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a7994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_partyPort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomNetworkConfig.get_multiplayerPort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CustomNetworkConfig::*)()>(&::GlobalNamespace::CustomNetworkConfig::get_multiplayerPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a799c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_multiplayerPort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomNetworkConfig.get_masterServerPort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CustomNetworkConfig::*)()>(&::GlobalNamespace::CustomNetworkConfig::get_masterServerPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a79a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_masterServerPort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomNetworkConfig.get_multiplayerStatusUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CustomNetworkConfig::*)()>(&::GlobalNamespace::CustomNetworkConfig::get_multiplayerStatusUrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a79ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_multiplayerStatusUrl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomNetworkConfig.get_quickPlaySetupUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CustomNetworkConfig::*)()>(&::GlobalNamespace::CustomNetworkConfig::get_quickPlaySetupUrl)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32a79b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_quickPlaySetupUrl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomNetworkConfig.get_graphUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CustomNetworkConfig::*)()>(&::GlobalNamespace::CustomNetworkConfig::get_graphUrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a79c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_graphUrl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomNetworkConfig.get_graphQLUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CustomNetworkConfig::*)()>(&::GlobalNamespace::CustomNetworkConfig::get_graphQLUrl)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x32a79d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_graphQLUrl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomNetworkConfig.get_graphAccessToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CustomNetworkConfig::*)()>(&::GlobalNamespace::CustomNetworkConfig::get_graphAccessToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a7a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_graphAccessToken", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomNetworkConfig.get_graphAppId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::CustomNetworkConfig::*)()>(&::GlobalNamespace::CustomNetworkConfig::get_graphAppId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a7a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_graphAppId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomNetworkConfig.get_forceGameLift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomNetworkConfig::*)()>(&::GlobalNamespace::CustomNetworkConfig::get_forceGameLift)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a7a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_forceGameLift", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomNetworkConfig.get_serviceEnvironment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ServiceEnvironment (::GlobalNamespace::CustomNetworkConfig::*)()>(
    &::GlobalNamespace::CustomNetworkConfig::get_serviceEnvironment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a7a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_serviceEnvironment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomNetworkConfig.get_customLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CustomNetworkConfig::*)()>(&::GlobalNamespace::CustomNetworkConfig::get_customLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a7a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_customLocation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomNetworkConfig.get_useLocalServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomNetworkConfig::*)()>(&::GlobalNamespace::CustomNetworkConfig::get_useLocalServer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a7a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_useLocalServer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomNetworkConfig.get_localServerPort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CustomNetworkConfig::*)()>(&::GlobalNamespace::CustomNetworkConfig::get_localServerPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a7a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_localServerPort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomNetworkConfig._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomNetworkConfig::*)(::GlobalNamespace::INetworkConfig*, ::StringW, int32_t, bool)>(
    &::GlobalNamespace::CustomNetworkConfig::_ctor)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x32a7a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::INetworkConfig*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__maxPartySize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPartySize_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__maxPartySize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPartySize_k__BackingField;
}
constexpr void GlobalNamespace::CustomNetworkConfig::__cordl_internal_set__maxPartySize_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxPartySize_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__discoveryPort_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____discoveryPort_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__discoveryPort_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____discoveryPort_k__BackingField;
}
constexpr void GlobalNamespace::CustomNetworkConfig::__cordl_internal_set__discoveryPort_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____discoveryPort_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__partyPort_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyPort_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__partyPort_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyPort_k__BackingField;
}
constexpr void GlobalNamespace::CustomNetworkConfig::__cordl_internal_set__partyPort_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____partyPort_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__multiplayerPort_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPort_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__multiplayerPort_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPort_k__BackingField;
}
constexpr void GlobalNamespace::CustomNetworkConfig::__cordl_internal_set__multiplayerPort_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerPort_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__masterServerPort_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____masterServerPort_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__masterServerPort_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____masterServerPort_k__BackingField;
}
constexpr void GlobalNamespace::CustomNetworkConfig::__cordl_internal_set__masterServerPort_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____masterServerPort_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__multiplayerStatusUrl_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerStatusUrl_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__multiplayerStatusUrl_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerStatusUrl_k__BackingField;
}
constexpr void GlobalNamespace::CustomNetworkConfig::__cordl_internal_set__multiplayerStatusUrl_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerStatusUrl_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__graphUrl_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphUrl_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__graphUrl_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphUrl_k__BackingField;
}
constexpr void GlobalNamespace::CustomNetworkConfig::__cordl_internal_set__graphUrl_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____graphUrl_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__graphAccessToken_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphAccessToken_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__graphAccessToken_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphAccessToken_k__BackingField;
}
constexpr void GlobalNamespace::CustomNetworkConfig::__cordl_internal_set__graphAccessToken_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____graphAccessToken_k__BackingField = value;
}
constexpr uint64_t& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__graphAppId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphAppId_k__BackingField;
}
constexpr uint64_t const& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__graphAppId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphAppId_k__BackingField;
}
constexpr void GlobalNamespace::CustomNetworkConfig::__cordl_internal_set__graphAppId_k__BackingField(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____graphAppId_k__BackingField = value;
}
constexpr bool& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__forceGameLift_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceGameLift_k__BackingField;
}
constexpr bool const& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__forceGameLift_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceGameLift_k__BackingField;
}
constexpr void GlobalNamespace::CustomNetworkConfig::__cordl_internal_set__forceGameLift_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____forceGameLift_k__BackingField = value;
}
constexpr ::GlobalNamespace::ServiceEnvironment& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__serviceEnvironment_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serviceEnvironment_k__BackingField;
}
constexpr ::GlobalNamespace::ServiceEnvironment const& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__serviceEnvironment_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serviceEnvironment_k__BackingField;
}
constexpr void GlobalNamespace::CustomNetworkConfig::__cordl_internal_set__serviceEnvironment_k__BackingField(::GlobalNamespace::ServiceEnvironment value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serviceEnvironment_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__customLocation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLocation_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__customLocation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLocation_k__BackingField;
}
constexpr void GlobalNamespace::CustomNetworkConfig::__cordl_internal_set__customLocation_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____customLocation_k__BackingField = value;
}
constexpr bool& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__useLocalServer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useLocalServer_k__BackingField;
}
constexpr bool const& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__useLocalServer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useLocalServer_k__BackingField;
}
constexpr void GlobalNamespace::CustomNetworkConfig::__cordl_internal_set__useLocalServer_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useLocalServer_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__localServerPort_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localServerPort_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::CustomNetworkConfig::__cordl_internal_get__localServerPort_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localServerPort_k__BackingField;
}
constexpr void GlobalNamespace::CustomNetworkConfig::__cordl_internal_set__localServerPort_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localServerPort_k__BackingField = value;
}
inline int32_t GlobalNamespace::CustomNetworkConfig::get_maxPartySize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_maxPartySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CustomNetworkConfig::get_discoveryPort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_discoveryPort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CustomNetworkConfig::get_partyPort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_partyPort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CustomNetworkConfig::get_multiplayerPort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_multiplayerPort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CustomNetworkConfig::get_masterServerPort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_masterServerPort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CustomNetworkConfig::get_multiplayerStatusUrl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_multiplayerStatusUrl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CustomNetworkConfig::get_quickPlaySetupUrl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_quickPlaySetupUrl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CustomNetworkConfig::get_graphUrl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_graphUrl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CustomNetworkConfig::get_graphQLUrl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_graphQLUrl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CustomNetworkConfig::get_graphAccessToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_graphAccessToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline uint64_t GlobalNamespace::CustomNetworkConfig::get_graphAppId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_graphAppId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomNetworkConfig::get_forceGameLift() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_forceGameLift", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::ServiceEnvironment GlobalNamespace::CustomNetworkConfig::get_serviceEnvironment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_serviceEnvironment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ServiceEnvironment>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CustomNetworkConfig::get_customLocation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_customLocation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomNetworkConfig::get_useLocalServer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_useLocalServer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CustomNetworkConfig::get_localServerPort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(), { "get_localServerPort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::CustomNetworkConfig::_ctor(::GlobalNamespace::INetworkConfig* fromNetworkConfig, ::StringW customServerHostName, int32_t port, bool forceGameLift) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomNetworkConfig*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::INetworkConfig*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromNetworkConfig, customServerHostName, port, forceGameLift);
}
inline ::GlobalNamespace::CustomNetworkConfig* GlobalNamespace::CustomNetworkConfig::New_ctor(::GlobalNamespace::INetworkConfig* fromNetworkConfig, ::StringW customServerHostName, int32_t port,
                                                                                              bool forceGameLift) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomNetworkConfig*>(fromNetworkConfig, customServerHostName, port, forceGameLift));
}
/// @brief Convert operator to "::GlobalNamespace::INetworkConfig"
constexpr GlobalNamespace::CustomNetworkConfig::operator ::GlobalNamespace::INetworkConfig*() noexcept {
  return static_cast<::GlobalNamespace::INetworkConfig*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkConfig"
constexpr ::GlobalNamespace::INetworkConfig* GlobalNamespace::CustomNetworkConfig::i___GlobalNamespace__INetworkConfig() noexcept {
  return static_cast<::GlobalNamespace::INetworkConfig*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomNetworkConfig::CustomNetworkConfig() {}
