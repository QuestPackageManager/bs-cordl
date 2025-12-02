#pragma once
// IWYU pragma private; include "GlobalNamespace/InputFieldSelectableStateController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
CORDL_MODULE_EXPORT(InputFieldSelectableStateController)
namespace HMUI {
struct InputFieldView_SelectionState;
}
namespace HMUI {
class InputFieldView;
}
// Forward declare root types
namespace GlobalNamespace {
class InputFieldSelectableStateController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InputFieldSelectableStateController);
// Dependencies SelectableStateController`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: InputFieldSelectableStateController
class CORDL_TYPE InputFieldSelectableStateController : public ::GlobalNamespace::SelectableStateController_1<::UnityW<::HMUI::InputFieldView>> {
public:
  // Declarations
  /// @brief Method HandleInputFieldSelectionStateDidChange, addr 0x62283c4, size 0x8, virtual false, abstract: false, final false
  inline void HandleInputFieldSelectionStateDidChange(::HMUI::InputFieldView_SelectionState state);

  static inline ::GlobalNamespace::InputFieldSelectableStateController* New_ctor();

  /// @brief Method OnDisable, addr 0x6228334, size 0x90, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x6228208, size 0xa8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ResolveSelectionState, addr 0x62282b0, size 0x84, virtual false, abstract: false, final false
  inline void ResolveSelectionState(::HMUI::InputFieldView_SelectionState state, bool animated);

  /// @brief Method .ctor, addr 0x62283cc, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputFieldSelectableStateController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputFieldSelectableStateController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputFieldSelectableStateController(InputFieldSelectableStateController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputFieldSelectableStateController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputFieldSelectableStateController(InputFieldSelectableStateController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22095 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InputFieldSelectableStateController, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InputFieldSelectableStateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InputFieldSelectableStateController*, "", "InputFieldSelectableStateController");
