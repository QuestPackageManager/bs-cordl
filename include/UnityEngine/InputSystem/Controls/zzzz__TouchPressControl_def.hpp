#pragma once
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
// Type: UnityEngine.InputSystem.Controls::TouchPressControl
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 284, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Controls::TouchPressControl*
class CORDL_TYPE TouchPressControl : public ::UnityEngine::InputSystem::Controls::ButtonControl {
public:
  // Declarations
  /// @brief Method FinishSetup, addr 0x303e5c4, size 0xac, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::Controls::TouchPressControl* New_ctor();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x303e670, size 0x48, virtual true, abstract: false, final false
  inline float_t ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState, addr 0x303e84c, size 0x40, virtual true, abstract: false, final false
  inline void WriteValueIntoState(float_t value, ::cordl_internals::Ptr<void> statePtr);

  /// @brief Method .ctor, addr 0x303e88c, size 0x4, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::TouchPressControl, 0x120>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::TouchPressControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::TouchPressControl*, "UnityEngine.InputSystem.Controls", "TouchPressControl");
