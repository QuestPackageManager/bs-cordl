#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRTrackedCamera.hpp"
#include "OVR/OpenVR/zzzz__IVRTrackedCamera_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRTrackedCamera_def.hpp"
#include "OVR/OpenVR/zzzz__CameraVideoStreamFrameHeader_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVRTrackedCameraError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRTrackedCameraFrameType_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix44_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector2_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRTextureBounds_t_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRTrackedCamera::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRTrackedCamera::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e41cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.GetCameraErrorNameFromEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OVR::OpenVR::CVRTrackedCamera::*)(::OVR::OpenVR::EVRTrackedCameraError)>(
    &::OVR::OpenVR::CVRTrackedCamera::GetCameraErrorNameFromEnum)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e41db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(), { "GetCameraErrorNameFromEnum", {}, { ::i2c::type_of<::OVR::OpenVR::EVRTrackedCameraError>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.HasCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(uint32_t, ::by_ref<bool>)>(
    &::OVR::OpenVR::CVRTrackedCamera::HasCamera)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e41e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(), { "HasCamera", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.GetCameraFrameSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(
    uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(&::OVR::OpenVR::CVRTrackedCamera::GetCameraFrameSize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e41e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(),
                                                             { "GetCameraFrameSize",
                                                               {},
                                                               { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::EVRTrackedCameraFrameType>(), ::i2c::type_of<::by_ref<uint32_t>>(),
                                                                 ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.GetCameraIntrinsics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(
    uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::by_ref<::OVR::OpenVR::HmdVector2_t>, ::by_ref<::OVR::OpenVR::HmdVector2_t>)>(&::OVR::OpenVR::CVRTrackedCamera::GetCameraIntrinsics)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e41e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(),
                                                             { "GetCameraIntrinsics",
                                                               {},
                                                               { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::EVRTrackedCameraFrameType>(),
                                                                 ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdVector2_t>>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdVector2_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.GetCameraProjection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(
    uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, float_t, float_t, ::by_ref<::OVR::OpenVR::HmdMatrix44_t>)>(&::OVR::OpenVR::CVRTrackedCamera::GetCameraProjection)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e41eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(), { "GetCameraProjection",
                                                                                   {},
                                                                                   { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::EVRTrackedCameraFrameType>(), ::i2c::type_of<float_t>(),
                                                                                     ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix44_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.AcquireVideoStreamingService
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(uint32_t, ::by_ref<uint64_t>)>(
    &::OVR::OpenVR::CVRTrackedCamera::AcquireVideoStreamingService)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e41ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(), { "AcquireVideoStreamingService", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.ReleaseVideoStreamingService
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(uint64_t)>(
    &::OVR::OpenVR::CVRTrackedCamera::ReleaseVideoStreamingService)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e41ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(), { "ReleaseVideoStreamingService", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.GetVideoStreamFrameBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(
    uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::System::IntPtr, uint32_t, ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint32_t)>(
    &::OVR::OpenVR::CVRTrackedCamera::GetVideoStreamFrameBuffer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e41f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(),
                                                { "GetVideoStreamFrameBuffer",
                                                  {},
                                                  { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::EVRTrackedCameraFrameType>(), ::i2c::type_of<::System::IntPtr>(),
                                                    ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.GetVideoStreamTextureSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(
    uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::by_ref<::OVR::OpenVR::VRTextureBounds_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e41f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(),
                                                { "GetVideoStreamTextureSize",
                                                  {},
                                                  { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::EVRTrackedCameraFrameType>(),
                                                    ::i2c::type_of<::by_ref<::OVR::OpenVR::VRTextureBounds_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.GetVideoStreamTextureD3D11
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(
    uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::System::IntPtr, ::by_ref<::System::IntPtr>, ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint32_t)>(
    &::OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureD3D11)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e41f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(),
                                         { "GetVideoStreamTextureD3D11",
                                           {},
                                           { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::EVRTrackedCameraFrameType>(), ::i2c::type_of<::System::IntPtr>(),
                                             ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.GetVideoStreamTextureGL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::by_ref<uint32_t>,
                                                                                                                                 ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint32_t)>(
    &::OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureGL)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e41f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(),
                                                             { "GetVideoStreamTextureGL",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::EVRTrackedCameraFrameType>(), ::i2c::type_of<::by_ref<uint32_t>>(),
                                                                 ::i2c::type_of<::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.ReleaseVideoStreamTextureGL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(uint64_t, uint32_t)>(
    &::OVR::OpenVR::CVRTrackedCamera::ReleaseVideoStreamTextureGL)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e41fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(), { "ReleaseVideoStreamTextureGL", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRTrackedCamera& OVR::OpenVR::CVRTrackedCamera::__cordl_internal_get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRTrackedCamera const& OVR::OpenVR::CVRTrackedCamera::__cordl_internal_get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRTrackedCamera::__cordl_internal_set_FnTable(::OVR::OpenVR::IVRTrackedCamera value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FnTable = value;
}
inline void OVR::OpenVR::CVRTrackedCamera::_ctor(::System::IntPtr pInterface) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pInterface);
}
inline ::StringW OVR::OpenVR::CVRTrackedCamera::GetCameraErrorNameFromEnum(::OVR::OpenVR::EVRTrackedCameraError eCameraError) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(), { "GetCameraErrorNameFromEnum", {}, { ::i2c::type_of<::OVR::OpenVR::EVRTrackedCameraError>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, eCameraError);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::HasCamera(uint32_t nDeviceIndex, ::by_ref<bool> pHasCamera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(), { "HasCamera", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, nDeviceIndex, pHasCamera);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetCameraFrameSize(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::by_ref<uint32_t> pnWidth,
                                                                                              ::by_ref<uint32_t> pnHeight, ::by_ref<uint32_t> pnFrameBufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(),
                                                           { "GetCameraFrameSize",
                                                             {},
                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::EVRTrackedCameraFrameType>(), ::i2c::type_of<::by_ref<uint32_t>>(),
                                                               ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetCameraIntrinsics(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                               ::by_ref<::OVR::OpenVR::HmdVector2_t> pFocalLength, ::by_ref<::OVR::OpenVR::HmdVector2_t> pCenter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(),
                                                           { "GetCameraIntrinsics",
                                                             {},
                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::EVRTrackedCameraFrameType>(),
                                                               ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdVector2_t>>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdVector2_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, nDeviceIndex, eFrameType, pFocalLength, pCenter);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetCameraProjection(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float_t flZNear,
                                                                                               float_t flZFar, ::by_ref<::OVR::OpenVR::HmdMatrix44_t> pProjection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(), { "GetCameraProjection",
                                                                                 {},
                                                                                 { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::EVRTrackedCameraFrameType>(), ::i2c::type_of<float_t>(),
                                                                                   ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix44_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, nDeviceIndex, eFrameType, flZNear, flZFar, pProjection);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::AcquireVideoStreamingService(uint32_t nDeviceIndex, ::by_ref<uint64_t> pHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(), { "AcquireVideoStreamingService", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, nDeviceIndex, pHandle);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::ReleaseVideoStreamingService(uint64_t hTrackedCamera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(), { "ReleaseVideoStreamingService", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, hTrackedCamera);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetVideoStreamFrameBuffer(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                     ::System::IntPtr pFrameBuffer, uint32_t nFrameBufferSize,
                                                                                                     ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(),
                                                           { "GetVideoStreamFrameBuffer",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::EVRTrackedCameraFrameType>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader,
                                                                                   nFrameHeaderSize);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureSize(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                     ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::by_ref<uint32_t> pnWidth,
                                                                                                     ::by_ref<uint32_t> pnHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(),
                                              { "GetVideoStreamTextureSize",
                                                {},
                                                { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::EVRTrackedCameraFrameType>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VRTextureBounds_t>>(),
                                                  ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureD3D11(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                      ::System::IntPtr pD3D11DeviceOrResource, ::by_ref<::System::IntPtr> ppD3D11ShaderResourceView,
                                                                                                      ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(),
                                       { "GetVideoStreamTextureD3D11",
                                         {},
                                         { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::EVRTrackedCameraFrameType>(), ::i2c::type_of<::System::IntPtr>(),
                                           ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, hTrackedCamera, eFrameType, pD3D11DeviceOrResource, ppD3D11ShaderResourceView,
                                                                                   pFrameHeader, nFrameHeaderSize);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureGL(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                   ::by_ref<uint32_t> pglTextureId,
                                                                                                   ::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(),
                                                           { "GetVideoStreamTextureGL",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::EVRTrackedCameraFrameType>(), ::i2c::type_of<::by_ref<uint32_t>>(),
                                                               ::i2c::type_of<::by_ref<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::ReleaseVideoStreamTextureGL(uint64_t hTrackedCamera, uint32_t glTextureId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRTrackedCamera*>(), { "ReleaseVideoStreamTextureGL", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError>(this, ___internal_method, hTrackedCamera, glTextureId);
}
inline ::OVR::OpenVR::CVRTrackedCamera* OVR::OpenVR::CVRTrackedCamera::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVRTrackedCamera*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRTrackedCamera::CVRTrackedCamera() {}
