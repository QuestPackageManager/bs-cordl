#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/TouchPressControl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TouchPressControl)
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class TouchPressControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::TouchPressControl);
// Dependencies UnityEngine.InputSystem.Controls.ButtonControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Controls.TouchPressControl
class CORDL_TYPE TouchPressControl : public ::UnityEngine::InputSystem::Controls::ButtonControl {
public:
  // Declarations
  /// @brief Method FinishSetup, addr 0x6346ad4, size 0x100, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::Controls::TouchPressControl* New_ctor();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x6346bd4, size 0x13c, virtual true, abstract: false, final false
  inline float_t ReadUnprocessedValueFromState(void* statePtr);

  /// @brief Method WriteValueIntoState, addr 0x6346e74, size 0x38, virtual true, abstract: false, final false
  inline void WriteValueIntoState(float_t value, void* statePtr);

  /// @brief Method .ctor, addr 0x6346eac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchPressControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TouchPressControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TouchPressControl(TouchPressControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TouchPressControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TouchPressControl(TouchPressControl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9115 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::TouchPressControl, 0x140>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::TouchPressControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::TouchPressControl*, "UnityEngine.InputSystem.Controls", "TouchPressControl");
