#pragma once
// IWYU pragma private; include "BeatSaber/Main/Leaderboards/QueryLeaderboardTopN.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__QueryRequest_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QueryLeaderboardTopN)
namespace BeatSaber::Main::GraphQL::InputTypes {
class XOCBeatGamesBeatmapLeaderboardEntryOrder;
}
namespace BeatSaber::Main::GraphQL::Queries {
class BSLeaderboardTopN;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
struct GameplayModifierMask;
}
// Forward declare root types
namespace BeatSaber::Main::Leaderboards {
class QueryLeaderboardTopN;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::Leaderboards::QueryLeaderboardTopN);
// Dependencies OculusStudios.GraphQL.Client.QueryRequest
namespace BeatSaber::Main::Leaderboards {
// Is value type: false
// CS Name: BeatSaber.Main.Leaderboards.QueryLeaderboardTopN
class CORDL_TYPE QueryLeaderboardTopN : public ::OculusStudios::GraphQL::Client::QueryRequest {
public:
  // Declarations
  /// @brief Field kDefaultOrder, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kDefaultOrder, put = setStaticF_kDefaultOrder)) ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder* kDefaultOrder;

  /// @brief Method CreateQuery, addr 0x31a141c, size 0x17c, virtual false, abstract: false, final false
  static inline ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN* CreateQuery(::GlobalNamespace::BeatmapKey key, ::GlobalNamespace::GameplayModifierMask modifiers, int64_t amountEntries,
                                                                                    ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder* order);

  static inline ::BeatSaber::Main::Leaderboards::QueryLeaderboardTopN* New_ctor(::GlobalNamespace::BeatmapKey key, ::GlobalNamespace::GameplayModifierMask modifiers, int64_t amountEntries,
                                                                                ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder* order);

  /// @brief Method .ctor, addr 0x319ea78, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapKey key, ::GlobalNamespace::GameplayModifierMask modifiers, int64_t amountEntries,
                    ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder* order);

  static inline ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder* getStaticF_kDefaultOrder();

  static inline void setStaticF_kDefaultOrder(::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryLeaderboardTopN();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QueryLeaderboardTopN", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QueryLeaderboardTopN(QueryLeaderboardTopN&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QueryLeaderboardTopN", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QueryLeaderboardTopN(QueryLeaderboardTopN const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20950 };

  /// @brief Field kDefaultAmountEntries offset 0xffffffff size 0x8
  static constexpr int64_t kDefaultAmountEntries{ static_cast<int64_t>(0xa) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::QueryLeaderboardTopN, 0x68>, "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
NEED_NO_BOX(::BeatSaber::Main::Leaderboards::QueryLeaderboardTopN);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::QueryLeaderboardTopN*, "BeatSaber.Main.Leaderboards", "QueryLeaderboardTopN");
