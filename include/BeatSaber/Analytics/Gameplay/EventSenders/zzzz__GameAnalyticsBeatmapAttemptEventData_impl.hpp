#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/GameAnalyticsBeatmapAttemptEventData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapAttemptEventData_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapLevelData_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::*)(
    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*, bool, bool, bool, int32_t, int32_t, int32_t, bool, int32_t, uint32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x31cf7f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 14>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr uint32_t& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr uint32_t const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_set_duration(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___duration = value;
}
constexpr bool& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_isClear() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isClear;
}
constexpr bool const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_isClear() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isClear;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_set_isClear(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isClear = value;
}
constexpr int64_t& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_score() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___score;
}
constexpr int64_t const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_score() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___score;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_set_score(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___score = value;
}
constexpr int64_t& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_modifiedScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiedScore;
}
constexpr int64_t const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_modifiedScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiedScore;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_set_modifiedScore(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifiedScore = value;
}
constexpr int32_t& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_maxCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCombo;
}
constexpr int32_t const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_maxCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCombo;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_set_maxCombo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCombo = value;
}
constexpr int32_t& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_rank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rank;
}
constexpr int32_t const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_rank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rank;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_set_rank(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rank = value;
}
constexpr bool& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_isFullCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isFullCombo;
}
constexpr bool const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_isFullCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isFullCombo;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_set_isFullCombo(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isFullCombo = value;
}
constexpr int32_t& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_goodCuts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCuts;
}
constexpr int32_t const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_goodCuts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCuts;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_set_goodCuts(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___goodCuts = value;
}
constexpr int32_t& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_badCuts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badCuts;
}
constexpr int32_t const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_badCuts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badCuts;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_set_badCuts(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___badCuts = value;
}
constexpr int32_t& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_misses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___misses;
}
constexpr int32_t const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_misses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___misses;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_set_misses(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___misses = value;
}
constexpr int32_t& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_bombsHit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bombsHit;
}
constexpr int32_t const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_bombsHit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bombsHit;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_set_bombsHit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bombsHit = value;
}
constexpr bool& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_isEndStateRestart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEndStateRestart;
}
constexpr bool const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_isEndStateRestart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEndStateRestart;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_set_isEndStateRestart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isEndStateRestart = value;
}
constexpr bool& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_isEndStateQuit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEndStateQuit;
}
constexpr bool const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_isEndStateQuit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEndStateQuit;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_set_isEndStateQuit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isEndStateQuit = value;
}
constexpr bool& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_isMissionComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMissionComplete;
}
constexpr bool const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_isMissionComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMissionComplete;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_set_isMissionComplete(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isMissionComplete = value;
}
constexpr uint32_t& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_missionCompletionMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionCompletionMask;
}
constexpr uint32_t const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_missionCompletionMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionCompletionMask;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_set_missionCompletionMask(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___missionCompletionMask = value;
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_matchID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___matchID;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_matchID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___matchID;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_set_matchID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___matchID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*&
BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_levelData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelData;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* const&
BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_get_levelData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelData;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::__cordl_internal_set_levelData(
    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData,
                                                                                                      bool isEndStateQuit, bool isEndStateRestart, bool isClear, int32_t rank, int32_t modifiedScore,
                                                                                                      int32_t score, bool isFullCombo, int32_t maxCombo, uint32_t duration, int32_t goodCuts,
                                                                                                      int32_t badCuts, int32_t misses, int32_t bombsHit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 14>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelData, isEndStateQuit, isEndStateRestart, isClear, rank, modifiedScore, score, isFullCombo, maxCombo, duration,
                                                          goodCuts, badCuts, misses, bombsHit);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData* BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::New_ctor(
    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData, bool isEndStateQuit, bool isEndStateRestart, bool isClear, int32_t rank, int32_t modifiedScore,
    int32_t score, bool isFullCombo, int32_t maxCombo, uint32_t duration, int32_t goodCuts, int32_t badCuts, int32_t misses, int32_t bombsHit) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*>(
      levelData, isEndStateQuit, isEndStateRestart, isClear, rank, modifiedScore, score, isFullCombo, maxCombo, duration, goodCuts, badCuts, misses, bombsHit));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData::GameAnalyticsBeatmapAttemptEventData() {}
