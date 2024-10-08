#pragma once
// IWYU pragma private; include "GlobalNamespace/InputFieldSelectableStateController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
CORDL_MODULE_EXPORT(InputFieldSelectableStateController)
namespace HMUI {
class InputFieldView;
}
namespace HMUI {
struct __InputFieldView__SelectionState;
}
// Forward declare root types
namespace GlobalNamespace {
class InputFieldSelectableStateController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InputFieldSelectableStateController);
// Type: ::InputFieldSelectableStateController
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::InputFieldSelectableStateController*
class CORDL_TYPE InputFieldSelectableStateController : public ::GlobalNamespace::SelectableStateController_1<::UnityW<::HMUI::InputFieldView>> {
public:
  // Declarations
  /// @brief Method HandleInputFieldSelectionStateDidChange, addr 0x4461db4, size 0x8, virtual false, abstract: false, final false
  inline void HandleInputFieldSelectionStateDidChange(::HMUI::__InputFieldView__SelectionState state);

  static inline ::GlobalNamespace::InputFieldSelectableStateController* New_ctor();

  /// @brief Method OnDisable, addr 0x4461d24, size 0x90, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x4461b90, size 0xa8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ResolveSelectionState, addr 0x4461c38, size 0xec, virtual false, abstract: false, final false
  inline void ResolveSelectionState(::HMUI::__InputFieldView__SelectionState state, bool animated);

  /// @brief Method .ctor, addr 0x4461dbc, size 0x48, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18119 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InputFieldSelectableStateController, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InputFieldSelectableStateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InputFieldSelectableStateController*, "", "InputFieldSelectableStateController");
