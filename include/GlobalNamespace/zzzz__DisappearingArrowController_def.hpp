#pragma once
// IWYU pragma private; include "GlobalNamespace/DisappearingArrowController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_def.hpp"
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
// Dependencies DisappearingArrowControllerBase`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: DisappearingArrowController
class CORDL_TYPE DisappearingArrowController : public ::GlobalNamespace::DisappearingArrowControllerBase_1<::UnityW<::GlobalNamespace::GameNoteController>> {
public:
  // Declarations
  /// @brief Field _gameNoteController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__gameNoteController, put = __cordl_internal_set__gameNoteController)) ::UnityW<::GlobalNamespace::GameNoteController> _gameNoteController;

  __declspec(property(get = get_gameNoteController)) ::UnityW<::GlobalNamespace::GameNoteController> gameNoteController;

  static inline ::GlobalNamespace::DisappearingArrowController* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::GameNoteController> const& __cordl_internal_get__gameNoteController() const;

  constexpr ::UnityW<::GlobalNamespace::GameNoteController>& __cordl_internal_get__gameNoteController();

  constexpr void __cordl_internal_set__gameNoteController(::UnityW<::GlobalNamespace::GameNoteController> value);

  /// @brief Method .ctor, addr 0x56c4edc, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gameNoteController, addr 0x56c4ed4, size 0x8, virtual true, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5660 };

  /// @brief Field _gameNoteController, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameNoteController> ____gameNoteController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DisappearingArrowController, ____gameNoteController) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisappearingArrowController, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisappearingArrowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisappearingArrowController*, "", "DisappearingArrowController");
