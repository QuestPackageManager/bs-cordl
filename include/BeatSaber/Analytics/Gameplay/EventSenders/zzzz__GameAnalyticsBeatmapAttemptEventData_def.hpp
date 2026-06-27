#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/GameAnalyticsBeatmapAttemptEventData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameAnalyticsBeatmapAttemptEventData)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsBeatmapLevelData;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsBeatmapAttemptEventData;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData);
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay::EventSenders {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventSenders.GameAnalyticsBeatmapAttemptEventData
class CORDL_TYPE GameAnalyticsBeatmapAttemptEventData : public ::System::Object {
public:
// Declarations
/// @brief Field badCuts, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_badCuts, put=__cordl_internal_set_badCuts)) int32_t  badCuts;

/// @brief Field bombsHit, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_bombsHit, put=__cordl_internal_set_bombsHit)) int32_t  bombsHit;

/// @brief Field duration, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) uint32_t  duration;

/// @brief Field goodCuts, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_goodCuts, put=__cordl_internal_set_goodCuts)) int32_t  goodCuts;

/// @brief Field isClear, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_isClear, put=__cordl_internal_set_isClear)) bool  isClear;

/// @brief Field isEndStateQuit, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_isEndStateQuit, put=__cordl_internal_set_isEndStateQuit)) bool  isEndStateQuit;

/// @brief Field isEndStateRestart, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_isEndStateRestart, put=__cordl_internal_set_isEndStateRestart)) bool  isEndStateRestart;

/// @brief Field isFullCombo, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_isFullCombo, put=__cordl_internal_set_isFullCombo)) bool  isFullCombo;

/// @brief Field isMissionComplete, offset 0x46, size 0x1 
 __declspec(property(get=__cordl_internal_get_isMissionComplete, put=__cordl_internal_set_isMissionComplete)) bool  isMissionComplete;

/// @brief Field levelData, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_levelData, put=__cordl_internal_set_levelData)) ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*  levelData;

/// @brief Field matchID, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_matchID, put=__cordl_internal_set_matchID)) ::StringW  matchID;

/// @brief Field maxCombo, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxCombo, put=__cordl_internal_set_maxCombo)) int32_t  maxCombo;

/// @brief Field misses, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_misses, put=__cordl_internal_set_misses)) int32_t  misses;

/// @brief Field missionCompletionMask, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_missionCompletionMask, put=__cordl_internal_set_missionCompletionMask)) uint32_t  missionCompletionMask;

/// @brief Field modifiedScore, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_modifiedScore, put=__cordl_internal_set_modifiedScore)) int64_t  modifiedScore;

/// @brief Field rank, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rank, put=__cordl_internal_set_rank)) int32_t  rank;

/// @brief Field score, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_score, put=__cordl_internal_set_score)) int64_t  score;

static inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData* New_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*  levelData, bool  isEndStateQuit, bool  isEndStateRestart, bool  isClear, int32_t  rank, int32_t  modifiedScore, int32_t  score, bool  isFullCombo, int32_t  maxCombo, uint32_t  duration, int32_t  goodCuts, int32_t  badCuts, int32_t  misses, int32_t  bombsHit) ;

constexpr int32_t const& __cordl_internal_get_badCuts() const;

constexpr int32_t& __cordl_internal_get_badCuts() ;

constexpr int32_t const& __cordl_internal_get_bombsHit() const;

constexpr int32_t& __cordl_internal_get_bombsHit() ;

constexpr uint32_t const& __cordl_internal_get_duration() const;

constexpr uint32_t& __cordl_internal_get_duration() ;

constexpr int32_t const& __cordl_internal_get_goodCuts() const;

constexpr int32_t& __cordl_internal_get_goodCuts() ;

constexpr bool const& __cordl_internal_get_isClear() const;

constexpr bool& __cordl_internal_get_isClear() ;

constexpr bool const& __cordl_internal_get_isEndStateQuit() const;

constexpr bool& __cordl_internal_get_isEndStateQuit() ;

constexpr bool const& __cordl_internal_get_isEndStateRestart() const;

constexpr bool& __cordl_internal_get_isEndStateRestart() ;

constexpr bool const& __cordl_internal_get_isFullCombo() const;

constexpr bool& __cordl_internal_get_isFullCombo() ;

constexpr bool const& __cordl_internal_get_isMissionComplete() const;

constexpr bool& __cordl_internal_get_isMissionComplete() ;

constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* const& __cordl_internal_get_levelData() const;

constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*& __cordl_internal_get_levelData() ;

constexpr ::StringW const& __cordl_internal_get_matchID() const;

constexpr ::StringW& __cordl_internal_get_matchID() ;

constexpr int32_t const& __cordl_internal_get_maxCombo() const;

constexpr int32_t& __cordl_internal_get_maxCombo() ;

constexpr int32_t const& __cordl_internal_get_misses() const;

constexpr int32_t& __cordl_internal_get_misses() ;

constexpr uint32_t const& __cordl_internal_get_missionCompletionMask() const;

constexpr uint32_t& __cordl_internal_get_missionCompletionMask() ;

constexpr int64_t const& __cordl_internal_get_modifiedScore() const;

constexpr int64_t& __cordl_internal_get_modifiedScore() ;

constexpr int32_t const& __cordl_internal_get_rank() const;

constexpr int32_t& __cordl_internal_get_rank() ;

constexpr int64_t const& __cordl_internal_get_score() const;

constexpr int64_t& __cordl_internal_get_score() ;

constexpr void __cordl_internal_set_badCuts(int32_t  value) ;

constexpr void __cordl_internal_set_bombsHit(int32_t  value) ;

constexpr void __cordl_internal_set_duration(uint32_t  value) ;

constexpr void __cordl_internal_set_goodCuts(int32_t  value) ;

constexpr void __cordl_internal_set_isClear(bool  value) ;

constexpr void __cordl_internal_set_isEndStateQuit(bool  value) ;

constexpr void __cordl_internal_set_isEndStateRestart(bool  value) ;

constexpr void __cordl_internal_set_isFullCombo(bool  value) ;

constexpr void __cordl_internal_set_isMissionComplete(bool  value) ;

constexpr void __cordl_internal_set_levelData(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*  value) ;

constexpr void __cordl_internal_set_matchID(::StringW  value) ;

constexpr void __cordl_internal_set_maxCombo(int32_t  value) ;

constexpr void __cordl_internal_set_misses(int32_t  value) ;

constexpr void __cordl_internal_set_missionCompletionMask(uint32_t  value) ;

constexpr void __cordl_internal_set_modifiedScore(int64_t  value) ;

constexpr void __cordl_internal_set_rank(int32_t  value) ;

constexpr void __cordl_internal_set_score(int64_t  value) ;

/// @brief Method .ctor, addr 0x31d0518, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*  levelData, bool  isEndStateQuit, bool  isEndStateRestart, bool  isClear, int32_t  rank, int32_t  modifiedScore, int32_t  score, bool  isFullCombo, int32_t  maxCombo, uint32_t  duration, int32_t  goodCuts, int32_t  badCuts, int32_t  misses, int32_t  bombsHit) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameAnalyticsBeatmapAttemptEventData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameAnalyticsBeatmapAttemptEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameAnalyticsBeatmapAttemptEventData(GameAnalyticsBeatmapAttemptEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameAnalyticsBeatmapAttemptEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameAnalyticsBeatmapAttemptEventData(GameAnalyticsBeatmapAttemptEventData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22093};

/// @brief Field duration, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___duration;

/// @brief Field isClear, offset: 0x14, size: 0x1, def value: None
 bool  ___isClear;

/// @brief Field score, offset: 0x18, size: 0x8, def value: None
 int64_t  ___score;

/// @brief Field modifiedScore, offset: 0x20, size: 0x8, def value: None
 int64_t  ___modifiedScore;

/// @brief Field maxCombo, offset: 0x28, size: 0x4, def value: None
 int32_t  ___maxCombo;

/// @brief Field rank, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___rank;

/// @brief Field isFullCombo, offset: 0x30, size: 0x1, def value: None
 bool  ___isFullCombo;

/// @brief Field goodCuts, offset: 0x34, size: 0x4, def value: None
 int32_t  ___goodCuts;

/// @brief Field badCuts, offset: 0x38, size: 0x4, def value: None
 int32_t  ___badCuts;

/// @brief Field misses, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___misses;

/// @brief Field bombsHit, offset: 0x40, size: 0x4, def value: None
 int32_t  ___bombsHit;

/// @brief Field isEndStateRestart, offset: 0x44, size: 0x1, def value: None
 bool  ___isEndStateRestart;

/// @brief Field isEndStateQuit, offset: 0x45, size: 0x1, def value: None
 bool  ___isEndStateQuit;

/// @brief Field isMissionComplete, offset: 0x46, size: 0x1, def value: None
 bool  ___isMissionComplete;

/// @brief Field missionCompletionMask, offset: 0x48, size: 0x4, def value: None
 uint32_t  ___missionCompletionMask;

/// @brief Field matchID, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___matchID;

/// @brief Field levelData, offset: 0x58, size: 0x8, def value: None
 ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*  ___levelData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData, ___duration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData, ___isClear) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData, ___score) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData, ___modifiedScore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData, ___maxCombo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData, ___rank) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData, ___isFullCombo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData, ___goodCuts) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData, ___badCuts) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData, ___misses) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData, ___bombsHit) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData, ___isEndStateRestart) == 0x44, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData, ___isEndStateQuit) == 0x45, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData, ___isMissionComplete) == 0x46, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData, ___missionCompletionMask) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData, ___matchID) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData, ___levelData) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData, 0x60>, "Size mismatch!");

} // namespace end def BeatSaber::Analytics::Gameplay::EventSenders
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*, "BeatSaber.Analytics.Gameplay.EventSenders", "GameAnalyticsBeatmapAttemptEventData");
