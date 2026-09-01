#pragma once
// IWYU pragma private; include "GlobalNamespace\NoTransitionSlider2DSelectableStateController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
CORDL_MODULE_EXPORT(NoTransitionSlider2DSelectableStateController)
namespace HMUI {
struct NoTransitionSlider2D_SelectionState;
}
namespace HMUI {
class NoTransitionSlider2D;
}
// Forward declare root types
namespace GlobalNamespace {
class NoTransitionSlider2DSelectableStateController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NoTransitionSlider2DSelectableStateController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NoTransitionSlider2DSelectableStateController*, "", "NoTransitionSlider2DSelectableStateController");
// Dependencies SelectableStateController`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoTransitionSlider2DSelectableStateController
class CORDL_TYPE NoTransitionSlider2DSelectableStateController : public ::GlobalNamespace::SelectableStateController_1<::UnityW<::HMUI::NoTransitionSlider2D>> {
public:
  // Declarations
  /// @brief Method HandleSelectionStateDidChange, addr 0x6446144, size 0x8, virtual false, abstract: false, final false
  inline void HandleSelectionStateDidChange(::HMUI::NoTransitionSlider2D_SelectionState state);

  static inline ::GlobalNamespace::NoTransitionSlider2DSelectableStateController* New_ctor();

  /// @brief Method OnDisable, addr 0x64460b4, size 0x90, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x6445fbc, size 0xa8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ResolveSelectionState, addr 0x6446064, size 0x50, virtual false, abstract: false, final false
  inline void ResolveSelectionState(::HMUI::NoTransitionSlider2D_SelectionState state, bool animated);

  /// @brief Method .ctor, addr 0x644614c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionSlider2DSelectableStateController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionSlider2DSelectableStateController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoTransitionSlider2DSelectableStateController(NoTransitionSlider2DSelectableStateController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionSlider2DSelectableStateController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoTransitionSlider2DSelectableStateController(NoTransitionSlider2DSelectableStateController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22373 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NoTransitionSlider2DSelectableStateController) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
