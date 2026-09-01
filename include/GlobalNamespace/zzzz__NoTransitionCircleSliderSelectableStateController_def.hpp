#pragma once
// IWYU pragma private; include "GlobalNamespace\NoTransitionCircleSliderSelectableStateController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
CORDL_MODULE_EXPORT(NoTransitionCircleSliderSelectableStateController)
namespace HMUI {
struct NoTransitionCircleSlider_SelectionState;
}
namespace HMUI {
class NoTransitionCircleSlider;
}
// Forward declare root types
namespace GlobalNamespace {
class NoTransitionCircleSliderSelectableStateController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NoTransitionCircleSliderSelectableStateController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NoTransitionCircleSliderSelectableStateController*, "", "NoTransitionCircleSliderSelectableStateController");
// Dependencies SelectableStateController`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoTransitionCircleSliderSelectableStateController
class CORDL_TYPE NoTransitionCircleSliderSelectableStateController : public ::GlobalNamespace::SelectableStateController_1<::UnityW<::HMUI::NoTransitionCircleSlider>> {
public:
  // Declarations
  /// @brief Method HandleSelectionStateDidChange, addr 0x6445f70, size 0x8, virtual false, abstract: false, final false
  inline void HandleSelectionStateDidChange(::HMUI::NoTransitionCircleSlider_SelectionState state);

  static inline ::GlobalNamespace::NoTransitionCircleSliderSelectableStateController* New_ctor();

  /// @brief Method OnDisable, addr 0x6445ee0, size 0x90, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x6445de8, size 0xa8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ResolveSelectionState, addr 0x6445e90, size 0x50, virtual false, abstract: false, final false
  inline void ResolveSelectionState(::HMUI::NoTransitionCircleSlider_SelectionState state, bool animated);

  /// @brief Method .ctor, addr 0x6445f78, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionCircleSliderSelectableStateController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionCircleSliderSelectableStateController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoTransitionCircleSliderSelectableStateController(NoTransitionCircleSliderSelectableStateController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionCircleSliderSelectableStateController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoTransitionCircleSliderSelectableStateController(NoTransitionCircleSliderSelectableStateController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22372 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NoTransitionCircleSliderSelectableStateController) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
