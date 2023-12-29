#pragma once
#include "BeatSaberAPI/DataTransferObjects/zzzz__ScoresScope_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__LeaderboardQuery_def.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__LevelScoreResult_def.hpp"
//  Writing Method size for method: ::BeatSaberAPI::DataTransferObjects::LeaderboardQuery._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaberAPI::DataTransferObjects::LeaderboardQuery::*)()>(
    &::BeatSaberAPI::DataTransferObjects::LeaderboardQuery::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e8adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::LeaderboardQuery*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_leaderboardId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leaderboardId;
}
constexpr ::StringW const& BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_leaderboardId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leaderboardId;
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__set_leaderboardId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leaderboardId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
constexpr int32_t& BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_fromRank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fromRank;
}
constexpr int32_t const& BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_fromRank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fromRank;
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__set_fromRank(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fromRank = value;
}
constexpr ::BeatSaberAPI::DataTransferObjects::ScoresScope& BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_scope() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scope;
}
constexpr ::BeatSaberAPI::DataTransferObjects::ScoresScope const& BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_scope() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scope;
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__set_scope(::BeatSaberAPI::DataTransferObjects::ScoresScope value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scope = value;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_friendsUserIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___friendsUserIds;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_friendsUserIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___friendsUserIds;
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__set_friendsUserIds(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___friendsUserIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_onlyWithSpecificGameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onlyWithSpecificGameplayModifiers;
}
constexpr bool const& BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_onlyWithSpecificGameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onlyWithSpecificGameplayModifiers;
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__set_onlyWithSpecificGameplayModifiers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onlyWithSpecificGameplayModifiers = value;
}
constexpr ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*>&
BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*> const&
BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__set_gameplayModifiers(
    ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameplayModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaberAPI::DataTransferObjects::LeaderboardQuery* BeatSaberAPI::DataTransferObjects::LeaderboardQuery::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaberAPI::DataTransferObjects::LeaderboardQuery*>());
}
inline void BeatSaberAPI::DataTransferObjects::LeaderboardQuery::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::LeaderboardQuery*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaberAPI::DataTransferObjects::LeaderboardQuery::LeaderboardQuery() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
