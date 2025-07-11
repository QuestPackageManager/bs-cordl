#pragma once
// IWYU pragma private; include "GlobalNamespace/MirroredDisappearingArrowController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_def.hpp"
CORDL_MODULE_EXPORT(MirroredDisappearingArrowController)
namespace GlobalNamespace {
class MirroredGameNoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class MirroredDisappearingArrowController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MirroredDisappearingArrowController);
// Dependencies DisappearingArrowControllerBase`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirroredDisappearingArrowController
class CORDL_TYPE MirroredDisappearingArrowController : public ::GlobalNamespace::DisappearingArrowControllerBase_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>> {
public:
  // Declarations
  /// @brief Field _mirroredGameNoteController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__mirroredGameNoteController, put = __cordl_internal_set__mirroredGameNoteController)) ::UnityW<::GlobalNamespace::MirroredGameNoteController>
      _mirroredGameNoteController;

  __declspec(property(get = get_gameNoteController)) ::UnityW<::GlobalNamespace::MirroredGameNoteController> gameNoteController;

  static inline ::GlobalNamespace::MirroredDisappearingArrowController* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::MirroredGameNoteController> const& __cordl_internal_get__mirroredGameNoteController() const;

  constexpr ::UnityW<::GlobalNamespace::MirroredGameNoteController>& __cordl_internal_get__mirroredGameNoteController();

  constexpr void __cordl_internal_set__mirroredGameNoteController(::UnityW<::GlobalNamespace::MirroredGameNoteController> value);

  /// @brief Method .ctor, addr 0x3ae9ffc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gameNoteController, addr 0x3ae9ff4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MirroredGameNoteController> get_gameNoteController();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirroredDisappearingArrowController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirroredDisappearingArrowController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirroredDisappearingArrowController(MirroredDisappearingArrowController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirroredDisappearingArrowController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirroredDisappearingArrowController(MirroredDisappearingArrowController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4109 };

  /// @brief Field _mirroredGameNoteController, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirroredGameNoteController> ____mirroredGameNoteController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MirroredDisappearingArrowController, ____mirroredGameNoteController) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirroredDisappearingArrowController, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MirroredDisappearingArrowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredDisappearingArrowController*, "", "MirroredDisappearingArrowController");
