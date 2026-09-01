#pragma once
// IWYU pragma private; include "BeatSaber\Main\Leaderboards\UpsertLeaderboardEntryMutation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__MutationRequest_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpsertLeaderboardEntryMutation)
namespace BeatSaber::Main::GraphQL::InputTypes {
class XOCBeatGamesBeatmapLeaderboardEntryUpsertData;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
// Forward declare root types
namespace BeatSaber::Main::Leaderboards {
class UpsertLeaderboardEntryMutation;
}
// Write type traits
MARK_REF_T(::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation*, "BeatSaber.Main.Leaderboards", "UpsertLeaderboardEntryMutation");
// Dependencies OculusStudios.GraphQL.Client.MutationRequest`1<TInputModel>
namespace BeatSaber::Main::Leaderboards {
// Is value type: false
// CS Name: BeatSaber.Main.Leaderboards.UpsertLeaderboardEntryMutation
class CORDL_TYPE UpsertLeaderboardEntryMutation : public ::OculusStudios::GraphQL::Client::MutationRequest_1<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*> {
public:
  // Declarations
  /// @brief Method ConvertInputData, addr 0x32a5c8c, size 0x12c, virtual false, abstract: false, final false
  static inline ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData* ConvertInputData(::StringW environmentPlayerRootId,
                                                                                                                        ::GlobalNamespace::LevelCompletionResults* levelCompletionResults,
                                                                                                                        ::GlobalNamespace::BeatmapKey beatmapKey,
                                                                                                                        ::GlobalNamespace::GameplayModifiers* modifiers);

  static inline ::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation* New_ctor(::StringW environmentPlayerRootId, ::GlobalNamespace::LevelCompletionResults* results,
                                                                                          ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::GameplayModifiers* modifiers);

  /// @brief Method .ctor, addr 0x32a5798, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::StringW environmentPlayerRootId, ::GlobalNamespace::LevelCompletionResults* results, ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::GameplayModifiers* modifiers);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpsertLeaderboardEntryMutation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpsertLeaderboardEntryMutation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpsertLeaderboardEntryMutation(UpsertLeaderboardEntryMutation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpsertLeaderboardEntryMutation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpsertLeaderboardEntryMutation(UpsertLeaderboardEntryMutation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20607 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation) == 0x68, "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
