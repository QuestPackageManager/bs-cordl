#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Queries/BSLeaderboardHealth.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLQueryOperation_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BSLeaderboardHealth)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatSaber::Main::GraphQL::Queries {
class BSLeaderboardHealth;
}
// Write type traits
MARK_REF_T(::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth*, "BeatSaber.Main.GraphQL.Queries", "BSLeaderboardHealth");
// Dependencies OculusStudios.GraphQL.Client.GraphQLQueryOperation
namespace BeatSaber::Main::GraphQL::Queries {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Queries.BSLeaderboardHealth
class CORDL_TYPE BSLeaderboardHealth : public ::OculusStudios::GraphQL::Client::GraphQLQueryOperation {
public:
  // Declarations
  /// @brief Method GetPersistedQueryID, addr 0x329df24, size 0x14, virtual true, abstract: false, final false
  inline uint64_t GetPersistedQueryID();

  /// @brief Method GetVariableNames, addr 0x329deb4, size 0x70, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetVariableNames();

  static inline ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth* New_ctor();

  /// @brief Method .ctor, addr 0x329df38, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BSLeaderboardHealth();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BSLeaderboardHealth", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BSLeaderboardHealth(BSLeaderboardHealth&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BSLeaderboardHealth", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BSLeaderboardHealth(BSLeaderboardHealth const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth) == 0x18, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Queries
