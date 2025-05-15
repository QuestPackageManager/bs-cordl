#pragma once
// IWYU pragma private; include "GlobalNamespace/GameServerBrowserStackedController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__StackedController_def.hpp"
CORDL_MODULE_EXPORT(GameServerBrowserStackedController)
// Forward declare root types
namespace GlobalNamespace {
class GameServerBrowserStackedController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServerBrowserStackedController);
// Dependencies HMUI.StackedController
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameServerBrowserStackedController
class CORDL_TYPE GameServerBrowserStackedController : public ::HMUI::StackedController {
public:
  // Declarations
  /// @brief Method DidActivate, addr 0x3b6cb68, size 0x4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3b6cb6c, size 0x4, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  static inline ::GlobalNamespace::GameServerBrowserStackedController* New_ctor();

  /// @brief Method .ctor, addr 0x3b6cb70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServerBrowserStackedController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameServerBrowserStackedController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServerBrowserStackedController(GameServerBrowserStackedController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServerBrowserStackedController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServerBrowserStackedController(GameServerBrowserStackedController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5376 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerBrowserStackedController, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServerBrowserStackedController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerBrowserStackedController*, "", "GameServerBrowserStackedController");
