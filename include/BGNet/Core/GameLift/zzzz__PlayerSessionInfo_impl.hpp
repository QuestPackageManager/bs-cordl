#pragma once
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGNet/Core/GameLift/zzzz__PlayerSessionInfo_def.hpp"
//  Writing Method size for method: ::BGNet::Core::GameLift::PlayerSessionInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::PlayerSessionInfo::*)()>(&::BGNet::Core::GameLift::PlayerSessionInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe60edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::PlayerSessionInfo*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& BGNet::Core::GameLift::PlayerSessionInfo::__get_playerSessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___playerSessionId;
}
constexpr ::StringW const& BGNet::Core::GameLift::PlayerSessionInfo::__get_playerSessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___playerSessionId;
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__set_playerSessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerSessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BGNet::Core::GameLift::PlayerSessionInfo::__get_gameSessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___gameSessionId;
}
constexpr ::StringW const& BGNet::Core::GameLift::PlayerSessionInfo::__get_gameSessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___gameSessionId;
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__set_gameSessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameSessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BGNet::Core::GameLift::PlayerSessionInfo::__get_dnsName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___dnsName;
}
constexpr ::StringW const& BGNet::Core::GameLift::PlayerSessionInfo::__get_dnsName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___dnsName;
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__set_dnsName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dnsName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& BGNet::Core::GameLift::PlayerSessionInfo::__get_port() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___port;
}
constexpr int32_t const& BGNet::Core::GameLift::PlayerSessionInfo::__get_port() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___port;
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__set_port(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___port = value;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& BGNet::Core::GameLift::PlayerSessionInfo::__get_beatmapLevelSelectionMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___beatmapLevelSelectionMask;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& BGNet::Core::GameLift::PlayerSessionInfo::__get_beatmapLevelSelectionMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___beatmapLevelSelectionMask;
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__set_beatmapLevelSelectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___beatmapLevelSelectionMask = value;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& BGNet::Core::GameLift::PlayerSessionInfo::__get_gameplayServerConfiguration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___gameplayServerConfiguration;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& BGNet::Core::GameLift::PlayerSessionInfo::__get_gameplayServerConfiguration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___gameplayServerConfiguration;
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__set_gameplayServerConfiguration(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___gameplayServerConfiguration = value;
}
constexpr ::StringW& BGNet::Core::GameLift::PlayerSessionInfo::__get_privateGameSecret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___privateGameSecret;
}
constexpr ::StringW const& BGNet::Core::GameLift::PlayerSessionInfo::__get_privateGameSecret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___privateGameSecret;
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__set_privateGameSecret(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privateGameSecret)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BGNet::Core::GameLift::PlayerSessionInfo::__get_privateGameCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___privateGameCode;
}
constexpr ::StringW const& BGNet::Core::GameLift::PlayerSessionInfo::__get_privateGameCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___privateGameCode;
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__set_privateGameCode(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privateGameCode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BGNet::Core::GameLift::PlayerSessionInfo* BGNet::Core::GameLift::PlayerSessionInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::GameLift::PlayerSessionInfo*>());
}
inline void BGNet::Core::GameLift::PlayerSessionInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::PlayerSessionInfo*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGNet::Core::GameLift::PlayerSessionInfo::PlayerSessionInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
