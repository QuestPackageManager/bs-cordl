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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4742)), TypeDefinitionIndex(TypeDefinitionIndex(4744)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4742), inst: 310
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4741)) CS Name: ::DisappearingArrowController*
class CORDL_TYPE DisappearingArrowController : public ::GlobalNamespace::DisappearingArrowControllerBase_1<::GlobalNamespace::GameNoteController*> {
public:
  // Declarations
  /// @brief Field _gameNoteController, offset 0x50, size 0x8
  __declspec(property(get = __get__gameNoteController, put = __set__gameNoteController))::GlobalNamespace::GameNoteController* _gameNoteController;

  __declspec(property(get = get_gameNoteController))::GlobalNamespace::GameNoteController* gameNoteController;

  constexpr ::GlobalNamespace::GameNoteController*& __get__gameNoteController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameNoteController*> const& __get__gameNoteController() const;

  constexpr void __set__gameNoteController(::GlobalNamespace::GameNoteController* value);

  /// @brief Method get_gameNoteController, addr 0x2385468, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::GameNoteController* get_gameNoteController();

  static inline ::GlobalNamespace::DisappearingArrowController* New_ctor();

  /// @brief Method .ctor, addr 0x2385470, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DisappearingArrowController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisappearingArrowController(DisappearingArrowController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisappearingArrowController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisappearingArrowController(DisappearingArrowController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisappearingArrowController();

public:
  /// @brief Field _gameNoteController, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::GameNoteController* ____gameNoteController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisappearingArrowController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DisappearingArrowController, ____gameNoteController) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisappearingArrowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisappearingArrowController*, "", "DisappearingArrowController");
