#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/Input/OculusGoController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/Oculus/Input/zzzz__GearVRTrackedController_def.hpp"
CORDL_MODULE_EXPORT(OculusGoController)
// Forward declare root types
namespace Unity::XR::Oculus::Input {
class OculusGoController;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::Input::OculusGoController);
// Dependencies Unity.XR.Oculus.Input.GearVRTrackedController
namespace Unity::XR::Oculus::Input {
// Is value type: false
// CS Name: Unity.XR.Oculus.Input.OculusGoController
class CORDL_TYPE OculusGoController : public ::Unity::XR::Oculus::Input::GearVRTrackedController {
public:
  // Declarations
  static inline ::Unity::XR::Oculus::Input::OculusGoController* New_ctor();

  /// @brief Method .ctor, addr 0x483864c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusGoController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusGoController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusGoController(OculusGoController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusGoController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusGoController(OculusGoController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17429 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Input::OculusGoController, 0x1f8>, "Size mismatch!");

} // namespace Unity::XR::Oculus::Input
NEED_NO_BOX(::Unity::XR::Oculus::Input::OculusGoController);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Input::OculusGoController*, "Unity.XR.Oculus.Input", "OculusGoController");
