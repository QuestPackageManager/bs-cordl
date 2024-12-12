#pragma once
// IWYU pragma private; include "Unity/XR/OpenVR/ViveLighthouse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__TrackedDevice_def.hpp"
CORDL_MODULE_EXPORT(ViveLighthouse)
// Forward declare root types
namespace Unity::XR::OpenVR {
class ViveLighthouse;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::OpenVR::ViveLighthouse);
// Dependencies UnityEngine.InputSystem.TrackedDevice
namespace Unity::XR::OpenVR {
// Is value type: false
// CS Name: Unity.XR.OpenVR.ViveLighthouse
class CORDL_TYPE ViveLighthouse : public ::UnityEngine::InputSystem::TrackedDevice {
public:
  // Declarations
  static inline ::Unity::XR::OpenVR::ViveLighthouse* New_ctor();

  /// @brief Method .ctor, addr 0x453a938, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ViveLighthouse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ViveLighthouse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViveLighthouse(ViveLighthouse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViveLighthouse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViveLighthouse(ViveLighthouse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6519 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::OpenVR::ViveLighthouse, 0x190>, "Size mismatch!");

} // namespace Unity::XR::OpenVR
NEED_NO_BOX(::Unity::XR::OpenVR::ViveLighthouse);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::OpenVR::ViveLighthouse*, "Unity.XR.OpenVR", "ViveLighthouse");
