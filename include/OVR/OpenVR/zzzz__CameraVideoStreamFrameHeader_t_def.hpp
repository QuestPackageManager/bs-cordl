#pragma once
// IWYU pragma private; include "OVR/OpenVR/CameraVideoStreamFrameHeader_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__EVRTrackedCameraFrameType_def.hpp"
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraVideoStreamFrameHeader_t)
// Forward declare root types
namespace OVR::OpenVR {
struct CameraVideoStreamFrameHeader_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::CameraVideoStreamFrameHeader_t);
// Dependencies OVR.OpenVR.EVRTrackedCameraFrameType, OVR.OpenVR.TrackedDevicePose_t
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.CameraVideoStreamFrameHeader_t
struct CORDL_TYPE CameraVideoStreamFrameHeader_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraVideoStreamFrameHeader_t();

  // Ctor Parameters [CppParam { name: "eFrameType", ty: "::OVR::OpenVR::EVRTrackedCameraFrameType", modifiers: "", def_value: None }, CppParam { name: "nWidth", ty: "uint32_t", modifiers: "",
  // def_value: None }, CppParam { name: "nHeight", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "nBytesPerPixel", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "nFrameSequence", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "standingTrackedDevicePose", ty: "::OVR::OpenVR::TrackedDevicePose_t", modifiers: "", def_value: None }]
  constexpr CameraVideoStreamFrameHeader_t(::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, uint32_t nWidth, uint32_t nHeight, uint32_t nBytesPerPixel, uint32_t nFrameSequence,
                                           ::OVR::OpenVR::TrackedDevicePose_t standingTrackedDevicePose) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8495 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x64 };

  /// @brief Field eFrameType, offset: 0x0, size: 0x4, def value: None
  ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType;

  /// @brief Field nWidth, offset: 0x4, size: 0x4, def value: None
  uint32_t nWidth;

  /// @brief Field nHeight, offset: 0x8, size: 0x4, def value: None
  uint32_t nHeight;

  /// @brief Field nBytesPerPixel, offset: 0xc, size: 0x4, def value: None
  uint32_t nBytesPerPixel;

  /// @brief Field nFrameSequence, offset: 0x10, size: 0x4, def value: None
  uint32_t nFrameSequence;

  /// @brief Field standingTrackedDevicePose, offset: 0x14, size: 0x50, def value: None
  ::OVR::OpenVR::TrackedDevicePose_t standingTrackedDevicePose;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::CameraVideoStreamFrameHeader_t, eFrameType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::CameraVideoStreamFrameHeader_t, nWidth) == 0x4, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::CameraVideoStreamFrameHeader_t, nHeight) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::CameraVideoStreamFrameHeader_t, nBytesPerPixel) == 0xc, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::CameraVideoStreamFrameHeader_t, nFrameSequence) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::CameraVideoStreamFrameHeader_t, standingTrackedDevicePose) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CameraVideoStreamFrameHeader_t, 0x64>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CameraVideoStreamFrameHeader_t, "OVR.OpenVR", "CameraVideoStreamFrameHeader_t");
