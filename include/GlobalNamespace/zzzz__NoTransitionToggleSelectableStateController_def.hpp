#pragma once
// IWYU pragma private; include "GlobalNamespace/NoTransitionToggleSelectableStateController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
CORDL_MODULE_EXPORT(NoTransitionToggleSelectableStateController)
namespace HMUI {
class NoTransitionsToggle;
}
namespace HMUI {
struct UISelectionState;
}
// Forward declare root types
namespace GlobalNamespace {
class NoTransitionToggleSelectableStateController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoTransitionToggleSelectableStateController);
// Dependencies SelectableStateController`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoTransitionToggleSelectableStateController
class CORDL_TYPE NoTransitionToggleSelectableStateController : public ::GlobalNamespace::SelectableStateController_1<::UnityW<::HMUI::NoTransitionsToggle>> {
public:
  // Declarations
  /// @brief Method HandleNoTransitionToggleSelectionStateDidChange, addr 0x44e6ba8, size 0x8, virtual false, abstract: false, final false
  inline void HandleNoTransitionToggleSelectionStateDidChange(::HMUI::UISelectionState state);

  static inline ::GlobalNamespace::NoTransitionToggleSelectableStateController* New_ctor();

  /// @brief Method OnDisable, addr 0x44e6b18, size 0x90, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x44e695c, size 0xa8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ResolveSelectionState, addr 0x44e6a04, size 0x114, virtual false, abstract: false, final false
  inline void ResolveSelectionState(::HMUI::UISelectionState state, bool animated);

  /// @brief Method .ctor, addr 0x44e6bb0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionToggleSelectableStateController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionToggleSelectableStateController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoTransitionToggleSelectableStateController(NoTransitionToggleSelectableStateController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionToggleSelectableStateController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoTransitionToggleSelectableStateController(NoTransitionToggleSelectableStateController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18218 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoTransitionToggleSelectableStateController, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoTransitionToggleSelectableStateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoTransitionToggleSelectableStateController*, "", "NoTransitionToggleSelectableStateController");
