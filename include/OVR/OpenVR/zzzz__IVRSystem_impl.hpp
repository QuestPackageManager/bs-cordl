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
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2bc4754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize::*)(ByRef<uint32_t>, ByRef<uint32_t>)>(
    &::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc482c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize::*)(ByRef<uint32_t>, ByRef<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2bc4840;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize::*)(
    ByRef<uint32_t>, ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bc48e4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize* OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize::Invoke(ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnWidth, pnHeight);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize::BeginInvoke(ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, ::System::AsyncCallback* callback,
                                                                                                      ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pnWidth, pnHeight, callback, object);
}
inline void OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize::EndInvoke(ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnWidth, pnHeight, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize::__IVRSystem___GetRecommendedRenderTargetSize() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetProjectionMatrix._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetProjectionMatrix::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetProjectionMatrix::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc4908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionMatrix*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetProjectionMatrix.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix44_t (::OVR::OpenVR::__IVRSystem___GetProjectionMatrix::*)(
    ::OVR::OpenVR::EVREye, float_t, float_t)>(&::OVR::OpenVR::__IVRSystem___GetProjectionMatrix::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc49cc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionMatrix*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionMatrix*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetProjectionMatrix.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRSystem___GetProjectionMatrix::*)(::OVR::OpenVR::EVREye, float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRSystem___GetProjectionMatrix::BeginInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2bc49e0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionMatrix*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionMatrix*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetProjectionMatrix.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix44_t (::OVR::OpenVR::__IVRSystem___GetProjectionMatrix::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___GetProjectionMatrix::EndInvoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2bc4ab0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionMatrix*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionMatrix*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetProjectionMatrix* OVR::OpenVR::__IVRSystem___GetProjectionMatrix::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetProjectionMatrix*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetProjectionMatrix::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionMatrix*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HmdMatrix44_t OVR::OpenVR::__IVRSystem___GetProjectionMatrix::Invoke(::OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionMatrix*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix44_t, false>(this, ___internal_method, eEye, fNearZ, fFarZ);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetProjectionMatrix::BeginInvoke(::OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ, ::System::AsyncCallback* callback,
                                                                                           ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionMatrix*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eEye, fNearZ, fFarZ, callback, object);
}
inline ::OVR::OpenVR::HmdMatrix44_t OVR::OpenVR::__IVRSystem___GetProjectionMatrix::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionMatrix*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix44_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetProjectionMatrix::__IVRSystem___GetProjectionMatrix() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetProjectionRaw._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetProjectionRaw::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetProjectionRaw::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc4ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionRaw*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetProjectionRaw.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetProjectionRaw::*)(
    ::OVR::OpenVR::EVREye, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>)>(&::OVR::OpenVR::__IVRSystem___GetProjectionRaw::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc4bac;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionRaw*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionRaw*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetProjectionRaw.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___GetProjectionRaw::*)(::OVR::OpenVR::EVREye, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRSystem___GetProjectionRaw::BeginInvoke)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2bc4bc0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionRaw*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionRaw*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetProjectionRaw.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetProjectionRaw::*)(
    ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSystem___GetProjectionRaw::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc4cd0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionRaw*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionRaw*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetProjectionRaw* OVR::OpenVR::__IVRSystem___GetProjectionRaw::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetProjectionRaw*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetProjectionRaw::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionRaw*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRSystem___GetProjectionRaw::Invoke(::OVR::OpenVR::EVREye eEye, ByRef<float_t> pfLeft, ByRef<float_t> pfRight, ByRef<float_t> pfTop, ByRef<float_t> pfBottom) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionRaw*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eEye, pfLeft, pfRight, pfTop, pfBottom);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetProjectionRaw::BeginInvoke(::OVR::OpenVR::EVREye eEye, ByRef<float_t> pfLeft, ByRef<float_t> pfRight, ByRef<float_t> pfTop,
                                                                                        ByRef<float_t> pfBottom, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionRaw*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eEye, pfLeft, pfRight, pfTop, pfBottom, callback, object);
}
inline void OVR::OpenVR::__IVRSystem___GetProjectionRaw::EndInvoke(ByRef<float_t> pfLeft, ByRef<float_t> pfRight, ByRef<float_t> pfTop, ByRef<float_t> pfBottom, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionRaw*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pfLeft, pfRight, pfTop, pfBottom, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetProjectionRaw::__IVRSystem___GetProjectionRaw() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ComputeDistortion._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___ComputeDistortion::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___ComputeDistortion::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc4cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ComputeDistortion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ComputeDistortion.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___ComputeDistortion::*)(
    ::OVR::OpenVR::EVREye, float_t, float_t, ByRef<::OVR::OpenVR::DistortionCoordinates_t>)>(&::OVR::OpenVR::__IVRSystem___ComputeDistortion::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc4dbc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ComputeDistortion*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ComputeDistortion*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ComputeDistortion.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___ComputeDistortion::*)(::OVR::OpenVR::EVREye, float_t, float_t, ByRef<::OVR::OpenVR::DistortionCoordinates_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRSystem___ComputeDistortion::BeginInvoke)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2bc4dd0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ComputeDistortion*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ComputeDistortion*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ComputeDistortion.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___ComputeDistortion::*)(
    ByRef<::OVR::OpenVR::DistortionCoordinates_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSystem___ComputeDistortion::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bc4ed4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ComputeDistortion*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ComputeDistortion*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___ComputeDistortion* OVR::OpenVR::__IVRSystem___ComputeDistortion::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___ComputeDistortion*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___ComputeDistortion::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ComputeDistortion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRSystem___ComputeDistortion::Invoke(::OVR::OpenVR::EVREye eEye, float_t fU, float_t fV, ByRef<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ComputeDistortion*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eEye, fU, fV, pDistortionCoordinates);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___ComputeDistortion::BeginInvoke(::OVR::OpenVR::EVREye eEye, float_t fU, float_t fV,
                                                                                         ByRef<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates, ::System::AsyncCallback* callback,
                                                                                         ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ComputeDistortion*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eEye, fU, fV, pDistortionCoordinates, callback, object);
}
inline bool OVR::OpenVR::__IVRSystem___ComputeDistortion::EndInvoke(ByRef<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ComputeDistortion*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pDistortionCoordinates, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___ComputeDistortion::__IVRSystem___ComputeDistortion() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc4f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform::*)(::OVR::OpenVR::EVREye)>(
    &::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc4fc4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform::*)(::OVR::OpenVR::EVREye, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2bc4fd8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform::EndInvoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2bc505c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform* OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform::Invoke(::OVR::OpenVR::EVREye eEye) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method, eEye);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform::BeginInvoke(::OVR::OpenVR::EVREye eEye, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eEye, callback, object);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform::__IVRSystem___GetEyeToHeadTransform() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2bc5094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync::*)(ByRef<float_t>, ByRef<uint64_t>)>(
    &::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc516c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync::*)(ByRef<float_t>, ByRef<uint64_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2bc5180;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync::*)(
    ByRef<float_t>, ByRef<uint64_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2bc5240;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync* OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync::Invoke(ByRef<float_t> pfSecondsSinceLastVsync, ByRef<uint64_t> pulFrameCounter) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pfSecondsSinceLastVsync, pulFrameCounter);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync::BeginInvoke(ByRef<float_t> pfSecondsSinceLastVsync, ByRef<uint64_t> pulFrameCounter, ::System::AsyncCallback* callback,
                                                                                             ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pfSecondsSinceLastVsync, pulFrameCounter, callback, object);
}
inline bool OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync::EndInvoke(ByRef<float_t> pfSecondsSinceLastVsync, ByRef<uint64_t> pulFrameCounter, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pfSecondsSinceLastVsync, pulFrameCounter, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync::__IVRSystem___GetTimeSinceLastVsync() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2bc5274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex::*)()>(
    &::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc5330;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2bc5344;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc5364;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex* OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline int32_t OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline int32_t OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex::__IVRSystem___GetD3D9AdapterIndex() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2bc538c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo::*)(ByRef<int32_t>)>(
    &::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc5460;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo::*)(ByRef<int32_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo::BeginInvoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2bc5474;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo::*)(ByRef<int32_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo::EndInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2bc5500;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo* OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo::Invoke(ByRef<int32_t> pnAdapterIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnAdapterIndex);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo::BeginInvoke(ByRef<int32_t> pnAdapterIndex, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pnAdapterIndex, callback, object);
}
inline void OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo::EndInvoke(ByRef<int32_t> pnAdapterIndex, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnAdapterIndex, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo::__IVRSystem___GetDXGIOutputInfo() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetOutputDevice._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetOutputDevice::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetOutputDevice::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2bc551c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetOutputDevice.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::OVR::OpenVR::__IVRSystem___GetOutputDevice::*)(ByRef<uint64_t>, ::OVR::OpenVR::ETextureType, ::System::IntPtr)>(&::OVR::OpenVR::__IVRSystem___GetOutputDevice::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc55f4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetOutputDevice.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRSystem___GetOutputDevice::*)(ByRef<uint64_t>, ::OVR::OpenVR::ETextureType, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRSystem___GetOutputDevice::BeginInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2bc5608;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetOutputDevice.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetOutputDevice::*)(ByRef<uint64_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___GetOutputDevice::EndInvoke)> {
  constexpr static std::size_t size = 0x101c;
  constexpr static std::size_t addrs = 0x2bc56f0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetOutputDevice* OVR::OpenVR::__IVRSystem___GetOutputDevice::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetOutputDevice::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRSystem___GetOutputDevice::Invoke(ByRef<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, ::System::IntPtr pInstance) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnDevice, textureType, pInstance);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetOutputDevice::BeginInvoke(ByRef<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, ::System::IntPtr pInstance,
                                                                                       ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pnDevice, textureType, pInstance, callback, object);
}
inline void OVR::OpenVR::__IVRSystem___GetOutputDevice::EndInvoke(ByRef<uint64_t> pnDevice, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnDevice, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetOutputDevice::__IVRSystem___GetOutputDevice() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2bc670c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop::*)()>(
    &::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc67c8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2bc67dc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc67fc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop* OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop::__IVRSystem___IsDisplayOnDesktop() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___SetDisplayVisibility._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___SetDisplayVisibility::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___SetDisplayVisibility::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc6824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___SetDisplayVisibility*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___SetDisplayVisibility.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___SetDisplayVisibility::*)(bool)>(
    &::OVR::OpenVR::__IVRSystem___SetDisplayVisibility::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2bc68e8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___SetDisplayVisibility*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___SetDisplayVisibility*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___SetDisplayVisibility.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___SetDisplayVisibility::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___SetDisplayVisibility::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2bc6900;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___SetDisplayVisibility*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___SetDisplayVisibility*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___SetDisplayVisibility.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___SetDisplayVisibility::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___SetDisplayVisibility::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc6988;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___SetDisplayVisibility*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___SetDisplayVisibility*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___SetDisplayVisibility* OVR::OpenVR::__IVRSystem___SetDisplayVisibility::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___SetDisplayVisibility*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___SetDisplayVisibility::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___SetDisplayVisibility*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRSystem___SetDisplayVisibility::Invoke(bool bIsVisibleOnDesktop) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___SetDisplayVisibility*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bIsVisibleOnDesktop);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___SetDisplayVisibility::BeginInvoke(bool bIsVisibleOnDesktop, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___SetDisplayVisibility*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, bIsVisibleOnDesktop, callback, object);
}
inline bool OVR::OpenVR::__IVRSystem___SetDisplayVisibility::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___SetDisplayVisibility*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___SetDisplayVisibility::__IVRSystem___SetDisplayVisibility() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc69b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, float_t, ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t)>(
    &::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc6a74;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose::*)(::OVR::OpenVR::ETrackingUniverseOrigin, float_t,
                                                                     ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t,
                                                                     ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose::BeginInvoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2bc6a88;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2bc6b78;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose* OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void
OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose::Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsToPhotonsFromNow,
                                                                   ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pTrackedDevicePoseArray,
                                                                   uint32_t unTrackedDevicePoseArrayCount) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}
