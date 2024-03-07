#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_def.hpp"
#include "GlobalNamespace/zzzz__GameNoteController_def.hpp"
CORDL_MODULE_EXPORT(DisappearingArrowController)
namespace GlobalNamespace {
class GameNoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class DisappearingArrowController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DisappearingArrowController);
// Type: ::DisappearingArrowController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DisappearingArrowController*
class CORDL_TYPE DisappearingArrowController : public ::GlobalNamespace::DisappearingArrowControllerBase_1<::UnityW<::GlobalNamespace::GameNoteController>> {
public:
  // Declarations
  /// @brief Field _gameNoteController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__gameNoteController, put = __cordl_internal_set__gameNoteController))::UnityW<::GlobalNamespace::GameNoteController> _gameNoteController;

  __declspec(property(get = get_gameNoteController))::UnityW<::GlobalNamespace::GameNoteController> gameNoteController;

  static inline ::GlobalNamespace::DisappearingArrowController* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::GameNoteController> const& __cordl_internal_get__gameNoteController() const;

  constexpr ::UnityW<::GlobalNamespace::GameNoteController>& __cordl_internal_get__gameNoteController();

  constexpr void __cordl_internal_set__gameNoteController(::UnityW<::GlobalNamespace::GameNoteController> value);

  /// @brief Method .ctor, addr 0x23fae64, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gameNoteController, addr 0x23fae5c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::GameNoteController> get_gameNoteController();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisappearingArrowController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisappearingArrowController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisappearingArrowController(DisappearingArrowController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisappearingArrowController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisappearingArrowController(DisappearingArrowController const&) = delete;

  /// @brief Field _gameNoteController, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameNoteController> ____gameNoteController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisappearingArrowController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DisappearingArrowController, ____gameNoteController) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisappearingArrowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisappearingArrowController*, "", "DisappearingArrowController");
