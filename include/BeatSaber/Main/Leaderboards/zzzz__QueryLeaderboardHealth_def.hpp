#pragma once
// IWYU pragma private; include "BeatSaber/Main/Leaderboards/QueryLeaderboardHealth.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__QueryRequest_def.hpp"
CORDL_MODULE_EXPORT(QueryLeaderboardHealth)
// Forward declare root types
namespace BeatSaber::Main::Leaderboards {
class QueryLeaderboardHealth;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth);
// Dependencies OculusStudios.GraphQL.Client.QueryRequest
namespace BeatSaber::Main::Leaderboards {
// Is value type: false
// CS Name: BeatSaber.Main.Leaderboards.QueryLeaderboardHealth
class CORDL_TYPE QueryLeaderboardHealth : public ::OculusStudios::GraphQL::Client::QueryRequest {
public:
  // Declarations
  static inline ::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth* New_ctor();

  /// @brief Method .ctor, addr 0x31d002c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryLeaderboardHealth();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QueryLeaderboardHealth", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QueryLeaderboardHealth(QueryLeaderboardHealth&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QueryLeaderboardHealth", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QueryLeaderboardHealth(QueryLeaderboardHealth const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20974 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth, 0x68>, "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
NEED_NO_BOX(::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth*, "BeatSaber.Main.Leaderboards", "QueryLeaderboardHealth");
