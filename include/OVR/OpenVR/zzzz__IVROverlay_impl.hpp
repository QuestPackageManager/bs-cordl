#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVROverlay.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVROverlay_def.hpp"
#include "OVR/OpenVR/zzzz__EColorSpace_def.hpp"
#include "OVR/OpenVR/zzzz__EDualAnalogWhich_def.hpp"
#include "OVR/OpenVR/zzzz__EOverlayDirection_def.hpp"
#include "OVR/OpenVR/zzzz__ETextureType_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__EVROverlayError_def.hpp"
#include "OVR/OpenVR/zzzz__HmdColor_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdRect2_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector2_t_def.hpp"
#include "OVR/OpenVR/zzzz__IVROverlay_def.hpp"
#include "OVR/OpenVR/zzzz__Texture_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRMessageOverlayResponse_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayFlags_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayInputMethod_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionMaskPrimitive_t_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionParams_t_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionResults_t_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayTransformType_def.hpp"
#include "OVR/OpenVR/zzzz__VRTextureBounds_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__FindOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__FindOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__FindOverlay::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x40627fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__FindOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__FindOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__FindOverlay::*)(::StringW, ::ByRef<uint64_t>)>(
    &::OVR::OpenVR::IVROverlay__FindOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406289c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__FindOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__FindOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__FindOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__FindOverlay::*)(::StringW, ::ByRef<uint64_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__FindOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x40628b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__FindOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__FindOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__FindOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__FindOverlay::*)(::ByRef<uint64_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__FindOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4062944;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__FindOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__FindOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__FindOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__FindOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__FindOverlay::Invoke(::StringW pchOverlayKey, ::ByRef<uint64_t> pOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__FindOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pchOverlayKey, pOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__FindOverlay::BeginInvoke(::StringW pchOverlayKey, ::ByRef<uint64_t> pOverlayHandle, ::System::AsyncCallback* callback,
                                                                                 ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__FindOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchOverlayKey, pOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__FindOverlay::EndInvoke(::ByRef<uint64_t> pOverlayHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__FindOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pOverlayHandle, result);
}
inline ::OVR::OpenVR::IVROverlay__FindOverlay* OVR::OpenVR::IVROverlay__FindOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__FindOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__FindOverlay::IVROverlay__FindOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CreateOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__CreateOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__CreateOverlay::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4062970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CreateOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__CreateOverlay::*)(::StringW, ::StringW, ::ByRef<uint64_t>)>(&::OVR::OpenVR::IVROverlay__CreateOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4062a10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CreateOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__CreateOverlay::*)(::StringW, ::StringW, ::ByRef<uint64_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__CreateOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4062a24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CreateOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__CreateOverlay::*)(::ByRef<uint64_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__CreateOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4062ac4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__CreateOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__CreateOverlay::Invoke(::StringW pchOverlayKey, ::StringW pchOverlayName, ::ByRef<uint64_t> pOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pchOverlayKey, pchOverlayName, pOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__CreateOverlay::BeginInvoke(::StringW pchOverlayKey, ::StringW pchOverlayName, ::ByRef<uint64_t> pOverlayHandle,
                                                                                   ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchOverlayKey, pchOverlayName, pOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__CreateOverlay::EndInvoke(::ByRef<uint64_t> pOverlayHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pOverlayHandle, result);
}
inline ::OVR::OpenVR::IVROverlay__CreateOverlay* OVR::OpenVR::IVROverlay__CreateOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__CreateOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__CreateOverlay::IVROverlay__CreateOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__DestroyOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__DestroyOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__DestroyOverlay::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4062af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__DestroyOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__DestroyOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__DestroyOverlay::*)(uint64_t)>(
    &::OVR::OpenVR::IVROverlay__DestroyOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4062b7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__DestroyOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__DestroyOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__DestroyOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__DestroyOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__DestroyOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4062b90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__DestroyOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__DestroyOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__DestroyOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__DestroyOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__DestroyOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4062c14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__DestroyOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__DestroyOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__DestroyOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__DestroyOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__DestroyOverlay::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__DestroyOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__DestroyOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__DestroyOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__DestroyOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__DestroyOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__DestroyOverlay* OVR::OpenVR::IVROverlay__DestroyOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__DestroyOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__DestroyOverlay::IVROverlay__DestroyOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetHighQualityOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetHighQualityOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetHighQualityOverlay::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4062c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetHighQualityOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetHighQualityOverlay::*)(uint64_t)>(
    &::OVR::OpenVR::IVROverlay__SetHighQualityOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4062cc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetHighQualityOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetHighQualityOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__SetHighQualityOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4062cdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetHighQualityOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetHighQualityOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetHighQualityOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4062d60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetHighQualityOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetHighQualityOverlay::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetHighQualityOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetHighQualityOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetHighQualityOverlay* OVR::OpenVR::IVROverlay__SetHighQualityOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetHighQualityOverlay::IVROverlay__SetHighQualityOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetHighQualityOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetHighQualityOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetHighQualityOverlay::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4062d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetHighQualityOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::IVROverlay__GetHighQualityOverlay::*)()>(
    &::OVR::OpenVR::IVROverlay__GetHighQualityOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4062e10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetHighQualityOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetHighQualityOverlay::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetHighQualityOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4062e24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetHighQualityOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::IVROverlay__GetHighQualityOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__GetHighQualityOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4062e44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetHighQualityOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint64_t OVR::OpenVR::IVROverlay__GetHighQualityOverlay::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetHighQualityOverlay::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline uint64_t OVR::OpenVR::IVROverlay__GetHighQualityOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__GetHighQualityOverlay* OVR::OpenVR::IVROverlay__GetHighQualityOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetHighQualityOverlay::IVROverlay__GetHighQualityOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayKey::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayKey::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4062e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayKey.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetOverlayKey::*)(
    uint64_t, ::System::Text::StringBuilder*, uint32_t, ::ByRef<::OVR::OpenVR::EVROverlayError>)>(&::OVR::OpenVR::IVROverlay__GetOverlayKey::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4062ef8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayKey*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayKey*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayKey.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayKey::*)(uint64_t, ::System::Text::StringBuilder*, uint32_t, ::ByRef<::OVR::OpenVR::EVROverlayError>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayKey::BeginInvoke)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x4062f0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayKey*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayKey*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayKey.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetOverlayKey::*)(::ByRef<::OVR::OpenVR::EVROverlayError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayKey::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4063004;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayKey*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayKey*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayKey::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetOverlayKey::Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                               ::ByRef<::OVR::OpenVR::EVROverlayError> pError) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayKey*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayKey::BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                                   ::ByRef<::OVR::OpenVR::EVROverlayError> pError, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayKey*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pError, callback, object);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetOverlayKey::EndInvoke(::ByRef<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayKey*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayKey* OVR::OpenVR::IVROverlay__GetOverlayKey::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayKey*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayKey::IVROverlay__GetOverlayKey() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayName._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayName::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayName::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4063030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayName.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetOverlayName::*)(
    uint64_t, ::System::Text::StringBuilder*, uint32_t, ::ByRef<::OVR::OpenVR::EVROverlayError>)>(&::OVR::OpenVR::IVROverlay__GetOverlayName::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40630bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayName*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayName*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayName.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayName::*)(uint64_t, ::System::Text::StringBuilder*, uint32_t, ::ByRef<::OVR::OpenVR::EVROverlayError>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayName::BeginInvoke)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x40630d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayName*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayName*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayName.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetOverlayName::*)(::ByRef<::OVR::OpenVR::EVROverlayError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayName::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40631c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayName*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayName*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayName::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetOverlayName::Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                ::ByRef<::OVR::OpenVR::EVROverlayError> pError) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayName*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayName::BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                                    ::ByRef<::OVR::OpenVR::EVROverlayError> pError, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayName*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pError, callback, object);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetOverlayName::EndInvoke(::ByRef<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayName*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayName* OVR::OpenVR::IVROverlay__GetOverlayName::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayName*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayName::IVROverlay__GetOverlayName() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayName._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayName::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayName::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40631f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayName.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayName::*)(uint64_t, ::StringW)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayName::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4063280;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayName*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayName*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayName.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetOverlayName::*)(uint64_t, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__SetOverlayName::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x4063294;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayName*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayName*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayName.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayName::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayName::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4063324;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayName*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayName*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayName::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayName::Invoke(uint64_t ulOverlayHandle, ::StringW pchName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayName*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pchName);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayName::BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchName, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayName*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pchName, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayName::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayName*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayName* OVR::OpenVR::IVROverlay__SetOverlayName::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayName*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayName::IVROverlay__SetOverlayName() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayImageData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayImageData::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayImageData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x406334c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayImageData.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayImageData::*)(
    uint64_t, ::System::IntPtr, uint32_t, ::ByRef<uint32_t>, ::ByRef<uint32_t>)>(&::OVR::OpenVR::IVROverlay__GetOverlayImageData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40633d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayImageData.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayImageData::*)(uint64_t, ::System::IntPtr, uint32_t, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayImageData::BeginInvoke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x40633ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayImageData.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayImageData::*)(
    ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayImageData::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x406350c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayImageData::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayImageData::Invoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unBufferSize, ::ByRef<uint32_t> punWidth,
                                                                                           ::ByRef<uint32_t> punHeight) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayImageData::BeginInvoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unBufferSize, ::ByRef<uint32_t> punWidth,
                                                                                         ::ByRef<uint32_t> punHeight, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayImageData::EndInvoke(::ByRef<uint32_t> punWidth, ::ByRef<uint32_t> punHeight, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, punWidth, punHeight, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayImageData* OVR::OpenVR::IVROverlay__GetOverlayImageData::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayImageData*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayImageData::IVROverlay__GetOverlayImageData() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4063540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::*)(::OVR::OpenVR::EVROverlayError)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40635cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::*)(::OVR::OpenVR::EVROverlayError, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x40635e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4063664;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::Invoke(::OVR::OpenVR::EVROverlayError error) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, error);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::BeginInvoke(::OVR::OpenVR::EVROverlayError error, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, error, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum* OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum::IVROverlay__GetOverlayErrorNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x406368c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::*)(uint64_t, uint32_t)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4063718;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::*)(uint64_t, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x406372c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40637e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::Invoke(uint64_t ulOverlayHandle, uint32_t unPID) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, unPID);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::BeginInvoke(uint64_t ulOverlayHandle, uint32_t unPID, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, unPID, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid* OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid::IVROverlay__SetOverlayRenderingPid() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x406380c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::*)(uint64_t)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4063898;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x40638ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4063930;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid* OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid::IVROverlay__GetOverlayRenderingPid() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayFlag._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayFlag::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayFlag::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4063958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayFlag.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayFlag::*)(uint64_t, ::OVR::OpenVR::VROverlayFlags, bool)>(&::OVR::OpenVR::IVROverlay__SetOverlayFlag::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x40639e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayFlag.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayFlag::*)(uint64_t, ::OVR::OpenVR::VROverlayFlags, bool, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayFlag::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x40639fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayFlag.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayFlag::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayFlag::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4063ae8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayFlag::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayFlag::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eOverlayFlag, bEnabled);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayFlag::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled,
                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, eOverlayFlag, bEnabled, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayFlag::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayFlag* OVR::OpenVR::IVROverlay__SetOverlayFlag::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayFlag*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayFlag::IVROverlay__SetOverlayFlag() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayFlag._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayFlag::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayFlag::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4063b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayFlag.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayFlag::*)(
    uint64_t, ::OVR::OpenVR::VROverlayFlags, ::ByRef<bool>)>(&::OVR::OpenVR::IVROverlay__GetOverlayFlag::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4063b9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayFlag.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayFlag::*)(uint64_t, ::OVR::OpenVR::VROverlayFlags, ::ByRef<bool>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__GetOverlayFlag::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4063bb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayFlag.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayFlag::*)(::ByRef<bool>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayFlag::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4063c9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayFlag::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayFlag::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, ::ByRef<bool> pbEnabled) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eOverlayFlag, pbEnabled);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayFlag::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, ::ByRef<bool> pbEnabled,
                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, eOverlayFlag, pbEnabled, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayFlag::EndInvoke(::ByRef<bool> pbEnabled, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pbEnabled, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayFlag* OVR::OpenVR::IVROverlay__GetOverlayFlag::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayFlag*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayFlag::IVROverlay__GetOverlayFlag() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayColor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayColor::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayColor::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4063cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayColor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayColor.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayColor::*)(uint64_t, float_t, float_t, float_t)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayColor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4063d54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayColor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayColor*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayColor.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetOverlayColor::*)(uint64_t, float_t, float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__SetOverlayColor::BeginInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x4063d68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayColor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayColor*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayColor.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayColor::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayColor::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4063e50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayColor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayColor*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayColor::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayColor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayColor::Invoke(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayColor*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, fRed, fGreen, fBlue);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayColor::BeginInvoke(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue, ::System::AsyncCallback* callback,
                                                                                     ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayColor*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, fRed, fGreen, fBlue, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayColor::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayColor*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayColor* OVR::OpenVR::IVROverlay__SetOverlayColor::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayColor*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayColor::IVROverlay__SetOverlayColor() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayColor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayColor::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayColor::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4063e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayColor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayColor.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayColor::*)(
    uint64_t, ::ByRef<float_t>, ::ByRef<float_t>, ::ByRef<float_t>)>(&::OVR::OpenVR::IVROverlay__GetOverlayColor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4063f04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayColor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayColor*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayColor.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayColor::*)(uint64_t, ::ByRef<float_t>, ::ByRef<float_t>, ::ByRef<float_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__GetOverlayColor::BeginInvoke)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x4063f18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayColor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayColor*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayColor.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayColor::*)(
    ::ByRef<float_t>, ::ByRef<float_t>, ::ByRef<float_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayColor::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4064010;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayColor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayColor*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayColor::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayColor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayColor::Invoke(uint64_t ulOverlayHandle, ::ByRef<float_t> pfRed, ::ByRef<float_t> pfGreen, ::ByRef<float_t> pfBlue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayColor*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayColor::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<float_t> pfRed, ::ByRef<float_t> pfGreen, ::ByRef<float_t> pfBlue,
                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayColor*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pfRed, pfGreen, pfBlue, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayColor::EndInvoke(::ByRef<float_t> pfRed, ::ByRef<float_t> pfGreen, ::ByRef<float_t> pfBlue, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayColor*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pfRed, pfGreen, pfBlue, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayColor* OVR::OpenVR::IVROverlay__GetOverlayColor::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayColor*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayColor::IVROverlay__GetOverlayColor() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayAlpha._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayAlpha::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayAlpha::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4064044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayAlpha.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayAlpha::*)(uint64_t, float_t)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayAlpha::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40640d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayAlpha.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetOverlayAlpha::*)(uint64_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__SetOverlayAlpha::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x40640e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayAlpha.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayAlpha::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayAlpha::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406419c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayAlpha::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayAlpha::Invoke(uint64_t ulOverlayHandle, float_t fAlpha) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, fAlpha);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayAlpha::BeginInvoke(uint64_t ulOverlayHandle, float_t fAlpha, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, fAlpha, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayAlpha::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayAlpha* OVR::OpenVR::IVROverlay__SetOverlayAlpha::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayAlpha*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayAlpha::IVROverlay__SetOverlayAlpha() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayAlpha._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayAlpha::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayAlpha::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40641c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayAlpha.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayAlpha::*)(uint64_t, ::ByRef<float_t>)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayAlpha::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4064250;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayAlpha.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayAlpha::*)(uint64_t, ::ByRef<float_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetOverlayAlpha::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4064264;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayAlpha.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayAlpha::*)(::ByRef<float_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayAlpha::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4064320;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayAlpha::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayAlpha::Invoke(uint64_t ulOverlayHandle, ::ByRef<float_t> pfAlpha) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pfAlpha);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayAlpha::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<float_t> pfAlpha, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pfAlpha, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayAlpha::EndInvoke(::ByRef<float_t> pfAlpha, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pfAlpha, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayAlpha* OVR::OpenVR::IVROverlay__GetOverlayAlpha::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayAlpha*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayAlpha::IVROverlay__GetOverlayAlpha() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x406434c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::*)(uint64_t, float_t)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40643d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::*)(uint64_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x40643ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40644a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::Invoke(uint64_t ulOverlayHandle, float_t fTexelAspect) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, fTexelAspect);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::BeginInvoke(uint64_t ulOverlayHandle, float_t fTexelAspect, ::System::AsyncCallback* callback,
                                                                                           ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, fTexelAspect, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect* OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect::IVROverlay__SetOverlayTexelAspect() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40644cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::*)(uint64_t, ::ByRef<float_t>)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4064558;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::*)(uint64_t, ::ByRef<float_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x406456c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::*)(
    ::ByRef<float_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4064628;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::Invoke(uint64_t ulOverlayHandle, ::ByRef<float_t> pfTexelAspect) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pfTexelAspect);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<float_t> pfTexelAspect, ::System::AsyncCallback* callback,
                                                                                           ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pfTexelAspect, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::EndInvoke(::ByRef<float_t> pfTexelAspect, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pfTexelAspect, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect* OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect::IVROverlay__GetOverlayTexelAspect() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlaySortOrder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlaySortOrder::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlaySortOrder::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4064654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlaySortOrder.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlaySortOrder::*)(uint64_t, uint32_t)>(
    &::OVR::OpenVR::IVROverlay__SetOverlaySortOrder::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40646e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlaySortOrder.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetOverlaySortOrder::*)(uint64_t, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__SetOverlaySortOrder::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x40646f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlaySortOrder.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlaySortOrder::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlaySortOrder::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40647ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlaySortOrder::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlaySortOrder::Invoke(uint64_t ulOverlayHandle, uint32_t unSortOrder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, unSortOrder);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlaySortOrder::BeginInvoke(uint64_t ulOverlayHandle, uint32_t unSortOrder, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, unSortOrder, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlaySortOrder::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlaySortOrder* OVR::OpenVR::IVROverlay__SetOverlaySortOrder::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlaySortOrder::IVROverlay__SetOverlaySortOrder() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlaySortOrder::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlaySortOrder::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40647d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlaySortOrder::*)(uint64_t, ::ByRef<uint32_t>)>(
    &::OVR::OpenVR::IVROverlay__GetOverlaySortOrder::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4064860;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder::*)(uint64_t, ::ByRef<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetOverlaySortOrder::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4064874;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlaySortOrder::*)(
    ::ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlaySortOrder::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4064930;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlaySortOrder::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlaySortOrder::Invoke(uint64_t ulOverlayHandle, ::ByRef<uint32_t> punSortOrder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, punSortOrder);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlaySortOrder::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<uint32_t> punSortOrder, ::System::AsyncCallback* callback,
                                                                                         ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, punSortOrder, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlaySortOrder::EndInvoke(::ByRef<uint32_t> punSortOrder, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, punSortOrder, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder* OVR::OpenVR::IVROverlay__GetOverlaySortOrder::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder::IVROverlay__GetOverlaySortOrder() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x406495c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::*)(uint64_t, float_t)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40649e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::*)(uint64_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x40649fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4064ab4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::Invoke(uint64_t ulOverlayHandle, float_t fWidthInMeters) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, fWidthInMeters);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::BeginInvoke(uint64_t ulOverlayHandle, float_t fWidthInMeters, ::System::AsyncCallback* callback,
                                                                                             ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, fWidthInMeters, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters* OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters::IVROverlay__SetOverlayWidthInMeters() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4064adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::*)(uint64_t, ::ByRef<float_t>)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4064b68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::*)(uint64_t, ::ByRef<float_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4064b7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::*)(
    ::ByRef<float_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4064c38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::Invoke(uint64_t ulOverlayHandle, ::ByRef<float_t> pfWidthInMeters) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pfWidthInMeters);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<float_t> pfWidthInMeters, ::System::AsyncCallback* callback,
                                                                                             ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pfWidthInMeters, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::EndInvoke(::ByRef<float_t> pfWidthInMeters, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pfWidthInMeters, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters* OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters::IVROverlay__GetOverlayWidthInMeters() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4064c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::*)(
    uint64_t, float_t, float_t)>(&::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4064cf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::*)(uint64_t, float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4064d04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4064dd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::Invoke(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters, float_t fMaxDistanceInMeters) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::BeginInvoke(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters, float_t fMaxDistanceInMeters,
                                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters* OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::New_ctor(::System::Object* object,
                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4064df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::*)(
    uint64_t, ::ByRef<float_t>, ::ByRef<float_t>)>(&::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4064e84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::*)(uint64_t, ::ByRef<float_t>, ::ByRef<float_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4064e98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::*)(
    ::ByRef<float_t>, ::ByRef<float_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4064f70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::Invoke(uint64_t ulOverlayHandle, ::ByRef<float_t> pfMinDistanceInMeters,
                                                                                                                ::ByRef<float_t> pfMaxDistanceInMeters) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<float_t> pfMinDistanceInMeters,
                                                                                                              ::ByRef<float_t> pfMaxDistanceInMeters, ::System::AsyncCallback* callback,
                                                                                                              ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::EndInvoke(::ByRef<float_t> pfMinDistanceInMeters, ::ByRef<float_t> pfMaxDistanceInMeters,
                                                                                                                   ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pfMinDistanceInMeters, pfMaxDistanceInMeters, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters* OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::New_ctor(::System::Object* object,
                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4064fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::*)(
    uint64_t, ::OVR::OpenVR::EColorSpace)>(&::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4065030;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::*)(uint64_t, ::OVR::OpenVR::EColorSpace, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4065044;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40650fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::EColorSpace eTextureColorSpace) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eTextureColorSpace);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::EColorSpace eTextureColorSpace,
                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, eTextureColorSpace, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace* OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace::IVROverlay__SetOverlayTextureColorSpace() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4065124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::*)(
    uint64_t, ::ByRef<::OVR::OpenVR::EColorSpace>)>(&::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40651b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::*)(uint64_t, ::ByRef<::OVR::OpenVR::EColorSpace>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x40651c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::*)(
    ::ByRef<::OVR::OpenVR::EColorSpace>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4065280;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::Invoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::EColorSpace> peTextureColorSpace) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, peTextureColorSpace);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::EColorSpace> peTextureColorSpace,
                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, peTextureColorSpace, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::EndInvoke(::ByRef<::OVR::OpenVR::EColorSpace> peTextureColorSpace, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, peTextureColorSpace, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace* OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace::IVROverlay__GetOverlayTextureColorSpace() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40652ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::*)(
    uint64_t, ::ByRef<::OVR::OpenVR::VRTextureBounds_t>)>(&::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4065338;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::*)(uint64_t, ::ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x406534c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::*)(
    ::ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4065408;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::Invoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pOverlayTextureBounds);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds,
                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pOverlayTextureBounds, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::EndInvoke(::ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pOverlayTextureBounds, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds* OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds::IVROverlay__SetOverlayTextureBounds() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4065434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::*)(
    uint64_t, ::ByRef<::OVR::OpenVR::VRTextureBounds_t>)>(&::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40654c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::*)(uint64_t, ::ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x40654d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::*)(
    ::ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4065590;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::Invoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pOverlayTextureBounds);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds,
                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pOverlayTextureBounds, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::EndInvoke(::ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pOverlayTextureBounds, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds* OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds::IVROverlay__GetOverlayTextureBounds() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayRenderModel::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayRenderModel::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40655bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetOverlayRenderModel::*)(
    uint64_t, ::System::Text::StringBuilder*, uint32_t, ::ByRef<::OVR::OpenVR::HmdColor_t>, ::ByRef<::OVR::OpenVR::EVROverlayError>)>(&::OVR::OpenVR::IVROverlay__GetOverlayRenderModel::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4065648;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel::*)(uint64_t, ::System::Text::StringBuilder*, uint32_t, ::ByRef<::OVR::OpenVR::HmdColor_t>, ::ByRef<::OVR::OpenVR::EVROverlayError>,
                                                         ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetOverlayRenderModel::BeginInvoke)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x406565c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetOverlayRenderModel::*)(
    ::ByRef<::OVR::OpenVR::HmdColor_t>, ::ByRef<::OVR::OpenVR::EVROverlayError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayRenderModel::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4065788;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayRenderModel::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetOverlayRenderModel::Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                       ::ByRef<::OVR::OpenVR::HmdColor_t> pColor, ::ByRef<::OVR::OpenVR::EVROverlayError> pError) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pColor, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayRenderModel::BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                                           ::ByRef<::OVR::OpenVR::HmdColor_t> pColor, ::ByRef<::OVR::OpenVR::EVROverlayError> pError,
                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pColor, pError, callback, object);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetOverlayRenderModel::EndInvoke(::ByRef<::OVR::OpenVR::HmdColor_t> pColor, ::ByRef<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pColor, pError, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel* OVR::OpenVR::IVROverlay__GetOverlayRenderModel::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel::IVROverlay__GetOverlayRenderModel() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRenderModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayRenderModel::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayRenderModel::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40657bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRenderModel.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayRenderModel::*)(
    uint64_t, ::StringW, ::ByRef<::OVR::OpenVR::HmdColor_t>)>(&::OVR::OpenVR::IVROverlay__SetOverlayRenderModel::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4065848;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRenderModel.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayRenderModel::*)(uint64_t, ::StringW, ::ByRef<::OVR::OpenVR::HmdColor_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayRenderModel::BeginInvoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x406585c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRenderModel.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayRenderModel::*)(
    ::ByRef<::OVR::OpenVR::HmdColor_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__SetOverlayRenderModel::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4065920;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayRenderModel::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayRenderModel::Invoke(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ::ByRef<::OVR::OpenVR::HmdColor_t> pColor) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pchRenderModel, pColor);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayRenderModel::BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ::ByRef<::OVR::OpenVR::HmdColor_t> pColor,
                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pchRenderModel, pColor, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayRenderModel::EndInvoke(::ByRef<::OVR::OpenVR::HmdColor_t> pColor, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pColor, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayRenderModel* OVR::OpenVR::IVROverlay__SetOverlayRenderModel::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayRenderModel::IVROverlay__SetOverlayRenderModel() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayTransformType::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTransformType::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x406594c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformType.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTransformType::*)(
    uint64_t, ::ByRef<::OVR::OpenVR::VROverlayTransformType>)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformType::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40659d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformType.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayTransformType::*)(uint64_t, ::ByRef<::OVR::OpenVR::VROverlayTransformType>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__GetOverlayTransformType::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x40659ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformType.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTransformType::*)(
    ::ByRef<::OVR::OpenVR::VROverlayTransformType>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformType::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4065aa8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayTransformType::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTransformType::Invoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VROverlayTransformType> peTransformType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, peTransformType);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayTransformType::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VROverlayTransformType> peTransformType,
                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, peTransformType, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTransformType::EndInvoke(::ByRef<::OVR::OpenVR::VROverlayTransformType> peTransformType, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, peTransformType, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayTransformType* OVR::OpenVR::IVROverlay__GetOverlayTransformType::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayTransformType*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayTransformType::IVROverlay__GetOverlayTransformType() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4065ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::*)(
    uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4065b60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::*)(uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4065b74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::*)(
    ::ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4065c60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                                                   ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                                                 ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform,
                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::EndInvoke(::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform,
                                                                                                      ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pmatTrackingOriginToOverlayTransform, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute* OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute::IVROverlay__SetOverlayTransformAbsolute() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4065c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::*)(
    uint64_t, ::ByRef<::OVR::OpenVR::ETrackingUniverseOrigin>, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4065d18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::*)(uint64_t, ::ByRef<::OVR::OpenVR::ETrackingUniverseOrigin>, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*,
                                                               ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::BeginInvoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4065d2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::*)(
    ::ByRef<::OVR::OpenVR::ETrackingUniverseOrigin>, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4065e1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::Invoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin,
                                                                                                   ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin,
                                                                                                 ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform,
                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::EndInvoke(::ByRef<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin,
                                                                                                      ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform,
                                                                                                      ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, peTrackingOrigin, pmatTrackingOriginToOverlayTransform, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute* OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute::IVROverlay__GetOverlayTransformAbsolute() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4065e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::*)(
    uint64_t, uint32_t, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4065edc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::*)(uint64_t, uint32_t, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4065ef0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::*)(
    ::ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4065fdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::Invoke(uint64_t ulOverlayHandle, uint32_t unTrackedDevice,
                                                                                                                ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::BeginInvoke(uint64_t ulOverlayHandle, uint32_t unTrackedDevice,
                                                                                                              ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform,
                                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::EndInvoke(::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform,
                                                                                                                   ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pmatTrackedDeviceToOverlayTransform, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative* OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::New_ctor(::System::Object* object,
                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative::IVROverlay__SetOverlayTransformTrackedDeviceRelative() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4066008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::*)(
    uint64_t, ::ByRef<uint32_t>, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4066094;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::*)(uint64_t, ::ByRef<uint32_t>, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::BeginInvoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x40660a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::*)(
    ::ByRef<uint32_t>, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4066198;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::Invoke(uint64_t ulOverlayHandle, ::ByRef<uint32_t> punTrackedDevice,
                                                                                                                ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<uint32_t> punTrackedDevice,
                                                                                                              ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform,
                                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::EndInvoke(::ByRef<uint32_t> punTrackedDevice,
                                                                                                                   ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform,
                                                                                                                   ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, punTrackedDevice, pmatTrackedDeviceToOverlayTransform, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative* OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::New_ctor(::System::Object* object,
                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative::IVROverlay__GetOverlayTransformTrackedDeviceRelative() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40661cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::*)(
    uint64_t, uint32_t, ::StringW)>(&::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4066258;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::*)(uint64_t, uint32_t, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x406626c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406632c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::Invoke(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, unDeviceIndex, pchComponentName);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::BeginInvoke(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName,
                                                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, unDeviceIndex, pchComponentName, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent* OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::New_ctor(::System::Object* object,
                                                                                                                                                          ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent::IVROverlay__SetOverlayTransformTrackedDeviceComponent() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4066354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::*)(
    uint64_t, ::ByRef<uint32_t>, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40663e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::*)(uint64_t, ::ByRef<uint32_t>, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::BeginInvoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x40663f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::*)(
    ::ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40664d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::Invoke(uint64_t ulOverlayHandle, ::ByRef<uint32_t> punDeviceIndex,
                                                                                                                 ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameSize) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<uint32_t> punDeviceIndex,
                                                                                                               ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameSize,
                                                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::EndInvoke(::ByRef<uint32_t> punDeviceIndex, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, punDeviceIndex, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent* OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::New_ctor(::System::Object* object,
                                                                                                                                                          ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent::IVROverlay__GetOverlayTransformTrackedDeviceComponent() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4066500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::*)(
    uint64_t, ::ByRef<uint64_t>, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406658c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::*)(uint64_t, ::ByRef<uint64_t>, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x40665a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::*)(
    ::ByRef<uint64_t>, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4066678;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::Invoke(uint64_t ulOverlayHandle, ::ByRef<uint64_t> ulOverlayHandleParent,
                                                                                                          ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<uint64_t> ulOverlayHandleParent,
                                                                                                        ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform,
                                                                                                        ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::EndInvoke(::ByRef<uint64_t> ulOverlayHandleParent,
                                                                                                             ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform,
                                                                                                             ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative* OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative::IVROverlay__GetOverlayTransformOverlayRelative() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40666ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::*)(
    uint64_t, uint64_t, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4066738;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::*)(uint64_t, uint64_t, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::BeginInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x406674c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::*)(
    ::ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x406681c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::Invoke(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent,
                                                                                                          ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::BeginInvoke(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent,
                                                                                                        ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform,
                                                                                                        ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::EndInvoke(::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform,
                                                                                                             ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pmatParentOverlayToOverlayTransform, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative* OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative::IVROverlay__SetOverlayTransformOverlayRelative() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__ShowOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__ShowOverlay::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4066848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__ShowOverlay::*)(uint64_t)>(
    &::OVR::OpenVR::IVROverlay__ShowOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40668d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__ShowOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__ShowOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x40668e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__ShowOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__ShowOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406696c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__ShowOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__ShowOverlay::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__ShowOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__ShowOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__ShowOverlay* OVR::OpenVR::IVROverlay__ShowOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__ShowOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__ShowOverlay::IVROverlay__ShowOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__HideOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__HideOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__HideOverlay::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4066994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__HideOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__HideOverlay::*)(uint64_t)>(
    &::OVR::OpenVR::IVROverlay__HideOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4066a20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__HideOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__HideOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__HideOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4066a34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__HideOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__HideOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__HideOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4066ab8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__HideOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__HideOverlay::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__HideOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__HideOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__HideOverlay* OVR::OpenVR::IVROverlay__HideOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__HideOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__HideOverlay::IVROverlay__HideOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsOverlayVisible._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__IsOverlayVisible::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__IsOverlayVisible::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4066ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsOverlayVisible.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVROverlay__IsOverlayVisible::*)(uint64_t)>(
    &::OVR::OpenVR::IVROverlay__IsOverlayVisible::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4066b6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsOverlayVisible.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__IsOverlayVisible::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__IsOverlayVisible::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4066b80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsOverlayVisible.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVROverlay__IsOverlayVisible::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__IsOverlayVisible::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4066c04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__IsOverlayVisible::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVROverlay__IsOverlayVisible::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__IsOverlayVisible::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline bool OVR::OpenVR::IVROverlay__IsOverlayVisible::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__IsOverlayVisible* OVR::OpenVR::IVROverlay__IsOverlayVisible::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__IsOverlayVisible*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__IsOverlayVisible::IVROverlay__IsOverlayVisible() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4066c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::*)(
    uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::OVR::OpenVR::HmdVector2_t, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4066cb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::*)(uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::OVR::OpenVR::HmdVector2_t, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>,
                                                                     ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::BeginInvoke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x4066ccc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::*)(
    ::ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4066dec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                                                         ::OVR::OpenVR::HmdVector2_t coordinatesInOverlay,
                                                                                                         ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTransform) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                                                       ::OVR::OpenVR::HmdVector2_t coordinatesInOverlay,
                                                                                                       ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTransform, ::System::AsyncCallback* callback,
                                                                                                       ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::EndInvoke(::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTransform, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pmatTransform, result);
}
inline ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates* OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates::IVROverlay__GetTransformForOverlayCoordinates() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__PollNextOverlayEvent::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__PollNextOverlayEvent::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4066e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVROverlay__PollNextOverlayEvent::*)(uint64_t, ::ByRef<::OVR::OpenVR::VREvent_t>, uint32_t)>(
    &::OVR::OpenVR::IVROverlay__PollNextOverlayEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4066ea4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__PollNextOverlayEvent::*)(uint64_t, ::ByRef<::OVR::OpenVR::VREvent_t>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__PollNextOverlayEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4066eb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::OVR::OpenVR::IVROverlay__PollNextOverlayEvent::*)(::ByRef<::OVR::OpenVR::VREvent_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__PollNextOverlayEvent::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4066fa4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__PollNextOverlayEvent::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVROverlay__PollNextOverlayEvent::Invoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ulOverlayHandle, pEvent, uncbVREvent);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__PollNextOverlayEvent::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent,
                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pEvent, uncbVREvent, callback, object);
}
inline bool OVR::OpenVR::IVROverlay__PollNextOverlayEvent::EndInvoke(::ByRef<::OVR::OpenVR::VREvent_t> pEvent, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pEvent, result);
}
inline ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent* OVR::OpenVR::IVROverlay__PollNextOverlayEvent::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent::IVROverlay__PollNextOverlayEvent() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayInputMethod._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayInputMethod::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayInputMethod::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4066fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayInputMethod.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayInputMethod::*)(
    uint64_t, ::ByRef<::OVR::OpenVR::VROverlayInputMethod>)>(&::OVR::OpenVR::IVROverlay__GetOverlayInputMethod::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406705c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayInputMethod.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayInputMethod::*)(uint64_t, ::ByRef<::OVR::OpenVR::VROverlayInputMethod>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__GetOverlayInputMethod::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4067070;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayInputMethod.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayInputMethod::*)(
    ::ByRef<::OVR::OpenVR::VROverlayInputMethod>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayInputMethod::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x406712c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayInputMethod::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayInputMethod::Invoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VROverlayInputMethod> peInputMethod) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, peInputMethod);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayInputMethod::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VROverlayInputMethod> peInputMethod,
                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, peInputMethod, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayInputMethod::EndInvoke(::ByRef<::OVR::OpenVR::VROverlayInputMethod> peInputMethod, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, peInputMethod, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayInputMethod* OVR::OpenVR::IVROverlay__GetOverlayInputMethod::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayInputMethod::IVROverlay__GetOverlayInputMethod() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayInputMethod._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayInputMethod::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayInputMethod::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4067158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayInputMethod.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayInputMethod::*)(
    uint64_t, ::OVR::OpenVR::VROverlayInputMethod)>(&::OVR::OpenVR::IVROverlay__SetOverlayInputMethod::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40671e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayInputMethod.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayInputMethod::*)(uint64_t, ::OVR::OpenVR::VROverlayInputMethod, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayInputMethod::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x40671f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayInputMethod.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayInputMethod::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayInputMethod::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40672b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayInputMethod::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayInputMethod::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayInputMethod eInputMethod) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eInputMethod);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayInputMethod::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayInputMethod eInputMethod,
                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, eInputMethod, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayInputMethod::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayInputMethod* OVR::OpenVR::IVROverlay__SetOverlayInputMethod::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayInputMethod::IVROverlay__SetOverlayInputMethod() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayMouseScale._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayMouseScale::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayMouseScale::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40672d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayMouseScale.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayMouseScale::*)(
    uint64_t, ::ByRef<::OVR::OpenVR::HmdVector2_t>)>(&::OVR::OpenVR::IVROverlay__GetOverlayMouseScale::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4067364;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayMouseScale.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayMouseScale::*)(uint64_t, ::ByRef<::OVR::OpenVR::HmdVector2_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__GetOverlayMouseScale::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4067378;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayMouseScale.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayMouseScale::*)(
    ::ByRef<::OVR::OpenVR::HmdVector2_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayMouseScale::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4067434;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayMouseScale::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayMouseScale::Invoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pvecMouseScale);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayMouseScale::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale,
                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pvecMouseScale, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayMouseScale::EndInvoke(::ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pvecMouseScale, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayMouseScale* OVR::OpenVR::IVROverlay__GetOverlayMouseScale::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayMouseScale::IVROverlay__GetOverlayMouseScale() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayMouseScale._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayMouseScale::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayMouseScale::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4067460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayMouseScale.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayMouseScale::*)(
    uint64_t, ::ByRef<::OVR::OpenVR::HmdVector2_t>)>(&::OVR::OpenVR::IVROverlay__SetOverlayMouseScale::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40674ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayMouseScale.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayMouseScale::*)(uint64_t, ::ByRef<::OVR::OpenVR::HmdVector2_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayMouseScale::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4067500;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayMouseScale.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayMouseScale::*)(
    ::ByRef<::OVR::OpenVR::HmdVector2_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__SetOverlayMouseScale::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40675bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayMouseScale::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayMouseScale::Invoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pvecMouseScale);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayMouseScale::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale,
                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pvecMouseScale, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayMouseScale::EndInvoke(::ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pvecMouseScale, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayMouseScale* OVR::OpenVR::IVROverlay__SetOverlayMouseScale::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayMouseScale::IVROverlay__SetOverlayMouseScale() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40675e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::*)(
    uint64_t, ::ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t>, ::ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t>)>(&::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4067674;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::*)(uint64_t, ::ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t>, ::ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t>,
                                                              ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::BeginInvoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4067688;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::*)(
    ::ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t>, ::ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4067778;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::Invoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams,
                                                                        ::ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ulOverlayHandle, pParams, pResults);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams,
                                                                                                ::ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults, ::System::AsyncCallback* callback,
                                                                                                ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pParams, pResults, callback, object);
}
inline bool OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::EndInvoke(::ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams,
                                                                           ::ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pParams, pResults, result);
}
inline ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection* OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection::IVROverlay__ComputeOverlayIntersection() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40677ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::*)(uint64_t)>(
    &::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4067838;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x406784c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40678d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline bool OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay* OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay::IVROverlay__IsHoverTargetOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x40678f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::*)()>(
    &::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4067980;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4067994;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40679b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint64_t OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline uint64_t OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay* OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay::IVROverlay__GetGamepadFocusOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40679dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::*)(uint64_t)>(
    &::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4067a68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4067a7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4067b00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::Invoke(uint64_t ulNewFocusOverlay) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulNewFocusOverlay);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::BeginInvoke(uint64_t ulNewFocusOverlay, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulNewFocusOverlay, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay* OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay::IVROverlay__SetGamepadFocusOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayNeighbor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayNeighbor::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayNeighbor::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4067b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayNeighbor.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayNeighbor::*)(
    ::OVR::OpenVR::EOverlayDirection, uint64_t, uint64_t)>(&::OVR::OpenVR::IVROverlay__SetOverlayNeighbor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4067bb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayNeighbor.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayNeighbor::*)(::OVR::OpenVR::EOverlayDirection, uint64_t, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayNeighbor::BeginInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x4067bc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayNeighbor.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayNeighbor::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayNeighbor::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4067c98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayNeighbor::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayNeighbor::Invoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, eDirection, ulFrom, ulTo);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayNeighbor::BeginInvoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo, ::System::AsyncCallback* callback,
                                                                                        ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eDirection, ulFrom, ulTo, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayNeighbor::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayNeighbor* OVR::OpenVR::IVROverlay__SetOverlayNeighbor::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayNeighbor::IVROverlay__SetOverlayNeighbor() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4067cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::*)(
    ::OVR::OpenVR::EOverlayDirection, uint64_t)>(&::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4067d4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::*)(::OVR::OpenVR::EOverlayDirection, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4067d60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4067e18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::Invoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, eDirection, ulFrom);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::BeginInvoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, ::System::AsyncCallback* callback,
                                                                                                ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eDirection, ulFrom, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor* OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor::IVROverlay__MoveGamepadFocusToNeighbor() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4067e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::*)(
    uint64_t, ::OVR::OpenVR::EDualAnalogWhich, ::System::IntPtr, float_t)>(&::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4067ecc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::*)(uint64_t, ::OVR::OpenVR::EDualAnalogWhich, ::System::IntPtr, float_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::BeginInvoke)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x4067ee0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4067ffc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::Invoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ::System::IntPtr vCenter,
                                                                                                     float_t fRadius) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlay, eWhich, vCenter, fRadius);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::BeginInvoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ::System::IntPtr vCenter,
                                                                                                   float_t fRadius, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlay, eWhich, vCenter, fRadius, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform* OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform::IVROverlay__SetOverlayDualAnalogTransform() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4068024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::*)(
    uint64_t, ::OVR::OpenVR::EDualAnalogWhich, ::ByRef<::OVR::OpenVR::HmdVector2_t>, ::ByRef<float_t>)>(&::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40680b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::*)(uint64_t, ::OVR::OpenVR::EDualAnalogWhich, ::ByRef<::OVR::OpenVR::HmdVector2_t>, ::ByRef<float_t>, ::System::AsyncCallback*,
                                                                 ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::BeginInvoke)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x40680c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::*)(
    ::ByRef<::OVR::OpenVR::HmdVector2_t>, ::ByRef<float_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x40681e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::Invoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich,
                                                                                                     ::ByRef<::OVR::OpenVR::HmdVector2_t> pvCenter, ::ByRef<float_t> pfRadius) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlay, eWhich, pvCenter, pfRadius);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::BeginInvoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich,
                                                                                                   ::ByRef<::OVR::OpenVR::HmdVector2_t> pvCenter, ::ByRef<float_t> pfRadius,
                                                                                                   ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlay, eWhich, pvCenter, pfRadius, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::EndInvoke(::ByRef<::OVR::OpenVR::HmdVector2_t> pvCenter, ::ByRef<float_t> pfRadius,
                                                                                                        ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pvCenter, pfRadius, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform* OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform::IVROverlay__GetOverlayDualAnalogTransform() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTexture._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayTexture::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayTexture::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x406821c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTexture.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTexture::*)(uint64_t, ::ByRef<::OVR::OpenVR::Texture_t>)>(&::OVR::OpenVR::IVROverlay__SetOverlayTexture::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40682a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTexture.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayTexture::*)(uint64_t, ::ByRef<::OVR::OpenVR::Texture_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayTexture::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x40682bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayTexture.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayTexture::*)(
    ::ByRef<::OVR::OpenVR::Texture_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__SetOverlayTexture::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4068378;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayTexture::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTexture::Invoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::Texture_t> pTexture) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pTexture);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayTexture::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::Texture_t> pTexture, ::System::AsyncCallback* callback,
                                                                                       ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pTexture, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayTexture::EndInvoke(::ByRef<::OVR::OpenVR::Texture_t> pTexture, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pTexture, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayTexture* OVR::OpenVR::IVROverlay__SetOverlayTexture::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayTexture*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayTexture::IVROverlay__SetOverlayTexture() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ClearOverlayTexture._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__ClearOverlayTexture::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__ClearOverlayTexture::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40683a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ClearOverlayTexture.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__ClearOverlayTexture::*)(uint64_t)>(
    &::OVR::OpenVR::IVROverlay__ClearOverlayTexture::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4068430;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ClearOverlayTexture.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__ClearOverlayTexture::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__ClearOverlayTexture::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4068444;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ClearOverlayTexture.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__ClearOverlayTexture::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__ClearOverlayTexture::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40684c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__ClearOverlayTexture::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__ClearOverlayTexture::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__ClearOverlayTexture::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__ClearOverlayTexture::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__ClearOverlayTexture* OVR::OpenVR::IVROverlay__ClearOverlayTexture::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__ClearOverlayTexture*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__ClearOverlayTexture::IVROverlay__ClearOverlayTexture() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRaw._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayRaw::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayRaw::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40684f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRaw.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayRaw::*)(
    uint64_t, ::System::IntPtr, uint32_t, uint32_t, uint32_t)>(&::OVR::OpenVR::IVROverlay__SetOverlayRaw::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406857c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRaw.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetOverlayRaw::*)(uint64_t, ::System::IntPtr, uint32_t, uint32_t, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetOverlayRaw::BeginInvoke)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x4068590;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayRaw.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayRaw::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayRaw::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40686a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayRaw::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayRaw::Invoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayRaw::BeginInvoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth,
                                                                                   ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayRaw::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayRaw* OVR::OpenVR::IVROverlay__SetOverlayRaw::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayRaw*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayRaw::IVROverlay__SetOverlayRaw() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayFromFile._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayFromFile::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayFromFile::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40686cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayFromFile.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayFromFile::*)(uint64_t, ::StringW)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayFromFile::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4068758;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayFromFile.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetOverlayFromFile::*)(uint64_t, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__SetOverlayFromFile::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x406876c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayFromFile.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayFromFile::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayFromFile::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40687fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayFromFile::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayFromFile::Invoke(uint64_t ulOverlayHandle, ::StringW pchFilePath) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pchFilePath);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayFromFile::BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchFilePath, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pchFilePath, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayFromFile::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayFromFile* OVR::OpenVR::IVROverlay__SetOverlayFromFile::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayFromFile*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayFromFile::IVROverlay__SetOverlayFromFile() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTexture._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayTexture::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTexture::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4068824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTexture.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTexture::*)(
    uint64_t, ::ByRef<::System::IntPtr>, ::System::IntPtr, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::ByRef<::OVR::OpenVR::ETextureType>, ::ByRef<::OVR::OpenVR::EColorSpace>,
    ::ByRef<::OVR::OpenVR::VRTextureBounds_t>)>(&::OVR::OpenVR::IVROverlay__GetOverlayTexture::Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x40688b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTexture.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayTexture::*)(uint64_t, ::ByRef<::System::IntPtr>, ::System::IntPtr, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>,
                                                     ::ByRef<::OVR::OpenVR::ETextureType>, ::ByRef<::OVR::OpenVR::EColorSpace>, ::ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::AsyncCallback*,
                                                     ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTexture::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x40688cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTexture.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTexture::*)(
    ::ByRef<::System::IntPtr>, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::ByRef<::OVR::OpenVR::ETextureType>, ::ByRef<::OVR::OpenVR::EColorSpace>,
    ::ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTexture::EndInvoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4068a90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayTexture::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTexture::Invoke(uint64_t ulOverlayHandle, ::ByRef<::System::IntPtr> pNativeTextureHandle, ::System::IntPtr pNativeTextureRef,
                                                                                         ::ByRef<uint32_t> pWidth, ::ByRef<uint32_t> pHeight, ::ByRef<uint32_t> pNativeFormat,
                                                                                         ::ByRef<::OVR::OpenVR::ETextureType> pAPIType, ::ByRef<::OVR::OpenVR::EColorSpace> pColorSpace,
                                                                                         ::ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat,
                                                                                    pAPIType, pColorSpace, pTextureBounds);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayTexture::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<::System::IntPtr> pNativeTextureHandle, ::System::IntPtr pNativeTextureRef,
                                                                                       ::ByRef<uint32_t> pWidth, ::ByRef<uint32_t> pHeight, ::ByRef<uint32_t> pNativeFormat,
                                                                                       ::ByRef<::OVR::OpenVR::ETextureType> pAPIType, ::ByRef<::OVR::OpenVR::EColorSpace> pColorSpace,
                                                                                       ::ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::System::AsyncCallback* callback,
                                                                                       ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat,
                                                                             pAPIType, pColorSpace, pTextureBounds, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTexture::EndInvoke(::ByRef<::System::IntPtr> pNativeTextureHandle, ::ByRef<uint32_t> pWidth, ::ByRef<uint32_t> pHeight,
                                                                                            ::ByRef<uint32_t> pNativeFormat, ::ByRef<::OVR::OpenVR::ETextureType> pAPIType,
                                                                                            ::ByRef<::OVR::OpenVR::EColorSpace> pColorSpace, ::ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds,
                                                                                            ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pNativeTextureHandle, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace,
                                                                                    pTextureBounds, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayTexture* OVR::OpenVR::IVROverlay__GetOverlayTexture::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayTexture*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayTexture::IVROverlay__GetOverlayTexture() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4068acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::*)(
    uint64_t, ::System::IntPtr)>(&::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4068b58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::*)(uint64_t, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4068b6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4068c24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::Invoke(uint64_t ulOverlayHandle, ::System::IntPtr pNativeTextureHandle) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pNativeTextureHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::BeginInvoke(uint64_t ulOverlayHandle, ::System::IntPtr pNativeTextureHandle, ::System::AsyncCallback* callback,
                                                                                                ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pNativeTextureHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle* OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle::IVROverlay__ReleaseNativeOverlayHandle() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureSize._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayTextureSize::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayTextureSize::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4068c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureSize.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTextureSize::*)(
    uint64_t, ::ByRef<uint32_t>, ::ByRef<uint32_t>)>(&::OVR::OpenVR::IVROverlay__GetOverlayTextureSize::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4068cd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureSize.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetOverlayTextureSize::*)(uint64_t, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__GetOverlayTextureSize::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4068cec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayTextureSize.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayTextureSize::*)(
    ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayTextureSize::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4068dc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayTextureSize::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTextureSize::Invoke(uint64_t ulOverlayHandle, ::ByRef<uint32_t> pWidth, ::ByRef<uint32_t> pHeight) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pWidth, pHeight);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayTextureSize::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<uint32_t> pWidth, ::ByRef<uint32_t> pHeight,
                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pWidth, pHeight, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayTextureSize::EndInvoke(::ByRef<uint32_t> pWidth, ::ByRef<uint32_t> pHeight, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pWidth, pHeight, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayTextureSize* OVR::OpenVR::IVROverlay__GetOverlayTextureSize::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayTextureSize::IVROverlay__GetOverlayTextureSize() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CreateDashboardOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__CreateDashboardOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__CreateDashboardOverlay::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4068df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CreateDashboardOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__CreateDashboardOverlay::*)(
    ::StringW, ::StringW, ::ByRef<uint64_t>, ::ByRef<uint64_t>)>(&::OVR::OpenVR::IVROverlay__CreateDashboardOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4068e98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CreateDashboardOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__CreateDashboardOverlay::*)(::StringW, ::StringW, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__CreateDashboardOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4068eac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CreateDashboardOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__CreateDashboardOverlay::*)(
    ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__CreateDashboardOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4068f64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__CreateDashboardOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__CreateDashboardOverlay::Invoke(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ::ByRef<uint64_t> pMainHandle,
                                                                                              ::ByRef<uint64_t> pThumbnailHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__CreateDashboardOverlay::BeginInvoke(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ::ByRef<uint64_t> pMainHandle,
                                                                                            ::ByRef<uint64_t> pThumbnailHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__CreateDashboardOverlay::EndInvoke(::ByRef<uint64_t> pMainHandle, ::ByRef<uint64_t> pThumbnailHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pMainHandle, pThumbnailHandle, result);
}
inline ::OVR::OpenVR::IVROverlay__CreateDashboardOverlay* OVR::OpenVR::IVROverlay__CreateDashboardOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__CreateDashboardOverlay::IVROverlay__CreateDashboardOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsDashboardVisible._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__IsDashboardVisible::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__IsDashboardVisible::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4068f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsDashboardVisible.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVROverlay__IsDashboardVisible::*)()>(&::OVR::OpenVR::IVROverlay__IsDashboardVisible::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4069020;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsDashboardVisible.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__IsDashboardVisible::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__IsDashboardVisible::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4069034;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsDashboardVisible.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVROverlay__IsDashboardVisible::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__IsDashboardVisible::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4069054;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__IsDashboardVisible::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVROverlay__IsDashboardVisible::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__IsDashboardVisible::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVROverlay__IsDashboardVisible::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__IsDashboardVisible* OVR::OpenVR::IVROverlay__IsDashboardVisible::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__IsDashboardVisible*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__IsDashboardVisible::IVROverlay__IsDashboardVisible() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x406907c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::*)(uint64_t)>(
    &::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4069108;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x406911c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40691a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline bool OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay* OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay::IVROverlay__IsActiveDashboardOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40691c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::*)(uint64_t, uint32_t)>(
    &::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4069254;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::*)(uint64_t, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4069268;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4069320;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::Invoke(uint64_t ulOverlayHandle, uint32_t unProcessId) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, unProcessId);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::BeginInvoke(uint64_t ulOverlayHandle, uint32_t unProcessId, ::System::AsyncCallback* callback,
                                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, unProcessId, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess* OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess::IVROverlay__SetDashboardOverlaySceneProcess() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4069348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::*)(
    uint64_t, ::ByRef<uint32_t>)>(&::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40693d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::*)(uint64_t, ::ByRef<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x40693e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::*)(
    ::ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40694a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::Invoke(uint64_t ulOverlayHandle, ::ByRef<uint32_t> punProcessId) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, punProcessId);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<uint32_t> punProcessId, ::System::AsyncCallback* callback,
                                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, punProcessId, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::EndInvoke(::ByRef<uint32_t> punProcessId, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, punProcessId, result);
}
inline ::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess* OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess::IVROverlay__GetDashboardOverlaySceneProcess() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowDashboard._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__ShowDashboard::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__ShowDashboard::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x40694d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowDashboard*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowDashboard.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__ShowDashboard::*)(::StringW)>(&::OVR::OpenVR::IVROverlay__ShowDashboard::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406956c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowDashboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowDashboard*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowDashboard.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__ShowDashboard::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__ShowDashboard::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4069580;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowDashboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowDashboard*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowDashboard.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__ShowDashboard::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__ShowDashboard::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x40695a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowDashboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowDashboard*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__ShowDashboard::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowDashboard*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVROverlay__ShowDashboard::Invoke(::StringW pchOverlayToShow) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowDashboard*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pchOverlayToShow);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__ShowDashboard::BeginInvoke(::StringW pchOverlayToShow, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowDashboard*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchOverlayToShow, callback, object);
}
inline void OVR::OpenVR::IVROverlay__ShowDashboard::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowDashboard*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__ShowDashboard* OVR::OpenVR::IVROverlay__ShowDashboard::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__ShowDashboard*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__ShowDashboard::IVROverlay__ShowDashboard() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x40695ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::*)()>(
    &::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4069634;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4069648;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4069668;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice* OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice::IVROverlay__GetPrimaryDashboardDevice() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowKeyboard._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__ShowKeyboard::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__ShowKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4069690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboard*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowKeyboard.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__ShowKeyboard::*)(
    int32_t, int32_t, ::StringW, uint32_t, ::StringW, bool, uint64_t)>(&::OVR::OpenVR::IVROverlay__ShowKeyboard::Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x406971c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboard*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowKeyboard.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__ShowKeyboard::*)(int32_t, int32_t, ::StringW, uint32_t, ::StringW, bool, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__ShowKeyboard::BeginInvoke)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x4069738;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboard*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowKeyboard.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__ShowKeyboard::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__ShowKeyboard::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406987c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboard*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__ShowKeyboard::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboard*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__ShowKeyboard::Invoke(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText,
                                                                                    bool bUseMinimalMode, uint64_t uUserValue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboard*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode,
                                                                                    uUserValue);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__ShowKeyboard::BeginInvoke(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText,
                                                                                  bool bUseMinimalMode, uint64_t uUserValue, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboard*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode,
                                                                             uUserValue, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__ShowKeyboard::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboard*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__ShowKeyboard* OVR::OpenVR::IVROverlay__ShowKeyboard::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__ShowKeyboard*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__ShowKeyboard::IVROverlay__ShowKeyboard() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40698a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::*)(
    uint64_t, int32_t, int32_t, ::StringW, uint32_t, ::StringW, bool, uint64_t)>(&::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4069930;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::*)(uint64_t, int32_t, int32_t, ::StringW, uint32_t, ::StringW, bool, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x406994c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4069aa4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::Invoke(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription,
                                                                                              uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText,
                                                                                    bUseMinimalMode, uUserValue);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::BeginInvoke(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription,
                                                                                            uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue,
                                                                                            ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText,
                                                                             bUseMinimalMode, uUserValue, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay* OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay::IVROverlay__ShowKeyboardForOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetKeyboardText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetKeyboardText::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetKeyboardText::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4069acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetKeyboardText*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetKeyboardText.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetKeyboardText::*)(::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::IVROverlay__GetKeyboardText::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4069b6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetKeyboardText*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetKeyboardText*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetKeyboardText.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetKeyboardText::*)(::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetKeyboardText::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4069b80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetKeyboardText*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetKeyboardText*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetKeyboardText.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVROverlay__GetKeyboardText::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__GetKeyboardText::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4069c14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetKeyboardText*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetKeyboardText*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetKeyboardText::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetKeyboardText*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetKeyboardText::Invoke(::System::Text::StringBuilder* pchText, uint32_t cchText) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetKeyboardText*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pchText, cchText);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetKeyboardText::BeginInvoke(::System::Text::StringBuilder* pchText, uint32_t cchText, ::System::AsyncCallback* callback,
                                                                                     ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetKeyboardText*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchText, cchText, callback, object);
}
inline uint32_t OVR::OpenVR::IVROverlay__GetKeyboardText::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetKeyboardText*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__GetKeyboardText* OVR::OpenVR::IVROverlay__GetKeyboardText::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetKeyboardText*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetKeyboardText::IVROverlay__GetKeyboardText() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__HideKeyboard._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__HideKeyboard::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__HideKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4069c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideKeyboard*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__HideKeyboard.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__HideKeyboard::*)()>(&::OVR::OpenVR::IVROverlay__HideKeyboard::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4069cc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideKeyboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideKeyboard*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__HideKeyboard.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__HideKeyboard::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__HideKeyboard::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4069cd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideKeyboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideKeyboard*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__HideKeyboard.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__HideKeyboard::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__HideKeyboard::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4069cf8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideKeyboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideKeyboard*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__HideKeyboard::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideKeyboard*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVROverlay__HideKeyboard::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideKeyboard*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__HideKeyboard::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideKeyboard*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVROverlay__HideKeyboard::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__HideKeyboard*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__HideKeyboard* OVR::OpenVR::IVROverlay__HideKeyboard::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__HideKeyboard*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__HideKeyboard::IVROverlay__HideKeyboard() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4069d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4069d90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::*)(::OVR::OpenVR::ETrackingUniverseOrigin, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4069da4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::*)(
    ::ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::EndInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4069e60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                          ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                                                  ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform,
                                                                                                  ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform, callback, object);
}
inline void OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::EndInvoke(::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pmatTrackingOriginToKeyboardTransform, result);
}
inline ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute* OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute::IVROverlay__SetKeyboardTransformAbsolute() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4069e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::*)(uint64_t, ::OVR::OpenVR::HmdRect2_t)>(
    &::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4069f08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::*)(uint64_t, ::OVR::OpenVR::HmdRect2_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4069f1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4069fd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::HmdRect2_t avoidRect) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ulOverlayHandle, avoidRect);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::HmdRect2_t avoidRect, ::System::AsyncCallback* callback,
                                                                                                   ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, avoidRect, callback, object);
}
inline void OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay* OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay::IVROverlay__SetKeyboardPositionForOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4069fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::*)(
    uint64_t, ::ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>, uint32_t, uint32_t)>(&::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406a070;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::*)(uint64_t, ::ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>, uint32_t, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::BeginInvoke)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x406a084;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::*)(
    ::ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x406a188;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::Invoke(uint64_t ulOverlayHandle,
                                                                                                  ::ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives,
                                                                                                  uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives,
                                                                                                uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize, ::System::AsyncCallback* callback,
                                                                                                ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::EndInvoke(::ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives,
                                                                                                     ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pMaskPrimitives, result);
}
inline ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask* OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask::IVROverlay__SetOverlayIntersectionMask() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayFlags._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__GetOverlayFlags::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayFlags::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x406a1b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayFlags.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayFlags::*)(uint64_t, ::ByRef<uint32_t>)>(
    &::OVR::OpenVR::IVROverlay__GetOverlayFlags::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406a240;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayFlags.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__GetOverlayFlags::*)(uint64_t, ::ByRef<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__GetOverlayFlags::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x406a254;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__GetOverlayFlags.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::IVROverlay__GetOverlayFlags::*)(::ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVROverlay__GetOverlayFlags::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x406a310;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__GetOverlayFlags::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayFlags::Invoke(uint64_t ulOverlayHandle, ::ByRef<uint32_t> pFlags) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pFlags);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__GetOverlayFlags::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<uint32_t> pFlags, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pFlags, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay__GetOverlayFlags::EndInvoke(::ByRef<uint32_t> pFlags, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pFlags, result);
}
inline ::OVR::OpenVR::IVROverlay__GetOverlayFlags* OVR::OpenVR::IVROverlay__GetOverlayFlags::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__GetOverlayFlags*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__GetOverlayFlags::IVROverlay__GetOverlayFlags() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowMessageOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__ShowMessageOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__ShowMessageOverlay::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x406a33c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowMessageOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::VRMessageOverlayResponse (::OVR::OpenVR::IVROverlay__ShowMessageOverlay::*)(
    ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::OVR::OpenVR::IVROverlay__ShowMessageOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406a3dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowMessageOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__ShowMessageOverlay::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVROverlay__ShowMessageOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x406a3f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__ShowMessageOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::VRMessageOverlayResponse (::OVR::OpenVR::IVROverlay__ShowMessageOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__ShowMessageOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406a424;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__ShowMessageOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::VRMessageOverlayResponse OVR::OpenVR::IVROverlay__ShowMessageOverlay::Invoke(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text,
                                                                                                   ::StringW pchButton2Text, ::StringW pchButton3Text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::VRMessageOverlayResponse, false>(this, ___internal_method, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text,
                                                                                             pchButton3Text);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__ShowMessageOverlay::BeginInvoke(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text,
                                                                                        ::StringW pchButton2Text, ::StringW pchButton3Text, ::System::AsyncCallback* callback,
                                                                                        ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text, callback,
                                                                             object);
}
inline ::OVR::OpenVR::VRMessageOverlayResponse OVR::OpenVR::IVROverlay__ShowMessageOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::VRMessageOverlayResponse, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__ShowMessageOverlay* OVR::OpenVR::IVROverlay__ShowMessageOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__ShowMessageOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__ShowMessageOverlay::IVROverlay__ShowMessageOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CloseMessageOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__CloseMessageOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVROverlay__CloseMessageOverlay::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x406a44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CloseMessageOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__CloseMessageOverlay::*)()>(
    &::OVR::OpenVR::IVROverlay__CloseMessageOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406a4d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CloseMessageOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVROverlay__CloseMessageOverlay::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVROverlay__CloseMessageOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x406a4e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVROverlay__CloseMessageOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVROverlay__CloseMessageOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVROverlay__CloseMessageOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x406a508;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVROverlay__CloseMessageOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVROverlay__CloseMessageOverlay::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVROverlay__CloseMessageOverlay::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVROverlay__CloseMessageOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVROverlay__CloseMessageOverlay* OVR::OpenVR::IVROverlay__CloseMessageOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVROverlay__CloseMessageOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay__CloseMessageOverlay::IVROverlay__CloseMessageOverlay() {}
// Ctor Parameters [CppParam { name: "FindOverlay", ty: "::OVR::OpenVR::IVROverlay__FindOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CreateOverlay", ty:
// "::OVR::OpenVR::IVROverlay__CreateOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name: "DestroyOverlay", ty: "::OVR::OpenVR::IVROverlay__DestroyOverlay*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "SetHighQualityOverlay", ty: "::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetHighQualityOverlay",
// ty: "::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayKey", ty: "::OVR::OpenVR::IVROverlay__GetOverlayKey*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "GetOverlayName", ty: "::OVR::OpenVR::IVROverlay__GetOverlayName*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayName", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayName*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayImageData", ty: "::OVR::OpenVR::IVROverlay__GetOverlayImageData*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "GetOverlayErrorNameFromEnum", ty: "::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "SetOverlayRenderingPid", ty: "::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayRenderingPid", ty:
// "::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayFlag", ty: "::OVR::OpenVR::IVROverlay__SetOverlayFlag*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "GetOverlayFlag", ty: "::OVR::OpenVR::IVROverlay__GetOverlayFlag*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayColor", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayColor*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayColor", ty: "::OVR::OpenVR::IVROverlay__GetOverlayColor*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "SetOverlayAlpha", ty: "::OVR::OpenVR::IVROverlay__SetOverlayAlpha*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayAlpha", ty:
// "::OVR::OpenVR::IVROverlay__GetOverlayAlpha*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayTexelAspect", ty: "::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "GetOverlayTexelAspect", ty: "::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "SetOverlaySortOrder", ty: "::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlaySortOrder", ty:
// "::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayWidthInMeters", ty: "::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayWidthInMeters", ty: "::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "SetOverlayAutoCurveDistanceRangeInMeters", ty: "::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetOverlayAutoCurveDistanceRangeInMeters", ty: "::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "SetOverlayTextureColorSpace", ty: "::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayTextureColorSpace", ty:
// "::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayTextureBounds", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayTextureBounds", ty: "::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayRenderModel", ty: "::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "SetOverlayRenderModel", ty: "::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayTransformType", ty:
// "::OVR::OpenVR::IVROverlay__GetOverlayTransformType*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayTransformAbsolute", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayTransformAbsolute", ty:
// "::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayTransformTrackedDeviceRelative", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayTransformTrackedDeviceRelative", ty:
// "::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayTransformTrackedDeviceComponent", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayTransformTrackedDeviceComponent", ty:
// "::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayTransformOverlayRelative", ty:
// "::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayTransformOverlayRelative", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ShowOverlay", ty: "::OVR::OpenVR::IVROverlay__ShowOverlay*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "HideOverlay", ty: "::OVR::OpenVR::IVROverlay__HideOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsOverlayVisible", ty:
// "::OVR::OpenVR::IVROverlay__IsOverlayVisible*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetTransformForOverlayCoordinates", ty:
// "::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*", modifiers: "", def_value: Some("{}") }, CppParam { name: "PollNextOverlayEvent", ty:
// "::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayInputMethod", ty: "::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayInputMethod", ty: "::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetOverlayMouseScale", ty: "::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayMouseScale", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ComputeOverlayIntersection", ty:
// "::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsHoverTargetOverlay", ty: "::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "GetGamepadFocusOverlay", ty: "::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "SetGamepadFocusOverlay", ty: "::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayNeighbor", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*", modifiers: "", def_value: Some("{}") }, CppParam { name: "MoveGamepadFocusToNeighbor", ty:
// "::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayDualAnalogTransform", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayDualAnalogTransform", ty:
// "::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayTexture", ty: "::OVR::OpenVR::IVROverlay__SetOverlayTexture*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "ClearOverlayTexture", ty: "::OVR::OpenVR::IVROverlay__ClearOverlayTexture*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "SetOverlayRaw", ty: "::OVR::OpenVR::IVROverlay__SetOverlayRaw*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayFromFile", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayFromFile*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayTexture", ty: "::OVR::OpenVR::IVROverlay__GetOverlayTexture*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "ReleaseNativeOverlayHandle", ty: "::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetOverlayTextureSize", ty: "::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CreateDashboardOverlay", ty:
// "::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsDashboardVisible", ty: "::OVR::OpenVR::IVROverlay__IsDashboardVisible*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "IsActiveDashboardOverlay", ty: "::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "SetDashboardOverlaySceneProcess", ty: "::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetDashboardOverlaySceneProcess", ty:
// "::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ShowDashboard", ty: "::OVR::OpenVR::IVROverlay__ShowDashboard*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "GetPrimaryDashboardDevice", ty: "::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "ShowKeyboard", ty: "::OVR::OpenVR::IVROverlay__ShowKeyboard*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ShowKeyboardForOverlay", ty:
// "::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetKeyboardText", ty: "::OVR::OpenVR::IVROverlay__GetKeyboardText*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "HideKeyboard", ty: "::OVR::OpenVR::IVROverlay__HideKeyboard*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetKeyboardTransformAbsolute",
// ty: "::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetKeyboardPositionForOverlay", ty:
// "::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetOverlayIntersectionMask", ty:
// "::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetOverlayFlags", ty: "::OVR::OpenVR::IVROverlay__GetOverlayFlags*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "ShowMessageOverlay", ty: "::OVR::OpenVR::IVROverlay__ShowMessageOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "CloseMessageOverlay", ty: "::OVR::OpenVR::IVROverlay__CloseMessageOverlay*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IVROverlay::IVROverlay(
    ::OVR::OpenVR::IVROverlay__FindOverlay* FindOverlay, ::OVR::OpenVR::IVROverlay__CreateOverlay* CreateOverlay, ::OVR::OpenVR::IVROverlay__DestroyOverlay* DestroyOverlay,
    ::OVR::OpenVR::IVROverlay__SetHighQualityOverlay* SetHighQualityOverlay, ::OVR::OpenVR::IVROverlay__GetHighQualityOverlay* GetHighQualityOverlay,
    ::OVR::OpenVR::IVROverlay__GetOverlayKey* GetOverlayKey, ::OVR::OpenVR::IVROverlay__GetOverlayName* GetOverlayName, ::OVR::OpenVR::IVROverlay__SetOverlayName* SetOverlayName,
    ::OVR::OpenVR::IVROverlay__GetOverlayImageData* GetOverlayImageData, ::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum* GetOverlayErrorNameFromEnum,
    ::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid* SetOverlayRenderingPid, ::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid* GetOverlayRenderingPid,
    ::OVR::OpenVR::IVROverlay__SetOverlayFlag* SetOverlayFlag, ::OVR::OpenVR::IVROverlay__GetOverlayFlag* GetOverlayFlag, ::OVR::OpenVR::IVROverlay__SetOverlayColor* SetOverlayColor,
    ::OVR::OpenVR::IVROverlay__GetOverlayColor* GetOverlayColor, ::OVR::OpenVR::IVROverlay__SetOverlayAlpha* SetOverlayAlpha, ::OVR::OpenVR::IVROverlay__GetOverlayAlpha* GetOverlayAlpha,
    ::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect* SetOverlayTexelAspect, ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect* GetOverlayTexelAspect,
    ::OVR::OpenVR::IVROverlay__SetOverlaySortOrder* SetOverlaySortOrder, ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder* GetOverlaySortOrder,
    ::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters* SetOverlayWidthInMeters, ::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters* GetOverlayWidthInMeters,
    ::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters* SetOverlayAutoCurveDistanceRangeInMeters,
    ::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters* GetOverlayAutoCurveDistanceRangeInMeters, ::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace* SetOverlayTextureColorSpace,
    ::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace* GetOverlayTextureColorSpace, ::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds* SetOverlayTextureBounds,
    ::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds* GetOverlayTextureBounds, ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel* GetOverlayRenderModel,
    ::OVR::OpenVR::IVROverlay__SetOverlayRenderModel* SetOverlayRenderModel, ::OVR::OpenVR::IVROverlay__GetOverlayTransformType* GetOverlayTransformType,
    ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute* SetOverlayTransformAbsolute, ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute* GetOverlayTransformAbsolute,
    ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative* SetOverlayTransformTrackedDeviceRelative,
    ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative* GetOverlayTransformTrackedDeviceRelative,
    ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent* SetOverlayTransformTrackedDeviceComponent,
    ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent* GetOverlayTransformTrackedDeviceComponent,
    ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative* GetOverlayTransformOverlayRelative,
    ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative* SetOverlayTransformOverlayRelative, ::OVR::OpenVR::IVROverlay__ShowOverlay* ShowOverlay,
    ::OVR::OpenVR::IVROverlay__HideOverlay* HideOverlay, ::OVR::OpenVR::IVROverlay__IsOverlayVisible* IsOverlayVisible,
    ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates* GetTransformForOverlayCoordinates, ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent* PollNextOverlayEvent,
    ::OVR::OpenVR::IVROverlay__GetOverlayInputMethod* GetOverlayInputMethod, ::OVR::OpenVR::IVROverlay__SetOverlayInputMethod* SetOverlayInputMethod,
    ::OVR::OpenVR::IVROverlay__GetOverlayMouseScale* GetOverlayMouseScale, ::OVR::OpenVR::IVROverlay__SetOverlayMouseScale* SetOverlayMouseScale,
    ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection* ComputeOverlayIntersection, ::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay* IsHoverTargetOverlay,
    ::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay* GetGamepadFocusOverlay, ::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay* SetGamepadFocusOverlay,
    ::OVR::OpenVR::IVROverlay__SetOverlayNeighbor* SetOverlayNeighbor, ::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor* MoveGamepadFocusToNeighbor,
    ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform* SetOverlayDualAnalogTransform, ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform* GetOverlayDualAnalogTransform,
    ::OVR::OpenVR::IVROverlay__SetOverlayTexture* SetOverlayTexture, ::OVR::OpenVR::IVROverlay__ClearOverlayTexture* ClearOverlayTexture, ::OVR::OpenVR::IVROverlay__SetOverlayRaw* SetOverlayRaw,
    ::OVR::OpenVR::IVROverlay__SetOverlayFromFile* SetOverlayFromFile, ::OVR::OpenVR::IVROverlay__GetOverlayTexture* GetOverlayTexture,
    ::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle* ReleaseNativeOverlayHandle, ::OVR::OpenVR::IVROverlay__GetOverlayTextureSize* GetOverlayTextureSize,
    ::OVR::OpenVR::IVROverlay__CreateDashboardOverlay* CreateDashboardOverlay, ::OVR::OpenVR::IVROverlay__IsDashboardVisible* IsDashboardVisible,
    ::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay* IsActiveDashboardOverlay, ::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess* SetDashboardOverlaySceneProcess,
    ::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess* GetDashboardOverlaySceneProcess, ::OVR::OpenVR::IVROverlay__ShowDashboard* ShowDashboard,
    ::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice* GetPrimaryDashboardDevice, ::OVR::OpenVR::IVROverlay__ShowKeyboard* ShowKeyboard,
    ::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay* ShowKeyboardForOverlay, ::OVR::OpenVR::IVROverlay__GetKeyboardText* GetKeyboardText, ::OVR::OpenVR::IVROverlay__HideKeyboard* HideKeyboard,
    ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute* SetKeyboardTransformAbsolute, ::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay* SetKeyboardPositionForOverlay,
    ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask* SetOverlayIntersectionMask, ::OVR::OpenVR::IVROverlay__GetOverlayFlags* GetOverlayFlags,
    ::OVR::OpenVR::IVROverlay__ShowMessageOverlay* ShowMessageOverlay, ::OVR::OpenVR::IVROverlay__CloseMessageOverlay* CloseMessageOverlay) noexcept {
  this->FindOverlay = FindOverlay;
  this->CreateOverlay = CreateOverlay;
  this->DestroyOverlay = DestroyOverlay;
  this->SetHighQualityOverlay = SetHighQualityOverlay;
  this->GetHighQualityOverlay = GetHighQualityOverlay;
  this->GetOverlayKey = GetOverlayKey;
  this->GetOverlayName = GetOverlayName;
  this->SetOverlayName = SetOverlayName;
  this->GetOverlayImageData = GetOverlayImageData;
  this->GetOverlayErrorNameFromEnum = GetOverlayErrorNameFromEnum;
  this->SetOverlayRenderingPid = SetOverlayRenderingPid;
  this->GetOverlayRenderingPid = GetOverlayRenderingPid;
  this->SetOverlayFlag = SetOverlayFlag;
  this->GetOverlayFlag = GetOverlayFlag;
  this->SetOverlayColor = SetOverlayColor;
  this->GetOverlayColor = GetOverlayColor;
  this->SetOverlayAlpha = SetOverlayAlpha;
  this->GetOverlayAlpha = GetOverlayAlpha;
  this->SetOverlayTexelAspect = SetOverlayTexelAspect;
  this->GetOverlayTexelAspect = GetOverlayTexelAspect;
  this->SetOverlaySortOrder = SetOverlaySortOrder;
  this->GetOverlaySortOrder = GetOverlaySortOrder;
  this->SetOverlayWidthInMeters = SetOverlayWidthInMeters;
  this->GetOverlayWidthInMeters = GetOverlayWidthInMeters;
  this->SetOverlayAutoCurveDistanceRangeInMeters = SetOverlayAutoCurveDistanceRangeInMeters;
  this->GetOverlayAutoCurveDistanceRangeInMeters = GetOverlayAutoCurveDistanceRangeInMeters;
  this->SetOverlayTextureColorSpace = SetOverlayTextureColorSpace;
  this->GetOverlayTextureColorSpace = GetOverlayTextureColorSpace;
  this->SetOverlayTextureBounds = SetOverlayTextureBounds;
  this->GetOverlayTextureBounds = GetOverlayTextureBounds;
  this->GetOverlayRenderModel = GetOverlayRenderModel;
  this->SetOverlayRenderModel = SetOverlayRenderModel;
  this->GetOverlayTransformType = GetOverlayTransformType;
  this->SetOverlayTransformAbsolute = SetOverlayTransformAbsolute;
  this->GetOverlayTransformAbsolute = GetOverlayTransformAbsolute;
  this->SetOverlayTransformTrackedDeviceRelative = SetOverlayTransformTrackedDeviceRelative;
  this->GetOverlayTransformTrackedDeviceRelative = GetOverlayTransformTrackedDeviceRelative;
  this->SetOverlayTransformTrackedDeviceComponent = SetOverlayTransformTrackedDeviceComponent;
  this->GetOverlayTransformTrackedDeviceComponent = GetOverlayTransformTrackedDeviceComponent;
  this->GetOverlayTransformOverlayRelative = GetOverlayTransformOverlayRelative;
  this->SetOverlayTransformOverlayRelative = SetOverlayTransformOverlayRelative;
  this->ShowOverlay = ShowOverlay;
  this->HideOverlay = HideOverlay;
  this->IsOverlayVisible = IsOverlayVisible;
  this->GetTransformForOverlayCoordinates = GetTransformForOverlayCoordinates;
  this->PollNextOverlayEvent = PollNextOverlayEvent;
  this->GetOverlayInputMethod = GetOverlayInputMethod;
  this->SetOverlayInputMethod = SetOverlayInputMethod;
  this->GetOverlayMouseScale = GetOverlayMouseScale;
  this->SetOverlayMouseScale = SetOverlayMouseScale;
  this->ComputeOverlayIntersection = ComputeOverlayIntersection;
  this->IsHoverTargetOverlay = IsHoverTargetOverlay;
  this->GetGamepadFocusOverlay = GetGamepadFocusOverlay;
  this->SetGamepadFocusOverlay = SetGamepadFocusOverlay;
  this->SetOverlayNeighbor = SetOverlayNeighbor;
  this->MoveGamepadFocusToNeighbor = MoveGamepadFocusToNeighbor;
  this->SetOverlayDualAnalogTransform = SetOverlayDualAnalogTransform;
  this->GetOverlayDualAnalogTransform = GetOverlayDualAnalogTransform;
  this->SetOverlayTexture = SetOverlayTexture;
  this->ClearOverlayTexture = ClearOverlayTexture;
  this->SetOverlayRaw = SetOverlayRaw;
  this->SetOverlayFromFile = SetOverlayFromFile;
  this->GetOverlayTexture = GetOverlayTexture;
  this->ReleaseNativeOverlayHandle = ReleaseNativeOverlayHandle;
  this->GetOverlayTextureSize = GetOverlayTextureSize;
  this->CreateDashboardOverlay = CreateDashboardOverlay;
  this->IsDashboardVisible = IsDashboardVisible;
  this->IsActiveDashboardOverlay = IsActiveDashboardOverlay;
  this->SetDashboardOverlaySceneProcess = SetDashboardOverlaySceneProcess;
  this->GetDashboardOverlaySceneProcess = GetDashboardOverlaySceneProcess;
  this->ShowDashboard = ShowDashboard;
  this->GetPrimaryDashboardDevice = GetPrimaryDashboardDevice;
  this->ShowKeyboard = ShowKeyboard;
  this->ShowKeyboardForOverlay = ShowKeyboardForOverlay;
  this->GetKeyboardText = GetKeyboardText;
  this->HideKeyboard = HideKeyboard;
  this->SetKeyboardTransformAbsolute = SetKeyboardTransformAbsolute;
  this->SetKeyboardPositionForOverlay = SetKeyboardPositionForOverlay;
  this->SetOverlayIntersectionMask = SetOverlayIntersectionMask;
  this->GetOverlayFlags = GetOverlayFlags;
  this->ShowMessageOverlay = ShowMessageOverlay;
  this->CloseMessageOverlay = CloseMessageOverlay;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay::IVROverlay() {}
