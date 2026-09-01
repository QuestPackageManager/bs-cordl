#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\ApplicationInvite.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInvite_def.hpp"
#include "Oculus/Platform/Models/zzzz__Destination_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::ApplicationInvite._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::ApplicationInvite::*)(::System::IntPtr)>(&::Oculus::Platform::Models::ApplicationInvite::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5ded73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::ApplicationInvite*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::Destination*& Oculus::Platform::Models::ApplicationInvite::__cordl_internal_get_DestinationOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestinationOptional;
}
constexpr ::Oculus::Platform::Models::Destination* const& Oculus::Platform::Models::ApplicationInvite::__cordl_internal_get_DestinationOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestinationOptional;
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__cordl_internal_set_DestinationOptional(::Oculus::Platform::Models::Destination* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DestinationOptional = value;
}
constexpr ::Oculus::Platform::Models::Destination*& Oculus::Platform::Models::ApplicationInvite::__cordl_internal_get_Destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Destination;
}
constexpr ::Oculus::Platform::Models::Destination* const& Oculus::Platform::Models::ApplicationInvite::__cordl_internal_get_Destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Destination;
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__cordl_internal_set_Destination(::Oculus::Platform::Models::Destination* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Destination = value;
}
constexpr uint64_t& Oculus::Platform::Models::ApplicationInvite::__cordl_internal_get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr uint64_t const& Oculus::Platform::Models::ApplicationInvite::__cordl_internal_get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__cordl_internal_set__cordl_ID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
constexpr bool& Oculus::Platform::Models::ApplicationInvite::__cordl_internal_get_IsActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsActive;
}
constexpr bool const& Oculus::Platform::Models::ApplicationInvite::__cordl_internal_get_IsActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsActive;
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__cordl_internal_set_IsActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsActive = value;
}
constexpr ::StringW& Oculus::Platform::Models::ApplicationInvite::__cordl_internal_get_LobbySessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LobbySessionId;
}
constexpr ::StringW const& Oculus::Platform::Models::ApplicationInvite::__cordl_internal_get_LobbySessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LobbySessionId;
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__cordl_internal_set_LobbySessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LobbySessionId = value;
}
constexpr ::StringW& Oculus::Platform::Models::ApplicationInvite::__cordl_internal_get_MatchSessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchSessionId;
}
constexpr ::StringW const& Oculus::Platform::Models::ApplicationInvite::__cordl_internal_get_MatchSessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchSessionId;
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__cordl_internal_set_MatchSessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MatchSessionId = value;
}
constexpr ::Oculus::Platform::Models::User*& Oculus::Platform::Models::ApplicationInvite::__cordl_internal_get_RecipientOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RecipientOptional;
}
constexpr ::Oculus::Platform::Models::User* const& Oculus::Platform::Models::ApplicationInvite::__cordl_internal_get_RecipientOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RecipientOptional;
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__cordl_internal_set_RecipientOptional(::Oculus::Platform::Models::User* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RecipientOptional = value;
}
constexpr ::Oculus::Platform::Models::User*& Oculus::Platform::Models::ApplicationInvite::__cordl_internal_get_Recipient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Recipient;
}
constexpr ::Oculus::Platform::Models::User* const& Oculus::Platform::Models::ApplicationInvite::__cordl_internal_get_Recipient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Recipient;
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__cordl_internal_set_Recipient(::Oculus::Platform::Models::User* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Recipient = value;
}
inline void Oculus::Platform::Models::ApplicationInvite::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::ApplicationInvite*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::ApplicationInvite* Oculus::Platform::Models::ApplicationInvite::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::ApplicationInvite*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::ApplicationInvite::ApplicationInvite() {}
