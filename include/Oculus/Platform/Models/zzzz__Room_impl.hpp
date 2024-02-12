#pragma once
#include "Oculus/Platform/zzzz__RoomJoinPolicy_impl.hpp"
#include "Oculus/Platform/zzzz__RoomJoinability_impl.hpp"
#include "Oculus/Platform/zzzz__RoomType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueuedUserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__TeamList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Room._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::Room::*)(void*)>(&::Oculus::Platform::Models::Room::_ctor)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x273aff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Room*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr uint64_t& Oculus::Platform::Models::Room::__cordl_internal_get_ApplicationID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ApplicationID;
}
constexpr uint64_t const& Oculus::Platform::Models::Room::__cordl_internal_get_ApplicationID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ApplicationID;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set_ApplicationID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ApplicationID = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& Oculus::Platform::Models::Room::__cordl_internal_get_DataStore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DataStore;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& Oculus::Platform::Models::Room::__cordl_internal_get_DataStore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DataStore;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set_DataStore(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DataStore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::Room::__cordl_internal_get_Description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Description;
}
constexpr ::StringW const& Oculus::Platform::Models::Room::__cordl_internal_get_Description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Description;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set_Description(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Description)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint64_t& Oculus::Platform::Models::Room::__cordl_internal_get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr uint64_t const& Oculus::Platform::Models::Room::__cordl_internal_get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set__cordl_ID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::Room::__cordl_internal_get_InvitedUsersOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitedUsersOptional;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& Oculus::Platform::Models::Room::__cordl_internal_get_InvitedUsersOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitedUsersOptional;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set_InvitedUsersOptional(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InvitedUsersOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::Room::__cordl_internal_get_InvitedUsers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitedUsers;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& Oculus::Platform::Models::Room::__cordl_internal_get_InvitedUsers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitedUsers;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set_InvitedUsers(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InvitedUsers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Oculus::Platform::Models::Room::__cordl_internal_get_IsMembershipLocked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsMembershipLocked;
}
constexpr bool const& Oculus::Platform::Models::Room::__cordl_internal_get_IsMembershipLocked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsMembershipLocked;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set_IsMembershipLocked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsMembershipLocked = value;
}
constexpr ::Oculus::Platform::RoomJoinPolicy& Oculus::Platform::Models::Room::__cordl_internal_get_JoinPolicy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___JoinPolicy;
}
constexpr ::Oculus::Platform::RoomJoinPolicy const& Oculus::Platform::Models::Room::__cordl_internal_get_JoinPolicy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___JoinPolicy;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set_JoinPolicy(::Oculus::Platform::RoomJoinPolicy value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___JoinPolicy = value;
}
constexpr ::Oculus::Platform::RoomJoinability& Oculus::Platform::Models::Room::__cordl_internal_get_Joinability() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Joinability;
}
constexpr ::Oculus::Platform::RoomJoinability const& Oculus::Platform::Models::Room::__cordl_internal_get_Joinability() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Joinability;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set_Joinability(::Oculus::Platform::RoomJoinability value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Joinability = value;
}
constexpr ::Oculus::Platform::Models::MatchmakingEnqueuedUserList*& Oculus::Platform::Models::Room::__cordl_internal_get_MatchedUsersOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchedUsersOptional;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::MatchmakingEnqueuedUserList*> const& Oculus::Platform::Models::Room::__cordl_internal_get_MatchedUsersOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchedUsersOptional;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set_MatchedUsersOptional(::Oculus::Platform::Models::MatchmakingEnqueuedUserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MatchedUsersOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::MatchmakingEnqueuedUserList*& Oculus::Platform::Models::Room::__cordl_internal_get_MatchedUsers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchedUsers;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::MatchmakingEnqueuedUserList*> const& Oculus::Platform::Models::Room::__cordl_internal_get_MatchedUsers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchedUsers;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set_MatchedUsers(::Oculus::Platform::Models::MatchmakingEnqueuedUserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MatchedUsers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& Oculus::Platform::Models::Room::__cordl_internal_get_MaxUsers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxUsers;
}
constexpr uint32_t const& Oculus::Platform::Models::Room::__cordl_internal_get_MaxUsers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxUsers;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set_MaxUsers(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MaxUsers = value;
}
constexpr ::StringW& Oculus::Platform::Models::Room::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& Oculus::Platform::Models::Room::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::User*& Oculus::Platform::Models::Room::__cordl_internal_get_OwnerOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OwnerOptional;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& Oculus::Platform::Models::Room::__cordl_internal_get_OwnerOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OwnerOptional;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set_OwnerOptional(::Oculus::Platform::Models::User* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OwnerOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::User*& Oculus::Platform::Models::Room::__cordl_internal_get_Owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Owner;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& Oculus::Platform::Models::Room::__cordl_internal_get_Owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Owner;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set_Owner(::Oculus::Platform::Models::User* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Owner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::TeamList*& Oculus::Platform::Models::Room::__cordl_internal_get_TeamsOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TeamsOptional;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::TeamList*> const& Oculus::Platform::Models::Room::__cordl_internal_get_TeamsOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TeamsOptional;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set_TeamsOptional(::Oculus::Platform::Models::TeamList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TeamsOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::TeamList*& Oculus::Platform::Models::Room::__cordl_internal_get_Teams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Teams;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::TeamList*> const& Oculus::Platform::Models::Room::__cordl_internal_get_Teams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Teams;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set_Teams(::Oculus::Platform::Models::TeamList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Teams)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::RoomType& Oculus::Platform::Models::Room::__cordl_internal_get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::Oculus::Platform::RoomType const& Oculus::Platform::Models::Room::__cordl_internal_get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set_Type(::Oculus::Platform::RoomType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Type = value;
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::Room::__cordl_internal_get_UsersOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UsersOptional;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& Oculus::Platform::Models::Room::__cordl_internal_get_UsersOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UsersOptional;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set_UsersOptional(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UsersOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::Room::__cordl_internal_get_Users() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Users;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& Oculus::Platform::Models::Room::__cordl_internal_get_Users() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Users;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set_Users(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Users)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& Oculus::Platform::Models::Room::__cordl_internal_get_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Version;
}
constexpr uint32_t const& Oculus::Platform::Models::Room::__cordl_internal_get_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Version;
}
constexpr void Oculus::Platform::Models::Room::__cordl_internal_set_Version(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Version = value;
}
inline ::Oculus::Platform::Models::Room* Oculus::Platform::Models::Room::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::Room*>(o));
}
inline void Oculus::Platform::Models::Room::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Room*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::Room::Room() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
