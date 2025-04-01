#pragma once
// IWYU pragma private; include "GlobalNamespace/LightmappingSongController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SongController_def.hpp"
CORDL_MODULE_EXPORT(LightmappingSongController)
// Forward declare root types
namespace GlobalNamespace {
class LightmappingSongController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightmappingSongController);
// Dependencies SongController
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightmappingSongController
class CORDL_TYPE LightmappingSongController : public ::GlobalNamespace::SongController {
public:
  // Declarations
  static inline ::GlobalNamespace::LightmappingSongController* New_ctor();

  /// @brief Method PauseSong, addr 0x3beb2e8, size 0x4, virtual true, abstract: false, final false
  inline void PauseSong();

  /// @brief Method ResumeSong, addr 0x3beb2ec, size 0x4, virtual true, abstract: false, final false
  inline void ResumeSong();

  /// @brief Method StopSong, addr 0x3beb2e4, size 0x4, virtual true, abstract: false, final false
  inline void StopSong();

  /// @brief Method .ctor, addr 0x3beb2f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmappingSongController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightmappingSongController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmappingSongController(LightmappingSongController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmappingSongController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmappingSongController(LightmappingSongController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4696 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightmappingSongController, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightmappingSongController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmappingSongController*, "", "LightmappingSongController");
