#pragma once
// IWYU pragma private; include "GlobalNamespace/NoTransitionButtonSelectableStateController.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::GlobalNamespace::NoTransitionButtonSelectableStateController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NoTransitionButtonSelectableStateController*, "", "NoTransitionButtonSelectableStateController");
// Dependencies SelectableStateController`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoTransitionButtonSelectableStateController
class CORDL_TYPE NoTransitionButtonSelectableStateController : public ::GlobalNamespace::SelectableStateController_1<::UnityW<::HMUI::NoTransitionsButton>> {
public:
  // Declarations
  /// @brief Method HandleNoTransitionButtonSelectionStateDidChange, addr 0x6440584, size 0x8, virtual false, abstract: false, final false
  inline void HandleNoTransitionButtonSelectionStateDidChange(::HMUI::NoTransitionsButton_SelectionState state);

  static inline ::GlobalNamespace::NoTransitionButtonSelectableStateController* New_ctor();

  /// @brief Method OnDisable, addr 0x64404f4, size 0x90, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x64403fc, size 0xa8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ResolveSelectionState, addr 0x64404a4, size 0x50, virtual false, abstract: false, final false
  inline void ResolveSelectionState(::HMUI::NoTransitionsButton_SelectionState state, bool animated);

  /// @brief Method .ctor, addr 0x644058c, size 0x44, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22290 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NoTransitionButtonSelectableStateController) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
