#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Mutations/BSUpsertUser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLMutationOperation_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BSUpsertUser)
namespace BeatSaber::Main::GraphQL::InputTypes {
class IXOCBeatGamesUserUpsertData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatSaber::Main::GraphQL::Mutations {
class BSUpsertUser;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser);
// Dependencies OculusStudios.GraphQL.Client.GraphQLMutationOperation
namespace BeatSaber::Main::GraphQL::Mutations {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.Mutations.BSUpsertUser
class CORDL_TYPE BSUpsertUser : public ::OculusStudios::GraphQL::Client::GraphQLMutationOperation {
public:
  // Declarations
  __declspec(property(get = get_Data, put = set_Data)) ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData* Data;

  /// @brief Method GetPersistedQueryID, addr 0x31cb730, size 0x14, virtual true, abstract: false, final false
  inline uint64_t GetPersistedQueryID();

  /// @brief Method GetVariableNames, addr 0x31cb504, size 0xfc, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetVariableNames();

  static inline ::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser* New_ctor();

  /// @brief Method .ctor, addr 0x31cb744, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Data, addr 0x31cb680, size 0xb0, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData* get_Data();

  /// @brief Method set_Data, addr 0x31cb600, size 0x80, virtual false, abstract: false, final false
  inline void set_Data(::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BSUpsertUser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BSUpsertUser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BSUpsertUser(BSUpsertUser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BSUpsertUser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BSUpsertUser(BSUpsertUser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20910 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Mutations
NEED_NO_BOX(::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*, "BeatSaber.Main.GraphQL.Mutations", "BSUpsertUser");
