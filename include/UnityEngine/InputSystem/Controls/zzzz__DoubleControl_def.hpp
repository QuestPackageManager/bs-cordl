#pragma once
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
// Type: UnityEngine.InputSystem.Controls::DoubleControl
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6216)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 2704 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6633))
// CS Name: ::UnityEngine.InputSystem.Controls::DoubleControl*
class CORDL_TYPE DoubleControl : public ::UnityEngine::InputSystem::InputControl_1<double_t> {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Controls::DoubleControl* New_ctor();

  /// @brief Method .ctor, addr 0x2b0a7c4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x2b0a84c, size 0xc, virtual true, abstract: false, final false
  inline double_t ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState, addr 0x2b0a858, size 0xc, virtual true, abstract: false, final false
  inline void WriteValueIntoState(double_t value, ::cordl_internals::Ptr<void> statePtr);

  // Ctor Parameters [CppParam { name: "", ty: "DoubleControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DoubleControl(DoubleControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DoubleControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DoubleControl(DoubleControl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DoubleControl();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::DoubleControl, 0xf0>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::DoubleControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::DoubleControl*, "UnityEngine.InputSystem.Controls", "DoubleControl");
