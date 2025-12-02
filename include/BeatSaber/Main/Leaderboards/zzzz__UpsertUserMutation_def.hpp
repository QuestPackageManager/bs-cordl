#pragma once
// IWYU pragma private; include "BeatSaber/Main/Leaderboards/UpsertUserMutation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__MutationRequest_1_def.hpp"
CORDL_MODULE_EXPORT(UpsertUserMutation)
namespace BeatSaber::Main::GraphQL::InputTypes {
class XOCBeatGamesUserUpsertData;
}
namespace BeatSaber::Settings {
struct Settings;
}
// Forward declare root types
namespace BeatSaber::Main::Leaderboards {
class UpsertUserMutation;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::Leaderboards::UpsertUserMutation);
// Dependencies OculusStudios.GraphQL.Client.MutationRequest`1<TInputModel>
namespace BeatSaber::Main::Leaderboards {
// Is value type: false
// CS Name: BeatSaber.Main.Leaderboards.UpsertUserMutation
class CORDL_TYPE UpsertUserMutation : public ::OculusStudios::GraphQL::Client::MutationRequest_1<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData*> {
public:
  // Declarations
  static inline ::BeatSaber::Main::Leaderboards::UpsertUserMutation* New_ctor(::BeatSaber::Settings::Settings settings);

  /// @brief Method .ctor, addr 0x31a0210, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Settings::Settings settings);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpsertUserMutation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpsertUserMutation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpsertUserMutation(UpsertUserMutation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpsertUserMutation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpsertUserMutation(UpsertUserMutation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20946 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::UpsertUserMutation, 0x68>, "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
NEED_NO_BOX(::BeatSaber::Main::Leaderboards::UpsertUserMutation);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::UpsertUserMutation*, "BeatSaber.Main.Leaderboards", "UpsertUserMutation");
