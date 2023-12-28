#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AchievementsEvaluationHandler_def.hpp"
#include "GlobalNamespace/zzzz__MissionCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionNode_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__AchievementsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodesManager_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__AchievementSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AchievementsEvaluationHandler.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsEvaluationHandler::*)()>(
    &::GlobalNamespace::AchievementsEvaluationHandler::Start)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2231b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(),
                                                                               "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsEvaluationHandler.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsEvaluationHandler::*)()>(
    &::GlobalNamespace::AchievementsEvaluationHandler::OnDestroy)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2231e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsEvaluationHandler.HandleSoloFreePlayOverallStatsDataDidUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsEvaluationHandler::*)(
    ::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*)>(&::GlobalNamespace::AchievementsEvaluationHandler::HandleSoloFreePlayOverallStatsDataDidUpdate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2231ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), "HandleSoloFreePlayOverallStatsDataDidUpdate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsEvaluationHandler.HandlePartyFreePlayOverallStatsDataDidUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsEvaluationHandler::*)(
    ::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*)>(&::GlobalNamespace::AchievementsEvaluationHandler::HandlePartyFreePlayOverallStatsDataDidUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2232ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), "HandlePartyFreePlayOverallStatsDataDidUpdate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsEvaluationHandler.HandleCampaignOverallStatsDataDidUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsEvaluationHandler::*)(
    ::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::MissionNode*)>(&::GlobalNamespace::AchievementsEvaluationHandler::HandleCampaignOverallStatsDataDidUpdate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2232ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), "HandleCampaignOverallStatsDataDidUpdate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionCompletionResults*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsEvaluationHandler.ProcessMissionFinishData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsEvaluationHandler::*)(
    ::GlobalNamespace::MissionNode*, ::GlobalNamespace::MissionCompletionResults*)>(&::GlobalNamespace::AchievementsEvaluationHandler::ProcessMissionFinishData)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2232b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), "ProcessMissionFinishData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsEvaluationHandler.ProcessSoloFreePlayLevelFinishData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsEvaluationHandler::*)(
    ::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::LevelCompletionResults*)>(&::GlobalNamespace::AchievementsEvaluationHandler::ProcessSoloFreePlayLevelFinishData)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x2232680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), "ProcessSoloFreePlayLevelFinishData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsEvaluationHandler.ProcessLevelFinishData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsEvaluationHandler::*)(
    ::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::LevelCompletionResults*)>(&::GlobalNamespace::AchievementsEvaluationHandler::ProcessLevelFinishData)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x223202c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), "ProcessLevelFinishData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsEvaluationHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsEvaluationHandler::*)()>(
    &::GlobalNamespace::AchievementsEvaluationHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2232edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AchievementsModelSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__achievementsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementsModelSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__achievementsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementsModel;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__achievementsModel(::GlobalNamespace::AchievementsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____achievementsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__clearedLevel100Achievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevel100Achievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__clearedLevel100Achievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevel100Achievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__clearedLevel100Achievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clearedLevel100Achievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__totalScore100MillionAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalScore100MillionAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__totalScore100MillionAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalScore100MillionAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__totalScore100MillionAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____totalScore100MillionAchievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__24HoursPlayedAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____24HoursPlayedAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__24HoursPlayedAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____24HoursPlayedAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__24HoursPlayedAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____24HoursPlayedAchievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__kilometersTravelled100Achievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kilometersTravelled100Achievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__kilometersTravelled100Achievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kilometersTravelled100Achievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__kilometersTravelled100Achievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____kilometersTravelled100Achievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__15ExpertLevelsRankSAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____15ExpertLevelsRankSAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__15ExpertLevelsRankSAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____15ExpertLevelsRankSAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__15ExpertLevelsRankSAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____15ExpertLevelsRankSAchievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__15ExpertLevelsFullComboAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____15ExpertLevelsFullComboAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__15ExpertLevelsFullComboAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____15ExpertLevelsFullComboAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__15ExpertLevelsFullComboAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____15ExpertLevelsFullComboAchievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__15HardLevelsRankSAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____15HardLevelsRankSAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__15HardLevelsRankSAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____15HardLevelsRankSAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__15HardLevelsRankSAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____15HardLevelsRankSAchievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__15HardLevelsFullComboAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____15HardLevelsFullComboAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__15HardLevelsFullComboAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____15HardLevelsFullComboAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__15HardLevelsFullComboAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____15HardLevelsFullComboAchievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__expertLevelClearedWithoutModifiersAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expertLevelClearedWithoutModifiersAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__expertLevelClearedWithoutModifiersAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expertLevelClearedWithoutModifiersAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__expertLevelClearedWithoutModifiersAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____expertLevelClearedWithoutModifiersAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__fullComboExpertWithoutModifiersAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullComboExpertWithoutModifiersAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__fullComboExpertWithoutModifiersAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullComboExpertWithoutModifiersAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__fullComboExpertWithoutModifiersAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fullComboExpertWithoutModifiersAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__goodCuts10000Achievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goodCuts10000Achievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__goodCuts10000Achievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goodCuts10000Achievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__goodCuts10000Achievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____goodCuts10000Achievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__resultMinRankANormalWithoutModifiersAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultMinRankANormalWithoutModifiersAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__resultMinRankANormalWithoutModifiersAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultMinRankANormalWithoutModifiersAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__resultMinRankANormalWithoutModifiersAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resultMinRankANormalWithoutModifiersAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__resultMinRankSHardWithoutModifiersAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultMinRankSHardWithoutModifiersAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__resultMinRankSHardWithoutModifiersAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultMinRankSHardWithoutModifiersAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__resultMinRankSHardWithoutModifiersAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resultMinRankSHardWithoutModifiersAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__resultMinRankSSExpertWithoutModifiersAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultMinRankSSExpertWithoutModifiersAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const&
GlobalNamespace::AchievementsEvaluationHandler::__get__resultMinRankSSExpertWithoutModifiersAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultMinRankSSExpertWithoutModifiersAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__resultMinRankSSExpertWithoutModifiersAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resultMinRankSSExpertWithoutModifiersAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__combo50NormalWithoutModifiersAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combo50NormalWithoutModifiersAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__combo50NormalWithoutModifiersAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combo50NormalWithoutModifiersAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__combo50NormalWithoutModifiersAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____combo50NormalWithoutModifiersAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__combo100HardWithoutModifiersAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combo100HardWithoutModifiersAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__combo100HardWithoutModifiersAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combo100HardWithoutModifiersAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__combo100HardWithoutModifiersAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____combo100HardWithoutModifiersAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__combo500ExpertWithoutModifiersAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combo500ExpertWithoutModifiersAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__combo500ExpertWithoutModifiersAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combo500ExpertWithoutModifiersAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__combo500ExpertWithoutModifiersAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____combo500ExpertWithoutModifiersAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__clearedLevelWithoutModifiersAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelWithoutModifiersAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__clearedLevelWithoutModifiersAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelWithoutModifiersAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__clearedLevelWithoutModifiersAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clearedLevelWithoutModifiersAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__clearedLevelWithSongSpeedFasterModifierAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelWithSongSpeedFasterModifierAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const&
GlobalNamespace::AchievementsEvaluationHandler::__get__clearedLevelWithSongSpeedFasterModifierAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelWithSongSpeedFasterModifierAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__clearedLevelWithSongSpeedFasterModifierAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clearedLevelWithSongSpeedFasterModifierAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__clearedLevelWithInstaFailModifierAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelWithInstaFailModifierAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__clearedLevelWithInstaFailModifierAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelWithInstaFailModifierAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__clearedLevelWithInstaFailModifierAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clearedLevelWithInstaFailModifierAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__clearedLevelWithDisappearingArrowsModifierAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelWithDisappearingArrowsModifierAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const&
GlobalNamespace::AchievementsEvaluationHandler::__get__clearedLevelWithDisappearingArrowsModifierAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelWithDisappearingArrowsModifierAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__clearedLevelWithDisappearingArrowsModifierAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clearedLevelWithDisappearingArrowsModifierAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__clearedLevelWithBatteryEnergyModifierAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelWithBatteryEnergyModifierAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const&
GlobalNamespace::AchievementsEvaluationHandler::__get__clearedLevelWithBatteryEnergyModifierAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelWithBatteryEnergyModifierAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__clearedLevelWithBatteryEnergyModifierAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clearedLevelWithBatteryEnergyModifierAchievement)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__cleared30MissionsAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cleared30MissionsAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__cleared30MissionsAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cleared30MissionsAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__cleared30MissionsAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cleared30MissionsAchievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__finalMissionClearedAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalMissionClearedAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__finalMissionClearedAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalMissionClearedAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__finalMissionClearedAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____finalMissionClearedAchievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::AchievementsEvaluationHandler::__get__allMissionClearedAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allMissionClearedAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__allMissionClearedAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allMissionClearedAchievement;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__allMissionClearedAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allMissionClearedAchievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerDataModel*& GlobalNamespace::AchievementsEvaluationHandler::__get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__playerDataModel(::GlobalNamespace::PlayerDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MissionNodesManager*& GlobalNamespace::AchievementsEvaluationHandler::__get__missionNodesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodesManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodesManager*> const& GlobalNamespace::AchievementsEvaluationHandler::__get__missionNodesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodesManager;
}
constexpr void GlobalNamespace::AchievementsEvaluationHandler::__set__missionNodesManager(::GlobalNamespace::MissionNodesManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionNodesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::AchievementsEvaluationHandler::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AchievementsEvaluationHandler::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AchievementsEvaluationHandler::HandleSoloFreePlayOverallStatsDataDidUpdate(::GlobalNamespace::LevelCompletionResults* levelCompletionResults,
                                                                                                        ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), "HandleSoloFreePlayOverallStatsDataDidUpdate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelCompletionResults, difficultyBeatmap);
}
inline void GlobalNamespace::AchievementsEvaluationHandler::HandlePartyFreePlayOverallStatsDataDidUpdate(::GlobalNamespace::LevelCompletionResults* levelCompletionResults,
                                                                                                         ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), "HandlePartyFreePlayOverallStatsDataDidUpdate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelCompletionResults, difficultyBeatmap);
}
inline void GlobalNamespace::AchievementsEvaluationHandler::HandleCampaignOverallStatsDataDidUpdate(::GlobalNamespace::MissionCompletionResults* missionCompletionResults,
                                                                                                    ::GlobalNamespace::MissionNode* missionNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), "HandleCampaignOverallStatsDataDidUpdate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionCompletionResults*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionCompletionResults, missionNode);
}
inline void GlobalNamespace::AchievementsEvaluationHandler::ProcessMissionFinishData(::GlobalNamespace::MissionNode* missionNode,
                                                                                     ::GlobalNamespace::MissionCompletionResults* missionCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), "ProcessMissionFinishData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionNode, missionCompletionResults);
}
inline void GlobalNamespace::AchievementsEvaluationHandler::ProcessSoloFreePlayLevelFinishData(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap,
                                                                                               ::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), "ProcessSoloFreePlayLevelFinishData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, difficultyBeatmap, levelCompletionResults);
}
inline void GlobalNamespace::AchievementsEvaluationHandler::ProcessLevelFinishData(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap,
                                                                                   ::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), "ProcessLevelFinishData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, difficultyBeatmap, levelCompletionResults);
}
inline ::GlobalNamespace::AchievementsEvaluationHandler* GlobalNamespace::AchievementsEvaluationHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AchievementsEvaluationHandler*>());
}
inline void GlobalNamespace::AchievementsEvaluationHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsEvaluationHandler*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AchievementsEvaluationHandler::AchievementsEvaluationHandler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
