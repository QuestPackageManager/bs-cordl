#pragma once
// IWYU pragma private; include "OVR/OpenVR/VRTextureWithPose_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VRTextureWithPose_t)
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VRTextureWithPose_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRTextureWithPose_t);
// Type: OVR.OpenVR::VRTextureWithPose_t
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::VRTextureWithPose_t
struct CORDL_TYPE VRTextureWithPose_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRTextureWithPose_t();

  // Ctor Parameters [CppParam { name: "mDeviceToAbsoluteTracking", ty: "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: None }]
  constexpr VRTextureWithPose_t(::OVR::OpenVR::HmdMatrix34_t mDeviceToAbsoluteTracking) noexcept;

  /// @brief Field mDeviceToAbsoluteTracking, offset: 0x0, size: 0x30, def value: None
  ::OVR::OpenVR::HmdMatrix34_t mDeviceToAbsoluteTracking;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8948 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRTextureWithPose_t, 0x30>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRTextureWithPose_t, mDeviceToAbsoluteTracking) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRTextureWithPose_t, "OVR.OpenVR", "VRTextureWithPose_t");
