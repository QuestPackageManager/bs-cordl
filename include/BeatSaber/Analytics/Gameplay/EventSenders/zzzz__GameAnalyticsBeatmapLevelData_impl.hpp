#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/GameAnalyticsBeatmapLevelData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapLevelData_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapPracticeSettings_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsGameplayModifiers_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::*)(
    ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*,
    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x31cf850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_gameMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameMode;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_gameMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameMode;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_set_gameMode(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameMode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_levelID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelID;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_levelID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelID;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_set_levelID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_set_difficulty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___difficulty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_set_characteristic(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___characteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_missionID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionID;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_missionID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionID;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_set_missionID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___missionID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*&
BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_practiceSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practiceSettings;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* const&
BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_practiceSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practiceSettings;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_set_practiceSettings(
    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___practiceSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers*&
BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers* const&
BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::__cordl_internal_set_gameplayModifiers(
    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameplayModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::_ctor(::StringW gameMode, ::StringW levelID, ::StringW difficulty, ::StringW characteristic,
                                                                                               ::StringW missionID,
                                                                                               ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* practiceSettings,
                                                                                               ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameMode, levelID, difficulty, characteristic, missionID, practiceSettings, gameplayModifiers);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*
BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::New_ctor(::StringW gameMode, ::StringW levelID, ::StringW difficulty, ::StringW characteristic, ::StringW missionID,
                                                                                      ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* practiceSettings,
                                                                                      ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers* gameplayModifiers) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>(gameMode, levelID, difficulty, characteristic, missionID,
                                                                                                                                  practiceSettings, gameplayModifiers));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData::GameAnalyticsBeatmapLevelData() {}
