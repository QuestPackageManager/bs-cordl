#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRTrackedCamera.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRTrackedCamera_def.hpp"
#include "OVR/OpenVR/zzzz__CameraVideoStreamFrameHeader_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVRTrackedCameraError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRTrackedCameraFrameType_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix44_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector2_t_def.hpp"
#include "OVR/OpenVR/zzzz__IVRTrackedCamera_def.hpp"
#include "OVR/OpenVR/zzzz__VRTextureBounds_t_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x405460c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::*)(
    ::OVR::OpenVR::EVRTrackedCameraError)>(&::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4054698;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::*)(::OVR::OpenVR::EVRTrackedCameraError, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x40546ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4054730;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::Invoke(::OVR::OpenVR::EVRTrackedCameraError eCameraError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, eCameraError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::BeginInvoke(::OVR::OpenVR::EVRTrackedCameraError eCameraError, ::System::AsyncCallback* callback,
                                                                                                      ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eCameraError, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum* OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum::IVRTrackedCamera__GetCameraErrorNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__HasCamera._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__HasCamera::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__HasCamera::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4054758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__HasCamera.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__HasCamera::*)(uint32_t, ::ByRef<bool>)>(
    &::OVR::OpenVR::IVRTrackedCamera__HasCamera::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40547e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__HasCamera.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRTrackedCamera__HasCamera::*)(uint32_t, ::ByRef<bool>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRTrackedCamera__HasCamera::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x40547f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__HasCamera.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__HasCamera::*)(::ByRef<bool>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRTrackedCamera__HasCamera::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40548b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__HasCamera::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__HasCamera::Invoke(uint32_t nDeviceIndex, ::ByRef<bool> pHasCamera) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, nDeviceIndex, pHasCamera);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__HasCamera::BeginInvoke(uint32_t nDeviceIndex, ::ByRef<bool> pHasCamera, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, nDeviceIndex, pHasCamera, callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__HasCamera::EndInvoke(::ByRef<bool> pHasCamera, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, pHasCamera, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__HasCamera* OVR::OpenVR::IVRTrackedCamera__HasCamera::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRTrackedCamera__HasCamera*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__HasCamera::IVRTrackedCamera__HasCamera() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40548e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::*)(
    uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>)>(&::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x405496c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::*)(uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::System::AsyncCallback*,
                                                            ::System::Object*)>(&::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::BeginInvoke)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x4054980;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::*)(
    ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4054a8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::Invoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                      ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight, ::ByRef<uint32_t> pnFrameBufferSize) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::BeginInvoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::ByRef<uint32_t> pnWidth,
                                                                                              ::ByRef<uint32_t> pnHeight, ::ByRef<uint32_t> pnFrameBufferSize, ::System::AsyncCallback* callback,
                                                                                              ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize, callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::EndInvoke(::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight, ::ByRef<uint32_t> pnFrameBufferSize,
                                                                                                         ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, pnWidth, pnHeight, pnFrameBufferSize, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize* OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize::IVRTrackedCamera__GetCameraFrameSize() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4054ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::*)(
    uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::ByRef<::OVR::OpenVR::HmdVector2_t>, ::ByRef<::OVR::OpenVR::HmdVector2_t>)>(&::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4054b4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::*)(uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::ByRef<::OVR::OpenVR::HmdVector2_t>, ::ByRef<::OVR::OpenVR::HmdVector2_t>,
                                                             ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::BeginInvoke)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x4054b60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::*)(
    ::ByRef<::OVR::OpenVR::HmdVector2_t>, ::ByRef<::OVR::OpenVR::HmdVector2_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4054c68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::Invoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                       ::ByRef<::OVR::OpenVR::HmdVector2_t> pFocalLength,
                                                                                                       ::ByRef<::OVR::OpenVR::HmdVector2_t> pCenter) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, nDeviceIndex, eFrameType, pFocalLength, pCenter);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::BeginInvoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                               ::ByRef<::OVR::OpenVR::HmdVector2_t> pFocalLength, ::ByRef<::OVR::OpenVR::HmdVector2_t> pCenter,
                                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, nDeviceIndex, eFrameType, pFocalLength, pCenter, callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::EndInvoke(::ByRef<::OVR::OpenVR::HmdVector2_t> pFocalLength,
                                                                                                          ::ByRef<::OVR::OpenVR::HmdVector2_t> pCenter, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, pFocalLength, pCenter, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics* OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics::IVRTrackedCamera__GetCameraIntrinsics() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4054c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::*)(
    uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, float_t, float_t, ::ByRef<::OVR::OpenVR::HmdMatrix44_t>)>(&::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4054d28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::*)(uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, float_t, float_t, ::ByRef<::OVR::OpenVR::HmdMatrix44_t>, ::System::AsyncCallback*,
                                                             ::System::Object*)>(&::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::BeginInvoke)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x4054d3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::*)(
    ::ByRef<::OVR::OpenVR::HmdMatrix44_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4054e6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::Invoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float_t flZNear,
                                                                                                       float_t flZFar, ::ByRef<::OVR::OpenVR::HmdMatrix44_t> pProjection) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, nDeviceIndex, eFrameType, flZNear, flZFar, pProjection);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::BeginInvoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float_t flZNear,
                                                                                               float_t flZFar, ::ByRef<::OVR::OpenVR::HmdMatrix44_t> pProjection, ::System::AsyncCallback* callback,
                                                                                               ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, nDeviceIndex, eFrameType, flZNear, flZFar, pProjection, callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::EndInvoke(::ByRef<::OVR::OpenVR::HmdMatrix44_t> pProjection, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, pProjection, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection* OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection::IVRTrackedCamera__GetCameraProjection() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4054e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::*)(
    uint32_t, ::ByRef<uint64_t>)>(&::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4054f24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::*)(uint32_t, ::ByRef<uint64_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4054f38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::*)(
    ::ByRef<uint64_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4054ff4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::Invoke(uint32_t nDeviceIndex, ::ByRef<uint64_t> pHandle) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, nDeviceIndex, pHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::BeginInvoke(uint32_t nDeviceIndex, ::ByRef<uint64_t> pHandle, ::System::AsyncCallback* callback,
                                                                                                        ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, nDeviceIndex, pHandle, callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::EndInvoke(::ByRef<uint64_t> pHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, pHandle, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService* OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService::IVRTrackedCamera__AcquireVideoStreamingService() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4055020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::*)(uint64_t)>(
    &::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40550ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x40550c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4055144;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::Invoke(uint64_t hTrackedCamera) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, hTrackedCamera);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::BeginInvoke(uint64_t hTrackedCamera, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, hTrackedCamera, callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService* OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService::IVRTrackedCamera__ReleaseVideoStreamingService() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x405516c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::*)(
    uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::System::IntPtr, uint32_t, ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint32_t)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40551f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::*)(uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::System::IntPtr, uint32_t,
                                                                   ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::BeginInvoke)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x405520c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::*)(
    ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4055374;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::Invoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                             ::System::IntPtr pFrameBuffer, uint32_t nFrameBufferSize,
                                                                                                             ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader,
                                                                                                             uint32_t nFrameHeaderSize) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader,
                                                                                          nFrameHeaderSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::BeginInvoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                     ::System::IntPtr pFrameBuffer, uint32_t nFrameBufferSize,
                                                                                                     ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize,
                                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader, nFrameHeaderSize,
                                                                             callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::EndInvoke(::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader,
                                                                                                                ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, pFrameHeader, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer* OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer::IVRTrackedCamera__GetVideoStreamFrameBuffer() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40553a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::*)(
    uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x405542c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::*)(uint32_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>,
                                                                   ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::BeginInvoke)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x4055440;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::*)(
    ::ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4055568;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::Invoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                             ::ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::ByRef<uint32_t> pnWidth,
                                                                                                             ::ByRef<uint32_t> pnHeight) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::BeginInvoke(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                     ::ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::ByRef<uint32_t> pnWidth,
                                                                                                     ::ByRef<uint32_t> pnHeight, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight, callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::EndInvoke(::ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::ByRef<uint32_t> pnWidth,
                                                                                                                ::ByRef<uint32_t> pnHeight, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, pTextureBounds, pnWidth, pnHeight, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize* OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize::IVRTrackedCamera__GetVideoStreamTextureSize() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x405559c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::*)(
    uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::System::IntPtr, ::ByRef<::System::IntPtr>, ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint32_t)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4055628;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::*)(uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::System::IntPtr, ::ByRef<::System::IntPtr>,
                                                                    ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::BeginInvoke)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x405563c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::*)(
    ::ByRef<::System::IntPtr>, ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x40557ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::Invoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                              ::System::IntPtr pD3D11DeviceOrResource,
                                                                                                              ::ByRef<::System::IntPtr> ppD3D11ShaderResourceView,
                                                                                                              ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader,
                                                                                                              uint32_t nFrameHeaderSize) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, hTrackedCamera, eFrameType, pD3D11DeviceOrResource, ppD3D11ShaderResourceView,
                                                                                          pFrameHeader, nFrameHeaderSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::BeginInvoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                      ::System::IntPtr pD3D11DeviceOrResource, ::ByRef<::System::IntPtr> ppD3D11ShaderResourceView,
                                                                                                      ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize,
                                                                                                      ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, hTrackedCamera, eFrameType, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, pFrameHeader,
                                                                             nFrameHeaderSize, callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::EndInvoke(::ByRef<::System::IntPtr> ppD3D11ShaderResourceView,
                                                                                                                 ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader,
                                                                                                                 ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, ppD3D11ShaderResourceView, pFrameHeader, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11* OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11::IVRTrackedCamera__GetVideoStreamTextureD3D11() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40557e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::*)(
    uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::ByRef<uint32_t>, ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint32_t)>(
    &::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x405586c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::*)(uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::ByRef<uint32_t>, ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>,
                                                                 uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::BeginInvoke)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x4055880;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::*)(
    ::ByRef<uint32_t>, ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x40559b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::Invoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                           ::ByRef<uint32_t> pglTextureId,
                                                                                                           ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader,
                                                                                                           uint32_t nFrameHeaderSize) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::BeginInvoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType,
                                                                                                   ::ByRef<uint32_t> pglTextureId, ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader,
                                                                                                   uint32_t nFrameHeaderSize, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize, callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError
OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::EndInvoke(::ByRef<uint32_t> pglTextureId, ::ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, pglTextureId, pFrameHeader, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL* OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL::IVRTrackedCamera__GetVideoStreamTextureGL() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40559ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::*)(
    uint64_t, uint32_t)>(&::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4055a78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::*)(uint64_t, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4055a8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4055b44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::Invoke(uint64_t hTrackedCamera, uint32_t glTextureId) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, hTrackedCamera, glTextureId);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::BeginInvoke(uint64_t hTrackedCamera, uint32_t glTextureId, ::System::AsyncCallback* callback,
                                                                                                       ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, hTrackedCamera, glTextureId, callback, object);
}
inline ::OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRTrackedCameraError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL* OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL::IVRTrackedCamera__ReleaseVideoStreamTextureGL() {}
// Ctor Parameters [CppParam { name: "GetCameraErrorNameFromEnum", ty: "::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "HasCamera", ty: "::OVR::OpenVR::IVRTrackedCamera__HasCamera*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetCameraFrameSize", ty:
// "::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetCameraIntrinsics", ty: "::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "GetCameraProjection", ty: "::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "AcquireVideoStreamingService", ty: "::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ReleaseVideoStreamingService", ty:
// "::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetVideoStreamFrameBuffer", ty:
// "::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetVideoStreamTextureSize", ty:
// "::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetVideoStreamTextureD3D11", ty:
// "::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetVideoStreamTextureGL", ty:
// "::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ReleaseVideoStreamTextureGL", ty:
// "::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IVRTrackedCamera::IVRTrackedCamera(
    ::OVR::OpenVR::IVRTrackedCamera__GetCameraErrorNameFromEnum* GetCameraErrorNameFromEnum, ::OVR::OpenVR::IVRTrackedCamera__HasCamera* HasCamera,
    ::OVR::OpenVR::IVRTrackedCamera__GetCameraFrameSize* GetCameraFrameSize, ::OVR::OpenVR::IVRTrackedCamera__GetCameraIntrinsics* GetCameraIntrinsics,
    ::OVR::OpenVR::IVRTrackedCamera__GetCameraProjection* GetCameraProjection, ::OVR::OpenVR::IVRTrackedCamera__AcquireVideoStreamingService* AcquireVideoStreamingService,
    ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamingService* ReleaseVideoStreamingService, ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamFrameBuffer* GetVideoStreamFrameBuffer,
    ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureSize* GetVideoStreamTextureSize, ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureD3D11* GetVideoStreamTextureD3D11,
    ::OVR::OpenVR::IVRTrackedCamera__GetVideoStreamTextureGL* GetVideoStreamTextureGL, ::OVR::OpenVR::IVRTrackedCamera__ReleaseVideoStreamTextureGL* ReleaseVideoStreamTextureGL) noexcept {
  this->GetCameraErrorNameFromEnum = GetCameraErrorNameFromEnum;
  this->HasCamera = HasCamera;
  this->GetCameraFrameSize = GetCameraFrameSize;
  this->GetCameraIntrinsics = GetCameraIntrinsics;
  this->GetCameraProjection = GetCameraProjection;
  this->AcquireVideoStreamingService = AcquireVideoStreamingService;
  this->ReleaseVideoStreamingService = ReleaseVideoStreamingService;
  this->GetVideoStreamFrameBuffer = GetVideoStreamFrameBuffer;
  this->GetVideoStreamTextureSize = GetVideoStreamTextureSize;
  this->GetVideoStreamTextureD3D11 = GetVideoStreamTextureD3D11;
  this->GetVideoStreamTextureGL = GetVideoStreamTextureGL;
  this->ReleaseVideoStreamTextureGL = ReleaseVideoStreamTextureGL;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRTrackedCamera::IVRTrackedCamera() {}
