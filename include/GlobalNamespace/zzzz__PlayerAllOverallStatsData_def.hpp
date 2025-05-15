#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerAllOverallStatsData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerAllOverallStatsData)
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class IMissionNode;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace GlobalNamespace {
class PlayerAllOverallStatsData_PlayerOverallStatsData;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class PlayerAllOverallStatsData_PlayerOverallStatsData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerAllOverallStatsData);
MARK_REF_PTR_T(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerAllOverallStatsData/PlayerOverallStatsData
class CORDL_TYPE PlayerAllOverallStatsData_PlayerOverallStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <badCutsCount>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__badCutsCount_k__BackingField, put = __cordl_internal_set__badCutsCount_k__BackingField)) int32_t _badCutsCount_k__BackingField;

  /// @brief Field <clearedLevelsCount>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__clearedLevelsCount_k__BackingField, put = __cordl_internal_set__clearedLevelsCount_k__BackingField)) int32_t _clearedLevelsCount_k__BackingField;

  /// @brief Field <failedLevelsCount>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__failedLevelsCount_k__BackingField, put = __cordl_internal_set__failedLevelsCount_k__BackingField)) int32_t _failedLevelsCount_k__BackingField;

  /// @brief Field <fullComboCount>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__fullComboCount_k__BackingField, put = __cordl_internal_set__fullComboCount_k__BackingField)) int32_t _fullComboCount_k__BackingField;

  /// @brief Field <goodCutsCount>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__goodCutsCount_k__BackingField, put = __cordl_internal_set__goodCutsCount_k__BackingField)) int32_t _goodCutsCount_k__BackingField;

  /// @brief Field <handDistanceTravelled>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__handDistanceTravelled_k__BackingField,
                      put = __cordl_internal_set__handDistanceTravelled_k__BackingField)) int32_t _handDistanceTravelled_k__BackingField;

  /// @brief Field <missedCutsCount>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__missedCutsCount_k__BackingField, put = __cordl_internal_set__missedCutsCount_k__BackingField)) int32_t _missedCutsCount_k__BackingField;

  /// @brief Field <playedLevelsCount>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__playedLevelsCount_k__BackingField, put = __cordl_internal_set__playedLevelsCount_k__BackingField)) int32_t _playedLevelsCount_k__BackingField;

  /// @brief Field <timePlayed>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__timePlayed_k__BackingField, put = __cordl_internal_set__timePlayed_k__BackingField)) float_t _timePlayed_k__BackingField;

  /// @brief Field <totalCutScore>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__totalCutScore_k__BackingField, put = __cordl_internal_set__totalCutScore_k__BackingField)) int64_t _totalCutScore_k__BackingField;

  /// @brief Field <totalScore>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__totalScore_k__BackingField, put = __cordl_internal_set__totalScore_k__BackingField)) int64_t _totalScore_k__BackingField;

  __declspec(property(get = get_badCutsCount, put = set_badCutsCount)) int32_t badCutsCount;

  __declspec(property(get = get_clearedLevelsCount, put = set_clearedLevelsCount)) int32_t clearedLevelsCount;

  __declspec(property(get = get_failedLevelsCount, put = set_failedLevelsCount)) int32_t failedLevelsCount;

  __declspec(property(get = get_fullComboCount, put = set_fullComboCount)) int32_t fullComboCount;

  __declspec(property(get = get_goodCutsCount, put = set_goodCutsCount)) int32_t goodCutsCount;

  __declspec(property(get = get_handDistanceTravelled, put = set_handDistanceTravelled)) int32_t handDistanceTravelled;

  __declspec(property(get = get_missedCutsCount, put = set_missedCutsCount)) int32_t missedCutsCount;

  __declspec(property(get = get_playedLevelsCount, put = set_playedLevelsCount)) int32_t playedLevelsCount;

  __declspec(property(get = get_timePlayed, put = set_timePlayed)) float_t timePlayed;

  __declspec(property(get = get_totalCutScore, put = set_totalCutScore)) int64_t totalCutScore;

  __declspec(property(get = get_totalScore, put = set_totalScore)) int64_t totalScore;

  static inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* New_ctor();

  static inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* New_ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore,
                                                                                              int32_t playedLevelsCount, int32_t clearedLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount,
                                                                                              float_t timePlayed, int32_t handDistanceTravelled, int64_t totalCutScore);

  /// @brief Method UpdateWithLevelCompletionResults, addr 0x26f2e1c, size 0x11c, virtual false, abstract: false, final false
  inline void UpdateWithLevelCompletionResults(::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  constexpr int32_t const& __cordl_internal_get__badCutsCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__badCutsCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__clearedLevelsCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__clearedLevelsCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__failedLevelsCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__failedLevelsCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__fullComboCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__fullComboCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__goodCutsCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__goodCutsCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__handDistanceTravelled_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__handDistanceTravelled_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__missedCutsCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__missedCutsCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__playedLevelsCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__playedLevelsCount_k__BackingField();

  constexpr float_t const& __cordl_internal_get__timePlayed_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__timePlayed_k__BackingField();

  constexpr int64_t const& __cordl_internal_get__totalCutScore_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__totalCutScore_k__BackingField();

  constexpr int64_t const& __cordl_internal_get__totalScore_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__totalScore_k__BackingField();

  constexpr void __cordl_internal_set__badCutsCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__clearedLevelsCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__failedLevelsCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__fullComboCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__goodCutsCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__handDistanceTravelled_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__missedCutsCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__playedLevelsCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__timePlayed_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__totalCutScore_k__BackingField(int64_t value);

  constexpr void __cordl_internal_set__totalScore_k__BackingField(int64_t value);

  /// @brief Method .ctor, addr 0x26f2d6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x26f30e8, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount, int32_t clearedLevelsCount, int32_t failedLevelsCount,
                    int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled, int64_t totalCutScore);

  /// @brief Method get_badCutsCount, addr 0x26f3048, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_badCutsCount();

  /// @brief Method get_clearedLevelsCount, addr 0x26f3088, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_clearedLevelsCount();

  /// @brief Method get_failedLevelsCount, addr 0x26f3098, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_failedLevelsCount();

  /// @brief Method get_fullComboCount, addr 0x26f30a8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_fullComboCount();

  /// @brief Method get_goodCutsCount, addr 0x26f3038, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_goodCutsCount();

  /// @brief Method get_handDistanceTravelled, addr 0x26f30c8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_handDistanceTravelled();

  /// @brief Method get_missedCutsCount, addr 0x26f3058, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_missedCutsCount();

  /// @brief Method get_playedLevelsCount, addr 0x26f3078, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_playedLevelsCount();

  /// @brief Method get_timePlayed, addr 0x26f30b8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_timePlayed();

  /// @brief Method get_totalCutScore, addr 0x26f30d8, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_totalCutScore();

  /// @brief Method get_totalScore, addr 0x26f3068, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_totalScore();

  /// @brief Method op_Addition, addr 0x26f2768, size 0x118, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* op_Addition(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* a,
                                                                                                 ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* b);

  /// @brief Method set_badCutsCount, addr 0x26f3050, size 0x8, virtual false, abstract: false, final false
  inline void set_badCutsCount(int32_t value);

  /// @brief Method set_clearedLevelsCount, addr 0x26f3090, size 0x8, virtual false, abstract: false, final false
  inline void set_clearedLevelsCount(int32_t value);

  /// @brief Method set_failedLevelsCount, addr 0x26f30a0, size 0x8, virtual false, abstract: false, final false
  inline void set_failedLevelsCount(int32_t value);

  /// @brief Method set_fullComboCount, addr 0x26f30b0, size 0x8, virtual false, abstract: false, final false
  inline void set_fullComboCount(int32_t value);

  /// @brief Method set_goodCutsCount, addr 0x26f3040, size 0x8, virtual false, abstract: false, final false
  inline void set_goodCutsCount(int32_t value);

  /// @brief Method set_handDistanceTravelled, addr 0x26f30d0, size 0x8, virtual false, abstract: false, final false
  inline void set_handDistanceTravelled(int32_t value);

  /// @brief Method set_missedCutsCount, addr 0x26f3060, size 0x8, virtual false, abstract: false, final false
  inline void set_missedCutsCount(int32_t value);

  /// @brief Method set_playedLevelsCount, addr 0x26f3080, size 0x8, virtual false, abstract: false, final false
  inline void set_playedLevelsCount(int32_t value);

  /// @brief Method set_timePlayed, addr 0x26f30c0, size 0x8, virtual false, abstract: false, final false
  inline void set_timePlayed(float_t value);

  /// @brief Method set_totalCutScore, addr 0x26f30e0, size 0x8, virtual false, abstract: false, final false
  inline void set_totalCutScore(int64_t value);

  /// @brief Method set_totalScore, addr 0x26f3070, size 0x8, virtual false, abstract: false, final false
  inline void set_totalScore(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerAllOverallStatsData_PlayerOverallStatsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerAllOverallStatsData_PlayerOverallStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerAllOverallStatsData_PlayerOverallStatsData(PlayerAllOverallStatsData_PlayerOverallStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerAllOverallStatsData_PlayerOverallStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerAllOverallStatsData_PlayerOverallStatsData(PlayerAllOverallStatsData_PlayerOverallStatsData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13225 };

  /// @brief Field <goodCutsCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____goodCutsCount_k__BackingField;

  /// @brief Field <badCutsCount>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____badCutsCount_k__BackingField;

  /// @brief Field <missedCutsCount>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____missedCutsCount_k__BackingField;

  /// @brief Field <totalScore>k__BackingField, offset: 0x20, size: 0x8, def value: None
  int64_t ____totalScore_k__BackingField;

  /// @brief Field <playedLevelsCount>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t ____playedLevelsCount_k__BackingField;

  /// @brief Field <clearedLevelsCount>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  int32_t ____clearedLevelsCount_k__BackingField;

  /// @brief Field <failedLevelsCount>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t ____failedLevelsCount_k__BackingField;

  /// @brief Field <fullComboCount>k__BackingField, offset: 0x34, size: 0x4, def value: None
  int32_t ____fullComboCount_k__BackingField;

  /// @brief Field <timePlayed>k__BackingField, offset: 0x38, size: 0x4, def value: None
  float_t ____timePlayed_k__BackingField;

  /// @brief Field <handDistanceTravelled>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  int32_t ____handDistanceTravelled_k__BackingField;

  /// @brief Field <totalCutScore>k__BackingField, offset: 0x40, size: 0x8, def value: None
  int64_t ____totalCutScore_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData, ____goodCutsCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData, ____badCutsCount_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData, ____missedCutsCount_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData, ____totalScore_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData, ____playedLevelsCount_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData, ____clearedLevelsCount_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData, ____failedLevelsCount_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData, ____fullComboCount_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData, ____timePlayed_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData, ____handDistanceTravelled_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData, ____totalCutScore_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerAllOverallStatsData
class CORDL_TYPE PlayerAllOverallStatsData : public ::System::Object {
public:
  // Declarations
  using PlayerOverallStatsData = ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData;

  /// @brief Field <campaignOverallStatsData>k__BackingField, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__campaignOverallStatsData_k__BackingField,
      put = __cordl_internal_set__campaignOverallStatsData_k__BackingField)) ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* _campaignOverallStatsData_k__BackingField;

  /// @brief Field <onlinePlayOverallStatsData>k__BackingField, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__onlinePlayOverallStatsData_k__BackingField,
      put = __cordl_internal_set__onlinePlayOverallStatsData_k__BackingField)) ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* _onlinePlayOverallStatsData_k__BackingField;

  /// @brief Field <partyFreePlayOverallStatsData>k__BackingField, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__partyFreePlayOverallStatsData_k__BackingField,
      put = __cordl_internal_set__partyFreePlayOverallStatsData_k__BackingField)) ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* _partyFreePlayOverallStatsData_k__BackingField;

  /// @brief Field <soloFreePlayOverallStatsData>k__BackingField, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__soloFreePlayOverallStatsData_k__BackingField,
      put = __cordl_internal_set__soloFreePlayOverallStatsData_k__BackingField)) ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* _soloFreePlayOverallStatsData_k__BackingField;

  __declspec(property(get = get_allOverallStatsData)) ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* allOverallStatsData;

  __declspec(property(get = get_campaignOverallStatsData)) ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* campaignOverallStatsData;

  /// @brief Field didUpdateCampaignOverallStatsDataEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_didUpdateCampaignOverallStatsDataEvent,
                      put = __cordl_internal_set_didUpdateCampaignOverallStatsDataEvent)) ::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::IMissionNode*>*
      didUpdateCampaignOverallStatsDataEvent;

  /// @brief Field didUpdatePartyFreePlayOverallStatsDataEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_didUpdatePartyFreePlayOverallStatsDataEvent,
                      put = __cordl_internal_set_didUpdatePartyFreePlayOverallStatsDataEvent)) ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>*
      didUpdatePartyFreePlayOverallStatsDataEvent;

  /// @brief Field didUpdateSoloFreePlayOverallStatsDataEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_didUpdateSoloFreePlayOverallStatsDataEvent,
                      put = __cordl_internal_set_didUpdateSoloFreePlayOverallStatsDataEvent)) ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>*
      didUpdateSoloFreePlayOverallStatsDataEvent;

  __declspec(property(get = get_onlinePlayOverallStatsData)) ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* onlinePlayOverallStatsData;

  __declspec(property(get = get_partyFreePlayOverallStatsData)) ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* partyFreePlayOverallStatsData;

  __declspec(property(get = get_soloFreePlayOverallStatsData)) ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* soloFreePlayOverallStatsData;

  static inline ::GlobalNamespace::PlayerAllOverallStatsData* New_ctor();

  static inline ::GlobalNamespace::PlayerAllOverallStatsData* New_ctor(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* campaignOverallStatsData,
                                                                       ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* soloFreePlayOverallStatsData,
                                                                       ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* partyFreePlayOverallStatsData,
                                                                       ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* onlinePlayOverallStatsData);

  /// @brief Method UpdateCampaignOverallStatsData, addr 0x26f2fa0, size 0x6c, virtual false, abstract: false, final false
  inline void UpdateCampaignOverallStatsData(::GlobalNamespace::MissionCompletionResults* missionCompletionResults, ::GlobalNamespace::IMissionNode* missionNode);

  /// @brief Method UpdateOnlinePlayOverallStatsData, addr 0x26f300c, size 0x2c, virtual false, abstract: false, final false
  inline void UpdateOnlinePlayOverallStatsData(::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method UpdatePartyFreePlayOverallStatsData, addr 0x26f2f38, size 0x68, virtual false, abstract: false, final false
  inline void UpdatePartyFreePlayOverallStatsData(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty);

  /// @brief Method UpdateSoloFreePlayOverallStatsData, addr 0x26f2db4, size 0x68, virtual false, abstract: false, final false
  inline void UpdateSoloFreePlayOverallStatsData(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty);

  constexpr ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* const& __cordl_internal_get__campaignOverallStatsData_k__BackingField() const;

  constexpr ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*& __cordl_internal_get__campaignOverallStatsData_k__BackingField();

  constexpr ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* const& __cordl_internal_get__onlinePlayOverallStatsData_k__BackingField() const;

  constexpr ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*& __cordl_internal_get__onlinePlayOverallStatsData_k__BackingField();

  constexpr ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* const& __cordl_internal_get__partyFreePlayOverallStatsData_k__BackingField() const;

  constexpr ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*& __cordl_internal_get__partyFreePlayOverallStatsData_k__BackingField();

  constexpr ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* const& __cordl_internal_get__soloFreePlayOverallStatsData_k__BackingField() const;

  constexpr ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*& __cordl_internal_get__soloFreePlayOverallStatsData_k__BackingField();

  constexpr ::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::IMissionNode*>* const& __cordl_internal_get_didUpdateCampaignOverallStatsDataEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::IMissionNode*>*& __cordl_internal_get_didUpdateCampaignOverallStatsDataEvent();

  constexpr ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>* const& __cordl_internal_get_didUpdatePartyFreePlayOverallStatsDataEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>*& __cordl_internal_get_didUpdatePartyFreePlayOverallStatsDataEvent();

  constexpr ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>* const& __cordl_internal_get_didUpdateSoloFreePlayOverallStatsDataEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>*& __cordl_internal_get_didUpdateSoloFreePlayOverallStatsDataEvent();

  constexpr void __cordl_internal_set__campaignOverallStatsData_k__BackingField(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* value);

  constexpr void __cordl_internal_set__onlinePlayOverallStatsData_k__BackingField(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* value);

  constexpr void __cordl_internal_set__partyFreePlayOverallStatsData_k__BackingField(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* value);

  constexpr void __cordl_internal_set__soloFreePlayOverallStatsData_k__BackingField(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* value);

  constexpr void __cordl_internal_set_didUpdateCampaignOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::IMissionNode*>* value);

  constexpr void __cordl_internal_set_didUpdatePartyFreePlayOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>* value);

  constexpr void __cordl_internal_set_didUpdateSoloFreePlayOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>* value);

  /// @brief Method .ctor, addr 0x26f2cc0, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x26f2d74, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* campaignOverallStatsData,
                    ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* soloFreePlayOverallStatsData,
                    ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* partyFreePlayOverallStatsData,
                    ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* onlinePlayOverallStatsData);

  /// @brief Method add_didUpdateCampaignOverallStatsDataEvent, addr 0x26f2b60, size 0xb0, virtual false, abstract: false, final false
  inline void add_didUpdateCampaignOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::IMissionNode*>* value);

  /// @brief Method add_didUpdatePartyFreePlayOverallStatsDataEvent, addr 0x26f2a00, size 0xb0, virtual false, abstract: false, final false
  inline void add_didUpdatePartyFreePlayOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>* value);

  /// @brief Method add_didUpdateSoloFreePlayOverallStatsDataEvent, addr 0x26f28a0, size 0xb0, virtual false, abstract: false, final false
  inline void add_didUpdateSoloFreePlayOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>* value);

  /// @brief Method get_allOverallStatsData, addr 0x26f2740, size 0x28, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* get_allOverallStatsData();

  /// @brief Method get_campaignOverallStatsData, addr 0x26f2880, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* get_campaignOverallStatsData();

  /// @brief Method get_onlinePlayOverallStatsData, addr 0x26f2898, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* get_onlinePlayOverallStatsData();

  /// @brief Method get_partyFreePlayOverallStatsData, addr 0x26f2890, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* get_partyFreePlayOverallStatsData();

  /// @brief Method get_soloFreePlayOverallStatsData, addr 0x26f2888, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* get_soloFreePlayOverallStatsData();

  /// @brief Method remove_didUpdateCampaignOverallStatsDataEvent, addr 0x26f2c10, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didUpdateCampaignOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::IMissionNode*>* value);

  /// @brief Method remove_didUpdatePartyFreePlayOverallStatsDataEvent, addr 0x26f2ab0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didUpdatePartyFreePlayOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>* value);

  /// @brief Method remove_didUpdateSoloFreePlayOverallStatsDataEvent, addr 0x26f2950, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didUpdateSoloFreePlayOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerAllOverallStatsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerAllOverallStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerAllOverallStatsData(PlayerAllOverallStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerAllOverallStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerAllOverallStatsData(PlayerAllOverallStatsData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13226 };

  /// @brief Field <campaignOverallStatsData>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* ____campaignOverallStatsData_k__BackingField;

  /// @brief Field <soloFreePlayOverallStatsData>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* ____soloFreePlayOverallStatsData_k__BackingField;

  /// @brief Field <partyFreePlayOverallStatsData>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* ____partyFreePlayOverallStatsData_k__BackingField;

  /// @brief Field <onlinePlayOverallStatsData>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* ____onlinePlayOverallStatsData_k__BackingField;

  /// @brief Field didUpdateSoloFreePlayOverallStatsDataEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>* ___didUpdateSoloFreePlayOverallStatsDataEvent;

  /// @brief Field didUpdatePartyFreePlayOverallStatsDataEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>* ___didUpdatePartyFreePlayOverallStatsDataEvent;

  /// @brief Field didUpdateCampaignOverallStatsDataEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::IMissionNode*>* ___didUpdateCampaignOverallStatsDataEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerAllOverallStatsData, ____campaignOverallStatsData_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAllOverallStatsData, ____soloFreePlayOverallStatsData_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAllOverallStatsData, ____partyFreePlayOverallStatsData_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAllOverallStatsData, ____onlinePlayOverallStatsData_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAllOverallStatsData, ___didUpdateSoloFreePlayOverallStatsDataEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAllOverallStatsData, ___didUpdatePartyFreePlayOverallStatsDataEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAllOverallStatsData, ___didUpdateCampaignOverallStatsDataEvent) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerAllOverallStatsData, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerAllOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerAllOverallStatsData*, "", "PlayerAllOverallStatsData");
NEED_NO_BOX(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*, "", "PlayerAllOverallStatsData/PlayerOverallStatsData");
