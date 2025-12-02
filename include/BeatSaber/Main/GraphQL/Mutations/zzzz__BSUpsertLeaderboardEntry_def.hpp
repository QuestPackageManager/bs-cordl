#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Mutations/BSUpsertLeaderboardEntry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLMutationOperation_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BSUpsertLeaderboardEntry)
namespace BeatSaber::Main::GraphQL::InputTypes {
class IXOCBeatGamesBeatmapLeaderboardEntryUpsertData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatSaber::Main::GraphQL::Mutations {
class BSUpsertLeaderboardEntry;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry);
// Dependencies OculusStudios.GraphQL.Client.GraphQLMutationOperation
namespace BeatSaber::Main::GraphQL::Mutations {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Mutations.BSUpsertLeaderboardEntry
class CORDL_TYPE BSUpsertLeaderboardEntry : public ::OculusStudios::GraphQL::Client::GraphQLMutationOperation {
public:
  // Declarations
  __declspec(property(get = get_Data, put = set_Data)) ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData* Data;

  /// @brief Method GetPersistedQueryID, addr 0x319b670, size 0x14, virtual true, abstract: false, final false
  inline uint64_t GetPersistedQueryID();

  /// @brief Method GetVariableNames, addr 0x319b444, size 0xfc, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetVariableNames();

  static inline ::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry* New_ctor();

  /// @brief Method .ctor, addr 0x319b684, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Data, addr 0x319b5c0, size 0xb0, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData* get_Data();

  /// @brief Method set_Data, addr 0x319b540, size 0x80, virtual false, abstract: false, final false
  inline void set_Data(::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BSUpsertLeaderboardEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BSUpsertLeaderboardEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BSUpsertLeaderboardEntry(BSUpsertLeaderboardEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BSUpsertLeaderboardEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BSUpsertLeaderboardEntry(BSUpsertLeaderboardEntry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20884 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Mutations
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry*, "BeatSaber.Main.GraphQL.Mutations", "BSUpsertLeaderboardEntry");
