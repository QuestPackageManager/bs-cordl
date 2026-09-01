#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\User.hpp"
#include "Oculus/Platform/zzzz__UserPresenceStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/Models/zzzz__ManagedInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::User._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::User::*)(::System::IntPtr)>(&::Oculus::Platform::Models::User::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5deecd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::User*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::User::__cordl_internal_get_DisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisplayName;
}
constexpr ::StringW const& Oculus::Platform::Models::User::__cordl_internal_get_DisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisplayName;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_DisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DisplayName = value;
}
constexpr uint64_t& Oculus::Platform::Models::User::__cordl_internal_get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr uint64_t const& Oculus::Platform::Models::User::__cordl_internal_get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set__cordl_ID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
constexpr ::StringW& Oculus::Platform::Models::User::__cordl_internal_get_ImageURL() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ImageURL;
}
constexpr ::StringW const& Oculus::Platform::Models::User::__cordl_internal_get_ImageURL() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ImageURL;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_ImageURL(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ImageURL = value;
}
constexpr ::Oculus::Platform::Models::ManagedInfo*& Oculus::Platform::Models::User::__cordl_internal_get_ManagedInfoOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ManagedInfoOptional;
}
constexpr ::Oculus::Platform::Models::ManagedInfo* const& Oculus::Platform::Models::User::__cordl_internal_get_ManagedInfoOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ManagedInfoOptional;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_ManagedInfoOptional(::Oculus::Platform::Models::ManagedInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ManagedInfoOptional = value;
}
constexpr ::Oculus::Platform::Models::ManagedInfo*& Oculus::Platform::Models::User::__cordl_internal_get_ManagedInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ManagedInfo;
}
constexpr ::Oculus::Platform::Models::ManagedInfo* const& Oculus::Platform::Models::User::__cordl_internal_get_ManagedInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ManagedInfo;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_ManagedInfo(::Oculus::Platform::Models::ManagedInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ManagedInfo = value;
}
constexpr ::StringW& Oculus::Platform::Models::User::__cordl_internal_get_OculusID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OculusID;
}
constexpr ::StringW const& Oculus::Platform::Models::User::__cordl_internal_get_OculusID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OculusID;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_OculusID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OculusID = value;
}
constexpr ::StringW& Oculus::Platform::Models::User::__cordl_internal_get_Presence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Presence;
}
constexpr ::StringW const& Oculus::Platform::Models::User::__cordl_internal_get_Presence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Presence;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_Presence(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Presence = value;
}
constexpr ::StringW& Oculus::Platform::Models::User::__cordl_internal_get_PresenceDeeplinkMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PresenceDeeplinkMessage;
}
constexpr ::StringW const& Oculus::Platform::Models::User::__cordl_internal_get_PresenceDeeplinkMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PresenceDeeplinkMessage;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_PresenceDeeplinkMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PresenceDeeplinkMessage = value;
}
constexpr ::StringW& Oculus::Platform::Models::User::__cordl_internal_get_PresenceDestinationApiName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PresenceDestinationApiName;
}
constexpr ::StringW const& Oculus::Platform::Models::User::__cordl_internal_get_PresenceDestinationApiName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PresenceDestinationApiName;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_PresenceDestinationApiName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PresenceDestinationApiName = value;
}
constexpr ::StringW& Oculus::Platform::Models::User::__cordl_internal_get_PresenceLobbySessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PresenceLobbySessionId;
}
constexpr ::StringW const& Oculus::Platform::Models::User::__cordl_internal_get_PresenceLobbySessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PresenceLobbySessionId;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_PresenceLobbySessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PresenceLobbySessionId = value;
}
constexpr ::StringW& Oculus::Platform::Models::User::__cordl_internal_get_PresenceMatchSessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PresenceMatchSessionId;
}
constexpr ::StringW const& Oculus::Platform::Models::User::__cordl_internal_get_PresenceMatchSessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PresenceMatchSessionId;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_PresenceMatchSessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PresenceMatchSessionId = value;
}
constexpr ::Oculus::Platform::UserPresenceStatus& Oculus::Platform::Models::User::__cordl_internal_get_PresenceStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PresenceStatus;
}
constexpr ::Oculus::Platform::UserPresenceStatus const& Oculus::Platform::Models::User::__cordl_internal_get_PresenceStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PresenceStatus;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_PresenceStatus(::Oculus::Platform::UserPresenceStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PresenceStatus = value;
}
constexpr ::StringW& Oculus::Platform::Models::User::__cordl_internal_get_SmallImageUrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SmallImageUrl;
}
constexpr ::StringW const& Oculus::Platform::Models::User::__cordl_internal_get_SmallImageUrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SmallImageUrl;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_SmallImageUrl(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SmallImageUrl = value;
}
inline void Oculus::Platform::Models::User::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::User*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::User* Oculus::Platform::Models::User::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::User*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::User::User() {}
