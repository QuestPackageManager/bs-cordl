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
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::LevelCompletionResults*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::GlobalNamespace::LevelCompletionResultsAnalyticsHelper::FillEventData)> {
  constexpr static std::size_t size = 0xa2c;
  constexpr static std::size_t addrs = 0x5774ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>::get(),
                        "FillEventData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResultsAnalyticsHelper.GetAnalyticsPracticeSettings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* (*)(::GlobalNamespace::PracticeSettings*)>(&::GlobalNamespace::LevelCompletionResultsAnalyticsHelper::GetAnalyticsPracticeSettings)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5775714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>::get(),
                        "GetAnalyticsPracticeSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResultsAnalyticsHelper.GetAnalyticsGameplayModifiers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers* (*)(::GlobalNamespace::GameplayModifiers*)>(&::GlobalNamespace::LevelCompletionResultsAnalyticsHelper::GetAnalyticsGameplayModifiers)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5775784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>::get(),
                        "GetAnalyticsGameplayModifiers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResultsAnalyticsHelper.GetStandardBeatmapAttemptFinishGameplayEventData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData* (*)(::GlobalNamespace::LevelCompletionResults*, ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*)>(&::GlobalNamespace::LevelCompletionResultsAnalyticsHelper::GetStandardBeatmapAttemptFinishGameplayEventData)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x57758c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>::get(),
                        "GetStandardBeatmapAttemptFinishGameplayEventData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResultsAnalyticsHelper.GetBeatmapAttemptFinishGameplayEventDataForCampaign
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData* (*)(::GlobalNamespace::LevelCompletionResults*, ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*, bool, uint8_t)>(&::GlobalNamespace::LevelCompletionResultsAnalyticsHelper::GetBeatmapAttemptFinishGameplayEventDataForCampaign)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5775a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>::get(),
                        "GetBeatmapAttemptFinishGameplayEventDataForCampaign",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResultsAnalyticsHelper.GetBeatmapAttemptFinishGameplayEventDataForMultiplayer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData* (*)(::GlobalNamespace::LevelCompletionResults*, ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*, ::StringW)>(&::GlobalNamespace::LevelCompletionResultsAnalyticsHelper::GetBeatmapAttemptFinishGameplayEventDataForMultiplayer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5775ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>::get(),
                        "GetBeatmapAttemptFinishGameplayEventDataForMultiplayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelCompletionResultsAnalyticsHelper::FillEventData(::GlobalNamespace::LevelCompletionResults*  levelCompletionResults, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>::get(),
                        "FillEventData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, levelCompletionResults, eventData);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* GlobalNamespace::LevelCompletionResultsAnalyticsHelper::GetAnalyticsPracticeSettings(::GlobalNamespace::PracticeSettings*  practiceSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>::get(),
                        "GetAnalyticsPracticeSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*, false>(nullptr, ___internal_method, practiceSettings);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers* GlobalNamespace::LevelCompletionResultsAnalyticsHelper::GetAnalyticsGameplayModifiers(::GlobalNamespace::GameplayModifiers*  gameplayModifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>::get(),
                        "GetAnalyticsGameplayModifiers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers*, false>(nullptr, ___internal_method, gameplayModifiers);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData* GlobalNamespace::LevelCompletionResultsAnalyticsHelper::GetStandardBeatmapAttemptFinishGameplayEventData(::GlobalNamespace::LevelCompletionResults*  results, ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*  levelData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>::get(),
                        "GetStandardBeatmapAttemptFinishGameplayEventData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*, false>(nullptr, ___internal_method, results, levelData);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData* GlobalNamespace::LevelCompletionResultsAnalyticsHelper::GetBeatmapAttemptFinishGameplayEventDataForCampaign(::GlobalNamespace::LevelCompletionResults*  results, ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*  levelData, bool  isMissionComplete, uint8_t  missionObjectivesResultMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>::get(),
                        "GetBeatmapAttemptFinishGameplayEventDataForCampaign",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*, false>(nullptr, ___internal_method, results, levelData, isMissionComplete, missionObjectivesResultMask);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData* GlobalNamespace::LevelCompletionResultsAnalyticsHelper::GetBeatmapAttemptFinishGameplayEventDataForMultiplayer(::GlobalNamespace::LevelCompletionResults*  results, ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*  levelData, ::StringW  matchId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*>::get(),
                        "GetBeatmapAttemptFinishGameplayEventDataForMultiplayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*, false>(nullptr, ___internal_method, results, levelData, matchId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelCompletionResultsAnalyticsHelper::LevelCompletionResultsAnalyticsHelper()   {
}
