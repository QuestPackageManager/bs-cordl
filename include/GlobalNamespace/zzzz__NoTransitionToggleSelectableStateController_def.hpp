#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
#include "HMUI/zzzz__NoTransitionsToggle_def.hpp"
CORDL_MODULE_EXPORT(NoTransitionToggleSelectableStateController)
namespace HMUI {
struct UISelectionState;
}
// Forward declare root types
namespace GlobalNamespace {
class NoTransitionToggleSelectableStateController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoTransitionToggleSelectableStateController);
// Type: ::NoTransitionToggleSelectableStateController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5563)), TypeDefinitionIndex(TypeDefinitionIndex(13754)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5563), inst:
// 4859 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5565)) CS Name: ::NoTransitionToggleSelectableStateController*
class CORDL_TYPE NoTransitionToggleSelectableStateController : public ::GlobalNamespace::SelectableStateController_1<::HMUI::NoTransitionsToggle*> {
public:
  // Declarations
  /// @brief Method OnEnable addr 0x213e2bc size 0xa4 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x213e44c size 0x8c virtual false final false
  inline void OnDisable();

  /// @brief Method HandleNoTransitionToggleSelectionStateDidChange addr 0x213e4d8 size 0x8 virtual false final false
  inline void HandleNoTransitionToggleSelectionStateDidChange(::HMUI::UISelectionState state);

  /// @brief Method ResolveSelectionState addr 0x213e360 size 0xec virtual false final false
  inline void ResolveSelectionState(::HMUI::UISelectionState state, bool animated);

  static inline ::GlobalNamespace::NoTransitionToggleSelectableStateController* New_ctor();

  /// @brief Method .ctor addr 0x213e4e0 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionToggleSelectableStateController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoTransitionToggleSelectableStateController(NoTransitionToggleSelectableStateController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionToggleSelectableStateController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoTransitionToggleSelectableStateController(NoTransitionToggleSelectableStateController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionToggleSelectableStateController();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoTransitionToggleSelectableStateController, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoTransitionToggleSelectableStateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoTransitionToggleSelectableStateController*, "", "NoTransitionToggleSelectableStateController");
