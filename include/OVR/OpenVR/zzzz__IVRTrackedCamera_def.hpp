#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRTrackedCamera.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRTrackedCamera)
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
class IVRTrackedCamera__AcquireVideoStreamingService;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__GetCameraErrorNameFromEnum;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__GetCameraFrameSize;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__GetCameraIntrinsics;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__GetCameraProjection;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__GetVideoStreamFrameBuffer;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__GetVideoStreamTextureD3D11;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__GetVideoStreamTextureGL;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__GetVideoStreamTextureSize;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__HasCamera;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__ReleaseVideoStreamTextureGL;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__ReleaseVideoStreamingService;
}
namespace OVR::OpenVR {
struct VRTextureBounds_t;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OVR::OpenVR {
class IVRTrackedCamera__AcquireVideoStreamingService;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__GetCameraErrorNameFromEnum;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__GetCameraFrameSize;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__GetCameraIntrinsics;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__GetCameraProjection;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__GetVideoStreamFrameBuffer;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__GetVideoStreamTextureD3D11;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__GetVideoStreamTextureGL;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__GetVideoStreamTextureSize;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__HasCamera;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__ReleaseVideoStreamTextureGL;
}
namespace OVR::OpenVR {
class IVRTrackedCamera__ReleaseVideoStreamingService;
}
namespace OVR::OpenVR {
struct IVRTrackedCamera;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService);
MARK_REF_PTR_T(::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize);
MARK_REF_PTR_T(::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics);
MARK_REF_PTR_T(::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection);
MARK_REF_PTR_T(::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer);
MARK_REF_PTR_T(::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11);
MARK_REF_PTR_T(::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL);
MARK_REF_PTR_T(::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize);
MARK_REF_PTR_T(::OVR::OpenVR::IVRTrackedCamera__HasCamera);
MARK_REF_PTR_T(::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL);
MARK_REF_PTR_T(::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService);
MARK_VAL_T(::OVR::OpenVR::IVRTrackedCamera);
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRTrackedCamera/_GetCameraErrorNameFromEnum
class CORDL_TYPE IVRTrackedCamera__GetCameraErrorNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4066af4, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRTrackedCameraError eCameraError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4066b78, size 0x28, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4066ae0, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::OVR::OpenVR::EVRTrackedCameraError eCameraError);

  static inline ::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4066a54, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRTrackedCamera__GetCameraErrorNameFromEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__GetCameraErrorNameFromEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRTrackedCamera__GetCameraErrorNameFromEnum(IVRTrackedCamera__GetCameraErrorNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__GetCameraErrorNameFromEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRTrackedCamera__GetCameraErrorNameFromEnum(IVRTrackedCamera__GetCameraErrorNameFromEnum const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8587 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRTrackedCamera/_HasCamera
class CORDL_TYPE IVRTrackedCamera__HasCamera : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4066c40, size 0xbc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t nDeviceIndex, ::ByRef<bool> pHasCamera, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4066cfc, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(::ByRef<bool> pHasCamera, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4066c2c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t nDeviceIndex, ::ByRef<bool> pHasCamera);

  static inline ::OVR::OpenVR::IVRTrackedCamera__HasCamera* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4066ba0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRTrackedCamera__HasCamera();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__HasCamera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRTrackedCamera__HasCamera(IVRTrackedCamera__HasCamera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__HasCamera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRTrackedCamera__HasCamera(IVRTrackedCamera__HasCamera const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8588 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRTrackedCamera__HasCamera, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRTrackedCamera/_GetCameraFrameSize
class CORDL_TYPE IVRTrackedCamera__GetCameraFrameSize : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4066dc8, size 0x10c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight,
                                             ::ByRef<uint32_t> pnFrameBufferSize, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4066ed4, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight, ::ByRef<uint32_t> pnFrameBufferSize, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4066db4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight,
                                                     ::ByRef<uint32_t> pnFrameBufferSize);

  static inline ::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4066d28, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRTrackedCamera__GetCameraFrameSize();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__GetCameraFrameSize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRTrackedCamera__GetCameraFrameSize(IVRTrackedCamera__GetCameraFrameSize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__GetCameraFrameSize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRTrackedCamera__GetCameraFrameSize(IVRTrackedCamera__GetCameraFrameSize const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8589 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRTrackedCamera/_GetCameraIntrinsics
class CORDL_TYPE IVRTrackedCamera__GetCameraIntrinsics : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4066fa8, size 0x108, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::ByRef<::OVR::OpenVR::HmdVector2_t> pFocalLength,
                                             ::ByRef<::OVR::OpenVR::HmdVector2_t> pCenter, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x40670b0, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(::ByRef<::OVR::OpenVR::HmdVector2_t> pFocalLength, ::ByRef<::OVR::OpenVR::HmdVector2_t> pCenter, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4066f94, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::ByRef<::OVR::OpenVR::HmdVector2_t> pFocalLength,
                                                     ::ByRef<::OVR::OpenVR::HmdVector2_t> pCenter);

  static inline ::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4066f08, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRTrackedCamera__GetCameraIntrinsics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__GetCameraIntrinsics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRTrackedCamera__GetCameraIntrinsics(IVRTrackedCamera__GetCameraIntrinsics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__GetCameraIntrinsics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRTrackedCamera__GetCameraIntrinsics(IVRTrackedCamera__GetCameraIntrinsics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8590 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRTrackedCamera/_GetCameraProjection
class CORDL_TYPE IVRTrackedCamera__GetCameraProjection : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4067184, size 0x130, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float_t flZNear, float_t flZFar,
                                             ::ByRef<::OVR::OpenVR::HmdMatrix44_t> pProjection, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x40672b4, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(::ByRef<::OVR::OpenVR::HmdMatrix44_t> pProjection, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4067170, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float_t flZNear, float_t flZFar,
                                                     ::ByRef<::OVR::OpenVR::HmdMatrix44_t> pProjection);

  static inline ::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x40670e4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRTrackedCamera__GetCameraProjection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__GetCameraProjection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRTrackedCamera__GetCameraProjection(IVRTrackedCamera__GetCameraProjection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__GetCameraProjection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRTrackedCamera__GetCameraProjection(IVRTrackedCamera__GetCameraProjection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8591 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRTrackedCamera/_AcquireVideoStreamingService
class CORDL_TYPE IVRTrackedCamera__AcquireVideoStreamingService : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4067380, size 0xbc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t nDeviceIndex, ::ByRef<uint64_t> pHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406743c, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(::ByRef<uint64_t> pHandle, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406736c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t nDeviceIndex, ::ByRef<uint64_t> pHandle);

  static inline ::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x40672e0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRTrackedCamera__AcquireVideoStreamingService();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__AcquireVideoStreamingService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRTrackedCamera__AcquireVideoStreamingService(IVRTrackedCamera__AcquireVideoStreamingService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__AcquireVideoStreamingService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRTrackedCamera__AcquireVideoStreamingService(IVRTrackedCamera__AcquireVideoStreamingService const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8592 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRTrackedCamera/_ReleaseVideoStreamingService
class CORDL_TYPE IVRTrackedCamera__ReleaseVideoStreamingService : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4067508, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406758c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40674f4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera);

  static inline ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4067468, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRTrackedCamera__ReleaseVideoStreamingService();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__ReleaseVideoStreamingService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRTrackedCamera__ReleaseVideoStreamingService(IVRTrackedCamera__ReleaseVideoStreamingService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__ReleaseVideoStreamingService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRTrackedCamera__ReleaseVideoStreamingService(IVRTrackedCamera__ReleaseVideoStreamingService const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8593 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamFrameBuffer
class CORDL_TYPE IVRTrackedCamera__GetVideoStreamFrameBuffer : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4067654, size 0x168, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::System::IntPtr pFrameBuffer, uint32_t nFrameBufferSize,
                                             ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x40677bc, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4067640, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::System::IntPtr pFrameBuffer, uint32_t nFrameBufferSize,
                                                     ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize);

  static inline ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x40675b4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRTrackedCamera__GetVideoStreamFrameBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__GetVideoStreamFrameBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRTrackedCamera__GetVideoStreamFrameBuffer(IVRTrackedCamera__GetVideoStreamFrameBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__GetVideoStreamFrameBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRTrackedCamera__GetVideoStreamFrameBuffer(IVRTrackedCamera__GetVideoStreamFrameBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8594 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureSize
class CORDL_TYPE IVRTrackedCamera__GetVideoStreamTextureSize : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4067888, size 0x128, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds,
                                             ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x40679b0, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(::ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight,
                                                        ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4067874, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds,
                                                     ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight);

  static inline ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x40677e8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRTrackedCamera__GetVideoStreamTextureSize();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__GetVideoStreamTextureSize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRTrackedCamera__GetVideoStreamTextureSize(IVRTrackedCamera__GetVideoStreamTextureSize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__GetVideoStreamTextureSize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRTrackedCamera__GetVideoStreamTextureSize(IVRTrackedCamera__GetVideoStreamTextureSize const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8595 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureD3D11
class CORDL_TYPE IVRTrackedCamera__GetVideoStreamTextureD3D11 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4067a84, size 0x170, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::System::IntPtr pD3D11DeviceOrResource,
                                             ::ByRef<::System::IntPtr> ppD3D11ShaderResourceView, ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4067bf4, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(::ByRef<::System::IntPtr> ppD3D11ShaderResourceView, ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader,
                                                        ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4067a70, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::System::IntPtr pD3D11DeviceOrResource,
                                                     ::ByRef<::System::IntPtr> ppD3D11ShaderResourceView, ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader,
                                                     uint32_t nFrameHeaderSize);

  static inline ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x40679e4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRTrackedCamera__GetVideoStreamTextureD3D11();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__GetVideoStreamTextureD3D11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRTrackedCamera__GetVideoStreamTextureD3D11(IVRTrackedCamera__GetVideoStreamTextureD3D11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__GetVideoStreamTextureD3D11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRTrackedCamera__GetVideoStreamTextureD3D11(IVRTrackedCamera__GetVideoStreamTextureD3D11 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8596 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureGL
class CORDL_TYPE IVRTrackedCamera__GetVideoStreamTextureGL : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4067cc8, size 0x138, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::ByRef<uint32_t> pglTextureId,
                                             ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4067e00, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(::ByRef<uint32_t> pglTextureId, ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4067cb4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::ByRef<uint32_t> pglTextureId,
                                                     ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize);

  static inline ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4067c28, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRTrackedCamera__GetVideoStreamTextureGL();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__GetVideoStreamTextureGL", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRTrackedCamera__GetVideoStreamTextureGL(IVRTrackedCamera__GetVideoStreamTextureGL&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__GetVideoStreamTextureGL", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRTrackedCamera__GetVideoStreamTextureGL(IVRTrackedCamera__GetVideoStreamTextureGL const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8597 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRTrackedCamera/_ReleaseVideoStreamTextureGL
class CORDL_TYPE IVRTrackedCamera__ReleaseVideoStreamTextureGL : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4067ed4, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, uint32_t glTextureId, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4067f8c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4067ec0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, uint32_t glTextureId);

  static inline ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4067e34, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRTrackedCamera__ReleaseVideoStreamTextureGL();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__ReleaseVideoStreamTextureGL", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRTrackedCamera__ReleaseVideoStreamTextureGL(IVRTrackedCamera__ReleaseVideoStreamTextureGL&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRTrackedCamera__ReleaseVideoStreamTextureGL", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRTrackedCamera__ReleaseVideoStreamTextureGL(IVRTrackedCamera__ReleaseVideoStreamTextureGL const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8598 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.IVRTrackedCamera
struct CORDL_TYPE IVRTrackedCamera {
public:
  // Declarations
  using _AcquireVideoStreamingService = ::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService;

  using _GetCameraErrorNameFromEnum = ::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum;

  using _GetCameraFrameSize = ::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize;

  using _GetCameraIntrinsics = ::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics;

  using _GetCameraProjection = ::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection;

  using _GetVideoStreamFrameBuffer = ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer;

  using _GetVideoStreamTextureD3D11 = ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11;

  using _GetVideoStreamTextureGL = ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL;

  using _GetVideoStreamTextureSize = ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize;

  using _HasCamera = ::OVR::OpenVR::IVRTrackedCamera__HasCamera;

  using _ReleaseVideoStreamTextureGL = ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL;

  using _ReleaseVideoStreamingService = ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRTrackedCamera();

  // Ctor Parameters [CppParam { name: "GetCameraErrorNameFromEnum", ty: "::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*", modifiers: "", def_value: None }, CppParam { name: "HasCamera",
  // ty: "::OVR::OpenVR::IVRTrackedCamera__HasCamera*", modifiers: "", def_value: None }, CppParam { name: "GetCameraFrameSize", ty: "::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*", modifiers:
  // "", def_value: None }, CppParam { name: "GetCameraIntrinsics", ty: "::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*", modifiers: "", def_value: None }, CppParam { name:
  // "GetCameraProjection", ty: "::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*", modifiers: "", def_value: None }, CppParam { name: "AcquireVideoStreamingService", ty:
  // "::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*", modifiers: "", def_value: None }, CppParam { name: "ReleaseVideoStreamingService", ty:
  // "::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*", modifiers: "", def_value: None }, CppParam { name: "GetVideoStreamFrameBuffer", ty:
  // "::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*", modifiers: "", def_value: None }, CppParam { name: "GetVideoStreamTextureSize", ty:
  // "::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*", modifiers: "", def_value: None }, CppParam { name: "GetVideoStreamTextureD3D11", ty:
  // "::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*", modifiers: "", def_value: None }, CppParam { name: "GetVideoStreamTextureGL", ty:
  // "::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*", modifiers: "", def_value: None }, CppParam { name: "ReleaseVideoStreamTextureGL", ty:
  // "::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*", modifiers: "", def_value: None }]
  constexpr IVRTrackedCamera(::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum* GetCameraErrorNameFromEnum, ::OVR::OpenVR::IVRTrackedCamera__HasCamera* HasCamera,
                             ::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize* GetCameraFrameSize, ::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics* GetCameraIntrinsics,
                             ::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection* GetCameraProjection, ::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService* AcquireVideoStreamingService,
                             ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService* ReleaseVideoStreamingService,
                             ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer* GetVideoStreamFrameBuffer,
                             ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize* GetVideoStreamTextureSize,
                             ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11* GetVideoStreamTextureD3D11, ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL* GetVideoStreamTextureGL,
                             ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL* ReleaseVideoStreamTextureGL) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8599 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field GetCameraErrorNameFromEnum, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum* GetCameraErrorNameFromEnum;

  /// @brief Field HasCamera, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRTrackedCamera__HasCamera* HasCamera;

  /// @brief Field GetCameraFrameSize, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize* GetCameraFrameSize;

  /// @brief Field GetCameraIntrinsics, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics* GetCameraIntrinsics;

  /// @brief Field GetCameraProjection, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection* GetCameraProjection;

  /// @brief Field AcquireVideoStreamingService, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService* AcquireVideoStreamingService;

  /// @brief Field ReleaseVideoStreamingService, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService* ReleaseVideoStreamingService;

  /// @brief Field GetVideoStreamFrameBuffer, offset: 0x38, size: 0x8, def value: None
  ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer* GetVideoStreamFrameBuffer;

  /// @brief Field GetVideoStreamTextureSize, offset: 0x40, size: 0x8, def value: None
  ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize* GetVideoStreamTextureSize;

  /// @brief Field GetVideoStreamTextureD3D11, offset: 0x48, size: 0x8, def value: None
  ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11* GetVideoStreamTextureD3D11;

  /// @brief Field GetVideoStreamTextureGL, offset: 0x50, size: 0x8, def value: None
  ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL* GetVideoStreamTextureGL;

  /// @brief Field ReleaseVideoStreamTextureGL, offset: 0x58, size: 0x8, def value: None
  ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL* ReleaseVideoStreamTextureGL;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::IVRTrackedCamera, GetCameraErrorNameFromEnum) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRTrackedCamera, HasCamera) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRTrackedCamera, GetCameraFrameSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRTrackedCamera, GetCameraIntrinsics) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRTrackedCamera, GetCameraProjection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRTrackedCamera, AcquireVideoStreamingService) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRTrackedCamera, ReleaseVideoStreamingService) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRTrackedCamera, GetVideoStreamFrameBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRTrackedCamera, GetVideoStreamTextureSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRTrackedCamera, GetVideoStreamTextureD3D11) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRTrackedCamera, GetVideoStreamTextureGL) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRTrackedCamera, ReleaseVideoStreamTextureGL) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRTrackedCamera, 0x60>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*, "OVR.OpenVR", "IVRTrackedCamera/_AcquireVideoStreamingService");
NEED_NO_BOX(::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraErrorNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraFrameSize");
NEED_NO_BOX(::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraIntrinsics");
NEED_NO_BOX(::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraProjection");
NEED_NO_BOX(::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamFrameBuffer");
NEED_NO_BOX(::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamTextureD3D11");
NEED_NO_BOX(::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamTextureGL");
NEED_NO_BOX(::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamTextureSize");
NEED_NO_BOX(::OVR::OpenVR::IVRTrackedCamera__HasCamera);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRTrackedCamera__HasCamera*, "OVR.OpenVR", "IVRTrackedCamera/_HasCamera");
NEED_NO_BOX(::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*, "OVR.OpenVR", "IVRTrackedCamera/_ReleaseVideoStreamTextureGL");
NEED_NO_BOX(::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*, "OVR.OpenVR", "IVRTrackedCamera/_ReleaseVideoStreamingService");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRTrackedCamera, "OVR.OpenVR", "IVRTrackedCamera");
