#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRTrackedCamera.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRTrackedCamera_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRTrackedCamera)
namespace OVR::OpenVR {
struct CameraVideoStreamFrameHeader_t;
}
namespace OVR::OpenVR {
struct EVRTrackedCameraError;
}
namespace OVR::OpenVR {
struct EVRTrackedCameraFrameType;
}
namespace OVR::OpenVR {
struct HmdMatrix44_t;
}
namespace OVR::OpenVR {
struct HmdVector2_t;
}
namespace OVR::OpenVR {
struct VRTextureBounds_t;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRTrackedCamera;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRTrackedCamera);
// Dependencies OVR.OpenVR.IVRTrackedCamera, System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRTrackedCamera
class CORDL_TYPE CVRTrackedCamera : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x60
  __declspec(property(get = __cordl_internal_get_FnTable, put = __cordl_internal_set_FnTable)) ::OVR::OpenVR::IVRTrackedCamera FnTable;

  /// @brief Method AcquireVideoStreamingService, addr 0x40728e8, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError AcquireVideoStreamingService(uint32_t nDeviceIndex, ::ByRef<uint64_t> pHandle);

  /// @brief Method GetCameraErrorNameFromEnum, addr 0x40727c4, size 0x84, virtual false, abstract: false, final false
  inline ::StringW GetCameraErrorNameFromEnum(::OVR::OpenVR::EVRTrackedCameraError eCameraError);

  /// @brief Method GetCameraFrameSize, addr 0x4072870, size 0x30, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError GetCameraFrameSize(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight,
                                                                 ::ByRef<uint32_t> pnFrameBufferSize);

  /// @brief Method GetCameraIntrinsics, addr 0x40728a0, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError GetCameraIntrinsics(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::ByRef<::OVR::OpenVR::HmdVector2_t> pFocalLength,
                                                                  ::ByRef<::OVR::OpenVR::HmdVector2_t> pCenter);

  /// @brief Method GetCameraProjection, addr 0x40728c4, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError GetCameraProjection(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float_t flZNear, float_t flZFar,
                                                                  ::ByRef<::OVR::OpenVR::HmdMatrix44_t> pProjection);

  /// @brief Method GetVideoStreamFrameBuffer, addr 0x4072934, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError GetVideoStreamFrameBuffer(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::System::IntPtr pFrameBuffer,
                                                                        uint32_t nFrameBufferSize, ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize);

  /// @brief Method GetVideoStreamTextureD3D11, addr 0x4072984, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError GetVideoStreamTextureD3D11(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::System::IntPtr pD3D11DeviceOrResource,
                                                                         ::ByRef<::System::IntPtr> ppD3D11ShaderResourceView, ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader,
                                                                         uint32_t nFrameHeaderSize);

  /// @brief Method GetVideoStreamTextureGL, addr 0x40729a8, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError GetVideoStreamTextureGL(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::ByRef<uint32_t> pglTextureId,
                                                                      ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize);

  /// @brief Method GetVideoStreamTextureSize, addr 0x4072958, size 0x2c, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError GetVideoStreamTextureSize(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                        ::ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight);

  /// @brief Method HasCamera, addr 0x4072848, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError HasCamera(uint32_t nDeviceIndex, ::ByRef<bool> pHasCamera);

  static inline ::OVR::OpenVR::CVRTrackedCamera* New_ctor(::System::IntPtr pInterface);

  /// @brief Method ReleaseVideoStreamTextureGL, addr 0x40729d0, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError ReleaseVideoStreamTextureGL(uint64_t hTrackedCamera, uint32_t glTextureId);

  /// @brief Method ReleaseVideoStreamingService, addr 0x4072910, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError ReleaseVideoStreamingService(uint64_t hTrackedCamera);

  constexpr ::OVR::OpenVR::IVRTrackedCamera const& __cordl_internal_get_FnTable() const;

  constexpr ::OVR::OpenVR::IVRTrackedCamera& __cordl_internal_get_FnTable();

  constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRTrackedCamera value);

  /// @brief Method .ctor, addr 0x40726b0, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr pInterface);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRTrackedCamera();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVRTrackedCamera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRTrackedCamera(CVRTrackedCamera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRTrackedCamera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRTrackedCamera(CVRTrackedCamera const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8878 };

  /// @brief Field FnTable, offset: 0x10, size: 0x60, def value: None
  ::OVR::OpenVR::IVRTrackedCamera ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::CVRTrackedCamera, ___FnTable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRTrackedCamera, 0x70>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRTrackedCamera);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRTrackedCamera*, "OVR.OpenVR", "CVRTrackedCamera");
