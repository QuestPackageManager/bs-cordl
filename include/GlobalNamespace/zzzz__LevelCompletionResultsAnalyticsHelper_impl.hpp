#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelCompletionResultsAnalyticsHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResultsAnalyticsHelper_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapAttemptEventData_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapLevelData_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapPracticeSettings_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsGameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__PracticeSettings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResultsAnalyticsHelper.FillEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LevelCompletionResults*, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::LevelCompletionResultsAnalyticsHelper::FillEventData)> {
  constexpr static std::size_t size = 0xa2c;
  constexpr static std::size_t addrs = 0x58b212c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>(),
            { "FillEventData", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResultsAnalyticsHelper.GetAnalyticsPracticeSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* (*)(::GlobalNamespace::PracticeSettings*)>(
    &::GlobalNamespace::LevelCompletionResultsAnalyticsHelper::GetAnalyticsPracticeSettings)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x58b2b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>(),
                                                                                           { "GetAnalyticsPracticeSettings", {}, { ::i2c::type_of<::GlobalNamespace::PracticeSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResultsAnalyticsHelper.GetAnalyticsGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers* (*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::LevelCompletionResultsAnalyticsHelper::GetAnalyticsGameplayModifiers)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x58b2bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>(),
                                                                                           { "GetAnalyticsGameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResultsAnalyticsHelper.GetStandardBeatmapAttemptFinishGameplayEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData* (*)(::GlobalNamespace::LevelCompletionResults*,
                                                                                                          ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*)>(
        &::GlobalNamespace::LevelCompletionResultsAnalyticsHelper::GetStandardBeatmapAttemptFinishGameplayEventData)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x58b2d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>(),
                            { "GetStandardBeatmapAttemptFinishGameplayEventData",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResultsAnalyticsHelper.GetBeatmapAttemptFinishGameplayEventDataForCampaign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData* (*)(::GlobalNamespace::LevelCompletionResults*,
                                                                                              ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*, bool, uint8_t)>(
    &::GlobalNamespace::LevelCompletionResultsAnalyticsHelper::GetBeatmapAttemptFinishGameplayEventDataForCampaign)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58b2ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>(),
                                         { "GetBeatmapAttemptFinishGameplayEventDataForCampaign",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(),
                                             ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResultsAnalyticsHelper.GetBeatmapAttemptFinishGameplayEventDataForMultiplayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData* (*)(::GlobalNamespace::LevelCompletionResults*,
                                                                                                          ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*, ::StringW)>(
        &::GlobalNamespace::LevelCompletionResultsAnalyticsHelper::GetBeatmapAttemptFinishGameplayEventDataForMultiplayer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58b2ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>(),
                                                             { "GetBeatmapAttemptFinishGameplayEventDataForMultiplayer",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(),
                                                                 ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelCompletionResultsAnalyticsHelper::FillEventData(::GlobalNamespace::LevelCompletionResults* levelCompletionResults,
                                                                                  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>(),
          { "FillEventData", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, levelCompletionResults, eventData);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*
GlobalNamespace::LevelCompletionResultsAnalyticsHelper::GetAnalyticsPracticeSettings(::GlobalNamespace::PracticeSettings* practiceSettings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>(),
                                                                                         { "GetAnalyticsPracticeSettings", {}, { ::i2c::type_of<::GlobalNamespace::PracticeSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*>(nullptr, ___internal_method, practiceSettings);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers*
GlobalNamespace::LevelCompletionResultsAnalyticsHelper::GetAnalyticsGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>(),
                                                                                         { "GetAnalyticsGameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers*>(nullptr, ___internal_method, gameplayModifiers);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*
GlobalNamespace::LevelCompletionResultsAnalyticsHelper::GetStandardBeatmapAttemptFinishGameplayEventData(::GlobalNamespace::LevelCompletionResults* results,
                                                                                                         ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>(),
                          { "GetStandardBeatmapAttemptFinishGameplayEventData",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*>(nullptr, ___internal_method, results, levelData);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*
GlobalNamespace::LevelCompletionResultsAnalyticsHelper::GetBeatmapAttemptFinishGameplayEventDataForCampaign(::GlobalNamespace::LevelCompletionResults* results,
                                                                                                            ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData,
                                                                                                            bool isMissionComplete, uint8_t missionObjectivesResultMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>(),
                                       { "GetBeatmapAttemptFinishGameplayEventDataForCampaign",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(),
                                           ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*>(nullptr, ___internal_method, results, levelData, isMissionComplete,
                                                                                                                                    missionObjectivesResultMask);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*
GlobalNamespace::LevelCompletionResultsAnalyticsHelper::GetBeatmapAttemptFinishGameplayEventDataForMultiplayer(::GlobalNamespace::LevelCompletionResults* results,
                                                                                                               ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData,
                                                                                                               ::StringW matchId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>(),
                                                           { "GetBeatmapAttemptFinishGameplayEventDataForMultiplayer",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(),
                                                               ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*>(nullptr, ___internal_method, results, levelData, matchId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelCompletionResultsAnalyticsHelper::LevelCompletionResultsAnalyticsHelper() {}
