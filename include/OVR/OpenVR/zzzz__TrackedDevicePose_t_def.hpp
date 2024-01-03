#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__ETrackingResult_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector3_t_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TrackedDevicePose_t)
namespace OVR::OpenVR {
struct ETrackingResult;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace OVR::OpenVR {
struct HmdVector3_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::TrackedDevicePose_t);
// Type: OVR.OpenVR::TrackedDevicePose_t
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 94, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8583)), TypeDefinitionIndex(TypeDefinitionIndex(8644)), TypeDefinitionIndex(TypeDefinitionIndex(8647))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8658))
// CS Name: ::OVR.OpenVR::TrackedDevicePose_t
struct CORDL_TYPE TrackedDevicePose_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "mDeviceToAbsoluteTracking", ty: "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: None }, CppParam { name: "vVelocity", ty:
  // "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vAngularVelocity", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name:
  // "eTrackingResult", ty: "::OVR::OpenVR::ETrackingResult", modifiers: "", def_value: None }, CppParam { name: "bPoseIsValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "bDeviceIsConnected", ty: "bool", modifiers: "", def_value: None }]
  constexpr TrackedDevicePose_t(::OVR::OpenVR::HmdMatrix34_t mDeviceToAbsoluteTracking, ::OVR::OpenVR::HmdVector3_t vVelocity, ::OVR::OpenVR::HmdVector3_t vAngularVelocity,
                                ::OVR::OpenVR::ETrackingResult eTrackingResult, bool bPoseIsValid, bool bDeviceIsConnected) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackedDevicePose_t();

  /// @brief Field mDeviceToAbsoluteTracking, offset: 0x0, size: 0x30, def value: None
  ::OVR::OpenVR::HmdMatrix34_t mDeviceToAbsoluteTracking;

  /// @brief Field vVelocity, offset: 0x30, size: 0xc, def value: None
  ::OVR::OpenVR::HmdVector3_t vVelocity;

  /// @brief Field vAngularVelocity, offset: 0x3c, size: 0xc, def value: None
  ::OVR::OpenVR::HmdVector3_t vAngularVelocity;

  /// @brief Field eTrackingResult, offset: 0x48, size: 0x4, def value: None
  ::OVR::OpenVR::ETrackingResult eTrackingResult;

  /// @brief Field bPoseIsValid, offset: 0x4c, size: 0x1, def value: None
  bool bPoseIsValid;

  /// @brief Field bDeviceIsConnected, offset: 0x4d, size: 0x1, def value: None
  bool bDeviceIsConnected;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::TrackedDevicePose_t, 0x50>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::TrackedDevicePose_t, mDeviceToAbsoluteTracking) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::TrackedDevicePose_t, vVelocity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::TrackedDevicePose_t, vAngularVelocity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::TrackedDevicePose_t, eTrackingResult) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::TrackedDevicePose_t, bPoseIsValid) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::TrackedDevicePose_t, bDeviceIsConnected) == 0x4d, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::TrackedDevicePose_t, "OVR.OpenVR", "TrackedDevicePose_t");
