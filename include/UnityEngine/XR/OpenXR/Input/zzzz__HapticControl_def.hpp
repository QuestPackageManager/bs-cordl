#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__Haptic_def.hpp"
CORDL_MODULE_EXPORT(HapticControl)
namespace UnityEngine::XR::OpenXR::Input {
struct Haptic;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Input {
class HapticControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Input::HapticControl);
// Type: UnityEngine.XR.OpenXR.Input::HapticControl
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6302), inst: 3801 }), TypeDefinitionIndex(TypeDefinitionIndex(14427)),
// TypeDefinitionIndex(TypeDefinitionIndex(6302))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14428)) CS Name: ::UnityEngine.XR.OpenXR.Input::HapticControl*
class CORDL_TYPE HapticControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::XR::OpenXR::Input::Haptic> {
public:
  // Declarations
  static inline ::UnityEngine::XR::OpenXR::Input::HapticControl* New_ctor();

  /// @brief Method .ctor addr 0x2b0354c size 0x58 virtual false final false
  inline void _ctor();

  /// @brief Method ReadUnprocessedValueFromState addr 0x2b035a4 size 0x8 virtual true final false
  inline ::UnityEngine::XR::OpenXR::Input::Haptic ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  // Ctor Parameters [CppParam { name: "", ty: "HapticControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HapticControl(HapticControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HapticControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HapticControl(HapticControl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HapticControl();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Input::HapticControl, 0xf0>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Input::HapticControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::HapticControl*, "UnityEngine.XR.OpenXR.Input", "HapticControl");
