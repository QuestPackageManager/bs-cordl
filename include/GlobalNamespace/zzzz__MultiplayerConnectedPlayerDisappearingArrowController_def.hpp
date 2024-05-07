#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerDisappearingArrowController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerDisappearingArrowController)
namespace GlobalNamespace {
class MultiplayerConnectedPlayerGameNoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerDisappearingArrowController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController);
// Type: ::MultiplayerConnectedPlayerDisappearingArrowController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerConnectedPlayerDisappearingArrowController*
class CORDL_TYPE MultiplayerConnectedPlayerDisappearingArrowController
    : public ::GlobalNamespace::DisappearingArrowControllerBase_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>> {
public:
  // Declarations
  /// @brief Field _gameNoteController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__gameNoteController,
                      put = __cordl_internal_set__gameNoteController))::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> _gameNoteController;

  __declspec(property(get = get_gameNoteController))::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> gameNoteController;

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> const& __cordl_internal_get__gameNoteController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>& __cordl_internal_get__gameNoteController();

  constexpr void __cordl_internal_set__gameNoteController(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> value);

  /// @brief Method .ctor, addr 0x26f3240, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gameNoteController, addr 0x26f3238, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> get_gameNoteController();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerDisappearingArrowController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerDisappearingArrowController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerDisappearingArrowController(MultiplayerConnectedPlayerDisappearingArrowController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerDisappearingArrowController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerDisappearingArrowController(MultiplayerConnectedPlayerDisappearingArrowController const&) = delete;

  /// @brief Field _gameNoteController, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> ____gameNoteController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController, ____gameNoteController) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*, "", "MultiplayerConnectedPlayerDisappearingArrowController");
