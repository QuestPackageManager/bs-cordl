#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Input/HapticControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::UnityEngine::XR::OpenXR::Input::HapticControl*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Input::HapticControl*, "UnityEngine.XR.OpenXR.Input", "HapticControl");
// Dependencies UnityEngine.InputSystem.InputControl`1<TValue>, UnityEngine.XR.OpenXR.Input.Haptic
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Input.HapticControl
class CORDL_TYPE HapticControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::XR::OpenXR::Input::Haptic> {
public:
  // Declarations
  static inline ::UnityEngine::XR::OpenXR::Input::HapticControl* New_ctor();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x69f1744, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::Haptic ReadUnprocessedValueFromState(void* statePtr);

  /// @brief Method .ctor, addr 0x69f16c4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HapticControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HapticControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HapticControl(HapticControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HapticControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HapticControl(HapticControl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18510 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::Input::HapticControl) == 0x100, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
