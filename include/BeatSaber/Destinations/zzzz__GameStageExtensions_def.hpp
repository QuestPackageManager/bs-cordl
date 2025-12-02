#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/GameStageExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GameStageExtensions)
namespace BeatSaber::Destinations {
struct DestinationTarget;
}
// Forward declare root types
namespace BeatSaber::Destinations {
class GameStageExtensions;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Destinations::GameStageExtensions);
// Dependencies System.Object
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.GameStageExtensions
class CORDL_TYPE GameStageExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method RequiresShaderWarmup, addr 0x3181bc4, size 0x34, virtual false, abstract: false, final false
  static inline bool RequiresShaderWarmup(::BeatSaber::Destinations::DestinationTarget stage);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameStageExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameStageExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameStageExtensions(GameStageExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameStageExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameStageExtensions(GameStageExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22659 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Destinations::GameStageExtensions, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Destinations
NEED_NO_BOX(::BeatSaber::Destinations::GameStageExtensions);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Destinations::GameStageExtensions*, "BeatSaber.Destinations", "GameStageExtensions");
