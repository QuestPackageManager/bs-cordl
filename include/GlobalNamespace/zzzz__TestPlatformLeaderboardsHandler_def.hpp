#pragma once
// IWYU pragma private; include "GlobalNamespace/TestPlatformLeaderboardsHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformLeaderboardsHandler_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TestPlatformLeaderboardsHandler)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader_ScoreData;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel_GetScoresCompletionHandler;
}
namespace GlobalNamespace {
struct PlatformLeaderboardsModel_ScoresScope;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel_UploadScoreCompletionHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class TestPlatformLeaderboardsHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TestPlatformLeaderboardsHandler);
// Dependencies PlatformLeaderboardsHandler
namespace GlobalNamespace {
// Is value type: false
// CS Name: TestPlatformLeaderboardsHandler
class CORDL_TYPE TestPlatformLeaderboardsHandler : public ::GlobalNamespace::PlatformLeaderboardsHandler {
public:
  // Declarations
  /// @brief Method GetScores, addr 0x2706848, size 0x54, virtual true, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* GetScores(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t count, int32_t fromRank,
                                                      ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope scope, ::StringW referencePlayerId,
                                                      ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* completionHandler);

  static inline ::GlobalNamespace::TestPlatformLeaderboardsHandler* New_ctor();

  /// @brief Method UploadScore, addr 0x270689c, size 0x54, virtual true, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* UploadScore(::GlobalNamespace::LeaderboardScoreUploader_ScoreData* scoreData,
                                                        ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler* completionHandler);

  /// @brief Method .ctor, addr 0x27068f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TestPlatformLeaderboardsHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TestPlatformLeaderboardsHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TestPlatformLeaderboardsHandler(TestPlatformLeaderboardsHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TestPlatformLeaderboardsHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TestPlatformLeaderboardsHandler(TestPlatformLeaderboardsHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13350 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TestPlatformLeaderboardsHandler, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TestPlatformLeaderboardsHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestPlatformLeaderboardsHandler*, "", "TestPlatformLeaderboardsHandler");
