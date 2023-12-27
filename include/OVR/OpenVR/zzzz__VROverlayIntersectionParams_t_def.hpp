#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector3_t_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VROverlayIntersectionParams_t)
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct HmdVector3_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VROverlayIntersectionParams_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VROverlayIntersectionParams_t);
// Type: OVR.OpenVR::VROverlayIntersectionParams_t
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8586)), TypeDefinitionIndex(TypeDefinitionIndex(8647))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8706))
// CS Name: ::OVR.OpenVR::VROverlayIntersectionParams_t
struct CORDL_TYPE VROverlayIntersectionParams_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "vSource", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vDirection", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "",
  // def_value: None }, CppParam { name: "eOrigin", ty: "::OVR::OpenVR::ETrackingUniverseOrigin", modifiers: "", def_value: None }]
  constexpr VROverlayIntersectionParams_t(::OVR::OpenVR::HmdVector3_t vSource, ::OVR::OpenVR::HmdVector3_t vDirection, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VROverlayIntersectionParams_t();

  /// @brief Field vSource, offset: 0x0, size: 0xc, def value: None
  ::OVR::OpenVR::HmdVector3_t vSource;

  /// @brief Field vDirection, offset: 0xc, size: 0xc, def value: None
  ::OVR::OpenVR::HmdVector3_t vDirection;

  /// @brief Field eOrigin, offset: 0x18, size: 0x4, def value: None
  ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VROverlayIntersectionParams_t, 0x1c>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VROverlayIntersectionParams_t, "OVR.OpenVR", "VROverlayIntersectionParams_t");
