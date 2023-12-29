#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__LeaderboardEntry_def.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__LevelScoreResult_def.hpp"
//  Writing Method size for method: ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::*)()>(
    &::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e8ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr int32_t const& BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__set_id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___id = value;
}
constexpr int32_t& BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_score() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___score;
}
constexpr int32_t const& BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_score() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___score;
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__set_score(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___score = value;
}
constexpr int32_t& BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_unmodifiedScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unmodifiedScore;
}
constexpr int32_t const& BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_unmodifiedScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unmodifiedScore;
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__set_unmodifiedScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unmodifiedScore = value;
}
constexpr int32_t& BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_rank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rank;
}
constexpr int32_t const& BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_rank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rank;
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__set_rank(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rank = value;
}
constexpr ::System::DateTime& BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_updated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updated;
}
constexpr ::System::DateTime const& BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_updated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updated;
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__set_updated(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___updated = value;
}
constexpr ::StringW& BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_userDisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userDisplayName;
}
constexpr ::StringW const& BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_userDisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userDisplayName;
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__set_userDisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userDisplayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_platformUserId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformUserId;
}
constexpr ::StringW const& BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_platformUserId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformUserId;
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__set_platformUserId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___platformUserId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*>&
BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*> const&
BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__set_gameplayModifiers(
    ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameplayModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry* BeatSaberAPI::DataTransferObjects::LeaderboardEntry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*>());
}
inline void BeatSaberAPI::DataTransferObjects::LeaderboardEntry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::LeaderboardEntry() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
