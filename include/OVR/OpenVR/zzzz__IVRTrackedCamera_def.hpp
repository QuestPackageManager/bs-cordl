#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRTrackedCamera.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
struct VRTextureBounds_t;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___AcquireVideoStreamingService;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetCameraErrorNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetCameraFrameSize;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetCameraIntrinsics;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetCameraProjection;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetVideoStreamFrameBuffer;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetVideoStreamTextureD3D11;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetVideoStreamTextureGL;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetVideoStreamTextureSize;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___HasCamera;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___ReleaseVideoStreamTextureGL;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___ReleaseVideoStreamingService;
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
class __IVRTrackedCamera___AcquireVideoStreamingService;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetCameraErrorNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetCameraFrameSize;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetCameraIntrinsics;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetCameraProjection;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetVideoStreamFrameBuffer;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetVideoStreamTextureD3D11;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetVideoStreamTextureGL;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___GetVideoStreamTextureSize;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___HasCamera;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___ReleaseVideoStreamTextureGL;
}
namespace OVR::OpenVR {
class __IVRTrackedCamera___ReleaseVideoStreamingService;
}
namespace OVR::OpenVR {
struct IVRTrackedCamera;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___HasCamera);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService);
MARK_VAL_T(::OVR::OpenVR::IVRTrackedCamera);
// Type: ::_GetCameraErrorNameFromEnum
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRTrackedCamera::_GetCameraErrorNameFromEnum*
class CORDL_TYPE __IVRTrackedCamera___GetCameraErrorNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdd3e4, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRTrackedCameraError eCameraError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdd468, size 0x28, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdd3d0, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::OVR::OpenVR::EVRTrackedCameraError eCameraError);

  static inline ::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdd30c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRTrackedCamera___GetCameraErrorNameFromEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetCameraErrorNameFromEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRTrackedCamera___GetCameraErrorNameFromEnum(__IVRTrackedCamera___GetCameraErrorNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetCameraErrorNameFromEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRTrackedCamera___GetCameraErrorNameFromEnum(__IVRTrackedCamera___GetCameraErrorNameFromEnum const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_HasCamera
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRTrackedCamera::_HasCamera*
class CORDL_TYPE __IVRTrackedCamera___HasCamera : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdd568, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t nDeviceIndex, ByRef<bool> pHasCamera, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdd620, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<bool> pHasCamera, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdd554, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t nDeviceIndex, ByRef<bool> pHasCamera);

  static inline ::OVR::OpenVR::__IVRTrackedCamera___HasCamera* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdd490, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRTrackedCamera___HasCamera();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___HasCamera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRTrackedCamera___HasCamera(__IVRTrackedCamera___HasCamera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___HasCamera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRTrackedCamera___HasCamera(__IVRTrackedCamera___HasCamera const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___HasCamera, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetCameraFrameSize
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRTrackedCamera::_GetCameraFrameSize*
class CORDL_TYPE __IVRTrackedCamera___GetCameraFrameSize : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdd724, size 0x104, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight,
                                             ByRef<uint32_t> pnFrameBufferSize, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdd828, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, ByRef<uint32_t> pnFrameBufferSize, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdd710, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight,
                                                     ByRef<uint32_t> pnFrameBufferSize);

  static inline ::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdd64c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRTrackedCamera___GetCameraFrameSize();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetCameraFrameSize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRTrackedCamera___GetCameraFrameSize(__IVRTrackedCamera___GetCameraFrameSize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetCameraFrameSize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRTrackedCamera___GetCameraFrameSize(__IVRTrackedCamera___GetCameraFrameSize const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetCameraIntrinsics
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRTrackedCamera::_GetCameraIntrinsics*
class CORDL_TYPE __IVRTrackedCamera___GetCameraIntrinsics : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdd934, size 0x100, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<::OVR::OpenVR::HmdVector2_t> pFocalLength,
                                             ByRef<::OVR::OpenVR::HmdVector2_t> pCenter, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdda34, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<::OVR::OpenVR::HmdVector2_t> pFocalLength, ByRef<::OVR::OpenVR::HmdVector2_t> pCenter, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdd920, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<::OVR::OpenVR::HmdVector2_t> pFocalLength,
                                                     ByRef<::OVR::OpenVR::HmdVector2_t> pCenter);

  static inline ::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdd85c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRTrackedCamera___GetCameraIntrinsics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetCameraIntrinsics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRTrackedCamera___GetCameraIntrinsics(__IVRTrackedCamera___GetCameraIntrinsics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetCameraIntrinsics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRTrackedCamera___GetCameraIntrinsics(__IVRTrackedCamera___GetCameraIntrinsics const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetCameraProjection
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRTrackedCamera::_GetCameraProjection*
class CORDL_TYPE __IVRTrackedCamera___GetCameraProjection : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bddb40, size 0x128, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float_t flZNear, float_t flZFar,
                                             ByRef<::OVR::OpenVR::HmdMatrix44_t> pProjection, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bddc68, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix44_t> pProjection, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bddb2c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float_t flZNear, float_t flZFar,
                                                     ByRef<::OVR::OpenVR::HmdMatrix44_t> pProjection);

  static inline ::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdda68, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRTrackedCamera___GetCameraProjection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetCameraProjection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRTrackedCamera___GetCameraProjection(__IVRTrackedCamera___GetCameraProjection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetCameraProjection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRTrackedCamera___GetCameraProjection(__IVRTrackedCamera___GetCameraProjection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_AcquireVideoStreamingService
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRTrackedCamera::_AcquireVideoStreamingService*
class CORDL_TYPE __IVRTrackedCamera___AcquireVideoStreamingService : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bddd6c, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t nDeviceIndex, ByRef<uint64_t> pHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdde24, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<uint64_t> pHandle, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bddd58, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t nDeviceIndex, ByRef<uint64_t> pHandle);

  static inline ::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bddc94, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRTrackedCamera___AcquireVideoStreamingService();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___AcquireVideoStreamingService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRTrackedCamera___AcquireVideoStreamingService(__IVRTrackedCamera___AcquireVideoStreamingService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___AcquireVideoStreamingService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRTrackedCamera___AcquireVideoStreamingService(__IVRTrackedCamera___AcquireVideoStreamingService const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ReleaseVideoStreamingService
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRTrackedCamera::_ReleaseVideoStreamingService*
class CORDL_TYPE __IVRTrackedCamera___ReleaseVideoStreamingService : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bddf28, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bddfac, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bddf14, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera);

  static inline ::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdde50, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRTrackedCamera___ReleaseVideoStreamingService();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___ReleaseVideoStreamingService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRTrackedCamera___ReleaseVideoStreamingService(__IVRTrackedCamera___ReleaseVideoStreamingService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___ReleaseVideoStreamingService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRTrackedCamera___ReleaseVideoStreamingService(__IVRTrackedCamera___ReleaseVideoStreamingService const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetVideoStreamFrameBuffer
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRTrackedCamera::_GetVideoStreamFrameBuffer*
class CORDL_TYPE __IVRTrackedCamera___GetVideoStreamFrameBuffer : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bde0ac, size 0x15c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::System::IntPtr pFrameBuffer, uint32_t nFrameBufferSize,
                                             ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bde208, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bde098, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::System::IntPtr pFrameBuffer, uint32_t nFrameBufferSize,
                                                     ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize);

  static inline ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bddfd4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRTrackedCamera___GetVideoStreamFrameBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetVideoStreamFrameBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRTrackedCamera___GetVideoStreamFrameBuffer(__IVRTrackedCamera___GetVideoStreamFrameBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetVideoStreamFrameBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRTrackedCamera___GetVideoStreamFrameBuffer(__IVRTrackedCamera___GetVideoStreamFrameBuffer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetVideoStreamTextureSize
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRTrackedCamera::_GetVideoStreamTextureSize*
class CORDL_TYPE __IVRTrackedCamera___GetVideoStreamTextureSize : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bde30c, size 0x120, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds,
                                             ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bde42c, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bde2f8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds,
                                                     ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight);

  static inline ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bde234, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRTrackedCamera___GetVideoStreamTextureSize();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetVideoStreamTextureSize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRTrackedCamera___GetVideoStreamTextureSize(__IVRTrackedCamera___GetVideoStreamTextureSize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetVideoStreamTextureSize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRTrackedCamera___GetVideoStreamTextureSize(__IVRTrackedCamera___GetVideoStreamTextureSize const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetVideoStreamTextureD3D11
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRTrackedCamera::_GetVideoStreamTextureD3D11*
class CORDL_TYPE __IVRTrackedCamera___GetVideoStreamTextureD3D11 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bde538, size 0x164, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::System::IntPtr pD3D11DeviceOrResource,
                                             ByRef<::System::IntPtr> ppD3D11ShaderResourceView, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bde69c, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<::System::IntPtr> ppD3D11ShaderResourceView, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader,
                                                        ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bde524, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::System::IntPtr pD3D11DeviceOrResource,
                                                     ByRef<::System::IntPtr> ppD3D11ShaderResourceView, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize);

  static inline ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bde460, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRTrackedCamera___GetVideoStreamTextureD3D11();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetVideoStreamTextureD3D11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRTrackedCamera___GetVideoStreamTextureD3D11(__IVRTrackedCamera___GetVideoStreamTextureD3D11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetVideoStreamTextureD3D11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRTrackedCamera___GetVideoStreamTextureD3D11(__IVRTrackedCamera___GetVideoStreamTextureD3D11 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetVideoStreamTextureGL
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRTrackedCamera::_GetVideoStreamTextureGL*
class CORDL_TYPE __IVRTrackedCamera___GetVideoStreamTextureGL : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bde7a8, size 0x130, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<uint32_t> pglTextureId,
                                             ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bde8d8, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<uint32_t> pglTextureId, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bde794, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<uint32_t> pglTextureId,
                                                     ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize);

  static inline ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bde6d0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRTrackedCamera___GetVideoStreamTextureGL();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetVideoStreamTextureGL", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRTrackedCamera___GetVideoStreamTextureGL(__IVRTrackedCamera___GetVideoStreamTextureGL&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___GetVideoStreamTextureGL", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRTrackedCamera___GetVideoStreamTextureGL(__IVRTrackedCamera___GetVideoStreamTextureGL const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ReleaseVideoStreamTextureGL
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRTrackedCamera::_ReleaseVideoStreamTextureGL*
class CORDL_TYPE __IVRTrackedCamera___ReleaseVideoStreamTextureGL : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bde9e4, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, uint32_t glTextureId, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdea98, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bde9d0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, uint32_t glTextureId);

  static inline ::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bde90c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRTrackedCamera___ReleaseVideoStreamTextureGL();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___ReleaseVideoStreamTextureGL", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRTrackedCamera___ReleaseVideoStreamTextureGL(__IVRTrackedCamera___ReleaseVideoStreamTextureGL&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRTrackedCamera___ReleaseVideoStreamTextureGL", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRTrackedCamera___ReleaseVideoStreamTextureGL(__IVRTrackedCamera___ReleaseVideoStreamTextureGL const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: OVR.OpenVR::IVRTrackedCamera
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::IVRTrackedCamera
struct CORDL_TYPE IVRTrackedCamera {
public:
  // Declarations
  using _AcquireVideoStreamingService = ::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService;

  using _GetCameraErrorNameFromEnum = ::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum;

  using _GetCameraFrameSize = ::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize;

  using _GetCameraIntrinsics = ::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics;

  using _GetCameraProjection = ::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection;

  using _GetVideoStreamFrameBuffer = ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer;

  using _GetVideoStreamTextureD3D11 = ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11;

  using _GetVideoStreamTextureGL = ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL;

  using _GetVideoStreamTextureSize = ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize;

  using _HasCamera = ::OVR::OpenVR::__IVRTrackedCamera___HasCamera;

  using _ReleaseVideoStreamTextureGL = ::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL;

  using _ReleaseVideoStreamingService = ::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRTrackedCamera();

  // Ctor Parameters [CppParam { name: "GetCameraErrorNameFromEnum", ty: "::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum*", modifiers: "", def_value: None }, CppParam { name:
  // "HasCamera", ty: "::OVR::OpenVR::__IVRTrackedCamera___HasCamera*", modifiers: "", def_value: None }, CppParam { name: "GetCameraFrameSize", ty:
  // "::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize*", modifiers: "", def_value: None }, CppParam { name: "GetCameraIntrinsics", ty:
  // "::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics*", modifiers: "", def_value: None }, CppParam { name: "GetCameraProjection", ty:
  // "::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection*", modifiers: "", def_value: None }, CppParam { name: "AcquireVideoStreamingService", ty:
  // "::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService*", modifiers: "", def_value: None }, CppParam { name: "ReleaseVideoStreamingService", ty:
  // "::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService*", modifiers: "", def_value: None }, CppParam { name: "GetVideoStreamFrameBuffer", ty:
  // "::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer*", modifiers: "", def_value: None }, CppParam { name: "GetVideoStreamTextureSize", ty:
  // "::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize*", modifiers: "", def_value: None }, CppParam { name: "GetVideoStreamTextureD3D11", ty:
  // "::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11*", modifiers: "", def_value: None }, CppParam { name: "GetVideoStreamTextureGL", ty:
  // "::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL*", modifiers: "", def_value: None }, CppParam { name: "ReleaseVideoStreamTextureGL", ty:
  // "::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL*", modifiers: "", def_value: None }]
  constexpr IVRTrackedCamera(
      ::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum* GetCameraErrorNameFromEnum, ::OVR::OpenVR::__IVRTrackedCamera___HasCamera* HasCamera,
      ::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize* GetCameraFrameSize, ::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics* GetCameraIntrinsics,
      ::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection* GetCameraProjection, ::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService* AcquireVideoStreamingService,
      ::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService* ReleaseVideoStreamingService, ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer* GetVideoStreamFrameBuffer,
      ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize* GetVideoStreamTextureSize, ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11* GetVideoStreamTextureD3D11,
      ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL* GetVideoStreamTextureGL, ::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL* ReleaseVideoStreamTextureGL) noexcept;

  /// @brief Field GetCameraErrorNameFromEnum, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum* GetCameraErrorNameFromEnum;

  /// @brief Field HasCamera, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRTrackedCamera___HasCamera* HasCamera;

  /// @brief Field GetCameraFrameSize, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize* GetCameraFrameSize;

  /// @brief Field GetCameraIntrinsics, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics* GetCameraIntrinsics;

  /// @brief Field GetCameraProjection, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection* GetCameraProjection;

  /// @brief Field AcquireVideoStreamingService, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService* AcquireVideoStreamingService;

  /// @brief Field ReleaseVideoStreamingService, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService* ReleaseVideoStreamingService;

  /// @brief Field GetVideoStreamFrameBuffer, offset: 0x38, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer* GetVideoStreamFrameBuffer;

  /// @brief Field GetVideoStreamTextureSize, offset: 0x40, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize* GetVideoStreamTextureSize;

  /// @brief Field GetVideoStreamTextureD3D11, offset: 0x48, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11* GetVideoStreamTextureD3D11;

  /// @brief Field GetVideoStreamTextureGL, offset: 0x50, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL* GetVideoStreamTextureGL;

  /// @brief Field ReleaseVideoStreamTextureGL, offset: 0x58, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL* ReleaseVideoStreamTextureGL;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRTrackedCamera, 0x60>, "Size mismatch!");

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

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___AcquireVideoStreamingService*, "OVR.OpenVR", "IVRTrackedCamera/_AcquireVideoStreamingService");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___GetCameraErrorNameFromEnum*, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraErrorNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___GetCameraFrameSize*, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraFrameSize");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___GetCameraIntrinsics*, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraIntrinsics");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___GetCameraProjection*, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraProjection");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamFrameBuffer*, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamFrameBuffer");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureD3D11*, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamTextureD3D11");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureGL*, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamTextureGL");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___GetVideoStreamTextureSize*, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamTextureSize");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___HasCamera);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___HasCamera*, "OVR.OpenVR", "IVRTrackedCamera/_HasCamera");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamTextureGL*, "OVR.OpenVR", "IVRTrackedCamera/_ReleaseVideoStreamTextureGL");
NEED_NO_BOX(::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRTrackedCamera___ReleaseVideoStreamingService*, "OVR.OpenVR", "IVRTrackedCamera/_ReleaseVideoStreamingService");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRTrackedCamera, "OVR.OpenVR", "IVRTrackedCamera");
