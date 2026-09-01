#pragma once
// IWYU pragma private; include "BGNet\Core\GameLift\PlayerSessionInfo.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGNet/Core/GameLift/zzzz__PlayerSessionInfo_def.hpp"
//  Writing Method size for method: ::BGNet::Core::GameLift::PlayerSessionInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::PlayerSessionInfo::*)()>(&::BGNet::Core::GameLift::PlayerSessionInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32c33ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::PlayerSessionInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_get_playerSessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSessionId;
}
constexpr ::StringW const& BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_get_playerSessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSessionId;
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_set_playerSessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerSessionId = value;
}
constexpr ::StringW& BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_get_gameSessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameSessionId;
}
constexpr ::StringW const& BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_get_gameSessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameSessionId;
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_set_gameSessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameSessionId = value;
}
constexpr ::StringW& BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_get_dnsName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dnsName;
}
constexpr ::StringW const& BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_get_dnsName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dnsName;
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_set_dnsName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dnsName = value;
}
constexpr ::StringW& BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_get_ipAddress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ipAddress;
}
constexpr ::StringW const& BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_get_ipAddress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ipAddress;
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_set_ipAddress(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ipAddress = value;
}
constexpr int32_t& BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_get_port() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___port;
}
constexpr int32_t const& BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_get_port() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___port;
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_set_port(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___port = value;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_get_beatmapLevelSelectionMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelSelectionMask;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_get_beatmapLevelSelectionMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelSelectionMask;
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_set_beatmapLevelSelectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapLevelSelectionMask = value;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_get_gameplayServerConfiguration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayServerConfiguration;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_get_gameplayServerConfiguration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayServerConfiguration;
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_set_gameplayServerConfiguration(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameplayServerConfiguration = value;
}
constexpr ::StringW& BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_get_privateGameSecret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateGameSecret;
}
constexpr ::StringW const& BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_get_privateGameSecret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateGameSecret;
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_set_privateGameSecret(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privateGameSecret = value;
}
constexpr ::StringW& BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_get_privateGameCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateGameCode;
}
constexpr ::StringW const& BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_get_privateGameCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateGameCode;
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__cordl_internal_set_privateGameCode(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privateGameCode = value;
}
inline void BGNet::Core::GameLift::PlayerSessionInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::PlayerSessionInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGNet::Core::GameLift::PlayerSessionInfo* BGNet::Core::GameLift::PlayerSessionInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGNet::Core::GameLift::PlayerSessionInfo*>());
}
// Ctor Parameters []
constexpr ::BGNet::Core::GameLift::PlayerSessionInfo::PlayerSessionInfo() {}
