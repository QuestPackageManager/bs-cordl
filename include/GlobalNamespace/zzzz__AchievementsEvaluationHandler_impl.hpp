#pragma once
// IWYU pragma private; include "GlobalNamespace/AchievementsEvaluationHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AchievementsEvaluationHandler_def.hpp"
#include "GlobalNamespace/zzzz__AchievementSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__IMissionNode_def.hpp"
#include "GlobalNamespace/zzzz__IMissionNodesManager_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AchievementsEvaluationHandler.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsEvaluationHandler::*)()>(
    &::GlobalNamespace::AchievementsEvaluationHandler::Start)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x266c9a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(),
                                                                               "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsEvaluationHandler.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsEvaluationHandler::*)()>(
    &::GlobalNamespace::AchievementsEvaluationHandler::OnDestroy)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x266cc84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsEvaluationHandler.HandleSoloFreePlayOverallStatsDataDidUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsEvaluationHandler::*)(
    ::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::AchievementsEvaluationHandler::HandleSoloFreePlayOverallStatsDataDidUpdate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x266ce34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(),
                                                 "HandleSoloFreePlayOverallStatsDataDidUpdate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsEvaluationHandler.HandlePartyFreePlayOverallStatsDataDidUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsEvaluationHandler::*)(
    ::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::AchievementsEvaluationHandler::HandlePartyFreePlayOverallStatsDataDidUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x266d480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(),
                                                 "HandlePartyFreePlayOverallStatsDataDidUpdate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsEvaluationHandler.HandleCampaignOverallStatsDataDidUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsEvaluationHandler::*)(
    ::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::IMissionNode*)>(&::GlobalNamespace::AchievementsEvaluationHandler::HandleCampaignOverallStatsDataDidUpdate)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x266d4b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(),
                                                 "HandleCampaignOverallStatsDataDidUpdate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionCompletionResults*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMissionNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsEvaluationHandler.ProcessMissionFinishData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsEvaluationHandler::*)(
    ::GlobalNamespace::IMissionNode*, ::GlobalNamespace::MissionCompletionResults*)>(&::GlobalNamespace::AchievementsEvaluationHandler::ProcessMissionFinishData)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x266d5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), "ProcessMissionFinishData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMissionNode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsEvaluationHandler.ProcessSoloFreePlayLevelFinishData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsEvaluationHandler::*)(
    ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::LevelCompletionResults*)>(&::GlobalNamespace::AchievementsEvaluationHandler::ProcessSoloFreePlayLevelFinishData)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x266d1e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), "ProcessSoloFreePlayLevelFinishData",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsEvaluationHandler.ProcessLevelFinishData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsEvaluationHandler::*)(
    ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::LevelCompletionResults*)>(&::GlobalNamespace::AchievementsEvaluationHandler::ProcessLevelFinishData)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x266ce88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), "ProcessLevelFinishData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsEvaluationHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsEvaluationHandler::*)()>(
    &::GlobalNamespace::AchievementsEvaluationHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266db28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__clearedLevel100Achievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevel100Achievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__clearedLevel100Achievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevel100Achievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__clearedLevel100Achievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clearedLevel100Achievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__totalScore100MillionAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalScore100MillionAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__totalScore100MillionAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalScore100MillionAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__totalScore100MillionAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____totalScore100MillionAchievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__24HoursPlayedAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____24HoursPlayedAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__24HoursPlayedAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____24HoursPlayedAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__24HoursPlayedAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____24HoursPlayedAchievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__kilometersTravelled100Achievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kilometersTravelled100Achievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__kilometersTravelled100Achievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kilometersTravelled100Achievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__kilometersTravelled100Achievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____kilometersTravelled100Achievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__15ExpertLevelsRankSAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____15ExpertLevelsRankSAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__15ExpertLevelsRankSAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____15ExpertLevelsRankSAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__15ExpertLevelsRankSAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____15ExpertLevelsRankSAchievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__15ExpertLevelsFullComboAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____15ExpertLevelsFullComboAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__15ExpertLevelsFullComboAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____15ExpertLevelsFullComboAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__15ExpertLevelsFullComboAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____15ExpertLevelsFullComboAchievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__15HardLevelsRankSAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____15HardLevelsRankSAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__15HardLevelsRankSAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____15HardLevelsRankSAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__15HardLevelsRankSAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____15HardLevelsRankSAchievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__15HardLevelsFullComboAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____15HardLevelsFullComboAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__15HardLevelsFullComboAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____15HardLevelsFullComboAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__15HardLevelsFullComboAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____15HardLevelsFullComboAchievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__expertLevelClearedWithoutModifiersAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expertLevelClearedWithoutModifiersAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__expertLevelClearedWithoutModifiersAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expertLevelClearedWithoutModifiersAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__expertLevelClearedWithoutModifiersAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____expertLevelClearedWithoutModifiersAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__fullComboExpertWithoutModifiersAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullComboExpertWithoutModifiersAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__fullComboExpertWithoutModifiersAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullComboExpertWithoutModifiersAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__fullComboExpertWithoutModifiersAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fullComboExpertWithoutModifiersAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__goodCuts10000Achievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goodCuts10000Achievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__goodCuts10000Achievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goodCuts10000Achievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__goodCuts10000Achievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____goodCuts10000Achievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__resultMinRankANormalWithoutModifiersAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultMinRankANormalWithoutModifiersAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__resultMinRankANormalWithoutModifiersAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultMinRankANormalWithoutModifiersAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__resultMinRankANormalWithoutModifiersAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resultMinRankANormalWithoutModifiersAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__resultMinRankSHardWithoutModifiersAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultMinRankSHardWithoutModifiersAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__resultMinRankSHardWithoutModifiersAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultMinRankSHardWithoutModifiersAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__resultMinRankSHardWithoutModifiersAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resultMinRankSHardWithoutModifiersAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__resultMinRankSSExpertWithoutModifiersAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultMinRankSSExpertWithoutModifiersAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__resultMinRankSSExpertWithoutModifiersAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultMinRankSSExpertWithoutModifiersAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__resultMinRankSSExpertWithoutModifiersAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resultMinRankSSExpertWithoutModifiersAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__combo50NormalWithoutModifiersAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combo50NormalWithoutModifiersAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__combo50NormalWithoutModifiersAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combo50NormalWithoutModifiersAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__combo50NormalWithoutModifiersAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____combo50NormalWithoutModifiersAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__combo100HardWithoutModifiersAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combo100HardWithoutModifiersAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__combo100HardWithoutModifiersAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combo100HardWithoutModifiersAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__combo100HardWithoutModifiersAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____combo100HardWithoutModifiersAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__combo500ExpertWithoutModifiersAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combo500ExpertWithoutModifiersAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__combo500ExpertWithoutModifiersAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combo500ExpertWithoutModifiersAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__combo500ExpertWithoutModifiersAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____combo500ExpertWithoutModifiersAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__clearedLevelWithoutModifiersAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelWithoutModifiersAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__clearedLevelWithoutModifiersAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelWithoutModifiersAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__clearedLevelWithoutModifiersAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clearedLevelWithoutModifiersAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__clearedLevelWithSongSpeedFasterModifierAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelWithSongSpeedFasterModifierAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__clearedLevelWithSongSpeedFasterModifierAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelWithSongSpeedFasterModifierAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__clearedLevelWithSongSpeedFasterModifierAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clearedLevelWithSongSpeedFasterModifierAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__clearedLevelWithInstaFailModifierAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelWithInstaFailModifierAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__clearedLevelWithInstaFailModifierAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelWithInstaFailModifierAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__clearedLevelWithInstaFailModifierAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clearedLevelWithInstaFailModifierAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__clearedLevelWithDisappearingArrowsModifierAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelWithDisappearingArrowsModifierAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__clearedLevelWithDisappearingArrowsModifierAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelWithDisappearingArrowsModifierAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__clearedLevelWithDisappearingArrowsModifierAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clearedLevelWithDisappearingArrowsModifierAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__clearedLevelWithBatteryEnergyModifierAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelWithBatteryEnergyModifierAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__clearedLevelWithBatteryEnergyModifierAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelWithBatteryEnergyModifierAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__clearedLevelWithBatteryEnergyModifierAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clearedLevelWithBatteryEnergyModifierAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__cleared30MissionsAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cleared30MissionsAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__cleared30MissionsAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cleared30MissionsAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__cleared30MissionsAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cleared30MissionsAchievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__finalMissionClearedAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalMissionClearedAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__finalMissionClearedAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalMissionClearedAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__finalMissionClearedAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____finalMissionClearedAchievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__allMissionClearedAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allMissionClearedAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__allMissionClearedAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allMissionClearedAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__allMissionClearedAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allMissionClearedAchievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IMissionNodesManager*& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__missionNodesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodesManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMissionNodesManager*> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__missionNodesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodesManager;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__missionNodesManager(::GlobalNamespace::IMissionNodesManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionNodesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementsModelSO>& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__achievementsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementsModel;
}
constexpr ::UnityW<::GlobalNamespace::AchievementsModelSO> const& GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_get__achievementsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementsModel;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__cordl_internal_set__achievementsModel(::UnityW<::GlobalNamespace::AchievementsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____achievementsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::AchievementsEvaluationHandler::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AchievementsEvaluationHandler::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AchievementsEvaluationHandler::HandleSoloFreePlayOverallStatsDataDidUpdate(::GlobalNamespace::LevelCompletionResults* levelCompletionResults,
                                                                                                        ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(),
                                               "HandleSoloFreePlayOverallStatsDataDidUpdate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelCompletionResults, beatmapDifficulty);
}
inline void GlobalNamespace::AchievementsEvaluationHandler::HandlePartyFreePlayOverallStatsDataDidUpdate(::GlobalNamespace::LevelCompletionResults* levelCompletionResults,
                                                                                                         ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(),
                                               "HandlePartyFreePlayOverallStatsDataDidUpdate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelCompletionResults, beatmapDifficulty);
}
inline void GlobalNamespace::AchievementsEvaluationHandler::HandleCampaignOverallStatsDataDidUpdate(::GlobalNamespace::MissionCompletionResults* missionCompletionResults,
                                                                                                    ::GlobalNamespace::IMissionNode* missionNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(),
                                               "HandleCampaignOverallStatsDataDidUpdate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionCompletionResults*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMissionNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionCompletionResults, missionNode);
}
inline void GlobalNamespace::AchievementsEvaluationHandler::ProcessMissionFinishData(::GlobalNamespace::IMissionNode* missionNode,
                                                                                     ::GlobalNamespace::MissionCompletionResults* missionCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), "ProcessMissionFinishData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMissionNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionNode, missionCompletionResults);
}
inline void GlobalNamespace::AchievementsEvaluationHandler::ProcessSoloFreePlayLevelFinishData(::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                                                                               ::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), "ProcessSoloFreePlayLevelFinishData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapDifficulty, levelCompletionResults);
}
inline void GlobalNamespace::AchievementsEvaluationHandler::ProcessLevelFinishData(::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                                                                   ::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), "ProcessLevelFinishData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapDifficulty, levelCompletionResults);
}
inline ::GlobalNamespace::AchievementsEvaluationHandler* GlobalNamespace::AchievementsEvaluationHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AchievementsEvaluationHandler*>());
}
inline void GlobalNamespace::AchievementsEvaluationHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AchievementsEvaluationHandler::AchievementsEvaluationHandler() {}
