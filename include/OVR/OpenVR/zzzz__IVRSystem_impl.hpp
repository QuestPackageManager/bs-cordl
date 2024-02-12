#pragma once
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
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27dd8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize::*)(ByRef<uint32_t>, ByRef<uint32_t>)>(
    &::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dd980;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27dd994;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27dda38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize* OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetProjectionMatrix::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetProjectionMatrix::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27dda5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionMatrix*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetProjectionMatrix.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix44_t (::OVR::OpenVR::__IVRSystem___GetProjectionMatrix::*)(
    ::OVR::OpenVR::EVREye, float_t, float_t)>(&::OVR::OpenVR::__IVRSystem___GetProjectionMatrix::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27ddb20;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27ddb34;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27ddc04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionMatrix*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionMatrix*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetProjectionMatrix* OVR::OpenVR::__IVRSystem___GetProjectionMatrix::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetProjectionMatrix*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetProjectionMatrix::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionMatrix*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetProjectionRaw::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetProjectionRaw::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27ddc3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionRaw*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetProjectionRaw.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetProjectionRaw::*)(
    ::OVR::OpenVR::EVREye, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>)>(&::OVR::OpenVR::__IVRSystem___GetProjectionRaw::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27ddd00;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27ddd14;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27dde24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionRaw*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionRaw*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetProjectionRaw* OVR::OpenVR::__IVRSystem___GetProjectionRaw::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetProjectionRaw*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetProjectionRaw::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetProjectionRaw*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___ComputeDistortion::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___ComputeDistortion::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27dde4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ComputeDistortion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ComputeDistortion.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___ComputeDistortion::*)(
    ::OVR::OpenVR::EVREye, float_t, float_t, ByRef<::OVR::OpenVR::DistortionCoordinates_t>)>(&::OVR::OpenVR::__IVRSystem___ComputeDistortion::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27ddf10;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27ddf24;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27de028;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ComputeDistortion*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ComputeDistortion*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___ComputeDistortion* OVR::OpenVR::__IVRSystem___ComputeDistortion::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___ComputeDistortion*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___ComputeDistortion::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ComputeDistortion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27de054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform::*)(::OVR::OpenVR::EVREye)>(
    &::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27de118;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27de12c;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27de1b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform* OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27de1e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync::*)(ByRef<float_t>, ByRef<uint64_t>)>(
    &::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27de2c0;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27de2d4;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27de394;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync* OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27de3c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex::*)()>(
    &::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27de484;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27de498;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27de4b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex* OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x27de4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo::*)(ByRef<int32_t>)>(
    &::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27de5b4;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27de5c8;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27de654;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo* OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetOutputDevice::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetOutputDevice::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27de670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetOutputDevice.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetOutputDevice::*)(ByRef<uint64_t>, ::OVR::OpenVR::ETextureType, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetOutputDevice::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27de748;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetOutputDevice.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRSystem___GetOutputDevice::*)(ByRef<uint64_t>, ::OVR::OpenVR::ETextureType, void*, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRSystem___GetOutputDevice::BeginInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x27de75c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetOutputDevice.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetOutputDevice::*)(ByRef<uint64_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___GetOutputDevice::EndInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27de844;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetOutputDevice* OVR::OpenVR::__IVRSystem___GetOutputDevice::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetOutputDevice::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRSystem___GetOutputDevice::Invoke(ByRef<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, void* pInstance) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetOutputDevice*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnDevice, textureType, pInstance);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetOutputDevice::BeginInvoke(ByRef<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, void* pInstance,
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27de860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop::*)()>(
    &::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27de91c;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27de930;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27de950;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop* OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___SetDisplayVisibility::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___SetDisplayVisibility::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27de978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___SetDisplayVisibility*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___SetDisplayVisibility.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___SetDisplayVisibility::*)(bool)>(
    &::OVR::OpenVR::__IVRSystem___SetDisplayVisibility::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27dea3c;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27dea54;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27deadc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___SetDisplayVisibility*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___SetDisplayVisibility*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___SetDisplayVisibility* OVR::OpenVR::__IVRSystem___SetDisplayVisibility::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___SetDisplayVisibility*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___SetDisplayVisibility::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___SetDisplayVisibility*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27deb04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, float_t, ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t)>(
    &::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27debc8;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27debdc;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27deccc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose* OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27decd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose::*)()>(
    &::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27ded94;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27deda8;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27dedc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose* OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27dedd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose::*)()>(
    &::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dee90;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27deea4;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27deec4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose* OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose::New_ctor(::System::Object* object,
                                                                                                                                                                          void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27deefc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose::*)()>(
    &::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27defb8;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27defcc;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27defec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose* OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose::New_ctor(::System::Object* object,
                                                                                                                                                                    void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27df024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass::*)(
    ::OVR::OpenVR::ETrackedDeviceClass, ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>, uint32_t, uint32_t)>(&::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27df0e8;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27df0fc;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27df1cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass* OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27df1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EDeviceActivityLevel (::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel::*)(uint32_t)>(
    &::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27df2b8;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27df2cc;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27df350;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel* OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___ApplyTransform::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___ApplyTransform::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27df378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ApplyTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ApplyTransform.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___ApplyTransform::*)(
    ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::__IVRSystem___ApplyTransform::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27df450;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27df464;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27df53c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ApplyTransform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ApplyTransform*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___ApplyTransform* OVR::OpenVR::__IVRSystem___ApplyTransform::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___ApplyTransform*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___ApplyTransform::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ApplyTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27df560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole::*)(
    ::OVR::OpenVR::ETrackedControllerRole)>(&::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27df624;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27df638;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27df6bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole* OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27df6e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ETrackedControllerRole (::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex::*)(
    uint32_t)>(&::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27df7a8;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27df7bc;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27df840;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex* OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27df868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ETrackedDeviceClass (::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass::*)(uint32_t)>(
    &::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27df92c;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27df940;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27df9c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass* OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27df9ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected::*)(uint32_t)>(
    &::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dfab0;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27dfac4;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27dfb48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected* OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27dfb70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dfc34;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27dfc48;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27dfd30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty* OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27dfd5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dfe20;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27dfe34;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27dff1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty* OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27dff48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e000c;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e0020;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e0108;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty* OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e0134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e01f8;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e020c;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e02f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty* OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e0320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e03e4;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e03f8;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e04e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty* OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e0524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, uint32_t, void*, uint32_t, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e05e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, uint32_t, void*, uint32_t, ByRef<::OVR::OpenVR::ETrackedPropertyError>,
                                                                   ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::BeginInvoke)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x27e05fc;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e0740;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty* OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType, void* pBuffer,
                                                                                 uint32_t unBufferSize, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType,
                                                                                                     void* pBuffer, uint32_t unBufferSize, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError,
                                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e076c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::System::Text::StringBuilder*, uint32_t, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(
    &::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e0830;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e0844;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e0948;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty* OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e0974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::*)(::OVR::OpenVR::ETrackedPropertyError)>(
    &::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e0a38;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e0a4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27e0ad0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum* OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void* OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::Invoke(::OVR::OpenVR::ETrackedPropertyError error) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, error);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::BeginInvoke(::OVR::OpenVR::ETrackedPropertyError error, ::System::AsyncCallback* callback,
                                                                                                ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, error, callback, object);
}
inline void* OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum::__IVRSystem___GetPropErrorNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___PollNextEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___PollNextEvent::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___PollNextEvent::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27e0af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEvent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___PollNextEvent.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___PollNextEvent::*)(ByRef<::OVR::OpenVR::VREvent_t>, uint32_t)>(
    &::OVR::OpenVR::__IVRSystem___PollNextEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e0bd0;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e0be4;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e0c9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEvent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEvent*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___PollNextEvent* OVR::OpenVR::__IVRSystem___PollNextEvent::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___PollNextEvent*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___PollNextEvent::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEvent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___PollNextEventWithPose::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___PollNextEventWithPose::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e0cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEventWithPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___PollNextEventWithPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___PollNextEventWithPose::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::VREvent_t>, uint32_t, ByRef<::OVR::OpenVR::TrackedDevicePose_t>)>(&::OVR::OpenVR::__IVRSystem___PollNextEventWithPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e0d8c;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e0da0;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e0ebc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEventWithPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEventWithPose*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___PollNextEventWithPose* OVR::OpenVR::__IVRSystem___PollNextEventWithPose::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___PollNextEventWithPose*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___PollNextEventWithPose::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PollNextEventWithPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e0ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::*)(::OVR::OpenVR::EVREventType)>(
    &::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e0fb4;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e0fc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27e104c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum* OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void* OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::Invoke(::OVR::OpenVR::EVREventType eType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, eType);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::BeginInvoke(::OVR::OpenVR::EVREventType eType, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eType, callback, object);
}
inline void* OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum::__IVRSystem___GetEventTypeNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e1074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HiddenAreaMesh_t (::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh::*)(
    ::OVR::OpenVR::EVREye, ::OVR::OpenVR::EHiddenAreaMeshType)>(&::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e1138;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e114c;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e1200;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh* OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetControllerState::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetControllerState::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e122c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerState.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::OVR::OpenVR::__IVRSystem___GetControllerState::*)(uint32_t, ByRef<::OVR::OpenVR::VRControllerState_t>, uint32_t)>(&::OVR::OpenVR::__IVRSystem___GetControllerState::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e12f0;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e1304;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e13d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerState*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetControllerState* OVR::OpenVR::__IVRSystem___GetControllerState::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetControllerState*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetControllerState::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e13fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, uint32_t, ByRef<::OVR::OpenVR::VRControllerState_t>, uint32_t, ByRef<::OVR::OpenVR::TrackedDevicePose_t>)>(
    &::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e14c0;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e14d4;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e1608;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose* OVR::OpenVR::__IVRSystem___GetControllerStateWithPose::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetControllerStateWithPose::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___TriggerHapticPulse::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___TriggerHapticPulse::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e163c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___TriggerHapticPulse*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___TriggerHapticPulse.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___TriggerHapticPulse::*)(uint32_t, uint32_t, uint16_t)>(
    &::OVR::OpenVR::__IVRSystem___TriggerHapticPulse::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e1700;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e1714;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e17e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___TriggerHapticPulse*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___TriggerHapticPulse*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___TriggerHapticPulse* OVR::OpenVR::__IVRSystem___TriggerHapticPulse::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___TriggerHapticPulse*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___TriggerHapticPulse::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___TriggerHapticPulse*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e17ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::*)(::OVR::OpenVR::EVRButtonId)>(
    &::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e18b0;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e18c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27e1948;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum* OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void* OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::Invoke(::OVR::OpenVR::EVRButtonId eButtonId) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, eButtonId);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::BeginInvoke(::OVR::OpenVR::EVRButtonId eButtonId, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eButtonId, callback, object);
}
inline void* OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum::__IVRSystem___GetButtonIdNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e1970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::*)(::OVR::OpenVR::EVRControllerAxisType)>(
    &::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e1a34;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e1a48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27e1acc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum* OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void* OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::Invoke(::OVR::OpenVR::EVRControllerAxisType eAxisType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, eAxisType);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::BeginInvoke(::OVR::OpenVR::EVRControllerAxisType eAxisType, ::System::AsyncCallback* callback,
                                                                                                         ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eAxisType, callback, object);
}
inline void* OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum::__IVRSystem___GetControllerAxisTypeNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsInputAvailable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___IsInputAvailable::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___IsInputAvailable::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27e1af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsInputAvailable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsInputAvailable.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___IsInputAvailable::*)()>(&::OVR::OpenVR::__IVRSystem___IsInputAvailable::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e1bb0;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e1bc4;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e1be4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsInputAvailable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsInputAvailable*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___IsInputAvailable* OVR::OpenVR::__IVRSystem___IsInputAvailable::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___IsInputAvailable*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___IsInputAvailable::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsInputAvailable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27e1c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers::*)()>(
    &::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e1cc8;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e1cdc;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e1cfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers* OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___ShouldApplicationPause::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___ShouldApplicationPause::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27e1d24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationPause*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ShouldApplicationPause.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___ShouldApplicationPause::*)()>(
    &::OVR::OpenVR::__IVRSystem___ShouldApplicationPause::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e1de0;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e1df4;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e1e14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationPause*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationPause*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___ShouldApplicationPause* OVR::OpenVR::__IVRSystem___ShouldApplicationPause::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___ShouldApplicationPause*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___ShouldApplicationPause::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationPause*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27e1e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork::*)()>(
    &::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e1ef8;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e1f0c;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e1f2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork* OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___DriverDebugRequest::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___DriverDebugRequest::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e1f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___DriverDebugRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___DriverDebugRequest.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRSystem___DriverDebugRequest::*)(
    uint32_t, ::StringW, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::__IVRSystem___DriverDebugRequest::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e2018;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e202c;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e20d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___DriverDebugRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___DriverDebugRequest*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___DriverDebugRequest* OVR::OpenVR::__IVRSystem___DriverDebugRequest::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___DriverDebugRequest*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___DriverDebugRequest::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___DriverDebugRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e2100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRFirmwareError (::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate::*)(uint32_t)>(
    &::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e21c4;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e21d8;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e225c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate* OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27e2284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting::*)()>(
    &::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e2340;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e2354;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e2374;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting* OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27e2380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt::*)()>(
    &::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e243c;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e2450;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x27e2470;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt* OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt*>(object, method));
}
inline void OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
