#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Input/OpenXRDevice.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
CORDL_MODULE_EXPORT(OpenXRDevice)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Input {
class OpenXRDevice;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Input::OpenXRDevice);
// Dependencies UnityEngine.InputSystem.InputDevice
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRDevice
class CORDL_TYPE OpenXRDevice : public ::UnityEngine::InputSystem::InputDevice {
public:
  // Declarations
  /// @brief Method FinishSetup, addr 0x68265f0, size 0xf4, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::OpenXR::Input::OpenXRDevice* New_ctor();

  /// @brief Method .ctor, addr 0x68266e4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRDevice();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRDevice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRDevice(OpenXRDevice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRDevice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRDevice(OpenXRDevice const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18508 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Input::OpenXRDevice, 0x188>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Input::OpenXRDevice);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::OpenXRDevice*, "UnityEngine.XR.OpenXR.Input", "OpenXRDevice");
