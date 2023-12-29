#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_def.hpp"
#include "GlobalNamespace/zzzz__MirroredGameNoteController_def.hpp"
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
// Type: ::MirroredDisappearingArrowController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4863), inst: 345 }), TypeDefinitionIndex(TypeDefinitionIndex(4876)),
// TypeDefinitionIndex(TypeDefinitionIndex(4863))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4874)) CS Name: ::MirroredDisappearingArrowController*
class CORDL_TYPE MirroredDisappearingArrowController : public ::GlobalNamespace::DisappearingArrowControllerBase_1<::GlobalNamespace::MirroredGameNoteController*> {
public:
  // Declarations
  /// @brief Field _mirroredGameNoteController, offset 0x50, size 0x8
  __declspec(property(get = __get__mirroredGameNoteController, put = __set__mirroredGameNoteController))::GlobalNamespace::MirroredGameNoteController* _mirroredGameNoteController;

  __declspec(property(get = get_gameNoteController))::GlobalNamespace::MirroredGameNoteController* gameNoteController;

  constexpr ::GlobalNamespace::MirroredGameNoteController*& __get__mirroredGameNoteController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirroredGameNoteController*> const& __get__mirroredGameNoteController() const;

  constexpr void __set__mirroredGameNoteController(::GlobalNamespace::MirroredGameNoteController* value);

  /// @brief Method get_gameNoteController addr 0x22517c8 size 0x8 virtual true final false
  inline ::GlobalNamespace::MirroredGameNoteController* get_gameNoteController();

  static inline ::GlobalNamespace::MirroredDisappearingArrowController* New_ctor();

  /// @brief Method .ctor addr 0x22517d0 size 0x6c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MirroredDisappearingArrowController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirroredDisappearingArrowController(MirroredDisappearingArrowController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirroredDisappearingArrowController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirroredDisappearingArrowController(MirroredDisappearingArrowController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirroredDisappearingArrowController();

public:
  /// @brief Field _mirroredGameNoteController, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::MirroredGameNoteController* ____mirroredGameNoteController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirroredDisappearingArrowController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredDisappearingArrowController, ____mirroredGameNoteController) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MirroredDisappearingArrowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredDisappearingArrowController*, "", "MirroredDisappearingArrowController");
