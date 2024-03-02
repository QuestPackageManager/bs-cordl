#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
namespace GlobalNamespace {
struct __LevelCompletionResults__LevelEndAction;
}
namespace GlobalNamespace {
struct __LevelCompletionResults__LevelEndStateType;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelCompletionResultsHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelCompletionResultsHelper);
// Type: ::LevelCompletionResultsHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LevelCompletionResultsHelper*
class CORDL_TYPE LevelCompletionResultsHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x12b689c, size 0x45c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LevelCompletionResults*
  Create(::GlobalNamespace::IReadonlyBeatmapData* beatmapData,
         ::ArrayW<::GlobalNamespace::BeatmapObjectExecutionRating*, ::Array<::GlobalNamespace::BeatmapObjectExecutionRating*>*> beatmapObjectExecutionRatings,
         ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel, int32_t multipliedScore, int32_t modifiedScore, int32_t maxCombo,
         ::ArrayW<float_t, ::Array<float_t>*> saberActivityValues, float_t leftSaberMovementDistance, float_t rightSaberMovementDistance, ::ArrayW<float_t, ::Array<float_t>*> handActivityValues,
         float_t leftHandMovementDistance, float_t rightHandMovementDistance, ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType levelEndStateType,
         ::GlobalNamespace::__LevelCompletionResults__LevelEndAction levelEndAction, float_t energy, float_t songTime);

  /// @brief Method ProcessScore, addr 0x12b6cf8, size 0x110, virtual false, abstract: false, final false
  static inline void ProcessScore(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::PlayerData* playerData, ::GlobalNamespace::PlayerLevelStatsData* playerLevelStats,
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelCompletionResultsHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelCompletionResultsHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCompletionResultsHelper*, "", "LevelCompletionResultsHelper");
