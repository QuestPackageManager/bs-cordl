#pragma once
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
// Type: UnityEngine.InputSystem.XR::XRController
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 376, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6375))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6411))
// CS Name: ::UnityEngine.InputSystem.XR::XRController*
class CORDL_TYPE XRController : public ::UnityEngine::InputSystem::TrackedDevice {
public:
  // Declarations
  /// @brief Method get_leftHand addr 0x2946c70 size 0xa0 virtual false final false
  static inline ::UnityEngine::InputSystem::XR::XRController* get_leftHand();

  /// @brief Method get_rightHand addr 0x2946d10 size 0xa0 virtual false final false
  static inline ::UnityEngine::InputSystem::XR::XRController* get_rightHand();

  /// @brief Method FinishSetup addr 0x2946db0 size 0xf0 virtual true final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::XR::XRController* New_ctor();

  /// @brief Method .ctor addr 0x2946ee8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XRController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRController(XRController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRController(XRController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRController();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::XRController, 0x178>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR
NEED_NO_BOX(::UnityEngine::InputSystem::XR::XRController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::XRController*, "UnityEngine.InputSystem.XR", "XRController");
