#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerAllOverallStatsData)
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace GlobalNamespace {
class __PlayerAllOverallStatsData__PlayerOverallStatsData;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class __PlayerAllOverallStatsData__PlayerOverallStatsData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerAllOverallStatsData);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData);
// Type: ::PlayerOverallStatsData
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4625))
// CS Name: ::PlayerAllOverallStatsData::PlayerOverallStatsData*
class CORDL_TYPE __PlayerAllOverallStatsData__PlayerOverallStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <goodCutsCount>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__goodCutsCount_k__BackingField, put = __set__goodCutsCount_k__BackingField)) int32_t _goodCutsCount_k__BackingField;

  /// @brief Field <badCutsCount>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __get__badCutsCount_k__BackingField, put = __set__badCutsCount_k__BackingField)) int32_t _badCutsCount_k__BackingField;

  /// @brief Field <missedCutsCount>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__missedCutsCount_k__BackingField, put = __set__missedCutsCount_k__BackingField)) int32_t _missedCutsCount_k__BackingField;

  /// @brief Field <totalScore>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__totalScore_k__BackingField, put = __set__totalScore_k__BackingField)) int64_t _totalScore_k__BackingField;

  /// @brief Field <playedLevelsCount>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __get__playedLevelsCount_k__BackingField, put = __set__playedLevelsCount_k__BackingField)) int32_t _playedLevelsCount_k__BackingField;

  /// @brief Field <clearedLevelsCount>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __get__clearedLevelsCount_k__BackingField, put = __set__clearedLevelsCount_k__BackingField)) int32_t _clearedLevelsCount_k__BackingField;

  /// @brief Field <failedLevelsCount>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __get__failedLevelsCount_k__BackingField, put = __set__failedLevelsCount_k__BackingField)) int32_t _failedLevelsCount_k__BackingField;

  /// @brief Field <fullComboCount>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __get__fullComboCount_k__BackingField, put = __set__fullComboCount_k__BackingField)) int32_t _fullComboCount_k__BackingField;

  /// @brief Field <timePlayed>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __get__timePlayed_k__BackingField, put = __set__timePlayed_k__BackingField)) float_t _timePlayed_k__BackingField;

  /// @brief Field <handDistanceTravelled>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __get__handDistanceTravelled_k__BackingField, put = __set__handDistanceTravelled_k__BackingField)) int32_t _handDistanceTravelled_k__BackingField;

  /// @brief Field <totalCutScore>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __get__totalCutScore_k__BackingField, put = __set__totalCutScore_k__BackingField)) int64_t _totalCutScore_k__BackingField;

  __declspec(property(get = get_goodCutsCount, put = set_goodCutsCount)) int32_t goodCutsCount;

  __declspec(property(get = get_badCutsCount, put = set_badCutsCount)) int32_t badCutsCount;

  __declspec(property(get = get_missedCutsCount, put = set_missedCutsCount)) int32_t missedCutsCount;

  __declspec(property(get = get_totalScore, put = set_totalScore)) int64_t totalScore;

  __declspec(property(get = get_playedLevelsCount, put = set_playedLevelsCount)) int32_t playedLevelsCount;

  __declspec(property(get = get_clearedLevelsCount, put = set_clearedLevelsCount)) int32_t clearedLevelsCount;

  __declspec(property(get = get_failedLevelsCount, put = set_failedLevelsCount)) int32_t failedLevelsCount;

  __declspec(property(get = get_fullComboCount, put = set_fullComboCount)) int32_t fullComboCount;

  __declspec(property(get = get_timePlayed, put = set_timePlayed)) float_t timePlayed;

  __declspec(property(get = get_handDistanceTravelled, put = set_handDistanceTravelled)) int32_t handDistanceTravelled;

  __declspec(property(get = get_totalCutScore, put = set_totalCutScore)) int64_t totalCutScore;

  constexpr int32_t& __get__goodCutsCount_k__BackingField();

  constexpr int32_t const& __get__goodCutsCount_k__BackingField() const;

  constexpr void __set__goodCutsCount_k__BackingField(int32_t value);

  constexpr int32_t& __get__badCutsCount_k__BackingField();

  constexpr int32_t const& __get__badCutsCount_k__BackingField() const;

  constexpr void __set__badCutsCount_k__BackingField(int32_t value);

  constexpr int32_t& __get__missedCutsCount_k__BackingField();

  constexpr int32_t const& __get__missedCutsCount_k__BackingField() const;

  constexpr void __set__missedCutsCount_k__BackingField(int32_t value);

  constexpr int64_t& __get__totalScore_k__BackingField();

  constexpr int64_t const& __get__totalScore_k__BackingField() const;

  constexpr void __set__totalScore_k__BackingField(int64_t value);

  constexpr int32_t& __get__playedLevelsCount_k__BackingField();

  constexpr int32_t const& __get__playedLevelsCount_k__BackingField() const;

  constexpr void __set__playedLevelsCount_k__BackingField(int32_t value);

  constexpr int32_t& __get__clearedLevelsCount_k__BackingField();

  constexpr int32_t const& __get__clearedLevelsCount_k__BackingField() const;

  constexpr void __set__clearedLevelsCount_k__BackingField(int32_t value);

  constexpr int32_t& __get__failedLevelsCount_k__BackingField();

  constexpr int32_t const& __get__failedLevelsCount_k__BackingField() const;

  constexpr void __set__failedLevelsCount_k__BackingField(int32_t value);

  constexpr int32_t& __get__fullComboCount_k__BackingField();

  constexpr int32_t const& __get__fullComboCount_k__BackingField() const;

  constexpr void __set__fullComboCount_k__BackingField(int32_t value);

  constexpr float_t& __get__timePlayed_k__BackingField();

  constexpr float_t const& __get__timePlayed_k__BackingField() const;

  constexpr void __set__timePlayed_k__BackingField(float_t value);

  constexpr int32_t& __get__handDistanceTravelled_k__BackingField();

  constexpr int32_t const& __get__handDistanceTravelled_k__BackingField() const;

  constexpr void __set__handDistanceTravelled_k__BackingField(int32_t value);

  constexpr int64_t& __get__totalCutScore_k__BackingField();

  constexpr int64_t const& __get__totalCutScore_k__BackingField() const;

  constexpr void __set__totalCutScore_k__BackingField(int64_t value);

  /// @brief Method get_goodCutsCount addr 0x236ba74 size 0x8 virtual false final false
  inline int32_t get_goodCutsCount();

  /// @brief Method set_goodCutsCount addr 0x236ba7c size 0x8 virtual false final false
  inline void set_goodCutsCount(int32_t value);

  /// @brief Method get_badCutsCount addr 0x236ba84 size 0x8 virtual false final false
  inline int32_t get_badCutsCount();

  /// @brief Method set_badCutsCount addr 0x236ba8c size 0x8 virtual false final false
  inline void set_badCutsCount(int32_t value);

  /// @brief Method get_missedCutsCount addr 0x236ba94 size 0x8 virtual false final false
  inline int32_t get_missedCutsCount();

  /// @brief Method set_missedCutsCount addr 0x236ba9c size 0x8 virtual false final false
  inline void set_missedCutsCount(int32_t value);

  /// @brief Method get_totalScore addr 0x236baa4 size 0x8 virtual false final false
  inline int64_t get_totalScore();

  /// @brief Method set_totalScore addr 0x236baac size 0x8 virtual false final false
  inline void set_totalScore(int64_t value);

  /// @brief Method get_playedLevelsCount addr 0x236bab4 size 0x8 virtual false final false
  inline int32_t get_playedLevelsCount();

  /// @brief Method set_playedLevelsCount addr 0x236babc size 0x8 virtual false final false
  inline void set_playedLevelsCount(int32_t value);

  /// @brief Method get_clearedLevelsCount addr 0x236bac4 size 0x8 virtual false final false
  inline int32_t get_clearedLevelsCount();

  /// @brief Method set_clearedLevelsCount addr 0x236bacc size 0x8 virtual false final false
  inline void set_clearedLevelsCount(int32_t value);

  /// @brief Method get_failedLevelsCount addr 0x236bad4 size 0x8 virtual false final false
  inline int32_t get_failedLevelsCount();

  /// @brief Method set_failedLevelsCount addr 0x236badc size 0x8 virtual false final false
  inline void set_failedLevelsCount(int32_t value);

  /// @brief Method get_fullComboCount addr 0x236bae4 size 0x8 virtual false final false
  inline int32_t get_fullComboCount();

  /// @brief Method set_fullComboCount addr 0x236baec size 0x8 virtual false final false
  inline void set_fullComboCount(int32_t value);

  /// @brief Method get_timePlayed addr 0x236baf4 size 0x8 virtual false final false
  inline float_t get_timePlayed();

  /// @brief Method set_timePlayed addr 0x236bafc size 0x8 virtual false final false
  inline void set_timePlayed(float_t value);

  /// @brief Method get_handDistanceTravelled addr 0x236bb04 size 0x8 virtual false final false
  inline int32_t get_handDistanceTravelled();

  /// @brief Method set_handDistanceTravelled addr 0x236bb0c size 0x8 virtual false final false
  inline void set_handDistanceTravelled(int32_t value);

  /// @brief Method get_totalCutScore addr 0x236bb14 size 0x8 virtual false final false
  inline int64_t get_totalCutScore();

  /// @brief Method set_totalCutScore addr 0x236bb1c size 0x8 virtual false final false
  inline void set_totalCutScore(int64_t value);

  static inline ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* New_ctor();

  /// @brief Method .ctor addr 0x236b7f0 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* New_ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore,
                                                                                                 int32_t playedLevelsCount, int32_t clearedLevelsCount, int32_t failedLevelsCount,
                                                                                                 int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled, int64_t totalCutScore);

  /// @brief Method .ctor addr 0x236bb24 size 0x94 virtual false final false
  inline void _ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount, int32_t clearedLevelsCount, int32_t failedLevelsCount,
                    int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled, int64_t totalCutScore);

  /// @brief Method op_Addition addr 0x236b1b0 size 0x120 virtual false final false
  static inline ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* op_Addition(::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* a,
                                                                                                    ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* b);

  /// @brief Method UpdateWithLevelCompletionResults addr 0x236b890 size 0x114 virtual false final false
  inline void UpdateWithLevelCompletionResults(::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerAllOverallStatsData__PlayerOverallStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerAllOverallStatsData__PlayerOverallStatsData(__PlayerAllOverallStatsData__PlayerOverallStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerAllOverallStatsData__PlayerOverallStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerAllOverallStatsData__PlayerOverallStatsData(__PlayerAllOverallStatsData__PlayerOverallStatsData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerAllOverallStatsData__PlayerOverallStatsData();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerAllOverallStatsData
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4626))
// CS Name: ::PlayerAllOverallStatsData*
class CORDL_TYPE PlayerAllOverallStatsData : public ::System::Object {
public:
  // Declarations
  using PlayerOverallStatsData = ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData;

  /// @brief Field <campaignOverallStatsData>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__campaignOverallStatsData_k__BackingField,
                      put = __set__campaignOverallStatsData_k__BackingField))::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* _campaignOverallStatsData_k__BackingField;

  /// @brief Field <soloFreePlayOverallStatsData>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__soloFreePlayOverallStatsData_k__BackingField,
                      put = __set__soloFreePlayOverallStatsData_k__BackingField))::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* _soloFreePlayOverallStatsData_k__BackingField;

  /// @brief Field <partyFreePlayOverallStatsData>k__BackingField, offset 0x20, size 0x8
  __declspec(
      property(get = __get__partyFreePlayOverallStatsData_k__BackingField,
               put = __set__partyFreePlayOverallStatsData_k__BackingField))::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* _partyFreePlayOverallStatsData_k__BackingField;

  /// @brief Field <onlinePlayOverallStatsData>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__onlinePlayOverallStatsData_k__BackingField,
                      put = __set__onlinePlayOverallStatsData_k__BackingField))::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* _onlinePlayOverallStatsData_k__BackingField;

  /// @brief Field didUpdateSoloFreePlayOverallStatsDataEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_didUpdateSoloFreePlayOverallStatsDataEvent,
                      put = __set_didUpdateSoloFreePlayOverallStatsDataEvent))::System::Action_2<::GlobalNamespace::LevelCompletionResults*,
                                                                                                 ::GlobalNamespace::IDifficultyBeatmap*>* didUpdateSoloFreePlayOverallStatsDataEvent;

  /// @brief Field didUpdatePartyFreePlayOverallStatsDataEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_didUpdatePartyFreePlayOverallStatsDataEvent,
                      put = __set_didUpdatePartyFreePlayOverallStatsDataEvent))::System::Action_2<::GlobalNamespace::LevelCompletionResults*,
                                                                                                  ::GlobalNamespace::IDifficultyBeatmap*>* didUpdatePartyFreePlayOverallStatsDataEvent;

  /// @brief Field didUpdateCampaignOverallStatsDataEvent, offset 0x40, size 0x8
  __declspec(property(
      get = __get_didUpdateCampaignOverallStatsDataEvent,
      put = __set_didUpdateCampaignOverallStatsDataEvent))::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::MissionNode*>* didUpdateCampaignOverallStatsDataEvent;

  __declspec(property(get = get_allOverallStatsData))::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* allOverallStatsData;

  __declspec(property(get = get_campaignOverallStatsData, put = set_campaignOverallStatsData))::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* campaignOverallStatsData;

  __declspec(property(get = get_soloFreePlayOverallStatsData,
                      put = set_soloFreePlayOverallStatsData))::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* soloFreePlayOverallStatsData;

  __declspec(property(get = get_partyFreePlayOverallStatsData,
                      put = set_partyFreePlayOverallStatsData))::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* partyFreePlayOverallStatsData;

  __declspec(property(get = get_onlinePlayOverallStatsData, put = set_onlinePlayOverallStatsData))::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* onlinePlayOverallStatsData;

  constexpr ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*& __get__campaignOverallStatsData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*> const& __get__campaignOverallStatsData_k__BackingField() const;

  constexpr void __set__campaignOverallStatsData_k__BackingField(::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* value);

  constexpr ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*& __get__soloFreePlayOverallStatsData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*> const& __get__soloFreePlayOverallStatsData_k__BackingField() const;

  constexpr void __set__soloFreePlayOverallStatsData_k__BackingField(::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* value);

  constexpr ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*& __get__partyFreePlayOverallStatsData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*> const& __get__partyFreePlayOverallStatsData_k__BackingField() const;

  constexpr void __set__partyFreePlayOverallStatsData_k__BackingField(::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* value);

  constexpr ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*& __get__onlinePlayOverallStatsData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*> const& __get__onlinePlayOverallStatsData_k__BackingField() const;

  constexpr void __set__onlinePlayOverallStatsData_k__BackingField(::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* value);

  constexpr ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>*& __get_didUpdateSoloFreePlayOverallStatsDataEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>*> const&
  __get_didUpdateSoloFreePlayOverallStatsDataEvent() const;

  constexpr void __set_didUpdateSoloFreePlayOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  constexpr ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>*& __get_didUpdatePartyFreePlayOverallStatsDataEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>*> const&
  __get_didUpdatePartyFreePlayOverallStatsDataEvent() const;

  constexpr void __set_didUpdatePartyFreePlayOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  constexpr ::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::MissionNode*>*& __get_didUpdateCampaignOverallStatsDataEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::MissionNode*>*> const&
  __get_didUpdateCampaignOverallStatsDataEvent() const;

  constexpr void __set_didUpdateCampaignOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::MissionNode*>* value);

  /// @brief Method get_allOverallStatsData addr 0x236b188 size 0x28 virtual false final false
  inline ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* get_allOverallStatsData();

  /// @brief Method get_campaignOverallStatsData addr 0x236b2d0 size 0x8 virtual false final false
  inline ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* get_campaignOverallStatsData();

  /// @brief Method set_campaignOverallStatsData addr 0x236b2d8 size 0x8 virtual false final false
  inline void set_campaignOverallStatsData(::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* value);

  /// @brief Method get_soloFreePlayOverallStatsData addr 0x236b2e0 size 0x8 virtual false final false
  inline ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* get_soloFreePlayOverallStatsData();

  /// @brief Method set_soloFreePlayOverallStatsData addr 0x236b2e8 size 0x8 virtual false final false
  inline void set_soloFreePlayOverallStatsData(::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* value);

  /// @brief Method get_partyFreePlayOverallStatsData addr 0x236b2f0 size 0x8 virtual false final false
  inline ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* get_partyFreePlayOverallStatsData();

  /// @brief Method set_partyFreePlayOverallStatsData addr 0x236b2f8 size 0x8 virtual false final false
  inline void set_partyFreePlayOverallStatsData(::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* value);

  /// @brief Method get_onlinePlayOverallStatsData addr 0x236b300 size 0x8 virtual false final false
  inline ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* get_onlinePlayOverallStatsData();

  /// @brief Method set_onlinePlayOverallStatsData addr 0x236b308 size 0x8 virtual false final false
  inline void set_onlinePlayOverallStatsData(::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* value);

  /// @brief Method add_didUpdateSoloFreePlayOverallStatsDataEvent addr 0x236b310 size 0xb0 virtual false final false
  inline void add_didUpdateSoloFreePlayOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  /// @brief Method remove_didUpdateSoloFreePlayOverallStatsDataEvent addr 0x236b3c0 size 0xb0 virtual false final false
  inline void remove_didUpdateSoloFreePlayOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  /// @brief Method add_didUpdatePartyFreePlayOverallStatsDataEvent addr 0x236b470 size 0xb0 virtual false final false
  inline void add_didUpdatePartyFreePlayOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  /// @brief Method remove_didUpdatePartyFreePlayOverallStatsDataEvent addr 0x236b520 size 0xb0 virtual false final false
  inline void remove_didUpdatePartyFreePlayOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  /// @brief Method add_didUpdateCampaignOverallStatsDataEvent addr 0x236b5d0 size 0xb0 virtual false final false
  inline void add_didUpdateCampaignOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::MissionNode*>* value);

  /// @brief Method remove_didUpdateCampaignOverallStatsDataEvent addr 0x236b680 size 0xb0 virtual false final false
  inline void remove_didUpdateCampaignOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::MissionNode*>* value);

  static inline ::GlobalNamespace::PlayerAllOverallStatsData* New_ctor();

  /// @brief Method .ctor addr 0x236b730 size 0xc0 virtual false final false
  inline void _ctor();

  static inline ::GlobalNamespace::PlayerAllOverallStatsData* New_ctor(::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* campaignOverallStatsData,
                                                                       ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* soloFreePlayOverallStatsData,
                                                                       ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* partyFreePlayOverallStatsData,
                                                                       ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* onlinePlayOverallStatsData);

  /// @brief Method .ctor addr 0x236b7f8 size 0x40 virtual false final false
  inline void _ctor(::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* campaignOverallStatsData,
                    ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* soloFreePlayOverallStatsData,
                    ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* partyFreePlayOverallStatsData,
                    ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* onlinePlayOverallStatsData);

  /// @brief Method UpdateSoloFreePlayOverallStatsData addr 0x236b838 size 0x58 virtual false final false
  inline void UpdateSoloFreePlayOverallStatsData(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

  /// @brief Method UpdatePartyFreePlayOverallStatsData addr 0x236b9a4 size 0x58 virtual false final false
  inline void UpdatePartyFreePlayOverallStatsData(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

  /// @brief Method UpdateCampaignOverallStatsData addr 0x236b9fc size 0x60 virtual false final false
  inline void UpdateCampaignOverallStatsData(::GlobalNamespace::MissionCompletionResults* missionCompletionResults, ::GlobalNamespace::MissionNode* missionNode);

  /// @brief Method UpdateOnlinePlayOverallStatsData addr 0x236ba5c size 0x18 virtual false final false
  inline void UpdateOnlinePlayOverallStatsData(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

  // Ctor Parameters [CppParam { name: "", ty: "PlayerAllOverallStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerAllOverallStatsData(PlayerAllOverallStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerAllOverallStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerAllOverallStatsData(PlayerAllOverallStatsData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerAllOverallStatsData();

public:
  /// @brief Field <campaignOverallStatsData>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* ____campaignOverallStatsData_k__BackingField;

  /// @brief Field <soloFreePlayOverallStatsData>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* ____soloFreePlayOverallStatsData_k__BackingField;

  /// @brief Field <partyFreePlayOverallStatsData>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* ____partyFreePlayOverallStatsData_k__BackingField;

  /// @brief Field <onlinePlayOverallStatsData>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* ____onlinePlayOverallStatsData_k__BackingField;

  /// @brief Field didUpdateSoloFreePlayOverallStatsDataEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>* ___didUpdateSoloFreePlayOverallStatsDataEvent;

  /// @brief Field didUpdatePartyFreePlayOverallStatsDataEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>* ___didUpdatePartyFreePlayOverallStatsDataEvent;

  /// @brief Field didUpdateCampaignOverallStatsDataEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::MissionNode*>* ___didUpdateCampaignOverallStatsDataEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerAllOverallStatsData, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerAllOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerAllOverallStatsData*, "", "PlayerAllOverallStatsData");
NEED_NO_BOX(::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*, "", "PlayerAllOverallStatsData/PlayerOverallStatsData");
