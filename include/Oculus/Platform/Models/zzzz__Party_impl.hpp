#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/Party.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Party_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Party._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::Party::*)(::System::IntPtr)>(&::Oculus::Platform::Models::Party::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5def424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::Party*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr uint64_t& Oculus::Platform::Models::Party::__cordl_internal_get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr uint64_t const& Oculus::Platform::Models::Party::__cordl_internal_get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void Oculus::Platform::Models::Party::__cordl_internal_set__cordl_ID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::Party::__cordl_internal_get_InvitedUsersOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitedUsersOptional;
}
constexpr ::Oculus::Platform::Models::UserList* const& Oculus::Platform::Models::Party::__cordl_internal_get_InvitedUsersOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitedUsersOptional;
}
constexpr void Oculus::Platform::Models::Party::__cordl_internal_set_InvitedUsersOptional(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InvitedUsersOptional = value;
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::Party::__cordl_internal_get_InvitedUsers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitedUsers;
}
constexpr ::Oculus::Platform::Models::UserList* const& Oculus::Platform::Models::Party::__cordl_internal_get_InvitedUsers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitedUsers;
}
constexpr void Oculus::Platform::Models::Party::__cordl_internal_set_InvitedUsers(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InvitedUsers = value;
}
constexpr ::Oculus::Platform::Models::User*& Oculus::Platform::Models::Party::__cordl_internal_get_LeaderOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LeaderOptional;
}
constexpr ::Oculus::Platform::Models::User* const& Oculus::Platform::Models::Party::__cordl_internal_get_LeaderOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LeaderOptional;
}
constexpr void Oculus::Platform::Models::Party::__cordl_internal_set_LeaderOptional(::Oculus::Platform::Models::User* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LeaderOptional = value;
}
constexpr ::Oculus::Platform::Models::User*& Oculus::Platform::Models::Party::__cordl_internal_get_Leader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Leader;
}
constexpr ::Oculus::Platform::Models::User* const& Oculus::Platform::Models::Party::__cordl_internal_get_Leader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Leader;
}
constexpr void Oculus::Platform::Models::Party::__cordl_internal_set_Leader(::Oculus::Platform::Models::User* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Leader = value;
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::Party::__cordl_internal_get_UsersOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UsersOptional;
}
constexpr ::Oculus::Platform::Models::UserList* const& Oculus::Platform::Models::Party::__cordl_internal_get_UsersOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UsersOptional;
}
constexpr void Oculus::Platform::Models::Party::__cordl_internal_set_UsersOptional(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UsersOptional = value;
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::Party::__cordl_internal_get_Users() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Users;
}
constexpr ::Oculus::Platform::Models::UserList* const& Oculus::Platform::Models::Party::__cordl_internal_get_Users() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Users;
}
constexpr void Oculus::Platform::Models::Party::__cordl_internal_set_Users(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Users = value;
}
inline void Oculus::Platform::Models::Party::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::Party*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::Party* Oculus::Platform::Models::Party::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::Party*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::Party::Party() {}
