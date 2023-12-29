#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SpatialAnchorPose_t)
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct SpatialAnchorPose_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::SpatialAnchorPose_t);
// Type: OVR.OpenVR::SpatialAnchorPose_t
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9413))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9495))
// CS Name: ::OVR.OpenVR::SpatialAnchorPose_t
struct CORDL_TYPE SpatialAnchorPose_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "mAnchorToAbsoluteTracking", ty: "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: None }]
  constexpr SpatialAnchorPose_t(::OVR::OpenVR::HmdMatrix34_t mAnchorToAbsoluteTracking) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpatialAnchorPose_t();

  /// @brief Field mAnchorToAbsoluteTracking, offset: 0x0, size: 0x30, def value: None
  ::OVR::OpenVR::HmdMatrix34_t mAnchorToAbsoluteTracking;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::SpatialAnchorPose_t, 0x30>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::SpatialAnchorPose_t, mAnchorToAbsoluteTracking) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::SpatialAnchorPose_t, "OVR.OpenVR", "SpatialAnchorPose_t");
