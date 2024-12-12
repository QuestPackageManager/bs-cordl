#pragma once
// IWYU pragma private; include "GlobalNamespace/BurstSliderNoteDisappearingArrowController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_def.hpp"
CORDL_MODULE_EXPORT(BurstSliderNoteDisappearingArrowController)
namespace GlobalNamespace {
class BurstSliderGameNoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class BurstSliderNoteDisappearingArrowController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BurstSliderNoteDisappearingArrowController);
// Dependencies DisappearingArrowControllerBase`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: BurstSliderNoteDisappearingArrowController
class CORDL_TYPE BurstSliderNoteDisappearingArrowController : public ::GlobalNamespace::DisappearingArrowControllerBase_1<::GlobalNamespace::BurstSliderGameNoteController*> {
public:
  // Declarations
  /// @brief Field _burstSliderNoteController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__burstSliderNoteController, put = __cordl_internal_set__burstSliderNoteController)) ::UnityW<::GlobalNamespace::BurstSliderGameNoteController>
      _burstSliderNoteController;

  __declspec(property(get = get_gameNoteController)) ::UnityW<::GlobalNamespace::BurstSliderGameNoteController> gameNoteController;

  static inline ::GlobalNamespace::BurstSliderNoteDisappearingArrowController* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BurstSliderGameNoteController> const& __cordl_internal_get__burstSliderNoteController() const;

  constexpr ::UnityW<::GlobalNamespace::BurstSliderGameNoteController>& __cordl_internal_get__burstSliderNoteController();

  constexpr void __cordl_internal_set__burstSliderNoteController(::UnityW<::GlobalNamespace::BurstSliderGameNoteController> value);

  /// @brief Method .ctor, addr 0x3ae6b90, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gameNoteController, addr 0x3ae6b88, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BurstSliderGameNoteController> get_gameNoteController();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstSliderNoteDisappearingArrowController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstSliderNoteDisappearingArrowController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstSliderNoteDisappearingArrowController(BurstSliderNoteDisappearingArrowController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstSliderNoteDisappearingArrowController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstSliderNoteDisappearingArrowController(BurstSliderNoteDisappearingArrowController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4091 };

  /// @brief Field _burstSliderNoteController, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BurstSliderGameNoteController> ____burstSliderNoteController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BurstSliderNoteDisappearingArrowController, ____burstSliderNoteController) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BurstSliderNoteDisappearingArrowController, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BurstSliderNoteDisappearingArrowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BurstSliderNoteDisappearingArrowController*, "", "BurstSliderNoteDisappearingArrowController");
