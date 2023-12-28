#pragma once
#include "Oculus/Platform/zzzz__ChallengeCreationType_impl.hpp"
#include "Oculus/Platform/zzzz__ChallengeVisibility_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Challenge_def.hpp"
#include "Oculus/Platform/Models/zzzz__Leaderboard_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Challenge._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::Challenge::*)(void*)>(&::Oculus::Platform::Models::Challenge::_ctor)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x2704fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Challenge*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::ChallengeCreationType& Oculus::Platform::Models::Challenge::__get_CreationType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CreationType;
}
constexpr ::Oculus::Platform::ChallengeCreationType const& Oculus::Platform::Models::Challenge::__get_CreationType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CreationType;
}
constexpr void Oculus::Platform::Models::Challenge::__set_CreationType(::Oculus::Platform::ChallengeCreationType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CreationType = value;
}
constexpr ::StringW& Oculus::Platform::Models::Challenge::__get_Description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Description;
}
constexpr ::StringW const& Oculus::Platform::Models::Challenge::__get_Description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Description;
}
constexpr void Oculus::Platform::Models::Challenge::__set_Description(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Description)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& Oculus::Platform::Models::Challenge::__get_EndDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndDate;
}
constexpr ::System::DateTime const& Oculus::Platform::Models::Challenge::__get_EndDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndDate;
}
constexpr void Oculus::Platform::Models::Challenge::__set_EndDate(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EndDate = value;
}
constexpr uint64_t& Oculus::Platform::Models::Challenge::__get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr uint64_t const& Oculus::Platform::Models::Challenge::__get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void Oculus::Platform::Models::Challenge::__set__cordl_ID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::Challenge::__get_InvitedUsersOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitedUsersOptional;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& Oculus::Platform::Models::Challenge::__get_InvitedUsersOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitedUsersOptional;
}
constexpr void Oculus::Platform::Models::Challenge::__set_InvitedUsersOptional(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InvitedUsersOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::Challenge::__get_InvitedUsers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitedUsers;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& Oculus::Platform::Models::Challenge::__get_InvitedUsers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitedUsers;
}
constexpr void Oculus::Platform::Models::Challenge::__set_InvitedUsers(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InvitedUsers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::Leaderboard*& Oculus::Platform::Models::Challenge::__get_Leaderboard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Leaderboard;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Leaderboard*> const& Oculus::Platform::Models::Challenge::__get_Leaderboard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Leaderboard;
}
constexpr void Oculus::Platform::Models::Challenge::__set_Leaderboard(::Oculus::Platform::Models::Leaderboard* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Leaderboard)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::Challenge::__get_ParticipantsOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ParticipantsOptional;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& Oculus::Platform::Models::Challenge::__get_ParticipantsOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ParticipantsOptional;
}
constexpr void Oculus::Platform::Models::Challenge::__set_ParticipantsOptional(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ParticipantsOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::Challenge::__get_Participants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Participants;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& Oculus::Platform::Models::Challenge::__get_Participants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Participants;
}
constexpr void Oculus::Platform::Models::Challenge::__set_Participants(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Participants)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& Oculus::Platform::Models::Challenge::__get_StartDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StartDate;
}
constexpr ::System::DateTime const& Oculus::Platform::Models::Challenge::__get_StartDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StartDate;
}
constexpr void Oculus::Platform::Models::Challenge::__set_StartDate(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StartDate = value;
}
constexpr ::StringW& Oculus::Platform::Models::Challenge::__get_Title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Title;
}
constexpr ::StringW const& Oculus::Platform::Models::Challenge::__get_Title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Title;
}
constexpr void Oculus::Platform::Models::Challenge::__set_Title(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Title)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::ChallengeVisibility& Oculus::Platform::Models::Challenge::__get_Visibility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Visibility;
}
constexpr ::Oculus::Platform::ChallengeVisibility const& Oculus::Platform::Models::Challenge::__get_Visibility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Visibility;
}
constexpr void Oculus::Platform::Models::Challenge::__set_Visibility(::Oculus::Platform::ChallengeVisibility value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Visibility = value;
}
inline ::Oculus::Platform::Models::Challenge* Oculus::Platform::Models::Challenge::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::Challenge*>(o));
}
inline void Oculus::Platform::Models::Challenge::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Challenge*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::Challenge::Challenge() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
