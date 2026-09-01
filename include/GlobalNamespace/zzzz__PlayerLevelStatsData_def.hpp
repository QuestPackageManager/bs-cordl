#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayerLevelStatsData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerLevelStatsData)
namespace GlobalNamespace {
struct BeatmapCharacteristic;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
struct RankModel_Rank;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerLevelStatsData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerLevelStatsData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerLevelStatsData*, "", "PlayerLevelStatsData");
// Dependencies BeatmapCharacteristic, BeatmapDifficulty, RankModel::Rank, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerLevelStatsData
class CORDL_TYPE PlayerLevelStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapCharacteristic, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristic, put = __cordl_internal_set__beatmapCharacteristic)) ::GlobalNamespace::BeatmapCharacteristic _beatmapCharacteristic;

  /// @brief Field _difficulty, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__difficulty, put = __cordl_internal_set__difficulty)) ::GlobalNamespace::BeatmapDifficulty _difficulty;

  /// @brief Field _fullCombo, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__fullCombo, put = __cordl_internal_set__fullCombo)) bool _fullCombo;

  /// @brief Field _highScore, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__highScore, put = __cordl_internal_set__highScore)) int32_t _highScore;

  /// @brief Field _levelID, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__levelID, put = __cordl_internal_set__levelID)) ::StringW _levelID;

  /// @brief Field _maxCombo, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__maxCombo, put = __cordl_internal_set__maxCombo)) int32_t _maxCombo;

  /// @brief Field _maxRank, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxRank, put = __cordl_internal_set__maxRank)) ::GlobalNamespace::RankModel_Rank _maxRank;

  /// @brief Field _playCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__playCount, put = __cordl_internal_set__playCount)) int32_t _playCount;

  /// @brief Field _validScore, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__validScore, put = __cordl_internal_set__validScore)) bool _validScore;

  __declspec(property(get = get_beatmapCharacteristic)) ::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic;

  __declspec(property(get = get_difficulty)) ::GlobalNamespace::BeatmapDifficulty difficulty;

  __declspec(property(get = get_fullCombo)) bool fullCombo;

  __declspec(property(get = get_highScore)) int32_t highScore;

  __declspec(property(get = get_levelID)) ::StringW levelID;

  __declspec(property(get = get_maxCombo)) int32_t maxCombo;

  __declspec(property(get = get_maxRank)) ::GlobalNamespace::RankModel_Rank maxRank;

  __declspec(property(get = get_playCount)) int32_t playCount;

  __declspec(property(get = get_validScore)) bool validScore;

  /// @brief Method GetBeatmapKey, addr 0x3747e20, size 0x10, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey GetBeatmapKey();

  /// @brief Method IncreaseNumberOfGameplays, addr 0x3748620, size 0x10, virtual false, abstract: false, final false
  inline void IncreaseNumberOfGameplays();

  static inline ::GlobalNamespace::PlayerLevelStatsData* New_ctor(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey);

  static inline ::GlobalNamespace::PlayerLevelStatsData* New_ctor(::StringW levelID, ::GlobalNamespace::BeatmapDifficulty difficulty, ::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic);

  static inline ::GlobalNamespace::PlayerLevelStatsData* New_ctor(::StringW levelID, ::GlobalNamespace::BeatmapDifficulty difficulty, ::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic,
                                                                  int32_t highScore, int32_t maxCombo, bool fullCombo, ::GlobalNamespace::RankModel_Rank maxRank, bool validScore, int32_t playCount);

  /// @brief Method UpdateScoreData, addr 0x3747e30, size 0x3c, virtual false, abstract: false, final false
  inline void UpdateScoreData(int32_t score, int32_t maxCombo, bool fullCombo, ::GlobalNamespace::RankModel_Rank rank);

  constexpr ::GlobalNamespace::BeatmapCharacteristic const& __cordl_internal_get__beatmapCharacteristic() const;

  constexpr ::GlobalNamespace::BeatmapCharacteristic& __cordl_internal_get__beatmapCharacteristic();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get__difficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get__difficulty();

  constexpr bool const& __cordl_internal_get__fullCombo() const;

  constexpr bool& __cordl_internal_get__fullCombo();

  constexpr int32_t const& __cordl_internal_get__highScore() const;

  constexpr int32_t& __cordl_internal_get__highScore();

  constexpr ::StringW const& __cordl_internal_get__levelID() const;

  constexpr ::StringW& __cordl_internal_get__levelID();

  constexpr int32_t const& __cordl_internal_get__maxCombo() const;

  constexpr int32_t& __cordl_internal_get__maxCombo();

  constexpr ::GlobalNamespace::RankModel_Rank const& __cordl_internal_get__maxRank() const;

  constexpr ::GlobalNamespace::RankModel_Rank& __cordl_internal_get__maxRank();

  constexpr int32_t const& __cordl_internal_get__playCount() const;

  constexpr int32_t& __cordl_internal_get__playCount();

  constexpr bool const& __cordl_internal_get__validScore() const;

  constexpr bool& __cordl_internal_get__validScore();

  constexpr void __cordl_internal_set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristic value);

  constexpr void __cordl_internal_set__difficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set__fullCombo(bool value);

  constexpr void __cordl_internal_set__highScore(int32_t value);

  constexpr void __cordl_internal_set__levelID(::StringW value);

  constexpr void __cordl_internal_set__maxCombo(int32_t value);

  constexpr void __cordl_internal_set__maxRank(::GlobalNamespace::RankModel_Rank value);

  constexpr void __cordl_internal_set__playCount(int32_t value);

  constexpr void __cordl_internal_set__validScore(bool value);

  /// @brief Method .ctor, addr 0x3748220, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method .ctor, addr 0x374e0bc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelID, ::GlobalNamespace::BeatmapDifficulty difficulty, ::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic);

  /// @brief Method .ctor, addr 0x374c1a0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelID, ::GlobalNamespace::BeatmapDifficulty difficulty, ::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic, int32_t highScore, int32_t maxCombo,
                    bool fullCombo, ::GlobalNamespace::RankModel_Rank maxRank, bool validScore, int32_t playCount);

  /// @brief Method get_beatmapCharacteristic, addr 0x374e084, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapCharacteristic get_beatmapCharacteristic();

  /// @brief Method get_difficulty, addr 0x374e07c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficulty get_difficulty();

  /// @brief Method get_fullCombo, addr 0x374e09c, size 0x8, virtual false, abstract: false, final false
  inline bool get_fullCombo();

  /// @brief Method get_highScore, addr 0x374e08c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_highScore();

  /// @brief Method get_levelID, addr 0x374e074, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_levelID();

  /// @brief Method get_maxCombo, addr 0x374e094, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxCombo();

  /// @brief Method get_maxRank, addr 0x374e0a4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::RankModel_Rank get_maxRank();

  /// @brief Method get_playCount, addr 0x374e0b4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_playCount();

  /// @brief Method get_validScore, addr 0x374e0ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_validScore();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerLevelStatsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerLevelStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerLevelStatsData(PlayerLevelStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerLevelStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerLevelStatsData(PlayerLevelStatsData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15169 };

  /// @brief Field _highScore, offset: 0x10, size: 0x4, def value: None
  int32_t ____highScore;

  /// @brief Field _maxCombo, offset: 0x14, size: 0x4, def value: None
  int32_t ____maxCombo;

  /// @brief Field _fullCombo, offset: 0x18, size: 0x1, def value: None
  bool ____fullCombo;

  /// @brief Field _maxRank, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::RankModel_Rank ____maxRank;

  /// @brief Field _validScore, offset: 0x20, size: 0x1, def value: None
  bool ____validScore;

  /// @brief Field _playCount, offset: 0x24, size: 0x4, def value: None
  int32_t ____playCount;

  /// @brief Field _levelID, offset: 0x28, size: 0x8, def value: None
  ::StringW ____levelID;

  /// @brief Field _difficulty, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____difficulty;

  /// @brief Field _beatmapCharacteristic, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapCharacteristic ____beatmapCharacteristic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerLevelStatsData, ____highScore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLevelStatsData, ____maxCombo) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLevelStatsData, ____fullCombo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLevelStatsData, ____maxRank) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLevelStatsData, ____validScore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLevelStatsData, ____playCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLevelStatsData, ____levelID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLevelStatsData, ____difficulty) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLevelStatsData, ____beatmapCharacteristic) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerLevelStatsData) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
