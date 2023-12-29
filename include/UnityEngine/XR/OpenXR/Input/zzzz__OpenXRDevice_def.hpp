#pragma once
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
// Type: UnityEngine.XR.OpenXR.Input::OpenXRDevice
// SizeInfo { instance_size: 344, native_size: -1, calculated_instance_size: 344, calculated_native_size: 344, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6325))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14429))
// CS Name: ::UnityEngine.XR.OpenXR.Input::OpenXRDevice*
class CORDL_TYPE OpenXRDevice : public ::UnityEngine::InputSystem::InputDevice {
public:
  // Declarations
  /// @brief Method FinishSetup addr 0x2b035ac size 0xf4 virtual true final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::OpenXR::Input::OpenXRDevice* New_ctor();

  /// @brief Method .ctor addr 0x2b036a0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRDevice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRDevice(OpenXRDevice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRDevice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRDevice(OpenXRDevice const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRDevice();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Input::OpenXRDevice, 0x158>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Input::OpenXRDevice);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::OpenXRDevice*, "UnityEngine.XR.OpenXR.Input", "OpenXRDevice");
