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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRTrackedCamera::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRTrackedCamera::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x40726b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.GetCameraErrorNameFromEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OVR::OpenVR::CVRTrackedCamera::*)(::OVR::OpenVR::EVRTrackedCameraError)>(
    &::OVR::OpenVR::CVRTrackedCamera::GetCameraErrorNameFromEnum)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x40727c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "GetCameraErrorNameFromEnum", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRTrackedCameraError>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.HasCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(uint32_t, ::ByRef<bool>)>(
    &::OVR::OpenVR::CVRTrackedCamera::HasCamera)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4072848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "HasCamera", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.GetCameraFrameSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(
    uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>)>(&::OVR::OpenVR::CVRTrackedCamera::GetCameraFrameSize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x4072870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "GetCameraFrameSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRTrackedCameraFrameType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.GetCameraIntrinsics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(
    uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::ByRef<::OVR::OpenVR::HmdVector2_t>, ::ByRef<::OVR::OpenVR::HmdVector2_t>)>(&::OVR::OpenVR::CVRTrackedCamera::GetCameraIntrinsics)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40728a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "GetCameraIntrinsics", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRTrackedCameraFrameType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdVector2_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdVector2_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.GetCameraProjection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(
    uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, float_t, float_t, ::ByRef<::OVR::OpenVR::HmdMatrix44_t>)>(&::OVR::OpenVR::CVRTrackedCamera::GetCameraProjection)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40728c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "GetCameraProjection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRTrackedCameraFrameType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdMatrix44_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.AcquireVideoStreamingService
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(uint32_t, ::ByRef<uint64_t>)>(
    &::OVR::OpenVR::CVRTrackedCamera::AcquireVideoStreamingService)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40728e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(),
                                                                               "AcquireVideoStreamingService", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.ReleaseVideoStreamingService
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(uint64_t)>(
    &::OVR::OpenVR::CVRTrackedCamera::ReleaseVideoStreamingService)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4072910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "ReleaseVideoStreamingService",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.GetVideoStreamFrameBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(
    uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::System::IntPtr, uint32_t, ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint32_t)>(
    &::OVR::OpenVR::CVRTrackedCamera::GetVideoStreamFrameBuffer)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4072934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "GetVideoStreamFrameBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRTrackedCameraFrameType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.GetVideoStreamTextureSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(
    uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>)>(
    &::OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureSize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4072958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "GetVideoStreamTextureSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRTrackedCameraFrameType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VRTextureBounds_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.GetVideoStreamTextureD3D11
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(
    uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::System::IntPtr, ::ByRef<::System::IntPtr>, ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint32_t)>(
    &::OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureD3D11)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4072984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "GetVideoStreamTextureD3D11", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRTrackedCameraFrameType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.GetVideoStreamTextureGL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(
    uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::ByRef<uint32_t>, ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint32_t)>(
    &::OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureGL)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40729a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "GetVideoStreamTextureGL", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRTrackedCameraFrameType>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRTrackedCamera.ReleaseVideoStreamTextureGL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::CVRTrackedCamera::*)(uint64_t, uint32_t)>(
    &::OVR::OpenVR::CVRTrackedCamera::ReleaseVideoStreamTextureGL)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40729d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "ReleaseVideoStreamTextureGL", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pInterface);
}
inline ::StringW OVR::OpenVR::CVRTrackedCamera::GetCameraErrorNameFromEnum(::OVR::OpenVR::EVRTrackedCameraError eCameraError) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "GetCameraErrorNameFromEnum", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRTrackedCameraError>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, eCameraError);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::HasCamera(uint32_t nDeviceIndex, ::ByRef<bool> pHasCamera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "HasCamera", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, nDeviceIndex, pHasCamera);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetCameraFrameSize(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::ByRef<uint32_t> pnWidth,
                                                                                              ::ByRef<uint32_t> pnHeight, ::ByRef<uint32_t> pnFrameBufferSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "GetCameraFrameSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRTrackedCameraFrameType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetCameraIntrinsics(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                               ::ByRef<::OVR::OpenVR::HmdVector2_t> pFocalLength, ::ByRef<::OVR::OpenVR::HmdVector2_t> pCenter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "GetCameraIntrinsics", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRTrackedCameraFrameType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdVector2_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdVector2_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, nDeviceIndex, eFrameType, pFocalLength, pCenter);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetCameraProjection(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float_t flZNear,
                                                                                               float_t flZFar, ::ByRef<::OVR::OpenVR::HmdMatrix44_t> pProjection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "GetCameraProjection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRTrackedCameraFrameType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdMatrix44_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, nDeviceIndex, eFrameType, flZNear, flZFar, pProjection);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::AcquireVideoStreamingService(uint32_t nDeviceIndex, ::ByRef<uint64_t> pHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "AcquireVideoStreamingService", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, nDeviceIndex, pHandle);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::ReleaseVideoStreamingService(uint64_t hTrackedCamera) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "ReleaseVideoStreamingService",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, hTrackedCamera);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetVideoStreamFrameBuffer(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                     ::System::IntPtr pFrameBuffer, uint32_t nFrameBufferSize,
                                                                                                     ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "GetVideoStreamFrameBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRTrackedCameraFrameType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader,
                                                                                          nFrameHeaderSize);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureSize(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                     ::ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::ByRef<uint32_t> pnWidth,
                                                                                                     ::ByRef<uint32_t> pnHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "GetVideoStreamTextureSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRTrackedCameraFrameType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VRTextureBounds_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureD3D11(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                      ::System::IntPtr pD3D11DeviceOrResource, ::ByRef<::System::IntPtr> ppD3D11ShaderResourceView,
                                                                                                      ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "GetVideoStreamTextureD3D11", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRTrackedCameraFrameType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, hTrackedCamera, eFrameType, pD3D11DeviceOrResource, ppD3D11ShaderResourceView,
                                                                                          pFrameHeader, nFrameHeaderSize);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureGL(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                   ::ByRef<uint32_t> pglTextureId, ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader,
                                                                                                   uint32_t nFrameHeaderSize) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "GetVideoStreamTextureGL", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRTrackedCameraFrameType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::ReleaseVideoStreamTextureGL(uint64_t hTrackedCamera, uint32_t glTextureId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRTrackedCamera*>::get(), "ReleaseVideoStreamTextureGL", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, hTrackedCamera, glTextureId);
}
inline ::OVR::OpenVR::CVRTrackedCamera* OVR::OpenVR::CVRTrackedCamera::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::CVRTrackedCamera*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRTrackedCamera::CVRTrackedCamera() {}
