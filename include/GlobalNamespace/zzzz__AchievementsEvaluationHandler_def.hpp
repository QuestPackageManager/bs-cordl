#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AchievementsEvaluationHandler)
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class AchievementsModelSO;
}
namespace GlobalNamespace {
class MissionNodesManager;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class AchievementSO;
}
// Forward declare root types
namespace GlobalNamespace {
class AchievementsEvaluationHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AchievementsEvaluationHandler);
// Type: ::AchievementsEvaluationHandler
// SizeInfo { instance_size: 248, native_size: -1, calculated_instance_size: 248, calculated_native_size: 248, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4086))
// CS Name: ::AchievementsEvaluationHandler*
class CORDL_TYPE AchievementsEvaluationHandler : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _achievementsModel, offset 0x18, size 0x8
  __declspec(property(get = __get__achievementsModel, put = __set__achievementsModel))::GlobalNamespace::AchievementsModelSO* _achievementsModel;

  /// @brief Field _clearedLevel100Achievement, offset 0x20, size 0x8
  __declspec(property(get = __get__clearedLevel100Achievement, put = __set__clearedLevel100Achievement))::GlobalNamespace::AchievementSO* _clearedLevel100Achievement;

  /// @brief Field _totalScore100MillionAchievement, offset 0x28, size 0x8
  __declspec(property(get = __get__totalScore100MillionAchievement, put = __set__totalScore100MillionAchievement))::GlobalNamespace::AchievementSO* _totalScore100MillionAchievement;

  /// @brief Field _24HoursPlayedAchievement, offset 0x30, size 0x8
  __declspec(property(get = __get__24HoursPlayedAchievement, put = __set__24HoursPlayedAchievement))::GlobalNamespace::AchievementSO* _24HoursPlayedAchievement;

  /// @brief Field _kilometersTravelled100Achievement, offset 0x38, size 0x8
  __declspec(property(get = __get__kilometersTravelled100Achievement, put = __set__kilometersTravelled100Achievement))::GlobalNamespace::AchievementSO* _kilometersTravelled100Achievement;

  /// @brief Field _15ExpertLevelsRankSAchievement, offset 0x40, size 0x8
  __declspec(property(get = __get__15ExpertLevelsRankSAchievement, put = __set__15ExpertLevelsRankSAchievement))::GlobalNamespace::AchievementSO* _15ExpertLevelsRankSAchievement;

  /// @brief Field _15ExpertLevelsFullComboAchievement, offset 0x48, size 0x8
  __declspec(property(get = __get__15ExpertLevelsFullComboAchievement, put = __set__15ExpertLevelsFullComboAchievement))::GlobalNamespace::AchievementSO* _15ExpertLevelsFullComboAchievement;

  /// @brief Field _15HardLevelsRankSAchievement, offset 0x50, size 0x8
  __declspec(property(get = __get__15HardLevelsRankSAchievement, put = __set__15HardLevelsRankSAchievement))::GlobalNamespace::AchievementSO* _15HardLevelsRankSAchievement;

  /// @brief Field _15HardLevelsFullComboAchievement, offset 0x58, size 0x8
  __declspec(property(get = __get__15HardLevelsFullComboAchievement, put = __set__15HardLevelsFullComboAchievement))::GlobalNamespace::AchievementSO* _15HardLevelsFullComboAchievement;

  /// @brief Field _expertLevelClearedWithoutModifiersAchievement, offset 0x60, size 0x8
  __declspec(property(get = __get__expertLevelClearedWithoutModifiersAchievement,
                      put = __set__expertLevelClearedWithoutModifiersAchievement))::GlobalNamespace::AchievementSO* _expertLevelClearedWithoutModifiersAchievement;

  /// @brief Field _fullComboExpertWithoutModifiersAchievement, offset 0x68, size 0x8
  __declspec(property(get = __get__fullComboExpertWithoutModifiersAchievement,
                      put = __set__fullComboExpertWithoutModifiersAchievement))::GlobalNamespace::AchievementSO* _fullComboExpertWithoutModifiersAchievement;

  /// @brief Field _goodCuts10000Achievement, offset 0x70, size 0x8
  __declspec(property(get = __get__goodCuts10000Achievement, put = __set__goodCuts10000Achievement))::GlobalNamespace::AchievementSO* _goodCuts10000Achievement;

  /// @brief Field _resultMinRankANormalWithoutModifiersAchievement, offset 0x78, size 0x8
  __declspec(property(get = __get__resultMinRankANormalWithoutModifiersAchievement,
                      put = __set__resultMinRankANormalWithoutModifiersAchievement))::GlobalNamespace::AchievementSO* _resultMinRankANormalWithoutModifiersAchievement;

  /// @brief Field _resultMinRankSHardWithoutModifiersAchievement, offset 0x80, size 0x8
  __declspec(property(get = __get__resultMinRankSHardWithoutModifiersAchievement,
                      put = __set__resultMinRankSHardWithoutModifiersAchievement))::GlobalNamespace::AchievementSO* _resultMinRankSHardWithoutModifiersAchievement;

  /// @brief Field _resultMinRankSSExpertWithoutModifiersAchievement, offset 0x88, size 0x8
  __declspec(property(get = __get__resultMinRankSSExpertWithoutModifiersAchievement,
                      put = __set__resultMinRankSSExpertWithoutModifiersAchievement))::GlobalNamespace::AchievementSO* _resultMinRankSSExpertWithoutModifiersAchievement;

  /// @brief Field _combo50NormalWithoutModifiersAchievement, offset 0x90, size 0x8
  __declspec(property(get = __get__combo50NormalWithoutModifiersAchievement,
                      put = __set__combo50NormalWithoutModifiersAchievement))::GlobalNamespace::AchievementSO* _combo50NormalWithoutModifiersAchievement;

  /// @brief Field _combo100HardWithoutModifiersAchievement, offset 0x98, size 0x8
  __declspec(property(get = __get__combo100HardWithoutModifiersAchievement,
                      put = __set__combo100HardWithoutModifiersAchievement))::GlobalNamespace::AchievementSO* _combo100HardWithoutModifiersAchievement;

  /// @brief Field _combo500ExpertWithoutModifiersAchievement, offset 0xa0, size 0x8
  __declspec(property(get = __get__combo500ExpertWithoutModifiersAchievement,
                      put = __set__combo500ExpertWithoutModifiersAchievement))::GlobalNamespace::AchievementSO* _combo500ExpertWithoutModifiersAchievement;

  /// @brief Field _clearedLevelWithoutModifiersAchievement, offset 0xa8, size 0x8
  __declspec(property(get = __get__clearedLevelWithoutModifiersAchievement,
                      put = __set__clearedLevelWithoutModifiersAchievement))::GlobalNamespace::AchievementSO* _clearedLevelWithoutModifiersAchievement;

  /// @brief Field _clearedLevelWithSongSpeedFasterModifierAchievement, offset 0xb0, size 0x8
  __declspec(property(get = __get__clearedLevelWithSongSpeedFasterModifierAchievement,
                      put = __set__clearedLevelWithSongSpeedFasterModifierAchievement))::GlobalNamespace::AchievementSO* _clearedLevelWithSongSpeedFasterModifierAchievement;

  /// @brief Field _clearedLevelWithInstaFailModifierAchievement, offset 0xb8, size 0x8
  __declspec(property(get = __get__clearedLevelWithInstaFailModifierAchievement,
                      put = __set__clearedLevelWithInstaFailModifierAchievement))::GlobalNamespace::AchievementSO* _clearedLevelWithInstaFailModifierAchievement;

  /// @brief Field _clearedLevelWithDisappearingArrowsModifierAchievement, offset 0xc0, size 0x8
  __declspec(property(get = __get__clearedLevelWithDisappearingArrowsModifierAchievement,
                      put = __set__clearedLevelWithDisappearingArrowsModifierAchievement))::GlobalNamespace::AchievementSO* _clearedLevelWithDisappearingArrowsModifierAchievement;

  /// @brief Field _clearedLevelWithBatteryEnergyModifierAchievement, offset 0xc8, size 0x8
  __declspec(property(get = __get__clearedLevelWithBatteryEnergyModifierAchievement,
                      put = __set__clearedLevelWithBatteryEnergyModifierAchievement))::GlobalNamespace::AchievementSO* _clearedLevelWithBatteryEnergyModifierAchievement;

  /// @brief Field _cleared30MissionsAchievement, offset 0xd0, size 0x8
  __declspec(property(get = __get__cleared30MissionsAchievement, put = __set__cleared30MissionsAchievement))::GlobalNamespace::AchievementSO* _cleared30MissionsAchievement;

  /// @brief Field _finalMissionClearedAchievement, offset 0xd8, size 0x8
  __declspec(property(get = __get__finalMissionClearedAchievement, put = __set__finalMissionClearedAchievement))::GlobalNamespace::AchievementSO* _finalMissionClearedAchievement;

  /// @brief Field _allMissionClearedAchievement, offset 0xe0, size 0x8
  __declspec(property(get = __get__allMissionClearedAchievement, put = __set__allMissionClearedAchievement))::GlobalNamespace::AchievementSO* _allMissionClearedAchievement;

  /// @brief Field _playerDataModel, offset 0xe8, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _missionNodesManager, offset 0xf0, size 0x8
  __declspec(property(get = __get__missionNodesManager, put = __set__missionNodesManager))::GlobalNamespace::MissionNodesManager* _missionNodesManager;

  constexpr ::GlobalNamespace::AchievementsModelSO*& __get__achievementsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementsModelSO*> const& __get__achievementsModel() const;

  constexpr void __set__achievementsModel(::GlobalNamespace::AchievementsModelSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__clearedLevel100Achievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__clearedLevel100Achievement() const;

  constexpr void __set__clearedLevel100Achievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__totalScore100MillionAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__totalScore100MillionAchievement() const;

  constexpr void __set__totalScore100MillionAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__24HoursPlayedAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__24HoursPlayedAchievement() const;

  constexpr void __set__24HoursPlayedAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__kilometersTravelled100Achievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__kilometersTravelled100Achievement() const;

  constexpr void __set__kilometersTravelled100Achievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__15ExpertLevelsRankSAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__15ExpertLevelsRankSAchievement() const;

  constexpr void __set__15ExpertLevelsRankSAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__15ExpertLevelsFullComboAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__15ExpertLevelsFullComboAchievement() const;

  constexpr void __set__15ExpertLevelsFullComboAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__15HardLevelsRankSAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__15HardLevelsRankSAchievement() const;

  constexpr void __set__15HardLevelsRankSAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__15HardLevelsFullComboAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__15HardLevelsFullComboAchievement() const;

  constexpr void __set__15HardLevelsFullComboAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__expertLevelClearedWithoutModifiersAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__expertLevelClearedWithoutModifiersAchievement() const;

  constexpr void __set__expertLevelClearedWithoutModifiersAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__fullComboExpertWithoutModifiersAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__fullComboExpertWithoutModifiersAchievement() const;

  constexpr void __set__fullComboExpertWithoutModifiersAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__goodCuts10000Achievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__goodCuts10000Achievement() const;

  constexpr void __set__goodCuts10000Achievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__resultMinRankANormalWithoutModifiersAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__resultMinRankANormalWithoutModifiersAchievement() const;

  constexpr void __set__resultMinRankANormalWithoutModifiersAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__resultMinRankSHardWithoutModifiersAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__resultMinRankSHardWithoutModifiersAchievement() const;

  constexpr void __set__resultMinRankSHardWithoutModifiersAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__resultMinRankSSExpertWithoutModifiersAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__resultMinRankSSExpertWithoutModifiersAchievement() const;

  constexpr void __set__resultMinRankSSExpertWithoutModifiersAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__combo50NormalWithoutModifiersAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__combo50NormalWithoutModifiersAchievement() const;

  constexpr void __set__combo50NormalWithoutModifiersAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__combo100HardWithoutModifiersAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__combo100HardWithoutModifiersAchievement() const;

  constexpr void __set__combo100HardWithoutModifiersAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__combo500ExpertWithoutModifiersAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__combo500ExpertWithoutModifiersAchievement() const;

  constexpr void __set__combo500ExpertWithoutModifiersAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__clearedLevelWithoutModifiersAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__clearedLevelWithoutModifiersAchievement() const;

  constexpr void __set__clearedLevelWithoutModifiersAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__clearedLevelWithSongSpeedFasterModifierAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__clearedLevelWithSongSpeedFasterModifierAchievement() const;

  constexpr void __set__clearedLevelWithSongSpeedFasterModifierAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__clearedLevelWithInstaFailModifierAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__clearedLevelWithInstaFailModifierAchievement() const;

  constexpr void __set__clearedLevelWithInstaFailModifierAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__clearedLevelWithDisappearingArrowsModifierAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__clearedLevelWithDisappearingArrowsModifierAchievement() const;

  constexpr void __set__clearedLevelWithDisappearingArrowsModifierAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__clearedLevelWithBatteryEnergyModifierAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__clearedLevelWithBatteryEnergyModifierAchievement() const;

  constexpr void __set__clearedLevelWithBatteryEnergyModifierAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__cleared30MissionsAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__cleared30MissionsAchievement() const;

  constexpr void __set__cleared30MissionsAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__finalMissionClearedAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__finalMissionClearedAchievement() const;

  constexpr void __set__finalMissionClearedAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__allMissionClearedAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__allMissionClearedAchievement() const;

  constexpr void __set__allMissionClearedAchievement(::GlobalNamespace::AchievementSO* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::MissionNodesManager*& __get__missionNodesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodesManager*> const& __get__missionNodesManager() const;

  constexpr void __set__missionNodesManager(::GlobalNamespace::MissionNodesManager* value);

  /// @brief Method Start addr 0x2231b48 size 0x17c virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x2231e38 size 0x1bc virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleSoloFreePlayOverallStatsDataDidUpdate addr 0x2231ff4 size 0x38 virtual false final false
  inline void HandleSoloFreePlayOverallStatsDataDidUpdate(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

  /// @brief Method HandlePartyFreePlayOverallStatsDataDidUpdate addr 0x2232ab4 size 0x10 virtual false final false
  inline void HandlePartyFreePlayOverallStatsDataDidUpdate(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

  /// @brief Method HandleCampaignOverallStatsDataDidUpdate addr 0x2232ac4 size 0x74 virtual false final false
  inline void HandleCampaignOverallStatsDataDidUpdate(::GlobalNamespace::MissionCompletionResults* missionCompletionResults, ::GlobalNamespace::MissionNode* missionNode);

  /// @brief Method ProcessMissionFinishData addr 0x2232b38 size 0x220 virtual false final false
  inline void ProcessMissionFinishData(::GlobalNamespace::MissionNode* missionNode, ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);

  /// @brief Method ProcessSoloFreePlayLevelFinishData addr 0x2232680 size 0x434 virtual false final false
  inline void ProcessSoloFreePlayLevelFinishData(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method ProcessLevelFinishData addr 0x223202c size 0x654 virtual false final false
  inline void ProcessLevelFinishData(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  static inline ::GlobalNamespace::AchievementsEvaluationHandler* New_ctor();

  /// @brief Method .ctor addr 0x2232edc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AchievementsEvaluationHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AchievementsEvaluationHandler(AchievementsEvaluationHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AchievementsEvaluationHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AchievementsEvaluationHandler(AchievementsEvaluationHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AchievementsEvaluationHandler();

public:
  /// @brief Field _achievementsModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AchievementsModelSO* ____achievementsModel;

  /// @brief Field _clearedLevel100Achievement, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____clearedLevel100Achievement;

  /// @brief Field _totalScore100MillionAchievement, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____totalScore100MillionAchievement;

  /// @brief Field _24HoursPlayedAchievement, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____24HoursPlayedAchievement;

  /// @brief Field _kilometersTravelled100Achievement, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____kilometersTravelled100Achievement;

  /// @brief Field _15ExpertLevelsRankSAchievement, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____15ExpertLevelsRankSAchievement;

  /// @brief Field _15ExpertLevelsFullComboAchievement, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____15ExpertLevelsFullComboAchievement;

  /// @brief Field _15HardLevelsRankSAchievement, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____15HardLevelsRankSAchievement;

  /// @brief Field _15HardLevelsFullComboAchievement, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____15HardLevelsFullComboAchievement;

  /// @brief Field _expertLevelClearedWithoutModifiersAchievement, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____expertLevelClearedWithoutModifiersAchievement;

  /// @brief Field _fullComboExpertWithoutModifiersAchievement, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____fullComboExpertWithoutModifiersAchievement;

  /// @brief Field _goodCuts10000Achievement, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____goodCuts10000Achievement;

  /// @brief Field _resultMinRankANormalWithoutModifiersAchievement, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____resultMinRankANormalWithoutModifiersAchievement;

  /// @brief Field _resultMinRankSHardWithoutModifiersAchievement, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____resultMinRankSHardWithoutModifiersAchievement;

  /// @brief Field _resultMinRankSSExpertWithoutModifiersAchievement, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____resultMinRankSSExpertWithoutModifiersAchievement;

  /// @brief Field _combo50NormalWithoutModifiersAchievement, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____combo50NormalWithoutModifiersAchievement;

  /// @brief Field _combo100HardWithoutModifiersAchievement, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____combo100HardWithoutModifiersAchievement;

  /// @brief Field _combo500ExpertWithoutModifiersAchievement, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____combo500ExpertWithoutModifiersAchievement;

  /// @brief Field _clearedLevelWithoutModifiersAchievement, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____clearedLevelWithoutModifiersAchievement;

  /// @brief Field _clearedLevelWithSongSpeedFasterModifierAchievement, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____clearedLevelWithSongSpeedFasterModifierAchievement;

  /// @brief Field _clearedLevelWithInstaFailModifierAchievement, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____clearedLevelWithInstaFailModifierAchievement;

  /// @brief Field _clearedLevelWithDisappearingArrowsModifierAchievement, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____clearedLevelWithDisappearingArrowsModifierAchievement;

  /// @brief Field _clearedLevelWithBatteryEnergyModifierAchievement, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____clearedLevelWithBatteryEnergyModifierAchievement;

  /// @brief Field _cleared30MissionsAchievement, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____cleared30MissionsAchievement;

  /// @brief Field _finalMissionClearedAchievement, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____finalMissionClearedAchievement;

  /// @brief Field _allMissionClearedAchievement, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____allMissionClearedAchievement;

  /// @brief Field _playerDataModel, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _missionNodesManager, offset: 0xf0, size: 0x8, def value: None
  ::GlobalNamespace::MissionNodesManager* ____missionNodesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AchievementsEvaluationHandler, 0xf8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AchievementsEvaluationHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AchievementsEvaluationHandler*, "", "AchievementsEvaluationHandler");
