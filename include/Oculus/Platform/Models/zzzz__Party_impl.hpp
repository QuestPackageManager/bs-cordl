#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/Party.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Party_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Party._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::Party::*)(::System::IntPtr)>(&::Oculus::Platform::Models::Party::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x3f92f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Party*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InvitedUsersOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InvitedUsers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LeaderOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Leader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UsersOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Users)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Oculus::Platform::Models::Party::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Party*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::Party* Oculus::Platform::Models::Party::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::Party*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::Party::Party() {}
