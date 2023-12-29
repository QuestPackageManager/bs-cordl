#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
CORDL_MODULE_EXPORT(SelectableCellSelectableStateController)
namespace HMUI {
class SelectableCell;
}
namespace System {
class Object;
}
namespace HMUI {
struct __SelectableCell__TransitionType;
}
namespace HMUI {
class Interactable;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectableCellSelectableStateController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SelectableCellSelectableStateController);
// Type: ::SelectableCellSelectableStateController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5563)), TypeDefinitionIndex(TypeDefinitionIndex(13770)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5563), inst:
// 4860 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5566)) CS Name: ::SelectableCellSelectableStateController*
class CORDL_TYPE SelectableCellSelectableStateController : public ::GlobalNamespace::SelectableStateController_1<::HMUI::SelectableCell*> {
public:
  // Declarations
  /// @brief Method OnEnable addr 0x213e528 size 0x164 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x213e6f8 size 0x154 virtual false final false
  inline void OnDisable();

  /// @brief Method HandleSelectableCellInteractableDidChange addr 0x213e84c size 0x88 virtual false final false
  inline void HandleSelectableCellInteractableDidChange(::HMUI::Interactable* interactableCell, bool interactable);

  /// @brief Method HandleSelectableCellHighlightDidChange addr 0x213e8d4 size 0x4 virtual false final false
  inline void HandleSelectableCellHighlightDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::__SelectableCell__TransitionType transitionType);

  /// @brief Method HandleSelectableCellSelectionStateDidChange addr 0x213e8d8 size 0x4 virtual false final false
  inline void HandleSelectableCellSelectionStateDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::__SelectableCell__TransitionType transitionType, ::System::Object* owner);

  /// @brief Method ResolveState addr 0x213e68c size 0x6c virtual false final false
  inline void ResolveState(::HMUI::SelectableCell* selectableCell, ::HMUI::__SelectableCell__TransitionType transitionType);

  static inline ::GlobalNamespace::SelectableCellSelectableStateController* New_ctor();

  /// @brief Method .ctor addr 0x213e8dc size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SelectableCellSelectableStateController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectableCellSelectableStateController(SelectableCellSelectableStateController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectableCellSelectableStateController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectableCellSelectableStateController(SelectableCellSelectableStateController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectableCellSelectableStateController();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectableCellSelectableStateController, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelectableCellSelectableStateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectableCellSelectableStateController*, "", "SelectableCellSelectableStateController");
