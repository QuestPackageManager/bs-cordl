#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerLevelStatsData)
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
struct __RankModel__Rank;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerLevelStatsData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerLevelStatsData);
// Type: ::PlayerLevelStatsData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15034)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4632))
// CS Name: ::PlayerLevelStatsData*
class CORDL_TYPE PlayerLevelStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _highScore, offset 0x10, size 0x4
  __declspec(property(get = __get__highScore, put = __set__highScore)) int32_t _highScore;

  /// @brief Field _maxCombo, offset 0x14, size 0x4
  __declspec(property(get = __get__maxCombo, put = __set__maxCombo)) int32_t _maxCombo;

  /// @brief Field _fullCombo, offset 0x18, size 0x1
  __declspec(property(get = __get__fullCombo, put = __set__fullCombo)) bool _fullCombo;

  /// @brief Field _maxRank, offset 0x1c, size 0x4
  __declspec(property(get = __get__maxRank, put = __set__maxRank))::GlobalNamespace::__RankModel__Rank _maxRank;

  /// @brief Field _validScore, offset 0x20, size 0x1
  __declspec(property(get = __get__validScore, put = __set__validScore)) bool _validScore;

  /// @brief Field _playCount, offset 0x24, size 0x4
  __declspec(property(get = __get__playCount, put = __set__playCount)) int32_t _playCount;

  /// @brief Field _levelID, offset 0x28, size 0x8
  __declspec(property(get = __get__levelID, put = __set__levelID))::StringW _levelID;

  /// @brief Field _difficulty, offset 0x30, size 0x4
  __declspec(property(get = __get__difficulty, put = __set__difficulty))::GlobalNamespace::BeatmapDifficulty _difficulty;

  /// @brief Field _beatmapCharacteristic, offset 0x38, size 0x8
  __declspec(property(get = __get__beatmapCharacteristic, put = __set__beatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* _beatmapCharacteristic;

  __declspec(property(get = get_levelID))::StringW levelID;

  __declspec(property(get = get_difficulty))::GlobalNamespace::BeatmapDifficulty difficulty;

  __declspec(property(get = get_beatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;

  __declspec(property(get = get_highScore)) int32_t highScore;

  __declspec(property(get = get_maxCombo)) int32_t maxCombo;

  __declspec(property(get = get_fullCombo)) bool fullCombo;

  __declspec(property(get = get_maxRank))::GlobalNamespace::__RankModel__Rank maxRank;

  __declspec(property(get = get_validScore)) bool validScore;

  __declspec(property(get = get_playCount)) int32_t playCount;

  constexpr int32_t& __get__highScore();

  constexpr int32_t const& __get__highScore() const;

  constexpr void __set__highScore(int32_t value);

  constexpr int32_t& __get__maxCombo();

  constexpr int32_t const& __get__maxCombo() const;

  constexpr void __set__maxCombo(int32_t value);

  constexpr bool& __get__fullCombo();

  constexpr bool const& __get__fullCombo() const;

  constexpr void __set__fullCombo(bool value);

  constexpr ::GlobalNamespace::__RankModel__Rank& __get__maxRank();

  constexpr ::GlobalNamespace::__RankModel__Rank const& __get__maxRank() const;

  constexpr void __set__maxRank(::GlobalNamespace::__RankModel__Rank value);

  constexpr bool& __get__validScore();

  constexpr bool const& __get__validScore() const;

  constexpr void __set__validScore(bool value);

  constexpr int32_t& __get__playCount();

  constexpr int32_t const& __get__playCount() const;

  constexpr void __set__playCount(int32_t value);

  constexpr ::StringW& __get__levelID();

  constexpr ::StringW const& __get__levelID() const;

  constexpr void __set__levelID(::StringW value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __get__difficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __get__difficulty() const;

  constexpr void __set__difficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get__beatmapCharacteristic();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get__beatmapCharacteristic() const;

  constexpr void __set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  /// @brief Method get_levelID, addr 0x2372640, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_levelID();

  /// @brief Method get_difficulty, addr 0x2372648, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficulty get_difficulty();

  /// @brief Method get_beatmapCharacteristic, addr 0x2372650, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();

  /// @brief Method get_highScore, addr 0x2372658, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_highScore();

  /// @brief Method get_maxCombo, addr 0x2372660, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxCombo();

  /// @brief Method get_fullCombo, addr 0x2372668, size 0x8, virtual false, abstract: false, final false
  inline bool get_fullCombo();

  /// @brief Method get_maxRank, addr 0x2372670, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__RankModel__Rank get_maxRank();

  /// @brief Method get_validScore, addr 0x2372678, size 0x8, virtual false, abstract: false, final false
  inline bool get_validScore();

  /// @brief Method get_playCount, addr 0x2372680, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_playCount();

  static inline ::GlobalNamespace::PlayerLevelStatsData* New_ctor(::StringW levelID, ::GlobalNamespace::BeatmapDifficulty difficulty,
                                                                  ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method .ctor, addr 0x2372688, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelID, ::GlobalNamespace::BeatmapDifficulty difficulty, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  static inline ::GlobalNamespace::PlayerLevelStatsData* New_ctor(::StringW levelID, ::GlobalNamespace::BeatmapDifficulty difficulty, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                                  int32_t highScore, int32_t maxCombo, bool fullCombo, ::GlobalNamespace::__RankModel__Rank maxRank, bool validScore,
                                                                  int32_t playCount);

  /// @brief Method .ctor, addr 0x23726c8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelID, ::GlobalNamespace::BeatmapDifficulty difficulty, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, int32_t highScore, int32_t maxCombo,
                    bool fullCombo, ::GlobalNamespace::__RankModel__Rank maxRank, bool validScore, int32_t playCount);

  /// @brief Method UpdateScoreData, addr 0x2372750, size 0x4c, virtual false, abstract: false, final false
  inline void UpdateScoreData(int32_t score, int32_t maxCombo, bool fullCombo, ::GlobalNamespace::__RankModel__Rank rank);

  /// @brief Method IncreaseNumberOfGameplays, addr 0x237279c, size 0x10, virtual false, abstract: false, final false
  inline void IncreaseNumberOfGameplays();

  // Ctor Parameters [CppParam { name: "", ty: "PlayerLevelStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerLevelStatsData(PlayerLevelStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerLevelStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerLevelStatsData(PlayerLevelStatsData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerLevelStatsData();

public:
  /// @brief Field _highScore, offset: 0x10, size: 0x4, def value: None
  int32_t ____highScore;

  /// @brief Field _maxCombo, offset: 0x14, size: 0x4, def value: None
  int32_t ____maxCombo;

  /// @brief Field _fullCombo, offset: 0x18, size: 0x1, def value: None
  bool ____fullCombo;

  /// @brief Field _maxRank, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__RankModel__Rank ____maxRank;

  /// @brief Field _validScore, offset: 0x20, size: 0x1, def value: None
  bool ____validScore;

  /// @brief Field _playCount, offset: 0x24, size: 0x4, def value: None
  int32_t ____playCount;

  /// @brief Field _levelID, offset: 0x28, size: 0x8, def value: None
  ::StringW ____levelID;

  /// @brief Field _difficulty, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____difficulty;

  /// @brief Field _beatmapCharacteristic, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* ____beatmapCharacteristic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerLevelStatsData, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLevelStatsData, ____highScore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLevelStatsData, ____maxCombo) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLevelStatsData, ____fullCombo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLevelStatsData, ____maxRank) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLevelStatsData, ____validScore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLevelStatsData, ____playCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLevelStatsData, ____levelID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLevelStatsData, ____difficulty) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLevelStatsData, ____beatmapCharacteristic) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerLevelStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerLevelStatsData*, "", "PlayerLevelStatsData");
