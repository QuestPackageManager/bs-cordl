#pragma once
// IWYU pragma private; include "BeatSaber/Main/Leaderboards/LeaderboardHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LeaderboardHelpers)
namespace BeatSaber::Main::GraphQL::Enums {
struct XOCBeatGamesBeatmapCharacteristic;
}
namespace BeatSaber::Main::GraphQL::Enums {
struct XOCBeatGamesBeatmapDifficulty;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
// Forward declare root types
namespace BeatSaber::Main::Leaderboards {
class LeaderboardHelpers;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::Leaderboards::LeaderboardHelpers);
// Dependencies System.Object
namespace BeatSaber::Main::Leaderboards {
// Is value type: false
// CS Name: BeatSaber.Main.Leaderboards.LeaderboardHelpers
class CORDL_TYPE LeaderboardHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertCharacteristic, addr 0x31d09f8, size 0x308, virtual false, abstract: false, final false
  static inline ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic ConvertCharacteristic(::StringW characteristicName);

  /// @brief Method ConvertDifficulty, addr 0x31d0d40, size 0xc, virtual false, abstract: false, final false
  static inline ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty ConvertDifficulty(::GlobalNamespace::BeatmapDifficulty difficulty);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardHelpers(LeaderboardHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardHelpers(LeaderboardHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20969 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::LeaderboardHelpers, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
NEED_NO_BOX(::BeatSaber::Main::Leaderboards::LeaderboardHelpers);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::LeaderboardHelpers*, "BeatSaber.Main.Leaderboards", "LeaderboardHelpers");
