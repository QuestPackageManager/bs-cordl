#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelCompletionResultsBase.hpp"
#include "GlobalNamespace/zzzz__LevelScore_impl.hpp"
#include "GlobalNamespace/zzzz__RankModel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResultsBase_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResultsBase_def.hpp"
#include "GlobalNamespace/zzzz__LevelScore_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType::LevelCompletionResultsBase_LevelEndStateType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType::LevelCompletionResultsBase_LevelEndStateType() {}
constexpr ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType::Incomplete{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType::Cleared{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType::Failed{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction::LevelCompletionResultsBase_LevelEndAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction::LevelCompletionResultsBase_LevelEndAction() {}
constexpr ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction GlobalNamespace::LevelCompletionResultsBase_LevelEndAction::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction GlobalNamespace::LevelCompletionResultsBase_LevelEndAction::Quit{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction GlobalNamespace::LevelCompletionResultsBase_LevelEndAction::Restart{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResultsBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelCompletionResultsBase::*)()>(&::GlobalNamespace::LevelCompletionResultsBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a31be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResultsBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResultsBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelCompletionResultsBase::*)(
    ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType, ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction, float_t, float_t, float_t, int32_t,
    ::GlobalNamespace::RankModel_Rank, bool, ::GlobalNamespace::LevelScore, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::LevelCompletionResultsBase::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3a31d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResultsBase*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction>(),
                                ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::RankModel_Rank>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::LevelScore>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_levelEndStateType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEndStateType;
}
constexpr ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType const& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_levelEndStateType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEndStateType;
}
constexpr void GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_set_levelEndStateType(::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelEndStateType = value;
}
constexpr ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_levelEndAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEndAction;
}
constexpr ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction const& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_levelEndAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEndAction;
}
constexpr void GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_set_levelEndAction(::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelEndAction = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_startSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSongTime;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_startSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSongTime;
}
constexpr void GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_set_startSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startSongTime = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_endSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endSongTime;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_endSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endSongTime;
}
constexpr void GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_set_endSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endSongTime = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_energy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___energy;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_energy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___energy;
}
constexpr void GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_set_energy(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___energy = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_gameplayModifierMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifierMask;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_gameplayModifierMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifierMask;
}
constexpr void GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_set_gameplayModifierMask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameplayModifierMask = value;
}
constexpr ::GlobalNamespace::RankModel_Rank& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_rank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rank;
}
constexpr ::GlobalNamespace::RankModel_Rank const& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_rank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rank;
}
constexpr void GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_set_rank(::GlobalNamespace::RankModel_Rank value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rank = value;
}
constexpr bool& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_fullCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCombo;
}
constexpr bool const& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_fullCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCombo;
}
constexpr void GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_set_fullCombo(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullCombo = value;
}
constexpr ::GlobalNamespace::LevelScore& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_score() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___score;
}
constexpr ::GlobalNamespace::LevelScore const& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_score() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___score;
}
constexpr void GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_set_score(::GlobalNamespace::LevelScore value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___score = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_maxCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCombo;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_maxCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCombo;
}
constexpr void GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_set_maxCombo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCombo = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_goodCutsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCutsCount;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_goodCutsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCutsCount;
}
constexpr void GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_set_goodCutsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___goodCutsCount = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_badCutsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badCutsCount;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_badCutsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badCutsCount;
}
constexpr void GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_set_badCutsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___badCutsCount = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_missedCutsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missedCutsCount;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_missedCutsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missedCutsCount;
}
constexpr void GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_set_missedCutsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___missedCutsCount = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_bombCutsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bombCutsCount;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_bombCutsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bombCutsCount;
}
constexpr void GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_set_bombCutsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bombCutsCount = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_obstacleHitsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacleHitsCount;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_get_obstacleHitsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacleHitsCount;
}
constexpr void GlobalNamespace::LevelCompletionResultsBase::__cordl_internal_set_obstacleHitsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obstacleHitsCount = value;
}
inline void GlobalNamespace::LevelCompletionResultsBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResultsBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCompletionResultsBase::_ctor(::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType levelEndStateType,
                                                               ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction levelEndAction, float_t startSongTime, float_t endSongTime, float_t energy,
                                                               int32_t gameplayModifierMask, ::GlobalNamespace::RankModel_Rank rank, bool fullCombo, ::GlobalNamespace::LevelScore score,
                                                               int32_t maxCombo, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int32_t bombCutsCount,
                                                               int32_t obstacleHitsCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResultsBase*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction>(),
                              ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::RankModel_Rank>(),
                              ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::LevelScore>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelEndStateType, levelEndAction, startSongTime, endSongTime, energy, gameplayModifierMask, rank, fullCombo, score,
                                                   maxCombo, goodCutsCount, badCutsCount, missedCutsCount, bombCutsCount, obstacleHitsCount);
}
inline ::GlobalNamespace::LevelCompletionResultsBase* GlobalNamespace::LevelCompletionResultsBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelCompletionResultsBase*>());
}
inline ::GlobalNamespace::LevelCompletionResultsBase* GlobalNamespace::LevelCompletionResultsBase::New_ctor(::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType levelEndStateType,
                                                                                                            ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction levelEndAction,
                                                                                                            float_t startSongTime, float_t endSongTime, float_t energy, int32_t gameplayModifierMask,
                                                                                                            ::GlobalNamespace::RankModel_Rank rank, bool fullCombo, ::GlobalNamespace::LevelScore score,
                                                                                                            int32_t maxCombo, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount,
                                                                                                            int32_t bombCutsCount, int32_t obstacleHitsCount) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::LevelCompletionResultsBase*>(levelEndStateType, levelEndAction, startSongTime, endSongTime, energy, gameplayModifierMask, rank, fullCombo,
                                                                                      score, maxCombo, goodCutsCount, badCutsCount, missedCutsCount, bombCutsCount, obstacleHitsCount));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelCompletionResultsBase::LevelCompletionResultsBase() {}
