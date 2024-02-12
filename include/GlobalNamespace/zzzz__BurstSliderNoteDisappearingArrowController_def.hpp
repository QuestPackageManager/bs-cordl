#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BurstSliderGameNoteController_def.hpp"
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
// Type: ::BurstSliderNoteDisappearingArrowController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4089)), TypeDefinitionIndex(TypeDefinitionIndex(4093)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4093), inst: 288
// })] Self: TypeDefinitionIndex(TypeDefinitionIndex(4090)) CS Name: ::BurstSliderNoteDisappearingArrowController*
class CORDL_TYPE BurstSliderNoteDisappearingArrowController : public ::GlobalNamespace::DisappearingArrowControllerBase_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>> {
public:
  // Declarations
  /// @brief Field _burstSliderNoteController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__burstSliderNoteController,
                      put = __cordl_internal_set__burstSliderNoteController))::UnityW<::GlobalNamespace::BurstSliderGameNoteController> _burstSliderNoteController;

  __declspec(property(get = get_gameNoteController))::UnityW<::GlobalNamespace::BurstSliderGameNoteController> gameNoteController;

  constexpr ::UnityW<::GlobalNamespace::BurstSliderGameNoteController>& __cordl_internal_get__burstSliderNoteController();

  constexpr ::UnityW<::GlobalNamespace::BurstSliderGameNoteController> const& __cordl_internal_get__burstSliderNoteController() const;

  constexpr void __cordl_internal_set__burstSliderNoteController(::UnityW<::GlobalNamespace::BurstSliderGameNoteController> value);

  /// @brief Method get_gameNoteController, addr 0x22cbb4c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BurstSliderGameNoteController> get_gameNoteController();

  static inline ::GlobalNamespace::BurstSliderNoteDisappearingArrowController* New_ctor();

  /// @brief Method .ctor, addr 0x22cbb54, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BurstSliderNoteDisappearingArrowController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstSliderNoteDisappearingArrowController(BurstSliderNoteDisappearingArrowController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstSliderNoteDisappearingArrowController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstSliderNoteDisappearingArrowController(BurstSliderNoteDisappearingArrowController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstSliderNoteDisappearingArrowController();

public:
  /// @brief Field _burstSliderNoteController, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BurstSliderGameNoteController> ____burstSliderNoteController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BurstSliderNoteDisappearingArrowController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstSliderNoteDisappearingArrowController, ____burstSliderNoteController) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BurstSliderNoteDisappearingArrowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BurstSliderNoteDisappearingArrowController*, "", "BurstSliderNoteDisappearingArrowController");
