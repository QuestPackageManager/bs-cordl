#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\LaunchDetails.hpp"
#include "Oculus/Platform/zzzz__LaunchType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchDetails_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LaunchDetails._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::LaunchDetails::*)(::System::IntPtr)>(&::Oculus::Platform::Models::LaunchDetails::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5defef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::LaunchDetails*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_DeeplinkMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeeplinkMessage;
}
constexpr ::StringW const& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_DeeplinkMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeeplinkMessage;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__cordl_internal_set_DeeplinkMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DeeplinkMessage = value;
}
constexpr ::StringW& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_DestinationApiName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestinationApiName;
}
constexpr ::StringW const& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_DestinationApiName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestinationApiName;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__cordl_internal_set_DestinationApiName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DestinationApiName = value;
}
constexpr ::StringW& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_LaunchSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LaunchSource;
}
constexpr ::StringW const& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_LaunchSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LaunchSource;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__cordl_internal_set_LaunchSource(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LaunchSource = value;
}
constexpr ::Oculus::Platform::LaunchType& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_LaunchType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LaunchType;
}
constexpr ::Oculus::Platform::LaunchType const& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_LaunchType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LaunchType;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__cordl_internal_set_LaunchType(::Oculus::Platform::LaunchType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LaunchType = value;
}
constexpr ::StringW& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_LobbySessionID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LobbySessionID;
}
constexpr ::StringW const& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_LobbySessionID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LobbySessionID;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__cordl_internal_set_LobbySessionID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LobbySessionID = value;
}
constexpr ::StringW& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_MatchSessionID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchSessionID;
}
constexpr ::StringW const& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_MatchSessionID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchSessionID;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__cordl_internal_set_MatchSessionID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MatchSessionID = value;
}
constexpr ::StringW& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_TrackingID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackingID;
}
constexpr ::StringW const& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_TrackingID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackingID;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__cordl_internal_set_TrackingID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TrackingID = value;
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_UsersOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UsersOptional;
}
constexpr ::Oculus::Platform::Models::UserList* const& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_UsersOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UsersOptional;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__cordl_internal_set_UsersOptional(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UsersOptional = value;
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_Users() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Users;
}
constexpr ::Oculus::Platform::Models::UserList* const& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_Users() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Users;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__cordl_internal_set_Users(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Users = value;
}
inline void Oculus::Platform::Models::LaunchDetails::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::LaunchDetails*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::LaunchDetails* Oculus::Platform::Models::LaunchDetails::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::LaunchDetails*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LaunchDetails::LaunchDetails() {}
