#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/DoubleControl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DoubleControl)
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class DoubleControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::DoubleControl);
// Dependencies UnityEngine.InputSystem.InputControl`1<TValue>
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Controls.DoubleControl
class CORDL_TYPE DoubleControl : public ::UnityEngine::InputSystem::InputControl_1<double_t> {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Controls::DoubleControl* New_ctor();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x4564088, size 0x68, virtual true, abstract: false, final false
  inline double_t ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState, addr 0x45640f0, size 0x78, virtual true, abstract: false, final false
  inline void WriteValueIntoState(double_t value, ::cordl_internals::Ptr<void> statePtr);

  /// @brief Method .ctor, addr 0x4564000, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DoubleControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DoubleControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DoubleControl(DoubleControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DoubleControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DoubleControl(DoubleControl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7041 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::DoubleControl, 0x110>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::DoubleControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::DoubleControl*, "UnityEngine.InputSystem.Controls", "DoubleControl");
