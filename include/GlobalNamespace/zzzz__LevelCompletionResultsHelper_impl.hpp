#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelCompletionResultsHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResultsHelper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResultsBase_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLevelStatsData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResultsHelper.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::GlobalNamespace::LevelCompletionResults* (*)(::GlobalNamespace::IReadonlyBeatmapData*, ::ArrayW<::GlobalNamespace::BeatmapObjectExecutionRating*>, ::GlobalNamespace::GameplayModifiers*,
                                                   ::GlobalNamespace::GameplayModifiersModelSO*, int32_t, int32_t, int32_t, ::ArrayW<float_t>, float_t, float_t, ::ArrayW<float_t>, float_t, float_t,
                                                   ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType, ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction, float_t, float_t,
                                                   float_t, bool)>(&::GlobalNamespace::LevelCompletionResultsHelper::Create)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x39bbd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResultsHelper*>(),
                            { "Create",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapObjectExecutionRating*>>(),
                                ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiersModelSO*>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction>(),
                                ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResultsHelper.ProcessScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::BeatmapKey const>, ::GlobalNamespace::PlayerData*, ::GlobalNamespace::PlayerLevelStatsData*,
                                                                ::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::PlatformLeaderboardsModel*)>(
    &::GlobalNamespace::LevelCompletionResultsHelper::ProcessScore)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x39bc234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResultsHelper*>(),
                                                             { "ProcessScore",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey const>>(), ::i2c::type_of<::GlobalNamespace::PlayerData*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PlayerLevelStatsData*>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>(), ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel*>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::LevelCompletionResultsHelper::Create(
    ::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::ArrayW<::GlobalNamespace::BeatmapObjectExecutionRating*> beatmapObjectExecutionRatings,
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel, int32_t multipliedScore, int32_t modifiedScore, int32_t maxCombo,
    ::ArrayW<float_t> saberActivityValues, float_t leftSaberMovementDistance, float_t rightSaberMovementDistance, ::ArrayW<float_t> handActivityValues, float_t leftHandMovementDistance,
    float_t rightHandMovementDistance, ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType levelEndStateType, ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction levelEndAction,
    float_t energy, float_t startSongTime, float_t songTime, bool invalidated) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResultsHelper*>(),
                          { "Create",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapObjectExecutionRating*>>(),
                              ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiersModelSO*>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                              ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                              ::i2c::type_of<::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction>(),
                              ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults*>(nullptr, ___internal_method, beatmapData, beatmapObjectExecutionRatings, gameplayModifiers,
                                                                                         gameplayModifiersModel, multipliedScore, modifiedScore, maxCombo, saberActivityValues,
                                                                                         leftSaberMovementDistance, rightSaberMovementDistance, handActivityValues, leftHandMovementDistance,
                                                                                         rightHandMovementDistance, levelEndStateType, levelEndAction, energy, startSongTime, songTime, invalidated);
}
inline void GlobalNamespace::LevelCompletionResultsHelper::ProcessScore(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BeatmapKey const> beatmapKey, ::GlobalNamespace::PlayerData* playerData,
                                                                        ::GlobalNamespace::PlayerLevelStatsData* playerLevelStats, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults,
                                                                        ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData,
                                                                        ::GlobalNamespace::PlatformLeaderboardsModel* platformLeaderboardsModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResultsHelper*>(),
                                                           { "ProcessScore",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey const>>(), ::i2c::type_of<::GlobalNamespace::PlayerData*>(),
                                                               ::i2c::type_of<::GlobalNamespace::PlayerLevelStatsData*>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>(), ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, beatmapKey, playerData, playerLevelStats, levelCompletionResults, transformedBeatmapData, platformLeaderboardsModel);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelCompletionResultsHelper::LevelCompletionResultsHelper() {}
