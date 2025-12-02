#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/XRController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__TrackedDevice_def.hpp"
CORDL_MODULE_EXPORT(XRController)
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class XRController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::XR::XRController);
// Dependencies UnityEngine.InputSystem.TrackedDevice
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// CS Name: UnityEngine.InputSystem.XR.XRController
class CORDL_TYPE XRController : public ::UnityEngine::InputSystem::TrackedDevice {
public:
  // Declarations
  /// @brief Method FinishSetup, addr 0x636969c, size 0xfc, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::XR::XRController* New_ctor();

  /// @brief Method .ctor, addr 0x63697e4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_leftHand, addr 0x6369544, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::XR::XRController* get_leftHand();

  /// @brief Method get_rightHand, addr 0x63695f0, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::XR::XRController* get_rightHand();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRController(XRController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRController(XRController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8789 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::XRController, 0x1a8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR
NEED_NO_BOX(::UnityEngine::InputSystem::XR::XRController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::XRController*, "UnityEngine.InputSystem.XR", "XRController");
