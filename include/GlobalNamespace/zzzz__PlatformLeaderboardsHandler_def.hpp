#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformLeaderboardsHandler)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class HMAsyncRequest;
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
class PlatformLeaderboardsHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformLeaderboardsHandler);
// Type: ::PlatformLeaderboardsHandler
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlatformLeaderboardsHandler*
class CORDL_TYPE PlatformLeaderboardsHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetScores, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::HMAsyncRequest* GetScores(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t count, int32_t fromRank,
                                                      ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope scope, ::StringW referencePlayerId,
                                                      ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* completionHandler);

  static inline ::GlobalNamespace::PlatformLeaderboardsHandler* New_ctor();

  /// @brief Method UploadScore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::HMAsyncRequest* UploadScore(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData* scoreData,
                                                        ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* completionHandler);

  /// @brief Method .ctor, addr 0x12b2dec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLeaderboardsHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardsHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformLeaderboardsHandler(PlatformLeaderboardsHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardsHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformLeaderboardsHandler(PlatformLeaderboardsHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformLeaderboardsHandler, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformLeaderboardsHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformLeaderboardsHandler*, "", "PlatformLeaderboardsHandler");
