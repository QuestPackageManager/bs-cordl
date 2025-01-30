#pragma once
// IWYU pragma private; include "OVR/OpenVR/SpatialAnchorPose_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SpatialAnchorPose_t)
// Forward declare root types
namespace OVR::OpenVR {
struct SpatialAnchorPose_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::SpatialAnchorPose_t);
// Dependencies OVR.OpenVR.HmdMatrix34_t
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.SpatialAnchorPose_t
struct CORDL_TYPE SpatialAnchorPose_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpatialAnchorPose_t();

  // Ctor Parameters [CppParam { name: "mAnchorToAbsoluteTracking", ty: "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: None }]
  constexpr SpatialAnchorPose_t(::OVR::OpenVR::HmdMatrix34_t mAnchorToAbsoluteTracking) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9042 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field mAnchorToAbsoluteTracking, offset: 0x0, size: 0x30, def value: None
  ::OVR::OpenVR::HmdMatrix34_t mAnchorToAbsoluteTracking;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::SpatialAnchorPose_t, mAnchorToAbsoluteTracking) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::SpatialAnchorPose_t, 0x30>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::SpatialAnchorPose_t, "OVR.OpenVR", "SpatialAnchorPose_t");
