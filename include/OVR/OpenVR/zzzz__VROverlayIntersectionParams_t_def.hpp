#pragma once
// IWYU pragma private; include "OVR/OpenVR/VROverlayIntersectionParams_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector3_t_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VROverlayIntersectionParams_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VROverlayIntersectionParams_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VROverlayIntersectionParams_t);
// Dependencies OVR.OpenVR.ETrackingUniverseOrigin, OVR.OpenVR.HmdVector3_t
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.VROverlayIntersectionParams_t
struct CORDL_TYPE VROverlayIntersectionParams_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VROverlayIntersectionParams_t();

  // Ctor Parameters [CppParam { name: "vSource", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vDirection", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "",
  // def_value: None }, CppParam { name: "eOrigin", ty: "::OVR::OpenVR::ETrackingUniverseOrigin", modifiers: "", def_value: None }]
  constexpr VROverlayIntersectionParams_t(::OVR::OpenVR::HmdVector3_t vSource, ::OVR::OpenVR::HmdVector3_t vDirection, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9023 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field vSource, offset: 0x0, size: 0xc, def value: None
  ::OVR::OpenVR::HmdVector3_t vSource;

  /// @brief Field vDirection, offset: 0xc, size: 0xc, def value: None
  ::OVR::OpenVR::HmdVector3_t vDirection;

  /// @brief Field eOrigin, offset: 0x18, size: 0x4, def value: None
  ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::VROverlayIntersectionParams_t, vSource) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VROverlayIntersectionParams_t, vDirection) == 0xc, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VROverlayIntersectionParams_t, eOrigin) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VROverlayIntersectionParams_t, 0x1c>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VROverlayIntersectionParams_t, "OVR.OpenVR", "VROverlayIntersectionParams_t");
