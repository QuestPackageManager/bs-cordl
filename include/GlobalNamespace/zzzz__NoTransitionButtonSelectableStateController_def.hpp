#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
CORDL_MODULE_EXPORT(NoTransitionButtonSelectableStateController)
namespace HMUI {
struct __NoTransitionsButton__SelectionState;
}
// Forward declare root types
namespace GlobalNamespace {
class NoTransitionButtonSelectableStateController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoTransitionButtonSelectableStateController);
// Type: ::NoTransitionButtonSelectableStateController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4760)), TypeDefinitionIndex(TypeDefinitionIndex(13576)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4760), inst:
// 4937 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(4761)) CS Name: ::NoTransitionButtonSelectableStateController*
class CORDL_TYPE NoTransitionButtonSelectableStateController : public ::GlobalNamespace::SelectableStateController_1<::UnityW<::HMUI::NoTransitionsButton>> {
public:
  // Declarations
  /// @brief Method OnEnable, addr 0x23daec4, size 0xa4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x23db020, size 0x8c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method HandleNoTransitionButtonSelectionStateDidChange, addr 0x23db0ac, size 0x8, virtual false, abstract: false, final false
  inline void HandleNoTransitionButtonSelectionStateDidChange(::HMUI::__NoTransitionsButton__SelectionState state);

  /// @brief Method ResolveSelectionState, addr 0x23daf68, size 0xb8, virtual false, abstract: false, final false
  inline void ResolveSelectionState(::HMUI::__NoTransitionsButton__SelectionState state, bool animated);

  static inline ::GlobalNamespace::NoTransitionButtonSelectableStateController* New_ctor();

  /// @brief Method .ctor, addr 0x23db0b4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionButtonSelectableStateController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoTransitionButtonSelectableStateController(NoTransitionButtonSelectableStateController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionButtonSelectableStateController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoTransitionButtonSelectableStateController(NoTransitionButtonSelectableStateController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionButtonSelectableStateController();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoTransitionButtonSelectableStateController, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoTransitionButtonSelectableStateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoTransitionButtonSelectableStateController*, "", "NoTransitionButtonSelectableStateController");
