#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelCompletionResultsHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelCompletionResultsHelper)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapObjectExecutionRating;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
struct LevelCompletionResults_LevelEndAction;
}
namespace GlobalNamespace {
struct LevelCompletionResults_LevelEndStateType;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel;
}
namespace GlobalNamespace {
class PlayerData;
}
namespace GlobalNamespace {
class PlayerLevelStatsData;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelCompletionResultsHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelCompletionResultsHelper);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelCompletionResultsHelper
class CORDL_TYPE LevelCompletionResultsHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x26b4c8c, size 0x464, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LevelCompletionResults*
  Create(::GlobalNamespace::IReadonlyBeatmapData* beatmapData,
         ::ArrayW<::GlobalNamespace::BeatmapObjectExecutionRating*, ::Array<::GlobalNamespace::BeatmapObjectExecutionRating*>*> beatmapObjectExecutionRatings,
         ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel, int32_t multipliedScore, int32_t modifiedScore, int32_t maxCombo,
         ::ArrayW<float_t, ::Array<float_t>*> saberActivityValues, float_t leftSaberMovementDistance, float_t rightSaberMovementDistance, ::ArrayW<float_t, ::Array<float_t>*> handActivityValues,
         float_t leftHandMovementDistance, float_t rightHandMovementDistance, ::GlobalNamespace::LevelCompletionResults_LevelEndStateType levelEndStateType,
         ::GlobalNamespace::LevelCompletionResults_LevelEndAction levelEndAction, float_t energy, float_t songTime, bool invalidated);

  /// @brief Method ProcessScore, addr 0x26b50f0, size 0x114, virtual false, abstract: false, final false
  static inline void ProcessScore(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::PlayerData* playerData, ::GlobalNamespace::PlayerLevelStatsData* playerLevelStats,
                                  ::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData,
                                  ::GlobalNamespace::PlatformLeaderboardsModel* platformLeaderboardsModel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelCompletionResultsHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResultsHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelCompletionResultsHelper(LevelCompletionResultsHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResultsHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelCompletionResultsHelper(LevelCompletionResultsHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12865 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelCompletionResultsHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelCompletionResultsHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCompletionResultsHelper*, "", "LevelCompletionResultsHelper");
