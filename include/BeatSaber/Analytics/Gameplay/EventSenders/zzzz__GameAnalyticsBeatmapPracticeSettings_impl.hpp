#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/GameAnalyticsBeatmapPracticeSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapPracticeSettings_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings::*)()>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31cf868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings::__cordl_internal_get_startSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSongTime;
}
constexpr float_t const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings::__cordl_internal_get_startSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSongTime;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings::__cordl_internal_set_startSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startSongTime = value;
}
constexpr float_t& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings::__cordl_internal_get_songSpeedMul() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSpeedMul;
}
constexpr float_t const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings::__cordl_internal_get_songSpeedMul() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSpeedMul;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings::__cordl_internal_set_songSpeedMul(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songSpeedMul = value;
}
constexpr bool& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings::__cordl_internal_get_startInAdvanceAndClearNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startInAdvanceAndClearNotes;
}
constexpr bool const& BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings::__cordl_internal_get_startInAdvanceAndClearNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startInAdvanceAndClearNotes;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings::__cordl_internal_set_startInAdvanceAndClearNotes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startInAdvanceAndClearNotes = value;
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings::GameAnalyticsBeatmapPracticeSettings() {}
