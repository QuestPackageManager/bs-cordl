#pragma once
// IWYU pragma private; include "GlobalNamespace/NoTransitionTextSliderSelectableStateController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
CORDL_MODULE_EXPORT(NoTransitionTextSliderSelectableStateController)
namespace HMUI {
struct NoTransitionTextSlider_SelectionState;
}
namespace HMUI {
class NoTransitionTextSlider;
}
// Forward declare root types
namespace GlobalNamespace {
class NoTransitionTextSliderSelectableStateController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NoTransitionTextSliderSelectableStateController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NoTransitionTextSliderSelectableStateController*, "", "NoTransitionTextSliderSelectableStateController");
// Dependencies SelectableStateController`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoTransitionTextSliderSelectableStateController
class CORDL_TYPE NoTransitionTextSliderSelectableStateController : public ::GlobalNamespace::SelectableStateController_1<::UnityW<::HMUI::NoTransitionTextSlider>> {
public:
  // Declarations
  /// @brief Method HandleSelectionStateDidChange, addr 0x6440b00, size 0x8, virtual false, abstract: false, final false
  inline void HandleSelectionStateDidChange(::HMUI::NoTransitionTextSlider_SelectionState state);

  static inline ::GlobalNamespace::NoTransitionTextSliderSelectableStateController* New_ctor();

  /// @brief Method OnDisable, addr 0x6440a70, size 0x90, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x6440978, size 0xa8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ResolveSelectionState, addr 0x6440a20, size 0x50, virtual false, abstract: false, final false
  inline void ResolveSelectionState(::HMUI::NoTransitionTextSlider_SelectionState state, bool animated);

  /// @brief Method .ctor, addr 0x6440b08, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionTextSliderSelectableStateController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionTextSliderSelectableStateController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoTransitionTextSliderSelectableStateController(NoTransitionTextSliderSelectableStateController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionTextSliderSelectableStateController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoTransitionTextSliderSelectableStateController(NoTransitionTextSliderSelectableStateController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22293 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NoTransitionTextSliderSelectableStateController) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
