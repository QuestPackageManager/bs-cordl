#pragma once
#include "BeatSaberAPI/DataTransferObjects/zzzz__PlatformEnviroment_impl.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__UserPlatform_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__UserAuthenticationData_def.hpp"
//  Writing Method size for method: ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::*)()>(
    &::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e8b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::UserAuthenticationData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::BeatSaberAPI::DataTransferObjects::UserPlatform& BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_userPlatform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userPlatform;
}
constexpr ::BeatSaberAPI::DataTransferObjects::UserPlatform const& BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_userPlatform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userPlatform;
}
constexpr void BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__set_userPlatform(::BeatSaberAPI::DataTransferObjects::UserPlatform value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___userPlatform = value;
}
constexpr ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment& BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_platformEnviroment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformEnviroment;
}
constexpr ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment const& BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_platformEnviroment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformEnviroment;
}
constexpr void BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__set_platformEnviroment(::BeatSaberAPI::DataTransferObjects::PlatformEnviroment value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___platformEnviroment = value;
}
constexpr ::StringW& BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_platformUserId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformUserId;
}
constexpr ::StringW const& BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_platformUserId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformUserId;
}
constexpr void BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__set_platformUserId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___platformUserId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_platformAuthToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformAuthToken;
}
constexpr ::StringW const& BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_platformAuthToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformAuthToken;
}
constexpr void BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__set_platformAuthToken(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___platformAuthToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_bsAuthToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bsAuthToken;
}
constexpr ::StringW const& BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_bsAuthToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bsAuthToken;
}
constexpr void BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__set_bsAuthToken(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bsAuthToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_gameBuildVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameBuildVersion;
}
constexpr ::StringW const& BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_gameBuildVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameBuildVersion;
}
constexpr void BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__set_gameBuildVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameBuildVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_publicUserDisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicUserDisplayName;
}
constexpr ::StringW const& BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_publicUserDisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicUserDisplayName;
}
constexpr void BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__set_publicUserDisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___publicUserDisplayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData* BeatSaberAPI::DataTransferObjects::UserAuthenticationData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaberAPI::DataTransferObjects::UserAuthenticationData*>());
}
inline void BeatSaberAPI::DataTransferObjects::UserAuthenticationData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::UserAuthenticationData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::UserAuthenticationData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
