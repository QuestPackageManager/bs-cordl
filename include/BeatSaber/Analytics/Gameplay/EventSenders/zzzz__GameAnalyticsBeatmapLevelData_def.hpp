#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/GameAnalyticsBeatmapLevelData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GameAnalyticsBeatmapLevelData)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsBeatmapPracticeSettings;
}
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsGameplayModifiers;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsBeatmapLevelData;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData);
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay::EventSenders {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventSenders.GameAnalyticsBeatmapLevelData
class CORDL_TYPE GameAnalyticsBeatmapLevelData : public ::System::Object {
public:
// Declarations
/// @brief Field characteristic, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_characteristic, put=__cordl_internal_set_characteristic)) ::StringW  characteristic;

/// @brief Field difficulty, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_difficulty, put=__cordl_internal_set_difficulty)) ::StringW  difficulty;

/// @brief Field gameMode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameMode, put=__cordl_internal_set_gameMode)) ::StringW  gameMode;

/// @brief Field gameplayModifiers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameplayModifiers, put=__cordl_internal_set_gameplayModifiers)) ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers*  gameplayModifiers;

/// @brief Field levelID, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_levelID, put=__cordl_internal_set_levelID)) ::StringW  levelID;

/// @brief Field missionID, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_missionID, put=__cordl_internal_set_missionID)) ::StringW  missionID;

/// @brief Field practiceSettings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_practiceSettings, put=__cordl_internal_set_practiceSettings)) ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*  practiceSettings;

static inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* New_ctor(::StringW  gameMode, ::StringW  levelID, ::StringW  difficulty, ::StringW  characteristic, ::StringW  missionID, ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*  practiceSettings, ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers*  gameplayModifiers) ;

constexpr ::StringW const& __cordl_internal_get_characteristic() const;

constexpr ::StringW& __cordl_internal_get_characteristic() ;

constexpr ::StringW const& __cordl_internal_get_difficulty() const;

constexpr ::StringW& __cordl_internal_get_difficulty() ;

constexpr ::StringW const& __cordl_internal_get_gameMode() const;

constexpr ::StringW& __cordl_internal_get_gameMode() ;

constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers* const& __cordl_internal_get_gameplayModifiers() const;

constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers*& __cordl_internal_get_gameplayModifiers() ;

constexpr ::StringW const& __cordl_internal_get_levelID() const;

constexpr ::StringW& __cordl_internal_get_levelID() ;

constexpr ::StringW const& __cordl_internal_get_missionID() const;

constexpr ::StringW& __cordl_internal_get_missionID() ;

constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* const& __cordl_internal_get_practiceSettings() const;

constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*& __cordl_internal_get_practiceSettings() ;

constexpr void __cordl_internal_set_characteristic(::StringW  value) ;

constexpr void __cordl_internal_set_difficulty(::StringW  value) ;

constexpr void __cordl_internal_set_gameMode(::StringW  value) ;

constexpr void __cordl_internal_set_gameplayModifiers(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers*  value) ;

constexpr void __cordl_internal_set_levelID(::StringW  value) ;

constexpr void __cordl_internal_set_missionID(::StringW  value) ;

constexpr void __cordl_internal_set_practiceSettings(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*  value) ;

/// @brief Method .ctor, addr 0x31d0570, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::StringW  gameMode, ::StringW  levelID, ::StringW  difficulty, ::StringW  characteristic, ::StringW  missionID, ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*  practiceSettings, ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers*  gameplayModifiers) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameAnalyticsBeatmapLevelData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameAnalyticsBeatmapLevelData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameAnalyticsBeatmapLevelData(GameAnalyticsBeatmapLevelData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameAnalyticsBeatmapLevelData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameAnalyticsBeatmapLevelData(GameAnalyticsBeatmapLevelData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22094};

/// @brief Field gameMode, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___gameMode;

/// @brief Field levelID, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___levelID;

/// @brief Field difficulty, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___difficulty;

/// @brief Field characteristic, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___characteristic;

/// @brief Field missionID, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___missionID;

/// @brief Field practiceSettings, offset: 0x38, size: 0x8, def value: None
 ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*  ___practiceSettings;

/// @brief Field gameplayModifiers, offset: 0x40, size: 0x8, def value: None
 ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers*  ___gameplayModifiers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData, ___gameMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData, ___levelID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData, ___difficulty) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData, ___characteristic) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData, ___missionID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData, ___practiceSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData, ___gameplayModifiers) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData, 0x48>, "Size mismatch!");

} // namespace end def BeatSaber::Analytics::Gameplay::EventSenders
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*, "BeatSaber.Analytics.Gameplay.EventSenders", "GameAnalyticsBeatmapLevelData");
