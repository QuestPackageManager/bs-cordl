#pragma once
// IWYU pragma private; include "BeatSaber\Analytics\Gameplay\EventSenders\GameAnalyticsBeatmapLevelData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*, "BeatSaber.Analytics.Gameplay.EventSenders", "GameAnalyticsBeatmapLevelData");
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay::EventSenders {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventSenders.GameAnalyticsBeatmapLevelData
class CORDL_TYPE GameAnalyticsBeatmapLevelData : public ::System::Object {
public:
  // Declarations
  /// @brief Field characteristic, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_characteristic, put = __cordl_internal_set_characteristic)) ::StringW characteristic;

  /// @brief Field difficulty, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_difficulty, put = __cordl_internal_set_difficulty)) ::StringW difficulty;

  /// @brief Field environmentName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentName, put = __cordl_internal_set_environmentName)) ::StringW environmentName;

  /// @brief Field gameMode, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameMode, put = __cordl_internal_set_gameMode)) ::StringW gameMode;

  /// @brief Field gameplayModifiers, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifiers,
                      put = __cordl_internal_set_gameplayModifiers)) ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers* gameplayModifiers;

  /// @brief Field isEnvironmentOverride, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_isEnvironmentOverride, put = __cordl_internal_set_isEnvironmentOverride)) bool isEnvironmentOverride;

  /// @brief Field levelID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_levelID, put = __cordl_internal_set_levelID)) ::StringW levelID;

  /// @brief Field missionID, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_missionID, put = __cordl_internal_set_missionID)) ::StringW missionID;

  /// @brief Field practiceSettings, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_practiceSettings,
                      put = __cordl_internal_set_practiceSettings)) ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* practiceSettings;

  static inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*
  New_ctor(::StringW gameMode, ::StringW levelID, ::StringW difficulty, ::StringW characteristic, ::StringW missionID,
           ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* practiceSettings,
           ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers* gameplayModifiers, ::StringW environmentName, bool isEnvironmentOverride);

  constexpr ::StringW const& __cordl_internal_get_characteristic() const;

  constexpr ::StringW& __cordl_internal_get_characteristic();

  constexpr ::StringW const& __cordl_internal_get_difficulty() const;

  constexpr ::StringW& __cordl_internal_get_difficulty();

  constexpr ::StringW const& __cordl_internal_get_environmentName() const;

  constexpr ::StringW& __cordl_internal_get_environmentName();

  constexpr ::StringW const& __cordl_internal_get_gameMode() const;

  constexpr ::StringW& __cordl_internal_get_gameMode();

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers* const& __cordl_internal_get_gameplayModifiers() const;

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers*& __cordl_internal_get_gameplayModifiers();

  constexpr bool const& __cordl_internal_get_isEnvironmentOverride() const;

  constexpr bool& __cordl_internal_get_isEnvironmentOverride();

  constexpr ::StringW const& __cordl_internal_get_levelID() const;

  constexpr ::StringW& __cordl_internal_get_levelID();

  constexpr ::StringW const& __cordl_internal_get_missionID() const;

  constexpr ::StringW& __cordl_internal_get_missionID();

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* const& __cordl_internal_get_practiceSettings() const;

  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings*& __cordl_internal_get_practiceSettings();

  constexpr void __cordl_internal_set_characteristic(::StringW value);

  constexpr void __cordl_internal_set_difficulty(::StringW value);

  constexpr void __cordl_internal_set_environmentName(::StringW value);

  constexpr void __cordl_internal_set_gameMode(::StringW value);

  constexpr void __cordl_internal_set_gameplayModifiers(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers* value);

  constexpr void __cordl_internal_set_isEnvironmentOverride(bool value);

  constexpr void __cordl_internal_set_levelID(::StringW value);

  constexpr void __cordl_internal_set_missionID(::StringW value);

  constexpr void __cordl_internal_set_practiceSettings(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* value);

  /// @brief Method .ctor, addr 0x3264910, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::StringW gameMode, ::StringW levelID, ::StringW difficulty, ::StringW characteristic, ::StringW missionID,
                    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* practiceSettings,
                    ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers* gameplayModifiers, ::StringW environmentName, bool isEnvironmentOverride);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameAnalyticsBeatmapLevelData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameAnalyticsBeatmapLevelData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameAnalyticsBeatmapLevelData(GameAnalyticsBeatmapLevelData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameAnalyticsBeatmapLevelData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameAnalyticsBeatmapLevelData(GameAnalyticsBeatmapLevelData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22264 };

  /// @brief Field gameMode, offset: 0x10, size: 0x8, def value: None
  ::StringW ___gameMode;

  /// @brief Field levelID, offset: 0x18, size: 0x8, def value: None
  ::StringW ___levelID;

  /// @brief Field difficulty, offset: 0x20, size: 0x8, def value: None
  ::StringW ___difficulty;

  /// @brief Field characteristic, offset: 0x28, size: 0x8, def value: None
  ::StringW ___characteristic;

  /// @brief Field missionID, offset: 0x30, size: 0x8, def value: None
  ::StringW ___missionID;

  /// @brief Field practiceSettings, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* ___practiceSettings;

  /// @brief Field gameplayModifiers, offset: 0x40, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers* ___gameplayModifiers;

  /// @brief Field environmentName, offset: 0x48, size: 0x8, def value: None
  ::StringW ___environmentName;

  /// @brief Field isEnvironmentOverride, offset: 0x50, size: 0x1, def value: None
  bool ___isEnvironmentOverride;

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

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData, ___environmentName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData, ___isEnvironmentOverride) == 0x50, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData) == 0x58, "Size mismatch!");

} // namespace BeatSaber::Analytics::Gameplay::EventSenders
