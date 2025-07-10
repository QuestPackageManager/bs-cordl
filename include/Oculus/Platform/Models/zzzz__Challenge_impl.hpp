#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/Challenge.hpp"
#include "Oculus/Platform/zzzz__ChallengeCreationType_impl.hpp"
#include "Oculus/Platform/zzzz__ChallengeVisibility_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Challenge_def.hpp"
#include "Oculus/Platform/Models/zzzz__Leaderboard_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Challenge._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::Challenge::*)(::System::IntPtr)>(&::Oculus::Platform::Models::Challenge::_ctor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x3f9025c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Challenge*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::ChallengeCreationType& Oculus::Platform::Models::Challenge::__cordl_internal_get_CreationType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CreationType;
}
constexpr ::Oculus::Platform::ChallengeCreationType const& Oculus::Platform::Models::Challenge::__cordl_internal_get_CreationType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CreationType;
}
constexpr void Oculus::Platform::Models::Challenge::__cordl_internal_set_CreationType(::Oculus::Platform::ChallengeCreationType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CreationType = value;
}
constexpr ::StringW& Oculus::Platform::Models::Challenge::__cordl_internal_get_Description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Description;
}
constexpr ::StringW const& Oculus::Platform::Models::Challenge::__cordl_internal_get_Description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Description;
}
constexpr void Oculus::Platform::Models::Challenge::__cordl_internal_set_Description(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Description)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& Oculus::Platform::Models::Challenge::__cordl_internal_get_EndDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndDate;
}
constexpr ::System::DateTime const& Oculus::Platform::Models::Challenge::__cordl_internal_get_EndDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndDate;
}
constexpr void Oculus::Platform::Models::Challenge::__cordl_internal_set_EndDate(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EndDate = value;
}
constexpr uint64_t& Oculus::Platform::Models::Challenge::__cordl_internal_get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr uint64_t const& Oculus::Platform::Models::Challenge::__cordl_internal_get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void Oculus::Platform::Models::Challenge::__cordl_internal_set__cordl_ID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::Challenge::__cordl_internal_get_InvitedUsersOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitedUsersOptional;
}
constexpr ::Oculus::Platform::Models::UserList* const& Oculus::Platform::Models::Challenge::__cordl_internal_get_InvitedUsersOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitedUsersOptional;
}
constexpr void Oculus::Platform::Models::Challenge::__cordl_internal_set_InvitedUsersOptional(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InvitedUsersOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::Challenge::__cordl_internal_get_InvitedUsers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitedUsers;
}
constexpr ::Oculus::Platform::Models::UserList* const& Oculus::Platform::Models::Challenge::__cordl_internal_get_InvitedUsers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitedUsers;
}
constexpr void Oculus::Platform::Models::Challenge::__cordl_internal_set_InvitedUsers(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InvitedUsers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::Leaderboard*& Oculus::Platform::Models::Challenge::__cordl_internal_get_Leaderboard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Leaderboard;
}
constexpr ::Oculus::Platform::Models::Leaderboard* const& Oculus::Platform::Models::Challenge::__cordl_internal_get_Leaderboard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Leaderboard;
}
constexpr void Oculus::Platform::Models::Challenge::__cordl_internal_set_Leaderboard(::Oculus::Platform::Models::Leaderboard* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Leaderboard)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::Challenge::__cordl_internal_get_ParticipantsOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ParticipantsOptional;
}
constexpr ::Oculus::Platform::Models::UserList* const& Oculus::Platform::Models::Challenge::__cordl_internal_get_ParticipantsOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ParticipantsOptional;
}
constexpr void Oculus::Platform::Models::Challenge::__cordl_internal_set_ParticipantsOptional(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ParticipantsOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::Challenge::__cordl_internal_get_Participants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Participants;
}
constexpr ::Oculus::Platform::Models::UserList* const& Oculus::Platform::Models::Challenge::__cordl_internal_get_Participants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Participants;
}
constexpr void Oculus::Platform::Models::Challenge::__cordl_internal_set_Participants(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Participants)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& Oculus::Platform::Models::Challenge::__cordl_internal_get_StartDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StartDate;
}
constexpr ::System::DateTime const& Oculus::Platform::Models::Challenge::__cordl_internal_get_StartDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StartDate;
}
constexpr void Oculus::Platform::Models::Challenge::__cordl_internal_set_StartDate(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StartDate = value;
}
constexpr ::StringW& Oculus::Platform::Models::Challenge::__cordl_internal_get_Title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Title;
}
constexpr ::StringW const& Oculus::Platform::Models::Challenge::__cordl_internal_get_Title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Title;
}
constexpr void Oculus::Platform::Models::Challenge::__cordl_internal_set_Title(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Title)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::ChallengeVisibility& Oculus::Platform::Models::Challenge::__cordl_internal_get_Visibility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Visibility;
}
constexpr ::Oculus::Platform::ChallengeVisibility const& Oculus::Platform::Models::Challenge::__cordl_internal_get_Visibility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Visibility;
}
constexpr void Oculus::Platform::Models::Challenge::__cordl_internal_set_Visibility(::Oculus::Platform::ChallengeVisibility value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Visibility = value;
}
inline void Oculus::Platform::Models::Challenge::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Challenge*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::Challenge* Oculus::Platform::Models::Challenge::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::Challenge*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::Challenge::Challenge() {}
