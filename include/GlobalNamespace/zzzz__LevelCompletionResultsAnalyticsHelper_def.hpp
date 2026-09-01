#pragma once
// IWYU pragma private; include "GlobalNamespace\LevelCompletionResultsAnalyticsHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LevelCompletionResultsAnalyticsHelper)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsBeatmapAttemptEventData;
}
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsBeatmapLevelData;
}
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsBeatmapPracticeSettings;
}
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsGameplayModifiers;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelCompletionResultsAnalyticsHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*, "", "LevelCompletionResultsAnalyticsHelper");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelCompletionResultsAnalyticsHelper
class CORDL_TYPE LevelCompletionResultsAnalyticsHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method FillEventData, addr 0x58affa0, size 0xa2c, virtual false, abstract: false, final false
  static inline void FillEventData(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData);

  /// @brief Method GetAnalyticsGameplayModifiers, addr 0x58b0a3c, size 0x13c, virtual false, abstract: false, final false
  static inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers* GetAnalyticsGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method GetAnalyticsPracticeSettings, addr 0x58b09cc, size 0x70, virtual false, abstract: false, final false
  static inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapPracticeSettings* GetAnalyticsPracticeSettings(::GlobalNamespace::PracticeSettings* practiceSettings);

  /// @brief Method GetBeatmapAttemptFinishGameplayEventDataForCampaign, addr 0x58b0d30, size 0x38, virtual false, abstract: false, final false
  static inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*
  GetBeatmapAttemptFinishGameplayEventDataForCampaign(::GlobalNamespace::LevelCompletionResults* results, ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData,
                                                      bool isMissionComplete, uint8_t missionObjectivesResultMask);

  /// @brief Method GetBeatmapAttemptFinishGameplayEventDataForMultiplayer, addr 0x58b0d68, size 0x20, virtual false, abstract: false, final false
  static inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*
  GetBeatmapAttemptFinishGameplayEventDataForMultiplayer(::GlobalNamespace::LevelCompletionResults* results, ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData,
                                                         ::StringW matchId);

  /// @brief Method GetStandardBeatmapAttemptFinishGameplayEventData, addr 0x58b0b78, size 0x1b8, virtual false, abstract: false, final false
  static inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*
  GetStandardBeatmapAttemptFinishGameplayEventData(::GlobalNamespace::LevelCompletionResults* results, ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData* levelData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelCompletionResultsAnalyticsHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResultsAnalyticsHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelCompletionResultsAnalyticsHelper(LevelCompletionResultsAnalyticsHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResultsAnalyticsHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelCompletionResultsAnalyticsHelper(LevelCompletionResultsAnalyticsHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5541 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LevelCompletionResultsAnalyticsHelper) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
