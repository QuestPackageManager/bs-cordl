#pragma once
// IWYU pragma private; include "GlobalNamespace/NoTransitionButtonSelectableStateController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
CORDL_MODULE_EXPORT(NoTransitionButtonSelectableStateController)
namespace HMUI {
struct NoTransitionsButton_SelectionState;
}
namespace HMUI {
class NoTransitionsButton;
}
// Forward declare root types
namespace GlobalNamespace {
class NoTransitionButtonSelectableStateController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoTransitionButtonSelectableStateController);
// Dependencies SelectableStateController`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoTransitionButtonSelectableStateController
class CORDL_TYPE NoTransitionButtonSelectableStateController : public ::GlobalNamespace::SelectableStateController_1<::UnityW<::HMUI::NoTransitionsButton>> {
public:
  // Declarations
  /// @brief Method HandleNoTransitionButtonSelectionStateDidChange, addr 0x44d93c8, size 0x8, virtual false, abstract: false, final false
  inline void HandleNoTransitionButtonSelectionStateDidChange(::HMUI::NoTransitionsButton_SelectionState state);

  static inline ::GlobalNamespace::NoTransitionButtonSelectableStateController* New_ctor();

  /// @brief Method OnDisable, addr 0x44d9338, size 0x90, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x44d91d8, size 0xa8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ResolveSelectionState, addr 0x44d9280, size 0xb8, virtual false, abstract: false, final false
  inline void ResolveSelectionState(::HMUI::NoTransitionsButton_SelectionState state, bool animated);

  /// @brief Method .ctor, addr 0x44d93d0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionButtonSelectableStateController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionButtonSelectableStateController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoTransitionButtonSelectableStateController(NoTransitionButtonSelectableStateController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionButtonSelectableStateController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoTransitionButtonSelectableStateController(NoTransitionButtonSelectableStateController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18220 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoTransitionButtonSelectableStateController, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoTransitionButtonSelectableStateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoTransitionButtonSelectableStateController*, "", "NoTransitionButtonSelectableStateController");
