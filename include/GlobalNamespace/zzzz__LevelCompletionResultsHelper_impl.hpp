#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResultsHelper_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLevelStatsData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResultsHelper.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::GlobalNamespace::LevelCompletionResults* (*)(::GlobalNamespace::IReadonlyBeatmapData*,
                                                   ::ArrayW<::GlobalNamespace::BeatmapObjectExecutionRating*, ::Array<::GlobalNamespace::BeatmapObjectExecutionRating*>*>,
                                                   ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::GameplayModifiersModelSO*, int32_t, int32_t, int32_t, ::ArrayW<float_t, ::Array<float_t>*>,
                                                   float_t, float_t, ::ArrayW<float_t, ::Array<float_t>*>, float_t, float_t, ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType,
                                                   ::GlobalNamespace::__LevelCompletionResults__LevelEndAction, float_t, float_t)>(&::GlobalNamespace::LevelCompletionResultsHelper::Create)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x21db140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResultsHelper*>::get(), "Create", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapObjectExecutionRating*, ::Array<::GlobalNamespace::BeatmapObjectExecutionRating*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiersModelSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCompletionResults__LevelEndStateType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCompletionResults__LevelEndAction>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResultsHelper.ProcessScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::GlobalNamespace::PlayerData*, ::GlobalNamespace::PlayerLevelStatsData*, ::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IReadonlyBeatmapData*,
                         ::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::PlatformLeaderboardsModel*)>(&::GlobalNamespace::LevelCompletionResultsHelper::ProcessScore)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x21db594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResultsHelper*>::get(), "ProcessScore", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerLevelStatsData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformLeaderboardsModel*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::LevelCompletionResultsHelper::Create(
    ::GlobalNamespace::IReadonlyBeatmapData* beatmapData,
    ::ArrayW<::GlobalNamespace::BeatmapObjectExecutionRating*, ::Array<::GlobalNamespace::BeatmapObjectExecutionRating*>*> beatmapObjectExecutionRatings,
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel, int32_t multipliedScore, int32_t modifiedScore, int32_t maxCombo,
    ::ArrayW<float_t, ::Array<float_t>*> saberActivityValues, float_t leftSaberMovementDistance, float_t rightSaberMovementDistance, ::ArrayW<float_t, ::Array<float_t>*> handActivityValues,
    float_t leftHandMovementDistance, float_t rightHandMovementDistance, ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType levelEndStateType,
    ::GlobalNamespace::__LevelCompletionResults__LevelEndAction levelEndAction, float_t energy, float_t songTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResultsHelper*>::get(), "Create", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapObjectExecutionRating*, ::Array<::GlobalNamespace::BeatmapObjectExecutionRating*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiersModelSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCompletionResults__LevelEndStateType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCompletionResults__LevelEndAction>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults*, false>(
      nullptr, ___internal_method, beatmapData, beatmapObjectExecutionRatings, gameplayModifiers, gameplayModifiersModel, multipliedScore, modifiedScore, maxCombo, saberActivityValues,
      leftSaberMovementDistance, rightSaberMovementDistance, handActivityValues, leftHandMovementDistance, rightHandMovementDistance, levelEndStateType, levelEndAction, energy, songTime);
}
inline void GlobalNamespace::LevelCompletionResultsHelper::ProcessScore(::GlobalNamespace::PlayerData* playerData, ::GlobalNamespace::PlayerLevelStatsData* playerLevelStats,
                                                                        ::GlobalNamespace::LevelCompletionResults* levelCompletionResults,
                                                                        ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap,
                                                                        ::GlobalNamespace::PlatformLeaderboardsModel* platformLeaderboardsModel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResultsHelper*>::get(), "ProcessScore", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerLevelStatsData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformLeaderboardsModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, playerData, playerLevelStats, levelCompletionResults, transformedBeatmapData, difficultyBeatmap,
                                                          platformLeaderboardsModel);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelCompletionResultsHelper::LevelCompletionResultsHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
