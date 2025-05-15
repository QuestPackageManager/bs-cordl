#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRSystem.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRSystem_def.hpp"
#include "OVR/OpenVR/zzzz__DistortionCoordinates_t_def.hpp"
#include "OVR/OpenVR/zzzz__EDeviceActivityLevel_def.hpp"
#include "OVR/OpenVR/zzzz__EHiddenAreaMeshType_def.hpp"
#include "OVR/OpenVR/zzzz__ETextureType_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedControllerRole_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedDeviceClass_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedDeviceProperty_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedPropertyError_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__EVRButtonId_def.hpp"
#include "OVR/OpenVR/zzzz__EVRControllerAxisType_def.hpp"
#include "OVR/OpenVR/zzzz__EVREventType_def.hpp"
#include "OVR/OpenVR/zzzz__EVREye_def.hpp"
#include "OVR/OpenVR/zzzz__EVRFirmwareError_def.hpp"
#include "OVR/OpenVR/zzzz__HiddenAreaMesh_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix44_t_def.hpp"
#include "OVR/OpenVR/zzzz__IVRSystem_def.hpp"
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4054d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::*)(::ByRef<uint32_t>, ::ByRef<uint32_t>)>(
    &::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4054df4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::*)(::ByRef<uint32_t>, ::ByRef<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x4054e08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::*)(
    ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4054eac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::Invoke(::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnWidth, pnHeight);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::BeginInvoke(::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight, ::System::AsyncCallback* callback,
                                                                                                   ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pnWidth, pnHeight, callback, object);
}
inline void OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::EndInvoke(::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnWidth, pnHeight, result);
}
inline ::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize* OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize::IVRSystem__GetRecommendedRenderTargetSize() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetProjectionMatrix._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetProjectionMatrix::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetProjectionMatrix::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4054ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetProjectionMatrix.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::HmdMatrix44_t (::OVR::OpenVR::IVRSystem__GetProjectionMatrix::*)(::OVR::OpenVR::EVREye, float_t, float_t)>(&::OVR::OpenVR::IVRSystem__GetProjectionMatrix::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4054f5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetProjectionMatrix.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetProjectionMatrix::*)(::OVR::OpenVR::EVREye, float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetProjectionMatrix::BeginInvoke)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4054f70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetProjectionMatrix.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix44_t (::OVR::OpenVR::IVRSystem__GetProjectionMatrix::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetProjectionMatrix::EndInvoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x4055044;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetProjectionMatrix::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HmdMatrix44_t OVR::OpenVR::IVRSystem__GetProjectionMatrix::Invoke(::OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix44_t, false>(this, ___internal_method, eEye, fNearZ, fFarZ);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetProjectionMatrix::BeginInvoke(::OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ, ::System::AsyncCallback* callback,
                                                                                        ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eEye, fNearZ, fFarZ, callback, object);
}
inline ::OVR::OpenVR::HmdMatrix44_t OVR::OpenVR::IVRSystem__GetProjectionMatrix::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix44_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetProjectionMatrix* OVR::OpenVR::IVRSystem__GetProjectionMatrix::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetProjectionMatrix*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetProjectionMatrix::IVRSystem__GetProjectionMatrix() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetProjectionRaw._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetProjectionRaw::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetProjectionRaw::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x405507c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetProjectionRaw.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetProjectionRaw::*)(
    ::OVR::OpenVR::EVREye, ::ByRef<float_t>, ::ByRef<float_t>, ::ByRef<float_t>, ::ByRef<float_t>)>(&::OVR::OpenVR::IVRSystem__GetProjectionRaw::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4055108;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetProjectionRaw.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetProjectionRaw::*)(::OVR::OpenVR::EVREye, ::ByRef<float_t>, ::ByRef<float_t>, ::ByRef<float_t>, ::ByRef<float_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__GetProjectionRaw::BeginInvoke)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x405511c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetProjectionRaw.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetProjectionRaw::*)(
    ::ByRef<float_t>, ::ByRef<float_t>, ::ByRef<float_t>, ::ByRef<float_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__GetProjectionRaw::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4055234;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetProjectionRaw::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSystem__GetProjectionRaw::Invoke(::OVR::OpenVR::EVREye eEye, ::ByRef<float_t> pfLeft, ::ByRef<float_t> pfRight, ::ByRef<float_t> pfTop, ::ByRef<float_t> pfBottom) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eEye, pfLeft, pfRight, pfTop, pfBottom);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetProjectionRaw::BeginInvoke(::OVR::OpenVR::EVREye eEye, ::ByRef<float_t> pfLeft, ::ByRef<float_t> pfRight, ::ByRef<float_t> pfTop,
                                                                                     ::ByRef<float_t> pfBottom, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eEye, pfLeft, pfRight, pfTop, pfBottom, callback, object);
}
inline void OVR::OpenVR::IVRSystem__GetProjectionRaw::EndInvoke(::ByRef<float_t> pfLeft, ::ByRef<float_t> pfRight, ::ByRef<float_t> pfTop, ::ByRef<float_t> pfBottom, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pfLeft, pfRight, pfTop, pfBottom, result);
}
inline ::OVR::OpenVR::IVRSystem__GetProjectionRaw* OVR::OpenVR::IVRSystem__GetProjectionRaw::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetProjectionRaw*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetProjectionRaw::IVRSystem__GetProjectionRaw() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ComputeDistortion._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__ComputeDistortion::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__ComputeDistortion::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x405525c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ComputeDistortion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ComputeDistortion.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__ComputeDistortion::*)(
    ::OVR::OpenVR::EVREye, float_t, float_t, ::ByRef<::OVR::OpenVR::DistortionCoordinates_t>)>(&::OVR::OpenVR::IVRSystem__ComputeDistortion::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40552e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ComputeDistortion*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ComputeDistortion*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ComputeDistortion.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__ComputeDistortion::*)(::OVR::OpenVR::EVREye, float_t, float_t, ::ByRef<::OVR::OpenVR::DistortionCoordinates_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__ComputeDistortion::BeginInvoke)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x40552fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ComputeDistortion*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ComputeDistortion*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ComputeDistortion.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__ComputeDistortion::*)(
    ::ByRef<::OVR::OpenVR::DistortionCoordinates_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__ComputeDistortion::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4055408;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ComputeDistortion*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ComputeDistortion*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__ComputeDistortion::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ComputeDistortion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__ComputeDistortion::Invoke(::OVR::OpenVR::EVREye eEye, float_t fU, float_t fV, ::ByRef<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ComputeDistortion*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eEye, fU, fV, pDistortionCoordinates);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__ComputeDistortion::BeginInvoke(::OVR::OpenVR::EVREye eEye, float_t fU, float_t fV,
                                                                                      ::ByRef<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates, ::System::AsyncCallback* callback,
                                                                                      ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ComputeDistortion*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eEye, fU, fV, pDistortionCoordinates, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__ComputeDistortion::EndInvoke(::ByRef<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ComputeDistortion*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pDistortionCoordinates, result);
}
inline ::OVR::OpenVR::IVRSystem__ComputeDistortion* OVR::OpenVR::IVRSystem__ComputeDistortion::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__ComputeDistortion*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__ComputeDistortion::IVRSystem__ComputeDistortion() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4055434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::*)(::OVR::OpenVR::EVREye)>(
    &::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40554c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::*)(::OVR::OpenVR::EVREye, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x40554d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::EndInvoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x4055558;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::Invoke(::OVR::OpenVR::EVREye eEye) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method, eEye);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::BeginInvoke(::OVR::OpenVR::EVREye eEye, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eEye, callback, object);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform* OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform::IVRSystem__GetEyeToHeadTransform() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4055590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::*)(::ByRef<float_t>, ::ByRef<uint64_t>)>(
    &::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4055630;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::*)(::ByRef<float_t>, ::ByRef<uint64_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x4055644;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::*)(::ByRef<float_t>, ::ByRef<uint64_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4055704;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::Invoke(::ByRef<float_t> pfSecondsSinceLastVsync, ::ByRef<uint64_t> pulFrameCounter) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pfSecondsSinceLastVsync, pulFrameCounter);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::BeginInvoke(::ByRef<float_t> pfSecondsSinceLastVsync, ::ByRef<uint64_t> pulFrameCounter,
                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pfSecondsSinceLastVsync, pulFrameCounter, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::EndInvoke(::ByRef<float_t> pfSecondsSinceLastVsync, ::ByRef<uint64_t> pulFrameCounter, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pfSecondsSinceLastVsync, pulFrameCounter, result);
}
inline ::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync* OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync::IVRSystem__GetTimeSinceLastVsync() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4055738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::*)()>(
    &::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40557c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x40557d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40557f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline int32_t OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline int32_t OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex* OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex::IVRSystem__GetD3D9AdapterIndex() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x405581c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::*)(::ByRef<int32_t>)>(
    &::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40558b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::*)(::ByRef<int32_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::BeginInvoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40558cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::*)(::ByRef<int32_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::EndInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4055958;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::Invoke(::ByRef<int32_t> pnAdapterIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnAdapterIndex);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::BeginInvoke(::ByRef<int32_t> pnAdapterIndex, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pnAdapterIndex, callback, object);
}
inline void OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::EndInvoke(::ByRef<int32_t> pnAdapterIndex, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnAdapterIndex, result);
}
inline ::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo* OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo::IVRSystem__GetDXGIOutputInfo() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetOutputDevice._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetOutputDevice::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetOutputDevice::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4055a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetOutputDevice*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetOutputDevice.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::OVR::OpenVR::IVRSystem__GetOutputDevice::*)(::ByRef<uint64_t>, ::OVR::OpenVR::ETextureType, ::System::IntPtr)>(&::OVR::OpenVR::IVRSystem__GetOutputDevice::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4055ae4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetOutputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetOutputDevice*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetOutputDevice.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetOutputDevice::*)(::ByRef<uint64_t>, ::OVR::OpenVR::ETextureType, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetOutputDevice::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4055af8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetOutputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetOutputDevice*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetOutputDevice.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetOutputDevice::*)(::ByRef<uint64_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetOutputDevice::EndInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4055be4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetOutputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetOutputDevice*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetOutputDevice::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetOutputDevice*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSystem__GetOutputDevice::Invoke(::ByRef<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, ::System::IntPtr pInstance) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetOutputDevice*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnDevice, textureType, pInstance);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetOutputDevice::BeginInvoke(::ByRef<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, ::System::IntPtr pInstance,
                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetOutputDevice*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pnDevice, textureType, pInstance, callback, object);
}
inline void OVR::OpenVR::IVRSystem__GetOutputDevice::EndInvoke(::ByRef<uint64_t> pnDevice, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetOutputDevice*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnDevice, result);
}
inline ::OVR::OpenVR::IVRSystem__GetOutputDevice* OVR::OpenVR::IVRSystem__GetOutputDevice::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetOutputDevice*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetOutputDevice::IVRSystem__GetOutputDevice() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4055c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::*)()>(&::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4055c88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4055c9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4055cbc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop* OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop::IVRSystem__IsDisplayOnDesktop() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__SetDisplayVisibility._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__SetDisplayVisibility::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__SetDisplayVisibility::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4055ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__SetDisplayVisibility.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__SetDisplayVisibility::*)(bool)>(
    &::OVR::OpenVR::IVRSystem__SetDisplayVisibility::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4055d70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__SetDisplayVisibility.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__SetDisplayVisibility::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__SetDisplayVisibility::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4055d88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__SetDisplayVisibility.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__SetDisplayVisibility::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__SetDisplayVisibility::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4055e10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__SetDisplayVisibility::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__SetDisplayVisibility::Invoke(bool bIsVisibleOnDesktop) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bIsVisibleOnDesktop);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__SetDisplayVisibility::BeginInvoke(bool bIsVisibleOnDesktop, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, bIsVisibleOnDesktop, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__SetDisplayVisibility::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__SetDisplayVisibility* OVR::OpenVR::IVRSystem__SetDisplayVisibility::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__SetDisplayVisibility*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__SetDisplayVisibility::IVRSystem__SetDisplayVisibility() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4055e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, float_t, ::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t)>(
    &::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4055ec4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::*)(::OVR::OpenVR::ETrackingUniverseOrigin, float_t,
                                                                  ::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t,
                                                                  ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::BeginInvoke)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x4055ed8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4055fd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsToPhotonsFromNow,
                                                                            ::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pTrackedDevicePoseArray,
                                                                            uint32_t unTrackedDevicePoseArrayCount) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}
