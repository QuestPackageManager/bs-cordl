#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformLeaderboardsHandler_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TestPlatformLeaderboardsHandler)
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class __LeaderboardScoreUploader__ScoreData;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel__GetScoresCompletionHandler;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__ScoresScope;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel__UploadScoreCompletionHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class TestPlatformLeaderboardsHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TestPlatformLeaderboardsHandler);
// Type: ::TestPlatformLeaderboardsHandler
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4226))
// CS Name: ::TestPlatformLeaderboardsHandler*
class CORDL_TYPE TestPlatformLeaderboardsHandler : public ::GlobalNamespace::PlatformLeaderboardsHandler {
public:
  // Declarations
  /// @brief Method GetScores, addr 0x232afb4, size 0x5c, virtual true, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* GetScores(::GlobalNamespace::IDifficultyBeatmap* beatmap, int32_t count, int32_t fromRank,
                                                      ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope scope, ::StringW referencePlayerId,
                                                      ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* completionHandler);

  /// @brief Method UploadScore, addr 0x232b010, size 0x5c, virtual true, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* UploadScore(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData* scoreData,
                                                        ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* completionHandler);

  static inline ::GlobalNamespace::TestPlatformLeaderboardsHandler* New_ctor();

  /// @brief Method .ctor, addr 0x232b06c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TestPlatformLeaderboardsHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TestPlatformLeaderboardsHandler(TestPlatformLeaderboardsHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TestPlatformLeaderboardsHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TestPlatformLeaderboardsHandler(TestPlatformLeaderboardsHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TestPlatformLeaderboardsHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TestPlatformLeaderboardsHandler, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TestPlatformLeaderboardsHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestPlatformLeaderboardsHandler*, "", "TestPlatformLeaderboardsHandler");
