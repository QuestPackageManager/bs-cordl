#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRTrackedCamera_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRTrackedCamera)
namespace OVR::OpenVR {
struct HmdMatrix44_t;
}
namespace OVR::OpenVR {
struct CameraVideoStreamFrameHeader_t;
}
namespace OVR::OpenVR {
struct EVRTrackedCameraFrameType;
}
namespace OVR::OpenVR {
struct HmdVector2_t;
}
namespace OVR::OpenVR {
struct EVRTrackedCameraError;
}
namespace OVR::OpenVR {
struct VRTextureBounds_t;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRTrackedCamera;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRTrackedCamera);
// Type: OVR.OpenVR::CVRTrackedCamera
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8281))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8560))
// CS Name: ::OVR.OpenVR::CVRTrackedCamera*
class CORDL_TYPE CVRTrackedCamera : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x60
  __declspec(property(get = __get_FnTable, put = __set_FnTable))::OVR::OpenVR::IVRTrackedCamera FnTable;

  constexpr ::OVR::OpenVR::IVRTrackedCamera& __get_FnTable();

  constexpr ::OVR::OpenVR::IVRTrackedCamera const& __get_FnTable() const;

  constexpr void __set_FnTable(::OVR::OpenVR::IVRTrackedCamera value);

  static inline ::OVR::OpenVR::CVRTrackedCamera* New_ctor(void* pInterface);

  /// @brief Method .ctor, addr 0x27f1f80, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(void* pInterface);

  /// @brief Method GetCameraErrorNameFromEnum, addr 0x27f2094, size 0x84, virtual false, abstract: false, final false
  inline ::StringW GetCameraErrorNameFromEnum(::OVR::OpenVR::EVRTrackedCameraError eCameraError);

  /// @brief Method HasCamera, addr 0x27f2118, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError HasCamera(uint32_t nDeviceIndex, ByRef<bool> pHasCamera);

  /// @brief Method GetCameraFrameSize, addr 0x27f2140, size 0x30, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError GetCameraFrameSize(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight,
                                                                 ByRef<uint32_t> pnFrameBufferSize);

  /// @brief Method GetCameraIntrinsics, addr 0x27f2170, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError GetCameraIntrinsics(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<::OVR::OpenVR::HmdVector2_t> pFocalLength,
                                                                  ByRef<::OVR::OpenVR::HmdVector2_t> pCenter);

  /// @brief Method GetCameraProjection, addr 0x27f2194, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError GetCameraProjection(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float_t flZNear, float_t flZFar,
                                                                  ByRef<::OVR::OpenVR::HmdMatrix44_t> pProjection);

  /// @brief Method AcquireVideoStreamingService, addr 0x27f21b8, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError AcquireVideoStreamingService(uint32_t nDeviceIndex, ByRef<uint64_t> pHandle);

  /// @brief Method ReleaseVideoStreamingService, addr 0x27f21e0, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError ReleaseVideoStreamingService(uint64_t hTrackedCamera);

  /// @brief Method GetVideoStreamFrameBuffer, addr 0x27f2204, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError GetVideoStreamFrameBuffer(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, void* pFrameBuffer, uint32_t nFrameBufferSize,
                                                                        ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize);

  /// @brief Method GetVideoStreamTextureSize, addr 0x27f2228, size 0x2c, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError GetVideoStreamTextureSize(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                        ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight);

  /// @brief Method GetVideoStreamTextureD3D11, addr 0x27f2254, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError GetVideoStreamTextureD3D11(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, void* pD3D11DeviceOrResource,
                                                                         ByRef<void*> ppD3D11ShaderResourceView, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader,
                                                                         uint32_t nFrameHeaderSize);

  /// @brief Method GetVideoStreamTextureGL, addr 0x27f2278, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError GetVideoStreamTextureGL(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<uint32_t> pglTextureId,
                                                                      ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize);

  /// @brief Method ReleaseVideoStreamTextureGL, addr 0x27f22a0, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError ReleaseVideoStreamTextureGL(uint64_t hTrackedCamera, uint32_t glTextureId);

  // Ctor Parameters [CppParam { name: "", ty: "CVRTrackedCamera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRTrackedCamera(CVRTrackedCamera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRTrackedCamera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRTrackedCamera(CVRTrackedCamera const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRTrackedCamera();

public:
  /// @brief Field FnTable, offset: 0x10, size: 0x60, def value: None
  ::OVR::OpenVR::IVRTrackedCamera ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRTrackedCamera, 0x70>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::CVRTrackedCamera, ___FnTable) == 0x10, "Offset mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRTrackedCamera);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRTrackedCamera*, "OVR.OpenVR", "CVRTrackedCamera");
