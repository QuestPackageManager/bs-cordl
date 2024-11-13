#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectableCellSelectableStateController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
CORDL_MODULE_EXPORT(SelectableCellSelectableStateController)
namespace HMUI {
class Interactable;
}
namespace HMUI {
class SelectableCell;
}
namespace HMUI {
struct __SelectableCell__TransitionType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectableCellSelectableStateController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SelectableCellSelectableStateController);
// Type: ::SelectableCellSelectableStateController
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SelectableCellSelectableStateController*
class CORDL_TYPE SelectableCellSelectableStateController : public ::GlobalNamespace::SelectableStateController_1<::UnityW<::HMUI::SelectableCell>> {
public:
  // Declarations
  /// @brief Method HandleSelectableCellHighlightDidChange, addr 0x4476d8c, size 0x4, virtual false, abstract: false, final false
  inline void HandleSelectableCellHighlightDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::__SelectableCell__TransitionType transitionType);

  /// @brief Method HandleSelectableCellInteractableDidChange, addr 0x4476d04, size 0x88, virtual false, abstract: false, final false
  inline void HandleSelectableCellInteractableDidChange(::HMUI::Interactable* interactableCell, bool interactable);

  /// @brief Method HandleSelectableCellSelectionStateDidChange, addr 0x4476d90, size 0x4, virtual false, abstract: false, final false
  inline void HandleSelectableCellSelectionStateDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::__SelectableCell__TransitionType transitionType, ::System::Object* owner);

  static inline ::GlobalNamespace::SelectableCellSelectableStateController* New_ctor();

  /// @brief Method OnDisable, addr 0x4476bbc, size 0x148, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x44769f8, size 0x158, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ResolveState, addr 0x4476b50, size 0x6c, virtual false, abstract: false, final false
  inline void ResolveState(::HMUI::SelectableCell* selectableCell, ::HMUI::__SelectableCell__TransitionType transitionType);

  /// @brief Method .ctor, addr 0x4476d94, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectableCellSelectableStateController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectableCellSelectableStateController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectableCellSelectableStateController(SelectableCellSelectableStateController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectableCellSelectableStateController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectableCellSelectableStateController(SelectableCellSelectableStateController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18129 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectableCellSelectableStateController, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelectableCellSelectableStateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectableCellSelectableStateController*, "", "SelectableCellSelectableStateController");