inline ::System::IAsyncResult*
OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsToPhotonsFromNow,
                                                                     ::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pTrackedDevicePoseArray,
                                                                     uint32_t unTrackedDevicePoseArrayCount, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray,
                                                                             unTrackedDevicePoseArrayCount, callback, object);
}
inline void OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose* OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose::IVRSystem__GetDeviceToAbsoluteTrackingPose() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4055fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::*)()>(&::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4056064;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4056078;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4056098;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose* OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose::IVRSystem__ResetSeatedZeroPose() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::*)(
    ::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x40560a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::*)()>(
    &::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x405612c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::*)(::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4056140;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::EndInvoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x4056160;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose* OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::New_ctor(::System::Object* object,
                                                                                                                                                                    ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::*)(
    ::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4056198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::*)()>(
    &::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4056220;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::*)(::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4056234;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::EndInvoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x4056254;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose* OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::New_ctor(::System::Object* object,
                                                                                                                                                              ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x405628c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::*)(
    ::OVR::OpenVR::ETrackedDeviceClass, ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>, uint32_t, uint32_t)>(&::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4056318;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::*)(::OVR::OpenVR::ETrackedDeviceClass, ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>, uint32_t, uint32_t,
                                                                       ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x405632c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4056404;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::Invoke(::OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass,
                                                                                     ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> punTrackedDeviceIndexArray,
                                                                                     uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount,
                                                              unRelativeToTrackedDeviceIndex);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::BeginInvoke(::OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass,
                                                                                                         ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> punTrackedDeviceIndexArray,
                                                                                                         uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex,
                                                                                                         ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount,
                                                                             unRelativeToTrackedDeviceIndex, callback, object);
}
inline uint32_t OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass* OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass::IVRSystem__GetSortedTrackedDeviceIndicesOfClass() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x405642c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EDeviceActivityLevel (::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::*)(uint32_t)>(
    &::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40564b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::*)(uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x40564cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EDeviceActivityLevel (::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4056550;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EDeviceActivityLevel OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::Invoke(uint32_t unDeviceId) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EDeviceActivityLevel, false>(this, ___internal_method, unDeviceId);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::BeginInvoke(uint32_t unDeviceId, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceId, callback, object);
}
inline ::OVR::OpenVR::EDeviceActivityLevel OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EDeviceActivityLevel, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel* OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel::IVRSystem__GetTrackedDeviceActivityLevel() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ApplyTransform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__ApplyTransform::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__ApplyTransform::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4056578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ApplyTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ApplyTransform.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__ApplyTransform::*)(
    ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::IVRSystem__ApplyTransform::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4056618;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ApplyTransform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ApplyTransform*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ApplyTransform.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__ApplyTransform::*)(::ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>,
                                                 ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__ApplyTransform::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x405662c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ApplyTransform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ApplyTransform*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ApplyTransform.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__ApplyTransform::*)(
    ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__ApplyTransform::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4056704;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ApplyTransform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ApplyTransform*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__ApplyTransform::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ApplyTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSystem__ApplyTransform::Invoke(::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                                           ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pTransform) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ApplyTransform*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pOutputPose, pTrackedDevicePose, pTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__ApplyTransform::BeginInvoke(::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose,
                                                                                   ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pTransform,
                                                                                   ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ApplyTransform*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pOutputPose, pTrackedDevicePose, pTransform, callback, object);
}
inline void OVR::OpenVR::IVRSystem__ApplyTransform::EndInvoke(::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                                              ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pTransform, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ApplyTransform*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pOutputPose, pTrackedDevicePose, pTransform, result);
}
inline ::OVR::OpenVR::IVRSystem__ApplyTransform* OVR::OpenVR::IVRSystem__ApplyTransform::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__ApplyTransform*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__ApplyTransform::IVRSystem__ApplyTransform() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4056728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::*)(
    ::OVR::OpenVR::ETrackedControllerRole)>(&::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40567b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::*)(::OVR::OpenVR::ETrackedControllerRole, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x40567c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x405684c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::Invoke(::OVR::OpenVR::ETrackedControllerRole unDeviceType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unDeviceType);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::BeginInvoke(::OVR::OpenVR::ETrackedControllerRole unDeviceType, ::System::AsyncCallback* callback,
                                                                                                           ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceType, callback, object);
}
inline uint32_t OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole* OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole::IVRSystem__GetTrackedDeviceIndexForControllerRole() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4056874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ETrackedControllerRole (::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::*)(
    uint32_t)>(&::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4056900;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::*)(uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4056914;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ETrackedControllerRole (::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4056998;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::ETrackedControllerRole OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::Invoke(uint32_t unDeviceIndex) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackedControllerRole, false>(this, ___internal_method, unDeviceIndex);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, callback, object);
}
inline ::OVR::OpenVR::ETrackedControllerRole OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackedControllerRole, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex* OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex::IVRSystem__GetControllerRoleForTrackedDeviceIndex() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40569c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ETrackedDeviceClass (::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::*)(uint32_t)>(
    &::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4056a4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::*)(uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4056a60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ETrackedDeviceClass (::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4056ae4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::ETrackedDeviceClass OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::Invoke(uint32_t unDeviceIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackedDeviceClass, false>(this, ___internal_method, unDeviceIndex);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, callback, object);
}
inline ::OVR::OpenVR::ETrackedDeviceClass OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackedDeviceClass, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass* OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass::IVRSystem__GetTrackedDeviceClass() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4056b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::*)(uint32_t)>(
    &::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4056b98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::*)(uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4056bac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4056c30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::Invoke(uint32_t unDeviceIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unDeviceIndex);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected* OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected::IVRSystem__IsTrackedDeviceConnected() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4056c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4056ce4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::AsyncCallback*,
                                                               ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4056cf8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::*)(
    ::ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4056de4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                 ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                                                                                 ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, prop, pError, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::EndInvoke(::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty* OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty::IVRSystem__GetBoolTrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4056e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4056e9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::AsyncCallback*,
                                                                ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4056eb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::*)(
    ::ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4056f9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline float_t OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                  ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                                                                                  ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, prop, pError, callback, object);
}
inline float_t OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::EndInvoke(::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty* OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty::IVRSystem__GetFloatTrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4056fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4057054;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::AsyncCallback*,
                                                                ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4057068;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::*)(
    ::ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4057154;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline int32_t OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                  ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                                                                                  ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, prop, pError, callback, object);
}
inline int32_t OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::EndInvoke(::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty* OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty::IVRSystem__GetInt32TrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4057180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x405720c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::AsyncCallback*,
                                                                 ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4057220;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::*)(
    ::ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x405730c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint64_t OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                               ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                   ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                                                                                   ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, prop, pError, callback, object);
}
inline uint64_t OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::EndInvoke(::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty* OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty::IVRSystem__GetUint64TrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4057338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40573c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::AsyncCallback*,
                                                                   ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x40573d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::*)(
    ::ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x40574c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                     ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                     ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, prop, pError, callback, object);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::EndInvoke(::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty* OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty::IVRSystem__GetMatrix34TrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4057508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, uint32_t, ::System::IntPtr, uint32_t, ::ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(
    &::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4057594;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, uint32_t, ::System::IntPtr, uint32_t, ::ByRef<::OVR::OpenVR::ETrackedPropertyError>,
                                                                ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x40575a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::*)(
    ::ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40576f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType, ::System::IntPtr pBuffer,
                                                                              uint32_t unBufferSize, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType,
                                                                                                  ::System::IntPtr pBuffer, uint32_t unBufferSize, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError,
                                                                                                  ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError, callback, object);
}
inline uint32_t OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::EndInvoke(::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty* OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty::IVRSystem__GetArrayTrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4057724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::System::Text::StringBuilder*, uint32_t, ::ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(
    &::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40577b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::System::Text::StringBuilder*, uint32_t,
                                                                                                      ::ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x40577c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::*)(
    ::ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40578d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::System::Text::StringBuilder* pchValue,
                                                                               uint32_t unBufferSize, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unDeviceIndex, prop, pchValue, unBufferSize, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                   ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                                                   ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                                                                                   ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, prop, pchValue, unBufferSize, pError, callback, object);
}
inline uint32_t OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::EndInvoke(::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty* OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty::IVRSystem__GetStringTrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40578fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::*)(::OVR::OpenVR::ETrackedPropertyError)>(
    &::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4057988;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::*)(::OVR::OpenVR::ETrackedPropertyError, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x405799c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4057a20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::Invoke(::OVR::OpenVR::ETrackedPropertyError error) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, error);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::BeginInvoke(::OVR::OpenVR::ETrackedPropertyError error, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, error, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum* OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum::IVRSystem__GetPropErrorNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PollNextEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__PollNextEvent::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__PollNextEvent::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4057a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEvent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PollNextEvent.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__PollNextEvent::*)(::ByRef<::OVR::OpenVR::VREvent_t>, uint32_t)>(
    &::OVR::OpenVR::IVRSystem__PollNextEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4057ae8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEvent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEvent*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PollNextEvent.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__PollNextEvent::*)(::ByRef<::OVR::OpenVR::VREvent_t>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__PollNextEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4057afc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEvent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEvent*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PollNextEvent.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__PollNextEvent::*)(::ByRef<::OVR::OpenVR::VREvent_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__PollNextEvent::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4057bb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEvent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEvent*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__PollNextEvent::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEvent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__PollNextEvent::Invoke(::ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEvent*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pEvent, uncbVREvent);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__PollNextEvent::BeginInvoke(::ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent, ::System::AsyncCallback* callback,
                                                                                  ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEvent*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pEvent, uncbVREvent, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__PollNextEvent::EndInvoke(::ByRef<::OVR::OpenVR::VREvent_t> pEvent, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEvent*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pEvent, result);
}
inline ::OVR::OpenVR::IVRSystem__PollNextEvent* OVR::OpenVR::IVRSystem__PollNextEvent::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__PollNextEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__PollNextEvent::IVRSystem__PollNextEvent() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PollNextEventWithPose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__PollNextEventWithPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__PollNextEventWithPose::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4057be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PollNextEventWithPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__PollNextEventWithPose::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, ::ByRef<::OVR::OpenVR::VREvent_t>, uint32_t, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>)>(&::OVR::OpenVR::IVRSystem__PollNextEventWithPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4057c6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PollNextEventWithPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__PollNextEventWithPose::*)(::OVR::OpenVR::ETrackingUniverseOrigin, ::ByRef<::OVR::OpenVR::VREvent_t>, uint32_t, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>,
                                                        ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__PollNextEventWithPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x4057c80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PollNextEventWithPose.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__PollNextEventWithPose::*)(
    ::ByRef<::OVR::OpenVR::VREvent_t>, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__PollNextEventWithPose::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4057da4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__PollNextEventWithPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__PollNextEventWithPose::Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent,
                                                                  ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__PollNextEventWithPose::BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::ByRef<::OVR::OpenVR::VREvent_t> pEvent,
                                                                                          uint32_t uncbVREvent, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__PollNextEventWithPose::EndInvoke(::ByRef<::OVR::OpenVR::VREvent_t> pEvent, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                                                     ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pEvent, pTrackedDevicePose, result);
}
inline ::OVR::OpenVR::IVRSystem__PollNextEventWithPose* OVR::OpenVR::IVRSystem__PollNextEventWithPose::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__PollNextEventWithPose*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__PollNextEventWithPose::IVRSystem__PollNextEventWithPose() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4057dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::*)(::OVR::OpenVR::EVREventType)>(
    &::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4057e64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::*)(::OVR::OpenVR::EVREventType, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4057e78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4057efc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::Invoke(::OVR::OpenVR::EVREventType eType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, eType);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::BeginInvoke(::OVR::OpenVR::EVREventType eType, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eType, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum* OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum::IVRSystem__GetEventTypeNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4057f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HiddenAreaMesh_t (::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::*)(
    ::OVR::OpenVR::EVREye, ::OVR::OpenVR::EHiddenAreaMeshType)>(&::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4057fb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::*)(::OVR::OpenVR::EVREye, ::OVR::OpenVR::EHiddenAreaMeshType, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4057fc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HiddenAreaMesh_t (::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x405807c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HiddenAreaMesh_t OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::Invoke(::OVR::OpenVR::EVREye eEye, ::OVR::OpenVR::EHiddenAreaMeshType type) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HiddenAreaMesh_t, false>(this, ___internal_method, eEye, type);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::BeginInvoke(::OVR::OpenVR::EVREye eEye, ::OVR::OpenVR::EHiddenAreaMeshType type, ::System::AsyncCallback* callback,
                                                                                      ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eEye, type, callback, object);
}
inline ::OVR::OpenVR::HiddenAreaMesh_t OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HiddenAreaMesh_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh* OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh::IVRSystem__GetHiddenAreaMesh() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetControllerState::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetControllerState::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40580a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerState.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::OVR::OpenVR::IVRSystem__GetControllerState::*)(uint32_t, ::ByRef<::OVR::OpenVR::VRControllerState_t>, uint32_t)>(&::OVR::OpenVR::IVRSystem__GetControllerState::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4058134;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerState*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerState*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerState.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetControllerState::*)(uint32_t, ::ByRef<::OVR::OpenVR::VRControllerState_t>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__GetControllerState::BeginInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x4058148;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerState*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerState*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerState.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__GetControllerState::*)(
    ::ByRef<::OVR::OpenVR::VRControllerState_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__GetControllerState::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4058218;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerState*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerState*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetControllerState::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__GetControllerState::Invoke(uint32_t unControllerDeviceIndex, ::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerState*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unControllerDeviceIndex, pControllerState, unControllerStateSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetControllerState::BeginInvoke(uint32_t unControllerDeviceIndex, ::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState,
                                                                                       uint32_t unControllerStateSize, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerState*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unControllerDeviceIndex, pControllerState, unControllerStateSize, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__GetControllerState::EndInvoke(::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerState*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pControllerState, result);
}
inline ::OVR::OpenVR::IVRSystem__GetControllerState* OVR::OpenVR::IVRSystem__GetControllerState::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetControllerState*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetControllerState::IVRSystem__GetControllerState() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetControllerStateWithPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetControllerStateWithPose::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4058244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__GetControllerStateWithPose::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, uint32_t, ::ByRef<::OVR::OpenVR::VRControllerState_t>, uint32_t, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>)>(
    &::OVR::OpenVR::IVRSystem__GetControllerStateWithPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40582d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetControllerStateWithPose::*)(::OVR::OpenVR::ETrackingUniverseOrigin, uint32_t, ::ByRef<::OVR::OpenVR::VRControllerState_t>,
                                                                                                  uint32_t, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetControllerStateWithPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x40582e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__GetControllerStateWithPose::*)(
    ::ByRef<::OVR::OpenVR::VRControllerState_t>, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRSystem__GetControllerStateWithPose::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4058420;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetControllerStateWithPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__GetControllerStateWithPose::Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex,
                                                                       ::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize,
                                                                       ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetControllerStateWithPose::BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex,
                                                                                               ::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize,
                                                                                               ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::AsyncCallback* callback,
                                                                                               ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose,
                                                                             callback, object);
}
inline bool OVR::OpenVR::IVRSystem__GetControllerStateWithPose::EndInvoke(::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                                                          ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pControllerState, pTrackedDevicePose, result);
}
inline ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose* OVR::OpenVR::IVRSystem__GetControllerStateWithPose::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose::IVRSystem__GetControllerStateWithPose() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__TriggerHapticPulse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__TriggerHapticPulse::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__TriggerHapticPulse::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4058454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__TriggerHapticPulse.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__TriggerHapticPulse::*)(uint32_t, uint32_t, uint16_t)>(
    &::OVR::OpenVR::IVRSystem__TriggerHapticPulse::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40584e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__TriggerHapticPulse.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__TriggerHapticPulse::*)(uint32_t, uint32_t, uint16_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__TriggerHapticPulse::BeginInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x40584f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__TriggerHapticPulse.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__TriggerHapticPulse::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__TriggerHapticPulse::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x40585c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__TriggerHapticPulse::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSystem__TriggerHapticPulse::Invoke(uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__TriggerHapticPulse::BeginInvoke(uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec,
                                                                                       ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unControllerDeviceIndex, unAxisId, usDurationMicroSec, callback, object);
}
inline void OVR::OpenVR::IVRSystem__TriggerHapticPulse::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__TriggerHapticPulse* OVR::OpenVR::IVRSystem__TriggerHapticPulse::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__TriggerHapticPulse*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__TriggerHapticPulse::IVRSystem__TriggerHapticPulse() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40585d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::*)(::OVR::OpenVR::EVRButtonId)>(
    &::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x405865c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::*)(::OVR::OpenVR::EVRButtonId, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4058670;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40586f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::Invoke(::OVR::OpenVR::EVRButtonId eButtonId) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, eButtonId);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::BeginInvoke(::OVR::OpenVR::EVRButtonId eButtonId, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eButtonId, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum* OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum::IVRSystem__GetButtonIdNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x405871c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::*)(
    ::OVR::OpenVR::EVRControllerAxisType)>(&::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40587a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::*)(::OVR::OpenVR::EVRControllerAxisType, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x40587bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4058840;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::Invoke(::OVR::OpenVR::EVRControllerAxisType eAxisType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, eAxisType);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::BeginInvoke(::OVR::OpenVR::EVRControllerAxisType eAxisType, ::System::AsyncCallback* callback,
                                                                                                      ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eAxisType, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum* OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum::IVRSystem__GetControllerAxisTypeNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsInputAvailable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__IsInputAvailable::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__IsInputAvailable::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4058868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsInputAvailable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsInputAvailable.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__IsInputAvailable::*)()>(&::OVR::OpenVR::IVRSystem__IsInputAvailable::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40588f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsInputAvailable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsInputAvailable*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsInputAvailable.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__IsInputAvailable::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSystem__IsInputAvailable::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4058904;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsInputAvailable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsInputAvailable*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsInputAvailable.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__IsInputAvailable::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__IsInputAvailable::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4058924;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsInputAvailable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsInputAvailable*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__IsInputAvailable::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsInputAvailable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__IsInputAvailable::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsInputAvailable*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__IsInputAvailable::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsInputAvailable*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__IsInputAvailable::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsInputAvailable*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__IsInputAvailable* OVR::OpenVR::IVRSystem__IsInputAvailable::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__IsInputAvailable*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__IsInputAvailable::IVRSystem__IsInputAvailable() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x405894c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::*)()>(
    &::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40589d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x40589e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4058a08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers* OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers::IVRSystem__IsSteamVRDrawingControllers() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ShouldApplicationPause._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__ShouldApplicationPause::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__ShouldApplicationPause::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4058a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ShouldApplicationPause.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__ShouldApplicationPause::*)()>(
    &::OVR::OpenVR::IVRSystem__ShouldApplicationPause::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4058ab8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ShouldApplicationPause.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__ShouldApplicationPause::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__ShouldApplicationPause::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4058acc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ShouldApplicationPause.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__ShouldApplicationPause::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__ShouldApplicationPause::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4058aec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__ShouldApplicationPause::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__ShouldApplicationPause::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__ShouldApplicationPause::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__ShouldApplicationPause::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__ShouldApplicationPause* OVR::OpenVR::IVRSystem__ShouldApplicationPause::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__ShouldApplicationPause*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__ShouldApplicationPause::IVRSystem__ShouldApplicationPause() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4058b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::*)()>(
    &::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4058b9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4058bb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4058bd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork* OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork::IVRSystem__ShouldApplicationReduceRenderingWork() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__DriverDebugRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__DriverDebugRequest::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__DriverDebugRequest::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4058bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__DriverDebugRequest.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (::OVR::OpenVR::IVRSystem__DriverDebugRequest::*)(uint32_t, ::StringW, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::IVRSystem__DriverDebugRequest::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4058c84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__DriverDebugRequest.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSystem__DriverDebugRequest::*)(uint32_t, ::StringW, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSystem__DriverDebugRequest::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x4058c98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__DriverDebugRequest.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRSystem__DriverDebugRequest::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__DriverDebugRequest::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4058d4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__DriverDebugRequest::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRSystem__DriverDebugRequest::Invoke(uint32_t unDeviceIndex, ::StringW pchRequest, ::System::Text::StringBuilder* pchResponseBuffer, uint32_t unResponseBufferSize) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__DriverDebugRequest::BeginInvoke(uint32_t unDeviceIndex, ::StringW pchRequest, ::System::Text::StringBuilder* pchResponseBuffer,
                                                                                       uint32_t unResponseBufferSize, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize, callback, object);
}
inline uint32_t OVR::OpenVR::IVRSystem__DriverDebugRequest::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__DriverDebugRequest* OVR::OpenVR::IVRSystem__DriverDebugRequest::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__DriverDebugRequest*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__DriverDebugRequest::IVRSystem__DriverDebugRequest() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4058d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRFirmwareError (::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::*)(uint32_t)>(
    &::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4058e00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::*)(uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4058e14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRFirmwareError (::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4058e98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRFirmwareError OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::Invoke(uint32_t unDeviceIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRFirmwareError, false>(this, ___internal_method, unDeviceIndex);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, callback, object);
}
inline ::OVR::OpenVR::EVRFirmwareError OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRFirmwareError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate* OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate::IVRSystem__PerformFirmwareUpdate() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4058ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::*)()>(
    &::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4058f48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4058f5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4058f7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting* OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting::IVRSystem__AcknowledgeQuit_Exiting() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4058f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::*)()>(
    &::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4059010;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4059024;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4059044;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt* OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt::IVRSystem__AcknowledgeQuit_UserPrompt() {}
// Ctor Parameters [CppParam { name: "GetRecommendedRenderTargetSize", ty: "::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetProjectionMatrix", ty: "::OVR::OpenVR::IVRSystem__GetProjectionMatrix*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetProjectionRaw", ty:
// "::OVR::OpenVR::IVRSystem__GetProjectionRaw*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ComputeDistortion", ty: "::OVR::OpenVR::IVRSystem__ComputeDistortion*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "GetEyeToHeadTransform", ty: "::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetTimeSinceLastVsync", ty: "::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetD3D9AdapterIndex", ty:
// "::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetDXGIOutputInfo", ty: "::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "GetOutputDevice", ty: "::OVR::OpenVR::IVRSystem__GetOutputDevice*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsDisplayOnDesktop", ty:
// "::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetDisplayVisibility", ty: "::OVR::OpenVR::IVRSystem__SetDisplayVisibility*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "GetDeviceToAbsoluteTrackingPose", ty: "::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "ResetSeatedZeroPose", ty: "::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetSeatedZeroPoseToStandingAbsoluteTrackingPose", ty:
// "::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetRawZeroPoseToStandingAbsoluteTrackingPose", ty:
// "::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetSortedTrackedDeviceIndicesOfClass", ty:
// "::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetTrackedDeviceActivityLevel", ty:
// "::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ApplyTransform", ty: "::OVR::OpenVR::IVRSystem__ApplyTransform*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "GetTrackedDeviceIndexForControllerRole", ty: "::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "GetControllerRoleForTrackedDeviceIndex", ty: "::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetTrackedDeviceClass", ty: "::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsTrackedDeviceConnected", ty:
// "::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetBoolTrackedDeviceProperty", ty:
// "::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetFloatTrackedDeviceProperty", ty:
// "::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetInt32TrackedDeviceProperty", ty:
// "::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetUint64TrackedDeviceProperty", ty:
// "::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetMatrix34TrackedDeviceProperty", ty:
// "::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetArrayTrackedDeviceProperty", ty:
// "::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetStringTrackedDeviceProperty", ty:
// "::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetPropErrorNameFromEnum", ty:
// "::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*", modifiers: "", def_value: Some("{}") }, CppParam { name: "PollNextEvent", ty: "::OVR::OpenVR::IVRSystem__PollNextEvent*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "PollNextEventWithPose", ty: "::OVR::OpenVR::IVRSystem__PollNextEventWithPose*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetEventTypeNameFromEnum", ty: "::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetHiddenAreaMesh", ty:
// "::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetControllerState", ty: "::OVR::OpenVR::IVRSystem__GetControllerState*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "GetControllerStateWithPose", ty: "::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "TriggerHapticPulse", ty: "::OVR::OpenVR::IVRSystem__TriggerHapticPulse*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetButtonIdNameFromEnum", ty:
// "::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetControllerAxisTypeNameFromEnum", ty:
// "::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsInputAvailable", ty: "::OVR::OpenVR::IVRSystem__IsInputAvailable*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "IsSteamVRDrawingControllers", ty: "::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "ShouldApplicationPause", ty: "::OVR::OpenVR::IVRSystem__ShouldApplicationPause*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ShouldApplicationReduceRenderingWork",
// ty: "::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*", modifiers: "", def_value: Some("{}") }, CppParam { name: "DriverDebugRequest", ty:
// "::OVR::OpenVR::IVRSystem__DriverDebugRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "PerformFirmwareUpdate", ty: "::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "AcknowledgeQuit_Exiting", ty: "::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "AcknowledgeQuit_UserPrompt", ty: "::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IVRSystem::IVRSystem(
    ::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize* GetRecommendedRenderTargetSize, ::OVR::OpenVR::IVRSystem__GetProjectionMatrix* GetProjectionMatrix,
    ::OVR::OpenVR::IVRSystem__GetProjectionRaw* GetProjectionRaw, ::OVR::OpenVR::IVRSystem__ComputeDistortion* ComputeDistortion,
    ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform* GetEyeToHeadTransform, ::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync* GetTimeSinceLastVsync,
    ::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex* GetD3D9AdapterIndex, ::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo* GetDXGIOutputInfo, ::OVR::OpenVR::IVRSystem__GetOutputDevice* GetOutputDevice,
    ::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop* IsDisplayOnDesktop, ::OVR::OpenVR::IVRSystem__SetDisplayVisibility* SetDisplayVisibility,
    ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose* GetDeviceToAbsoluteTrackingPose, ::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose* ResetSeatedZeroPose,
    ::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose* GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
    ::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose* GetRawZeroPoseToStandingAbsoluteTrackingPose,
    ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass* GetSortedTrackedDeviceIndicesOfClass, ::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel* GetTrackedDeviceActivityLevel,
    ::OVR::OpenVR::IVRSystem__ApplyTransform* ApplyTransform, ::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole* GetTrackedDeviceIndexForControllerRole,
    ::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex* GetControllerRoleForTrackedDeviceIndex, ::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass* GetTrackedDeviceClass,
    ::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected* IsTrackedDeviceConnected, ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty* GetBoolTrackedDeviceProperty,
    ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty* GetFloatTrackedDeviceProperty, ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty* GetInt32TrackedDeviceProperty,
    ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty* GetUint64TrackedDeviceProperty, ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty* GetMatrix34TrackedDeviceProperty,
    ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty* GetArrayTrackedDeviceProperty, ::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty* GetStringTrackedDeviceProperty,
    ::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum* GetPropErrorNameFromEnum, ::OVR::OpenVR::IVRSystem__PollNextEvent* PollNextEvent,
    ::OVR::OpenVR::IVRSystem__PollNextEventWithPose* PollNextEventWithPose, ::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum* GetEventTypeNameFromEnum,
    ::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh* GetHiddenAreaMesh, ::OVR::OpenVR::IVRSystem__GetControllerState* GetControllerState,
    ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose* GetControllerStateWithPose, ::OVR::OpenVR::IVRSystem__TriggerHapticPulse* TriggerHapticPulse,
    ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum* GetButtonIdNameFromEnum, ::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum* GetControllerAxisTypeNameFromEnum,
    ::OVR::OpenVR::IVRSystem__IsInputAvailable* IsInputAvailable, ::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers* IsSteamVRDrawingControllers,
    ::OVR::OpenVR::IVRSystem__ShouldApplicationPause* ShouldApplicationPause, ::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork* ShouldApplicationReduceRenderingWork,
    ::OVR::OpenVR::IVRSystem__DriverDebugRequest* DriverDebugRequest, ::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate* PerformFirmwareUpdate,
    ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting* AcknowledgeQuit_Exiting, ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt* AcknowledgeQuit_UserPrompt) noexcept {
  this->GetRecommendedRenderTargetSize = GetRecommendedRenderTargetSize;
  this->GetProjectionMatrix = GetProjectionMatrix;
  this->GetProjectionRaw = GetProjectionRaw;
  this->ComputeDistortion = ComputeDistortion;
  this->GetEyeToHeadTransform = GetEyeToHeadTransform;
  this->GetTimeSinceLastVsync = GetTimeSinceLastVsync;
  this->GetD3D9AdapterIndex = GetD3D9AdapterIndex;
  this->GetDXGIOutputInfo = GetDXGIOutputInfo;
  this->GetOutputDevice = GetOutputDevice;
  this->IsDisplayOnDesktop = IsDisplayOnDesktop;
  this->SetDisplayVisibility = SetDisplayVisibility;
  this->GetDeviceToAbsoluteTrackingPose = GetDeviceToAbsoluteTrackingPose;
  this->ResetSeatedZeroPose = ResetSeatedZeroPose;
  this->GetSeatedZeroPoseToStandingAbsoluteTrackingPose = GetSeatedZeroPoseToStandingAbsoluteTrackingPose;
  this->GetRawZeroPoseToStandingAbsoluteTrackingPose = GetRawZeroPoseToStandingAbsoluteTrackingPose;
  this->GetSortedTrackedDeviceIndicesOfClass = GetSortedTrackedDeviceIndicesOfClass;
  this->GetTrackedDeviceActivityLevel = GetTrackedDeviceActivityLevel;
  this->ApplyTransform = ApplyTransform;
  this->GetTrackedDeviceIndexForControllerRole = GetTrackedDeviceIndexForControllerRole;
  this->GetControllerRoleForTrackedDeviceIndex = GetControllerRoleForTrackedDeviceIndex;
  this->GetTrackedDeviceClass = GetTrackedDeviceClass;
  this->IsTrackedDeviceConnected = IsTrackedDeviceConnected;
  this->GetBoolTrackedDeviceProperty = GetBoolTrackedDeviceProperty;
  this->GetFloatTrackedDeviceProperty = GetFloatTrackedDeviceProperty;
  this->GetInt32TrackedDeviceProperty = GetInt32TrackedDeviceProperty;
  this->GetUint64TrackedDeviceProperty = GetUint64TrackedDeviceProperty;
  this->GetMatrix34TrackedDeviceProperty = GetMatrix34TrackedDeviceProperty;
  this->GetArrayTrackedDeviceProperty = GetArrayTrackedDeviceProperty;
  this->GetStringTrackedDeviceProperty = GetStringTrackedDeviceProperty;
  this->GetPropErrorNameFromEnum = GetPropErrorNameFromEnum;
  this->PollNextEvent = PollNextEvent;
  this->PollNextEventWithPose = PollNextEventWithPose;
  this->GetEventTypeNameFromEnum = GetEventTypeNameFromEnum;
  this->GetHiddenAreaMesh = GetHiddenAreaMesh;
  this->GetControllerState = GetControllerState;
  this->GetControllerStateWithPose = GetControllerStateWithPose;
  this->TriggerHapticPulse = TriggerHapticPulse;
  this->GetButtonIdNameFromEnum = GetButtonIdNameFromEnum;
  this->GetControllerAxisTypeNameFromEnum = GetControllerAxisTypeNameFromEnum;
  this->IsInputAvailable = IsInputAvailable;
  this->IsSteamVRDrawingControllers = IsSteamVRDrawingControllers;
  this->ShouldApplicationPause = ShouldApplicationPause;
  this->ShouldApplicationReduceRenderingWork = ShouldApplicationReduceRenderingWork;
  this->DriverDebugRequest = DriverDebugRequest;
  this->PerformFirmwareUpdate = PerformFirmwareUpdate;
  this->AcknowledgeQuit_Exiting = AcknowledgeQuit_Exiting;
  this->AcknowledgeQuit_UserPrompt = AcknowledgeQuit_UserPrompt;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSystem::IVRSystem() {}