inline ::System::IAsyncResult*
OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose::BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsToPhotonsFromNow,
                                                                        ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pTrackedDevicePoseArray,
                                                                        uint32_t unTrackedDevicePoseArrayCount, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray,
                                                                             unTrackedDevicePoseArrayCount, callback, object);
}
inline void OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose::__IVRSystem___GetDeviceToAbsoluteTrackingPose() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2bc6b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose::*)()>(
    &::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc6c40;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2bc6c54;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2bc6c74;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose* OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose::__IVRSystem___ResetSeatedZeroPose() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose::*)(
    ::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2bc6c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose::*)()>(
    &::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc6d3c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose::*)(::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2bc6d50;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose::EndInvoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2bc6d70;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose* OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose::New_ctor(::System::Object* object,
                                                                                                                                                                          ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose::Invoke() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose::*)(
    ::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2bc6da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose::*)()>(
    &::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc6e64;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose::*)(::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2bc6e78;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose::EndInvoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2bc6e98;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose* OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose::New_ctor(::System::Object* object,
                                                                                                                                                                    ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc6ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass::*)(
    ::OVR::OpenVR::ETrackedDeviceClass, ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>, uint32_t, uint32_t)>(&::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc6f94;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass::*)(::OVR::OpenVR::ETrackedDeviceClass, ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>,
                                                                                                               uint32_t, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass::BeginInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2bc6fa8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc7078;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass* OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass::Invoke(::OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass,
                                                                                        ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> punTrackedDeviceIndexArray,
                                                                                        uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount,
                                                              unRelativeToTrackedDeviceIndex);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass::BeginInvoke(::OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass,
                                                                                                            ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> punTrackedDeviceIndexArray,
                                                                                                            uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex,
                                                                                                            ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount,
                                                                             unRelativeToTrackedDeviceIndex, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc70a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EDeviceActivityLevel (::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel::*)(uint32_t)>(
    &::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc7164;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel::*)(uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2bc7178;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EDeviceActivityLevel (::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc71fc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel* OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EDeviceActivityLevel OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel::Invoke(uint32_t unDeviceId) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EDeviceActivityLevel, false>(this, ___internal_method, unDeviceId);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel::BeginInvoke(uint32_t unDeviceId, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceId, callback, object);
}
inline ::OVR::OpenVR::EDeviceActivityLevel OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EDeviceActivityLevel, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel::__IVRSystem___GetTrackedDeviceActivityLevel() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ApplyTransform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___ApplyTransform::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___ApplyTransform::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2bc7224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ApplyTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ApplyTransform.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___ApplyTransform::*)(
    ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::__IVRSystem___ApplyTransform::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc72fc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ApplyTransform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ApplyTransform*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ApplyTransform.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___ApplyTransform::*)(ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*,
                                                    ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___ApplyTransform::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2bc7310;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ApplyTransform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ApplyTransform*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ApplyTransform.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___ApplyTransform::*)(
    ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___ApplyTransform::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bc73e8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ApplyTransform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ApplyTransform*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___ApplyTransform* OVR::OpenVR::__IVRSystem___ApplyTransform::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___ApplyTransform*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___ApplyTransform::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ApplyTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRSystem___ApplyTransform::Invoke(ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                                              ByRef<::OVR::OpenVR::HmdMatrix34_t> pTransform) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ApplyTransform*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pOutputPose, pTrackedDevicePose, pTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___ApplyTransform::BeginInvoke(ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose,
                                                                                      ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ByRef<::OVR::OpenVR::HmdMatrix34_t> pTransform,
                                                                                      ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ApplyTransform*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pOutputPose, pTrackedDevicePose, pTransform, callback, object);
}
inline void OVR::OpenVR::__IVRSystem___ApplyTransform::EndInvoke(ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                                                 ByRef<::OVR::OpenVR::HmdMatrix34_t> pTransform, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ApplyTransform*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pOutputPose, pTrackedDevicePose, pTransform, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___ApplyTransform::__IVRSystem___ApplyTransform() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc740c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole::*)(
    ::OVR::OpenVR::ETrackedControllerRole)>(&::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc74d0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole::*)(::OVR::OpenVR::ETrackedControllerRole, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2bc74e4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc7568;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole* OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole::New_ctor(::System::Object* object,
                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole::Invoke(::OVR::OpenVR::ETrackedControllerRole unDeviceType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unDeviceType);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole::BeginInvoke(::OVR::OpenVR::ETrackedControllerRole unDeviceType, ::System::AsyncCallback* callback,
                                                                                                              ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceType, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole::__IVRSystem___GetTrackedDeviceIndexForControllerRole() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc7590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ETrackedControllerRole (::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex::*)(
    uint32_t)>(&::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc7654;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex::*)(uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2bc7668;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ETrackedControllerRole (::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc76ec;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex* OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex::New_ctor(::System::Object* object,
                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::ETrackedControllerRole OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex::Invoke(uint32_t unDeviceIndex) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackedControllerRole, false>(this, ___internal_method, unDeviceIndex);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex::BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, callback, object);
}
inline ::OVR::OpenVR::ETrackedControllerRole OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackedControllerRole, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex::__IVRSystem___GetControllerRoleForTrackedDeviceIndex() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc7714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ETrackedDeviceClass (::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass::*)(uint32_t)>(
    &::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc77d8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass::*)(uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2bc77ec;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ETrackedDeviceClass (::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc7870;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass* OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::ETrackedDeviceClass OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass::Invoke(uint32_t unDeviceIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackedDeviceClass, false>(this, ___internal_method, unDeviceIndex);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass::BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, callback, object);
}
inline ::OVR::OpenVR::ETrackedDeviceClass OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackedDeviceClass, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass::__IVRSystem___GetTrackedDeviceClass() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc7898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected::*)(uint32_t)>(
    &::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc795c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected::*)(uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2bc7970;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc79f4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected* OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected::Invoke(uint32_t unDeviceIndex) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unDeviceIndex);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected::BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, callback, object);
}
inline bool OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected::__IVRSystem___IsTrackedDeviceConnected() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc7a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc7ae0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::AsyncCallback*,
                                                                  ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2bc7af4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty::*)(
    ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bc7bdc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty* OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                    ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                                                                                    ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, prop, pError, callback, object);
}
inline bool OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty::EndInvoke(ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pError, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty::__IVRSystem___GetBoolTrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc7c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc7ccc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::AsyncCallback*,
                                                                   ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2bc7ce0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty::*)(
    ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bc7dc8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty* OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline float_t OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                     ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, prop, pError, callback, object);
}
inline float_t OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty::EndInvoke(ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, pError, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty::__IVRSystem___GetFloatTrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc7df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc7eb8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::AsyncCallback*,
                                                                   ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2bc7ecc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty::*)(
    ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bc7fb4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty* OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline int32_t OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                     ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, prop, pError, callback, object);
}
inline int32_t OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty::EndInvoke(ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, pError, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty::__IVRSystem___GetInt32TrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc7fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc80a4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::AsyncCallback*,
                                                                    ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2bc80b8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty::*)(
    ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bc81a0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty* OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint64_t OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                  ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                      ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                                                                                      ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, prop, pError, callback, object);
}
inline uint64_t OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty::EndInvoke(ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, pError, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty::__IVRSystem___GetUint64TrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc81cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc8290;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::AsyncCallback*,
                                                                      ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2bc82a4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty::*)(
    ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2bc838c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty* OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                        ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                        ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                                                                                        ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, prop, pError, callback, object);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty::EndInvoke(ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method, pError, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty::__IVRSystem___GetMatrix34TrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc83d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, uint32_t, ::System::IntPtr, uint32_t, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(
    &::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc8494;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, uint32_t, ::System::IntPtr, uint32_t, ByRef<::OVR::OpenVR::ETrackedPropertyError>,
                                                                   ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2bc84a8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::*)(
    ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bc85ec;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty* OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType, ::System::IntPtr pBuffer,
                                                                                 uint32_t unBufferSize, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType,
                                                                                                     ::System::IntPtr pBuffer, uint32_t unBufferSize,
                                                                                                     ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::EndInvoke(ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pError, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::__IVRSystem___GetArrayTrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc8618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::System::Text::StringBuilder*, uint32_t, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(
    &::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc86dc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::System::Text::StringBuilder*, uint32_t,
                                                                                                         ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2bc86f0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty::*)(
    ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bc87f4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty* OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::System::Text::StringBuilder* pchValue,
                                                                                  uint32_t unBufferSize, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unDeviceIndex, prop, pchValue, unBufferSize, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                                      ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                                                      ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                                                                                      ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, prop, pchValue, unBufferSize, pError, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty::EndInvoke(ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pError, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty::__IVRSystem___GetStringTrackedDeviceProperty() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc8820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::*)(::OVR::OpenVR::ETrackedPropertyError)>(
    &::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc88e4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::*)(::OVR::OpenVR::ETrackedPropertyError, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2bc88f8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc897c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum* OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::Invoke(::OVR::OpenVR::ETrackedPropertyError error) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, error);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::BeginInvoke(::OVR::OpenVR::ETrackedPropertyError error, ::System::AsyncCallback* callback,
                                                                                                ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, error, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::__IVRSystem___GetPropErrorNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___PollNextEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___PollNextEvent::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___PollNextEvent::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2bc89a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEvent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___PollNextEvent.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___PollNextEvent::*)(ByRef<::OVR::OpenVR::VREvent_t>, uint32_t)>(
    &::OVR::OpenVR::__IVRSystem___PollNextEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc8a7c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEvent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEvent*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___PollNextEvent.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___PollNextEvent::*)(ByRef<::OVR::OpenVR::VREvent_t>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___PollNextEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2bc8a90;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEvent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEvent*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___PollNextEvent.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___PollNextEvent::*)(ByRef<::OVR::OpenVR::VREvent_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___PollNextEvent::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bc8b48;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEvent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEvent*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___PollNextEvent* OVR::OpenVR::__IVRSystem___PollNextEvent::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___PollNextEvent*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___PollNextEvent::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEvent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRSystem___PollNextEvent::Invoke(ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEvent*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pEvent, uncbVREvent);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___PollNextEvent::BeginInvoke(ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent, ::System::AsyncCallback* callback,
                                                                                     ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEvent*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pEvent, uncbVREvent, callback, object);
}
inline bool OVR::OpenVR::__IVRSystem___PollNextEvent::EndInvoke(ByRef<::OVR::OpenVR::VREvent_t> pEvent, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEvent*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pEvent, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___PollNextEvent::__IVRSystem___PollNextEvent() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___PollNextEventWithPose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___PollNextEventWithPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___PollNextEventWithPose::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc8b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEventWithPose*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___PollNextEventWithPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___PollNextEventWithPose::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::VREvent_t>, uint32_t, ByRef<::OVR::OpenVR::TrackedDevicePose_t>)>(&::OVR::OpenVR::__IVRSystem___PollNextEventWithPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc8c38;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEventWithPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEventWithPose*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___PollNextEventWithPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___PollNextEventWithPose::*)(::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::VREvent_t>, uint32_t, ByRef<::OVR::OpenVR::TrackedDevicePose_t>,
                                                           ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___PollNextEventWithPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2bc8c4c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEventWithPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEventWithPose*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___PollNextEventWithPose.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___PollNextEventWithPose::*)(
    ByRef<::OVR::OpenVR::VREvent_t>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSystem___PollNextEventWithPose::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2bc8d68;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEventWithPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEventWithPose*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___PollNextEventWithPose* OVR::OpenVR::__IVRSystem___PollNextEventWithPose::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___PollNextEventWithPose*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___PollNextEventWithPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEventWithPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRSystem___PollNextEventWithPose::Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent,
                                                                     ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEventWithPose*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___PollNextEventWithPose::BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<::OVR::OpenVR::VREvent_t> pEvent,
                                                                                             uint32_t uncbVREvent, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEventWithPose*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose, callback, object);
}
inline bool OVR::OpenVR::__IVRSystem___PollNextEventWithPose::EndInvoke(ByRef<::OVR::OpenVR::VREvent_t> pEvent, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                                                        ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEventWithPose*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pEvent, pTrackedDevicePose, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___PollNextEventWithPose::__IVRSystem___PollNextEventWithPose() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc8d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::*)(::OVR::OpenVR::EVREventType)>(
    &::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc8e60;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::*)(::OVR::OpenVR::EVREventType, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2bc8e74;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc8ef8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum* OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::Invoke(::OVR::OpenVR::EVREventType eType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, eType);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::BeginInvoke(::OVR::OpenVR::EVREventType eType, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eType, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::__IVRSystem___GetEventTypeNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc8f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HiddenAreaMesh_t (::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh::*)(
    ::OVR::OpenVR::EVREye, ::OVR::OpenVR::EHiddenAreaMeshType)>(&::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc8fe4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh::*)(::OVR::OpenVR::EVREye, ::OVR::OpenVR::EHiddenAreaMeshType, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2bc8ff8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HiddenAreaMesh_t (::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bc90ac;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh* OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HiddenAreaMesh_t OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh::Invoke(::OVR::OpenVR::EVREye eEye, ::OVR::OpenVR::EHiddenAreaMeshType type) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HiddenAreaMesh_t, false>(this, ___internal_method, eEye, type);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh::BeginInvoke(::OVR::OpenVR::EVREye eEye, ::OVR::OpenVR::EHiddenAreaMeshType type, ::System::AsyncCallback* callback,
                                                                                         ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eEye, type, callback, object);
}
inline ::OVR::OpenVR::HiddenAreaMesh_t OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HiddenAreaMesh_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh::__IVRSystem___GetHiddenAreaMesh() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetControllerState::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetControllerState::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc90d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerState.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::OVR::OpenVR::__IVRSystem___GetControllerState::*)(uint32_t, ByRef<::OVR::OpenVR::VRControllerState_t>, uint32_t)>(&::OVR::OpenVR::__IVRSystem___GetControllerState::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc919c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerState*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerState.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___GetControllerState::*)(uint32_t, ByRef<::OVR::OpenVR::VRControllerState_t>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRSystem___GetControllerState::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2bc91b0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerState*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerState.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___GetControllerState::*)(
    ByRef<::OVR::OpenVR::VRControllerState_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSystem___GetControllerState::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bc927c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerState*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetControllerState* OVR::OpenVR::__IVRSystem___GetControllerState::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetControllerState*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetControllerState::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRSystem___GetControllerState::Invoke(uint32_t unControllerDeviceIndex, ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerState*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unControllerDeviceIndex, pControllerState, unControllerStateSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetControllerState::BeginInvoke(uint32_t unControllerDeviceIndex, ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState,
                                                                                          uint32_t unControllerStateSize, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerState*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unControllerDeviceIndex, pControllerState, unControllerStateSize, callback, object);
}
inline bool OVR::OpenVR::__IVRSystem___GetControllerState::EndInvoke(ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerState*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pControllerState, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetControllerState::__IVRSystem___GetControllerState() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc92a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, uint32_t, ByRef<::OVR::OpenVR::VRControllerState_t>, uint32_t, ByRef<::OVR::OpenVR::TrackedDevicePose_t>)>(
    &::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc936c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose::*)(::OVR::OpenVR::ETrackingUniverseOrigin, uint32_t, ByRef<::OVR::OpenVR::VRControllerState_t>,
                                                                                                     uint32_t, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2bc9380;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose::*)(
    ByRef<::OVR::OpenVR::VRControllerState_t>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2bc94b4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose* OVR::OpenVR::__IVRSystem___GetControllerStateWithPose::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetControllerStateWithPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRSystem___GetControllerStateWithPose::Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex,
                                                                          ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize,
                                                                          ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetControllerStateWithPose::BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex,
                                                                                                  ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize,
                                                                                                  ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::AsyncCallback* callback,
                                                                                                  ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose,
                                                                             callback, object);
}
inline bool OVR::OpenVR::__IVRSystem___GetControllerStateWithPose::EndInvoke(ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                                                             ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pControllerState, pTrackedDevicePose, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose::__IVRSystem___GetControllerStateWithPose() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___TriggerHapticPulse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___TriggerHapticPulse::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___TriggerHapticPulse::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc94e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___TriggerHapticPulse*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___TriggerHapticPulse.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___TriggerHapticPulse::*)(uint32_t, uint32_t, uint16_t)>(
    &::OVR::OpenVR::__IVRSystem___TriggerHapticPulse::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc95ac;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___TriggerHapticPulse*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___TriggerHapticPulse*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___TriggerHapticPulse.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___TriggerHapticPulse::*)(uint32_t, uint32_t, uint16_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___TriggerHapticPulse::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2bc95c0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___TriggerHapticPulse*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___TriggerHapticPulse*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___TriggerHapticPulse.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___TriggerHapticPulse::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___TriggerHapticPulse::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2bc968c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___TriggerHapticPulse*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___TriggerHapticPulse*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___TriggerHapticPulse* OVR::OpenVR::__IVRSystem___TriggerHapticPulse::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___TriggerHapticPulse*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___TriggerHapticPulse::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___TriggerHapticPulse*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRSystem___TriggerHapticPulse::Invoke(uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___TriggerHapticPulse*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___TriggerHapticPulse::BeginInvoke(uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec,
                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___TriggerHapticPulse*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unControllerDeviceIndex, unAxisId, usDurationMicroSec, callback, object);
}
inline void OVR::OpenVR::__IVRSystem___TriggerHapticPulse::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___TriggerHapticPulse*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___TriggerHapticPulse::__IVRSystem___TriggerHapticPulse() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc9698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::*)(::OVR::OpenVR::EVRButtonId)>(
    &::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc975c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::*)(::OVR::OpenVR::EVRButtonId, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2bc9770;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc97f4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum* OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::Invoke(::OVR::OpenVR::EVRButtonId eButtonId) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, eButtonId);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::BeginInvoke(::OVR::OpenVR::EVRButtonId eButtonId, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eButtonId, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::__IVRSystem___GetButtonIdNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc981c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::*)(
    ::OVR::OpenVR::EVRControllerAxisType)>(&::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc98e0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::*)(::OVR::OpenVR::EVRControllerAxisType, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2bc98f4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc9978;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum* OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::Invoke(::OVR::OpenVR::EVRControllerAxisType eAxisType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, eAxisType);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::BeginInvoke(::OVR::OpenVR::EVRControllerAxisType eAxisType, ::System::AsyncCallback* callback,
                                                                                                         ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eAxisType, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::__IVRSystem___GetControllerAxisTypeNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsInputAvailable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___IsInputAvailable::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___IsInputAvailable::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2bc99a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsInputAvailable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsInputAvailable.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___IsInputAvailable::*)()>(&::OVR::OpenVR::__IVRSystem___IsInputAvailable::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc9a5c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsInputAvailable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsInputAvailable*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsInputAvailable.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRSystem___IsInputAvailable::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___IsInputAvailable::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2bc9a70;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsInputAvailable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsInputAvailable*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsInputAvailable.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___IsInputAvailable::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___IsInputAvailable::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc9a90;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsInputAvailable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsInputAvailable*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___IsInputAvailable* OVR::OpenVR::__IVRSystem___IsInputAvailable::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___IsInputAvailable*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___IsInputAvailable::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsInputAvailable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRSystem___IsInputAvailable::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsInputAvailable*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___IsInputAvailable::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsInputAvailable*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::__IVRSystem___IsInputAvailable::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsInputAvailable*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___IsInputAvailable::__IVRSystem___IsInputAvailable() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2bc9ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers::*)()>(
    &::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc9b74;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2bc9b88;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc9ba8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers* OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers::__IVRSystem___IsSteamVRDrawingControllers() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ShouldApplicationPause._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___ShouldApplicationPause::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___ShouldApplicationPause::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2bc9bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationPause*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ShouldApplicationPause.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___ShouldApplicationPause::*)()>(
    &::OVR::OpenVR::__IVRSystem___ShouldApplicationPause::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc9c8c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationPause*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationPause*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ShouldApplicationPause.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___ShouldApplicationPause::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___ShouldApplicationPause::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2bc9ca0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationPause*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationPause*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ShouldApplicationPause.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___ShouldApplicationPause::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___ShouldApplicationPause::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc9cc0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationPause*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationPause*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___ShouldApplicationPause* OVR::OpenVR::__IVRSystem___ShouldApplicationPause::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___ShouldApplicationPause*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___ShouldApplicationPause::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationPause*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRSystem___ShouldApplicationPause::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationPause*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___ShouldApplicationPause::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationPause*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::__IVRSystem___ShouldApplicationPause::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationPause*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___ShouldApplicationPause::__IVRSystem___ShouldApplicationPause() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2bc9ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork::*)()>(
    &::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc9da4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork::*)(::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2bc9db8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc9dd8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork* OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork::__IVRSystem___ShouldApplicationReduceRenderingWork() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___DriverDebugRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___DriverDebugRequest::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___DriverDebugRequest::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc9e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___DriverDebugRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___DriverDebugRequest.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRSystem___DriverDebugRequest::*)(
    uint32_t, ::StringW, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::__IVRSystem___DriverDebugRequest::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc9ec4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___DriverDebugRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___DriverDebugRequest*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___DriverDebugRequest.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___DriverDebugRequest::*)(uint32_t, ::StringW, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRSystem___DriverDebugRequest::BeginInvoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2bc9ed8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___DriverDebugRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___DriverDebugRequest*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___DriverDebugRequest.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRSystem___DriverDebugRequest::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___DriverDebugRequest::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc9f84;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___DriverDebugRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___DriverDebugRequest*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___DriverDebugRequest* OVR::OpenVR::__IVRSystem___DriverDebugRequest::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___DriverDebugRequest*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___DriverDebugRequest::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___DriverDebugRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRSystem___DriverDebugRequest::Invoke(uint32_t unDeviceIndex, ::StringW pchRequest, ::System::Text::StringBuilder* pchResponseBuffer, uint32_t unResponseBufferSize) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___DriverDebugRequest*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___DriverDebugRequest::BeginInvoke(uint32_t unDeviceIndex, ::StringW pchRequest, ::System::Text::StringBuilder* pchResponseBuffer,
                                                                                          uint32_t unResponseBufferSize, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___DriverDebugRequest*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRSystem___DriverDebugRequest::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___DriverDebugRequest*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___DriverDebugRequest::__IVRSystem___DriverDebugRequest() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc9fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRFirmwareError (::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate::*)(uint32_t)>(
    &::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bca070;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate::*)(uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2bca084;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRFirmwareError (::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bca108;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate* OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRFirmwareError OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate::Invoke(uint32_t unDeviceIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRFirmwareError, false>(this, ___internal_method, unDeviceIndex);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate::BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, callback, object);
}
inline ::OVR::OpenVR::EVRFirmwareError OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRFirmwareError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate::__IVRSystem___PerformFirmwareUpdate() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2bca130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting::*)()>(
    &::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bca1ec;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2bca200;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2bca220;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting* OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting::__IVRSystem___AcknowledgeQuit_Exiting() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2bca22c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt::*)()>(
    &::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bca2e8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2bca2fc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2bca31c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt* OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt::__IVRSystem___AcknowledgeQuit_UserPrompt() {}
// Ctor Parameters [CppParam { name: "GetRecommendedRenderTargetSize", ty: "::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "GetProjectionMatrix", ty: "::OVR::OpenVR::__IVRSystem___GetProjectionMatrix*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetProjectionRaw", ty:
// "::OVR::OpenVR::__IVRSystem___GetProjectionRaw*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ComputeDistortion", ty: "::OVR::OpenVR::__IVRSystem___ComputeDistortion*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetEyeToHeadTransform", ty: "::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "GetTimeSinceLastVsync", ty: "::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetD3D9AdapterIndex", ty:
// "::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetDXGIOutputInfo", ty: "::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOutputDevice", ty: "::OVR::OpenVR::__IVRSystem___GetOutputDevice*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "IsDisplayOnDesktop", ty: "::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetDisplayVisibility", ty:
// "::OVR::OpenVR::__IVRSystem___SetDisplayVisibility*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetDeviceToAbsoluteTrackingPose", ty:
// "::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ResetSeatedZeroPose", ty:
// "::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetSeatedZeroPoseToStandingAbsoluteTrackingPose", ty:
// "::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetRawZeroPoseToStandingAbsoluteTrackingPose", ty:
// "::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetSortedTrackedDeviceIndicesOfClass", ty:
// "::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetTrackedDeviceActivityLevel", ty:
// "::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ApplyTransform", ty: "::OVR::OpenVR::__IVRSystem___ApplyTransform*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetTrackedDeviceIndexForControllerRole", ty: "::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "GetControllerRoleForTrackedDeviceIndex", ty: "::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "GetTrackedDeviceClass", ty: "::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "IsTrackedDeviceConnected", ty: "::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetBoolTrackedDeviceProperty", ty:
// "::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetFloatTrackedDeviceProperty", ty:
// "::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetInt32TrackedDeviceProperty", ty:
// "::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetUint64TrackedDeviceProperty", ty:
// "::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetMatrix34TrackedDeviceProperty", ty:
// "::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetArrayTrackedDeviceProperty", ty:
// "::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetStringTrackedDeviceProperty", ty:
// "::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetPropErrorNameFromEnum", ty:
// "::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "PollNextEvent", ty: "::OVR::OpenVR::__IVRSystem___PollNextEvent*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "PollNextEventWithPose", ty: "::OVR::OpenVR::__IVRSystem___PollNextEventWithPose*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "GetEventTypeNameFromEnum", ty: "::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetHiddenAreaMesh", ty:
// "::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetControllerState", ty: "::OVR::OpenVR::__IVRSystem___GetControllerState*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetControllerStateWithPose", ty: "::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "TriggerHapticPulse", ty: "::OVR::OpenVR::__IVRSystem___TriggerHapticPulse*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetButtonIdNameFromEnum", ty:
// "::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetControllerAxisTypeNameFromEnum", ty:
// "::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "IsInputAvailable", ty:
// "::OVR::OpenVR::__IVRSystem___IsInputAvailable*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "IsSteamVRDrawingControllers", ty:
// "::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ShouldApplicationPause", ty:
// "::OVR::OpenVR::__IVRSystem___ShouldApplicationPause*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ShouldApplicationReduceRenderingWork", ty:
// "::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "DriverDebugRequest", ty:
// "::OVR::OpenVR::__IVRSystem___DriverDebugRequest*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "PerformFirmwareUpdate", ty: "::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "AcknowledgeQuit_Exiting", ty: "::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "AcknowledgeQuit_UserPrompt", ty: "::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::OVR::OpenVR::IVRSystem::IVRSystem(
    ::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize* GetRecommendedRenderTargetSize, ::OVR::OpenVR::__IVRSystem___GetProjectionMatrix* GetProjectionMatrix,
    ::OVR::OpenVR::__IVRSystem___GetProjectionRaw* GetProjectionRaw, ::OVR::OpenVR::__IVRSystem___ComputeDistortion* ComputeDistortion,
    ::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform* GetEyeToHeadTransform, ::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync* GetTimeSinceLastVsync,
    ::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex* GetD3D9AdapterIndex, ::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo* GetDXGIOutputInfo,
    ::OVR::OpenVR::__IVRSystem___GetOutputDevice* GetOutputDevice, ::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop* IsDisplayOnDesktop,
    ::OVR::OpenVR::__IVRSystem___SetDisplayVisibility* SetDisplayVisibility, ::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose* GetDeviceToAbsoluteTrackingPose,
    ::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose* ResetSeatedZeroPose,
    ::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose* GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
    ::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose* GetRawZeroPoseToStandingAbsoluteTrackingPose,
    ::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass* GetSortedTrackedDeviceIndicesOfClass, ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel* GetTrackedDeviceActivityLevel,
    ::OVR::OpenVR::__IVRSystem___ApplyTransform* ApplyTransform, ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole* GetTrackedDeviceIndexForControllerRole,
    ::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex* GetControllerRoleForTrackedDeviceIndex, ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass* GetTrackedDeviceClass,
    ::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected* IsTrackedDeviceConnected, ::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty* GetBoolTrackedDeviceProperty,
    ::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty* GetFloatTrackedDeviceProperty, ::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty* GetInt32TrackedDeviceProperty,
    ::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty* GetUint64TrackedDeviceProperty, ::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty* GetMatrix34TrackedDeviceProperty,
    ::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty* GetArrayTrackedDeviceProperty, ::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty* GetStringTrackedDeviceProperty,
    ::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum* GetPropErrorNameFromEnum, ::OVR::OpenVR::__IVRSystem___PollNextEvent* PollNextEvent,
    ::OVR::OpenVR::__IVRSystem___PollNextEventWithPose* PollNextEventWithPose, ::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum* GetEventTypeNameFromEnum,
    ::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh* GetHiddenAreaMesh, ::OVR::OpenVR::__IVRSystem___GetControllerState* GetControllerState,
    ::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose* GetControllerStateWithPose, ::OVR::OpenVR::__IVRSystem___TriggerHapticPulse* TriggerHapticPulse,
    ::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum* GetButtonIdNameFromEnum, ::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum* GetControllerAxisTypeNameFromEnum,
    ::OVR::OpenVR::__IVRSystem___IsInputAvailable* IsInputAvailable, ::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers* IsSteamVRDrawingControllers,
    ::OVR::OpenVR::__IVRSystem___ShouldApplicationPause* ShouldApplicationPause, ::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork* ShouldApplicationReduceRenderingWork,
    ::OVR::OpenVR::__IVRSystem___DriverDebugRequest* DriverDebugRequest, ::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate* PerformFirmwareUpdate,
    ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting* AcknowledgeQuit_Exiting, ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt* AcknowledgeQuit_UserPrompt) noexcept {
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
