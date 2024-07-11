#pragma once
// IWYU pragma private; include "GlobalNamespace/AchievementsEvaluationHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AchievementsEvaluationHandler)
namespace GlobalNamespace {
class AchievementSO;
}
namespace GlobalNamespace {
class AchievementsModelSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class IMissionNode;
}
namespace GlobalNamespace {
class IMissionNodesManager;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace GlobalNamespace {
class PlayerDataModel;
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
// CS Name: ::AchievementsEvaluationHandler*
class CORDL_TYPE AchievementsEvaluationHandler : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _15ExpertLevelsFullComboAchievement, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__15ExpertLevelsFullComboAchievement,
                      put = __cordl_internal_set__15ExpertLevelsFullComboAchievement))::UnityW<::GlobalNamespace::AchievementSO> _15ExpertLevelsFullComboAchievement;

  /// @brief Field _15ExpertLevelsRankSAchievement, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__15ExpertLevelsRankSAchievement,
                      put = __cordl_internal_set__15ExpertLevelsRankSAchievement))::UnityW<::GlobalNamespace::AchievementSO> _15ExpertLevelsRankSAchievement;

  /// @brief Field _15HardLevelsFullComboAchievement, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__15HardLevelsFullComboAchievement,
                      put = __cordl_internal_set__15HardLevelsFullComboAchievement))::UnityW<::GlobalNamespace::AchievementSO> _15HardLevelsFullComboAchievement;

  /// @brief Field _15HardLevelsRankSAchievement, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__15HardLevelsRankSAchievement,
                      put = __cordl_internal_set__15HardLevelsRankSAchievement))::UnityW<::GlobalNamespace::AchievementSO> _15HardLevelsRankSAchievement;

  /// @brief Field _24HoursPlayedAchievement, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__24HoursPlayedAchievement, put = __cordl_internal_set__24HoursPlayedAchievement))::UnityW<::GlobalNamespace::AchievementSO> _24HoursPlayedAchievement;

  /// @brief Field _achievementsModel, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__achievementsModel, put = __cordl_internal_set__achievementsModel))::UnityW<::GlobalNamespace::AchievementsModelSO> _achievementsModel;

  /// @brief Field _allMissionClearedAchievement, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__allMissionClearedAchievement,
                      put = __cordl_internal_set__allMissionClearedAchievement))::UnityW<::GlobalNamespace::AchievementSO> _allMissionClearedAchievement;

  /// @brief Field _cleared30MissionsAchievement, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__cleared30MissionsAchievement,
                      put = __cordl_internal_set__cleared30MissionsAchievement))::UnityW<::GlobalNamespace::AchievementSO> _cleared30MissionsAchievement;

  /// @brief Field _clearedLevel100Achievement, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__clearedLevel100Achievement,
                      put = __cordl_internal_set__clearedLevel100Achievement))::UnityW<::GlobalNamespace::AchievementSO> _clearedLevel100Achievement;

  /// @brief Field _clearedLevelWithBatteryEnergyModifierAchievement, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__clearedLevelWithBatteryEnergyModifierAchievement,
                      put = __cordl_internal_set__clearedLevelWithBatteryEnergyModifierAchievement))::UnityW<::GlobalNamespace::AchievementSO> _clearedLevelWithBatteryEnergyModifierAchievement;

  /// @brief Field _clearedLevelWithDisappearingArrowsModifierAchievement, offset 0xb8, size 0x8
  __declspec(
      property(get = __cordl_internal_get__clearedLevelWithDisappearingArrowsModifierAchievement,
               put = __cordl_internal_set__clearedLevelWithDisappearingArrowsModifierAchievement))::UnityW<::GlobalNamespace::AchievementSO> _clearedLevelWithDisappearingArrowsModifierAchievement;

  /// @brief Field _clearedLevelWithInstaFailModifierAchievement, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__clearedLevelWithInstaFailModifierAchievement,
                      put = __cordl_internal_set__clearedLevelWithInstaFailModifierAchievement))::UnityW<::GlobalNamespace::AchievementSO> _clearedLevelWithInstaFailModifierAchievement;

  /// @brief Field _clearedLevelWithSongSpeedFasterModifierAchievement, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__clearedLevelWithSongSpeedFasterModifierAchievement,
                      put = __cordl_internal_set__clearedLevelWithSongSpeedFasterModifierAchievement))::UnityW<::GlobalNamespace::AchievementSO> _clearedLevelWithSongSpeedFasterModifierAchievement;

  /// @brief Field _clearedLevelWithoutModifiersAchievement, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__clearedLevelWithoutModifiersAchievement,
                      put = __cordl_internal_set__clearedLevelWithoutModifiersAchievement))::UnityW<::GlobalNamespace::AchievementSO> _clearedLevelWithoutModifiersAchievement;

  /// @brief Field _combo100HardWithoutModifiersAchievement, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__combo100HardWithoutModifiersAchievement,
                      put = __cordl_internal_set__combo100HardWithoutModifiersAchievement))::UnityW<::GlobalNamespace::AchievementSO> _combo100HardWithoutModifiersAchievement;

  /// @brief Field _combo500ExpertWithoutModifiersAchievement, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__combo500ExpertWithoutModifiersAchievement,
                      put = __cordl_internal_set__combo500ExpertWithoutModifiersAchievement))::UnityW<::GlobalNamespace::AchievementSO> _combo500ExpertWithoutModifiersAchievement;

  /// @brief Field _combo50NormalWithoutModifiersAchievement, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__combo50NormalWithoutModifiersAchievement,
                      put = __cordl_internal_set__combo50NormalWithoutModifiersAchievement))::UnityW<::GlobalNamespace::AchievementSO> _combo50NormalWithoutModifiersAchievement;

  /// @brief Field _expertLevelClearedWithoutModifiersAchievement, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__expertLevelClearedWithoutModifiersAchievement,
                      put = __cordl_internal_set__expertLevelClearedWithoutModifiersAchievement))::UnityW<::GlobalNamespace::AchievementSO> _expertLevelClearedWithoutModifiersAchievement;

  /// @brief Field _finalMissionClearedAchievement, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__finalMissionClearedAchievement,
                      put = __cordl_internal_set__finalMissionClearedAchievement))::UnityW<::GlobalNamespace::AchievementSO> _finalMissionClearedAchievement;

  /// @brief Field _fullComboExpertWithoutModifiersAchievement, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__fullComboExpertWithoutModifiersAchievement,
                      put = __cordl_internal_set__fullComboExpertWithoutModifiersAchievement))::UnityW<::GlobalNamespace::AchievementSO> _fullComboExpertWithoutModifiersAchievement;

  /// @brief Field _goodCuts10000Achievement, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__goodCuts10000Achievement, put = __cordl_internal_set__goodCuts10000Achievement))::UnityW<::GlobalNamespace::AchievementSO> _goodCuts10000Achievement;

  /// @brief Field _kilometersTravelled100Achievement, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__kilometersTravelled100Achievement,
                      put = __cordl_internal_set__kilometersTravelled100Achievement))::UnityW<::GlobalNamespace::AchievementSO> _kilometersTravelled100Achievement;

  /// @brief Field _missionNodesManager, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNodesManager, put = __cordl_internal_set__missionNodesManager))::GlobalNamespace::IMissionNodesManager* _missionNodesManager;

  /// @brief Field _playerDataModel, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _resultMinRankANormalWithoutModifiersAchievement, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__resultMinRankANormalWithoutModifiersAchievement,
                      put = __cordl_internal_set__resultMinRankANormalWithoutModifiersAchievement))::UnityW<::GlobalNamespace::AchievementSO> _resultMinRankANormalWithoutModifiersAchievement;

  /// @brief Field _resultMinRankSHardWithoutModifiersAchievement, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__resultMinRankSHardWithoutModifiersAchievement,
                      put = __cordl_internal_set__resultMinRankSHardWithoutModifiersAchievement))::UnityW<::GlobalNamespace::AchievementSO> _resultMinRankSHardWithoutModifiersAchievement;

  /// @brief Field _resultMinRankSSExpertWithoutModifiersAchievement, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__resultMinRankSSExpertWithoutModifiersAchievement,
                      put = __cordl_internal_set__resultMinRankSSExpertWithoutModifiersAchievement))::UnityW<::GlobalNamespace::AchievementSO> _resultMinRankSSExpertWithoutModifiersAchievement;

  /// @brief Field _totalScore100MillionAchievement, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__totalScore100MillionAchievement,
                      put = __cordl_internal_set__totalScore100MillionAchievement))::UnityW<::GlobalNamespace::AchievementSO> _totalScore100MillionAchievement;

  /// @brief Method HandleCampaignOverallStatsDataDidUpdate, addr 0x14a1c5c, size 0xf8, virtual false, abstract: false, final false
  inline void HandleCampaignOverallStatsDataDidUpdate(::GlobalNamespace::MissionCompletionResults* missionCompletionResults, ::GlobalNamespace::IMissionNode* missionNode);

  /// @brief Method HandlePartyFreePlayOverallStatsDataDidUpdate, addr 0x14a1c2c, size 0x30, virtual false, abstract: false, final false
  inline void HandlePartyFreePlayOverallStatsDataDidUpdate(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty);

  /// @brief Method HandleSoloFreePlayOverallStatsDataDidUpdate, addr 0x14a15e4, size 0x54, virtual false, abstract: false, final false
  inline void HandleSoloFreePlayOverallStatsDataDidUpdate(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty);

  static inline ::GlobalNamespace::AchievementsEvaluationHandler* New_ctor();

  /// @brief Method OnDestroy, addr 0x14a1428, size 0x1bc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ProcessLevelFinishData, addr 0x14a1638, size 0x35c, virtual false, abstract: false, final false
  inline void ProcessLevelFinishData(::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method ProcessMissionFinishData, addr 0x14a1d54, size 0x408, virtual false, abstract: false, final false
  inline void ProcessMissionFinishData(::GlobalNamespace::IMissionNode* missionNode, ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);

  /// @brief Method ProcessSoloFreePlayLevelFinishData, addr 0x14a1994, size 0x298, virtual false, abstract: false, final false
  inline void ProcessSoloFreePlayLevelFinishData(::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method Start, addr 0x14a1138, size 0x17c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__15ExpertLevelsFullComboAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__15ExpertLevelsFullComboAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__15ExpertLevelsRankSAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__15ExpertLevelsRankSAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__15HardLevelsFullComboAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__15HardLevelsFullComboAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__15HardLevelsRankSAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__15HardLevelsRankSAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__24HoursPlayedAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__24HoursPlayedAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementsModelSO> const& __cordl_internal_get__achievementsModel() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementsModelSO>& __cordl_internal_get__achievementsModel();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__allMissionClearedAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__allMissionClearedAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__cleared30MissionsAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__cleared30MissionsAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__clearedLevel100Achievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__clearedLevel100Achievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__clearedLevelWithBatteryEnergyModifierAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__clearedLevelWithBatteryEnergyModifierAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__clearedLevelWithDisappearingArrowsModifierAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__clearedLevelWithDisappearingArrowsModifierAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__clearedLevelWithInstaFailModifierAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__clearedLevelWithInstaFailModifierAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__clearedLevelWithSongSpeedFasterModifierAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__clearedLevelWithSongSpeedFasterModifierAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__clearedLevelWithoutModifiersAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__clearedLevelWithoutModifiersAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__combo100HardWithoutModifiersAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__combo100HardWithoutModifiersAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__combo500ExpertWithoutModifiersAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__combo500ExpertWithoutModifiersAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__combo50NormalWithoutModifiersAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__combo50NormalWithoutModifiersAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__expertLevelClearedWithoutModifiersAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__expertLevelClearedWithoutModifiersAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__finalMissionClearedAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__finalMissionClearedAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__fullComboExpertWithoutModifiersAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__fullComboExpertWithoutModifiersAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__goodCuts10000Achievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__goodCuts10000Achievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__kilometersTravelled100Achievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__kilometersTravelled100Achievement();

  constexpr ::GlobalNamespace::IMissionNodesManager*& __cordl_internal_get__missionNodesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMissionNodesManager*> const& __cordl_internal_get__missionNodesManager() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__resultMinRankANormalWithoutModifiersAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__resultMinRankANormalWithoutModifiersAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__resultMinRankSHardWithoutModifiersAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__resultMinRankSHardWithoutModifiersAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__resultMinRankSSExpertWithoutModifiersAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__resultMinRankSSExpertWithoutModifiersAchievement();

  constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& __cordl_internal_get__totalScore100MillionAchievement() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementSO>& __cordl_internal_get__totalScore100MillionAchievement();

  constexpr void __cordl_internal_set__15ExpertLevelsFullComboAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__15ExpertLevelsRankSAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__15HardLevelsFullComboAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__15HardLevelsRankSAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__24HoursPlayedAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__achievementsModel(::UnityW<::GlobalNamespace::AchievementsModelSO> value);

  constexpr void __cordl_internal_set__allMissionClearedAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__cleared30MissionsAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__clearedLevel100Achievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__clearedLevelWithBatteryEnergyModifierAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__clearedLevelWithDisappearingArrowsModifierAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__clearedLevelWithInstaFailModifierAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__clearedLevelWithSongSpeedFasterModifierAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__clearedLevelWithoutModifiersAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__combo100HardWithoutModifiersAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__combo500ExpertWithoutModifiersAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__combo50NormalWithoutModifiersAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__expertLevelClearedWithoutModifiersAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__finalMissionClearedAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__fullComboExpertWithoutModifiersAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__goodCuts10000Achievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__kilometersTravelled100Achievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__missionNodesManager(::GlobalNamespace::IMissionNodesManager* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__resultMinRankANormalWithoutModifiersAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__resultMinRankSHardWithoutModifiersAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__resultMinRankSSExpertWithoutModifiersAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  constexpr void __cordl_internal_set__totalScore100MillionAchievement(::UnityW<::GlobalNamespace::AchievementSO> value);

  /// @brief Method .ctor, addr 0x14a22e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AchievementsEvaluationHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AchievementsEvaluationHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AchievementsEvaluationHandler(AchievementsEvaluationHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AchievementsEvaluationHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AchievementsEvaluationHandler(AchievementsEvaluationHandler const&) = delete;

  /// @brief Field _clearedLevel100Achievement, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____clearedLevel100Achievement;

  /// @brief Field _totalScore100MillionAchievement, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____totalScore100MillionAchievement;

  /// @brief Field _24HoursPlayedAchievement, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____24HoursPlayedAchievement;

  /// @brief Field _kilometersTravelled100Achievement, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____kilometersTravelled100Achievement;

  /// @brief Field _15ExpertLevelsRankSAchievement, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____15ExpertLevelsRankSAchievement;

  /// @brief Field _15ExpertLevelsFullComboAchievement, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____15ExpertLevelsFullComboAchievement;

  /// @brief Field _15HardLevelsRankSAchievement, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____15HardLevelsRankSAchievement;

  /// @brief Field _15HardLevelsFullComboAchievement, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____15HardLevelsFullComboAchievement;

  /// @brief Field _expertLevelClearedWithoutModifiersAchievement, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____expertLevelClearedWithoutModifiersAchievement;

  /// @brief Field _fullComboExpertWithoutModifiersAchievement, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____fullComboExpertWithoutModifiersAchievement;

  /// @brief Field _goodCuts10000Achievement, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____goodCuts10000Achievement;

  /// @brief Field _resultMinRankANormalWithoutModifiersAchievement, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____resultMinRankANormalWithoutModifiersAchievement;

  /// @brief Field _resultMinRankSHardWithoutModifiersAchievement, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____resultMinRankSHardWithoutModifiersAchievement;

  /// @brief Field _resultMinRankSSExpertWithoutModifiersAchievement, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____resultMinRankSSExpertWithoutModifiersAchievement;

  /// @brief Field _combo50NormalWithoutModifiersAchievement, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____combo50NormalWithoutModifiersAchievement;

  /// @brief Field _combo100HardWithoutModifiersAchievement, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____combo100HardWithoutModifiersAchievement;

  /// @brief Field _combo500ExpertWithoutModifiersAchievement, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____combo500ExpertWithoutModifiersAchievement;

  /// @brief Field _clearedLevelWithoutModifiersAchievement, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____clearedLevelWithoutModifiersAchievement;

  /// @brief Field _clearedLevelWithSongSpeedFasterModifierAchievement, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____clearedLevelWithSongSpeedFasterModifierAchievement;

  /// @brief Field _clearedLevelWithInstaFailModifierAchievement, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____clearedLevelWithInstaFailModifierAchievement;

  /// @brief Field _clearedLevelWithDisappearingArrowsModifierAchievement, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____clearedLevelWithDisappearingArrowsModifierAchievement;

  /// @brief Field _clearedLevelWithBatteryEnergyModifierAchievement, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____clearedLevelWithBatteryEnergyModifierAchievement;

  /// @brief Field _cleared30MissionsAchievement, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____cleared30MissionsAchievement;

  /// @brief Field _finalMissionClearedAchievement, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____finalMissionClearedAchievement;

  /// @brief Field _allMissionClearedAchievement, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementSO> ____allMissionClearedAchievement;

  /// @brief Field _playerDataModel, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _missionNodesManager, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::IMissionNodesManager* ____missionNodesManager;

  /// @brief Field _achievementsModel, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementsModelSO> ____achievementsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AchievementsEvaluationHandler, 0xf8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____clearedLevel100Achievement) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____totalScore100MillionAchievement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____24HoursPlayedAchievement) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____kilometersTravelled100Achievement) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____15ExpertLevelsRankSAchievement) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____15ExpertLevelsFullComboAchievement) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____15HardLevelsRankSAchievement) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____15HardLevelsFullComboAchievement) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____expertLevelClearedWithoutModifiersAchievement) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____fullComboExpertWithoutModifiersAchievement) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____goodCuts10000Achievement) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____resultMinRankANormalWithoutModifiersAchievement) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____resultMinRankSHardWithoutModifiersAchievement) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____resultMinRankSSExpertWithoutModifiersAchievement) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____combo50NormalWithoutModifiersAchievement) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____combo100HardWithoutModifiersAchievement) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____combo500ExpertWithoutModifiersAchievement) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____clearedLevelWithoutModifiersAchievement) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____clearedLevelWithSongSpeedFasterModifierAchievement) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____clearedLevelWithInstaFailModifierAchievement) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____clearedLevelWithDisappearingArrowsModifierAchievement) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____clearedLevelWithBatteryEnergyModifierAchievement) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____cleared30MissionsAchievement) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____finalMissionClearedAchievement) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____allMissionClearedAchievement) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____playerDataModel) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____missionNodesManager) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsEvaluationHandler, ____achievementsModel) == 0xf0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AchievementsEvaluationHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AchievementsEvaluationHandler*, "", "AchievementsEvaluationHandler");
