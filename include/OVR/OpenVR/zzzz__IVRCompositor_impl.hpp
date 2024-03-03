#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRCompositor_def.hpp"
#include "OVR/OpenVR/zzzz__Compositor_CumulativeStats_def.hpp"
#include "OVR/OpenVR/zzzz__Compositor_FrameTiming_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__EVRCompositorError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRCompositorTimingMode_def.hpp"
#include "OVR/OpenVR/zzzz__EVREye_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSubmitFlags_def.hpp"
#include "OVR/OpenVR/zzzz__HmdColor_t_def.hpp"
#include "OVR/OpenVR/zzzz__IVRCompositor_def.hpp"
#include "OVR/OpenVR/zzzz__Texture_t_def.hpp"
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRTextureBounds_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetTrackingSpace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SetTrackingSpace::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___SetTrackingSpace::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28ccb1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetTrackingSpace.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SetTrackingSpace::*)(::OVR::OpenVR::ETrackingUniverseOrigin)>(
    &::OVR::OpenVR::__IVRCompositor___SetTrackingSpace::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28ccbe0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetTrackingSpace.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___SetTrackingSpace::*)(::OVR::OpenVR::ETrackingUniverseOrigin, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRCompositor___SetTrackingSpace::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x28ccbf4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetTrackingSpace.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SetTrackingSpace::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___SetTrackingSpace::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28ccc78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___SetTrackingSpace* OVR::OpenVR::__IVRCompositor___SetTrackingSpace::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___SetTrackingSpace::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___SetTrackingSpace::Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eOrigin);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___SetTrackingSpace::BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::System::AsyncCallback* callback,
                                                                                            ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eOrigin, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___SetTrackingSpace::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___SetTrackingSpace::__IVRCompositor___SetTrackingSpace() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetTrackingSpace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetTrackingSpace::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___GetTrackingSpace::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28ccc84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetTrackingSpace.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ETrackingUniverseOrigin (::OVR::OpenVR::__IVRCompositor___GetTrackingSpace::*)()>(
    &::OVR::OpenVR::__IVRCompositor___GetTrackingSpace::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28ccd40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetTrackingSpace.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___GetTrackingSpace::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetTrackingSpace::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28ccd54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetTrackingSpace.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ETrackingUniverseOrigin (::OVR::OpenVR::__IVRCompositor___GetTrackingSpace::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetTrackingSpace::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28ccd74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetTrackingSpace* OVR::OpenVR::__IVRCompositor___GetTrackingSpace::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetTrackingSpace::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::ETrackingUniverseOrigin OVR::OpenVR::__IVRCompositor___GetTrackingSpace::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackingUniverseOrigin, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetTrackingSpace::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline ::OVR::OpenVR::ETrackingUniverseOrigin OVR::OpenVR::__IVRCompositor___GetTrackingSpace::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackingUniverseOrigin, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___GetTrackingSpace::__IVRCompositor___GetTrackingSpace() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___WaitGetPoses._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___WaitGetPoses::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___WaitGetPoses::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28ccd9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___WaitGetPoses.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___WaitGetPoses::*)(
    ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t,
    ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t)>(&::OVR::OpenVR::__IVRCompositor___WaitGetPoses::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cce74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___WaitGetPoses.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___WaitGetPoses::*)(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t,
                                                                                           ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t,
                                                                                           ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___WaitGetPoses::BeginInvoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x28cce88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___WaitGetPoses.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___WaitGetPoses::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___WaitGetPoses::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28ccf34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___WaitGetPoses* OVR::OpenVR::__IVRCompositor___WaitGetPoses::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___WaitGetPoses::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError
OVR::OpenVR::__IVRCompositor___WaitGetPoses::Invoke(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                    ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pGamePoseArray, uint32_t unGamePoseArrayCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}
inline ::System::IAsyncResult*
OVR::OpenVR::__IVRCompositor___WaitGetPoses::BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pRenderPoseArray,
                                                         uint32_t unRenderPoseArrayCount,
                                                         ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pGamePoseArray,
                                                         uint32_t unGamePoseArrayCount, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, callback,
                                                                             object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___WaitGetPoses::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___WaitGetPoses::__IVRCompositor___WaitGetPoses() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastPoses._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetLastPoses::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___GetLastPoses::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28ccf5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastPoses.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___GetLastPoses::*)(
    ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t,
    ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t)>(&::OVR::OpenVR::__IVRCompositor___GetLastPoses::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cd034;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastPoses.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___GetLastPoses::*)(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t,
                                                                                           ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t,
                                                                                           ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetLastPoses::BeginInvoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x28cd048;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastPoses.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___GetLastPoses::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___GetLastPoses::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28cd0f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetLastPoses* OVR::OpenVR::__IVRCompositor___GetLastPoses::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetLastPoses::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError
OVR::OpenVR::__IVRCompositor___GetLastPoses::Invoke(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                    ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pGamePoseArray, uint32_t unGamePoseArrayCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}
inline ::System::IAsyncResult*
OVR::OpenVR::__IVRCompositor___GetLastPoses::BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pRenderPoseArray,
                                                         uint32_t unRenderPoseArrayCount,
                                                         ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pGamePoseArray,
                                                         uint32_t unGamePoseArrayCount, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, callback,
                                                                             object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___GetLastPoses::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___GetLastPoses::__IVRCompositor___GetLastPoses() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28cd11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::*)(
    uint32_t, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>)>(&::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cd1e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::*)(uint32_t, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::System::AsyncCallback*,
                                                                          ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28cd1f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::*)(
    ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28cd2cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex* OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::Invoke(uint32_t unDeviceIndex, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose,
                                                                                                                 ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, unDeviceIndex, pOutputPose, pOutputGamePose);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::BeginInvoke(uint32_t unDeviceIndex, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose,
                                                                                                            ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose,
                                                                                                            ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, pOutputPose, pOutputGamePose, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::EndInvoke(ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose,
                                                                                                                    ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose,
                                                                                                                    ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, pOutputPose, pOutputGamePose, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::__IVRCompositor___GetLastPoseForTrackedDeviceIndex() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___Submit._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___Submit::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___Submit::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28cd300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___Submit.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___Submit::*)(
    ::OVR::OpenVR::EVREye, ByRef<::OVR::OpenVR::Texture_t>, ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::OVR::OpenVR::EVRSubmitFlags)>(&::OVR::OpenVR::__IVRCompositor___Submit::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cd3c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___Submit.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___Submit::*)(::OVR::OpenVR::EVREye, ByRef<::OVR::OpenVR::Texture_t>, ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::OVR::OpenVR::EVRSubmitFlags,
                                                ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___Submit::BeginInvoke)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x28cd3d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___Submit.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___Submit::*)(
    ByRef<::OVR::OpenVR::Texture_t>, ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___Submit::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28cd4f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___Submit* OVR::OpenVR::__IVRCompositor___Submit::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___Submit*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___Submit::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___Submit::Invoke(::OVR::OpenVR::EVREye eEye, ByRef<::OVR::OpenVR::Texture_t> pTexture,
                                                                                       ByRef<::OVR::OpenVR::VRTextureBounds_t> pBounds, ::OVR::OpenVR::EVRSubmitFlags nSubmitFlags) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, eEye, pTexture, pBounds, nSubmitFlags);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___Submit::BeginInvoke(::OVR::OpenVR::EVREye eEye, ByRef<::OVR::OpenVR::Texture_t> pTexture, ByRef<::OVR::OpenVR::VRTextureBounds_t> pBounds,
                                                                                  ::OVR::OpenVR::EVRSubmitFlags nSubmitFlags, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eEye, pTexture, pBounds, nSubmitFlags, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___Submit::EndInvoke(ByRef<::OVR::OpenVR::Texture_t> pTexture, ByRef<::OVR::OpenVR::VRTextureBounds_t> pBounds,
                                                                                          ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, pTexture, pBounds, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___Submit::__IVRCompositor___Submit() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28cd528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::*)()>(
    &::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cd5e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28cd5f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28cd618;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame* OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::__IVRCompositor___ClearLastSubmittedFrame() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___PostPresentHandoff._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___PostPresentHandoff::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___PostPresentHandoff::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28cd624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___PostPresentHandoff.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___PostPresentHandoff::*)()>(
    &::OVR::OpenVR::__IVRCompositor___PostPresentHandoff::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cd6e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___PostPresentHandoff.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___PostPresentHandoff::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___PostPresentHandoff::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28cd6f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___PostPresentHandoff.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___PostPresentHandoff::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___PostPresentHandoff::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28cd714;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___PostPresentHandoff* OVR::OpenVR::__IVRCompositor___PostPresentHandoff::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___PostPresentHandoff::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___PostPresentHandoff::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___PostPresentHandoff::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___PostPresentHandoff::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___PostPresentHandoff::__IVRCompositor___PostPresentHandoff() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTiming._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetFrameTiming::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___GetFrameTiming::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28cd720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTiming.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___GetFrameTiming::*)(ByRef<::OVR::OpenVR::Compositor_FrameTiming>, uint32_t)>(
    &::OVR::OpenVR::__IVRCompositor___GetFrameTiming::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cd7f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTiming.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___GetFrameTiming::*)(ByRef<::OVR::OpenVR::Compositor_FrameTiming>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRCompositor___GetFrameTiming::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28cd80c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTiming.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___GetFrameTiming::*)(
    ByRef<::OVR::OpenVR::Compositor_FrameTiming>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetFrameTiming::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28cd8c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetFrameTiming* OVR::OpenVR::__IVRCompositor___GetFrameTiming::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetFrameTiming::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRCompositor___GetFrameTiming::Invoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t unFramesAgo) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pTiming, unFramesAgo);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetFrameTiming::BeginInvoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t unFramesAgo, ::System::AsyncCallback* callback,
                                                                                          ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pTiming, unFramesAgo, callback, object);
}
inline bool OVR::OpenVR::__IVRCompositor___GetFrameTiming::EndInvoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pTiming, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___GetFrameTiming::__IVRCompositor___GetFrameTiming() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTimings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetFrameTimings::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___GetFrameTimings::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28cd8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTimings.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (::OVR::OpenVR::__IVRCompositor___GetFrameTimings::*)(ByRef<::OVR::OpenVR::Compositor_FrameTiming>, uint32_t)>(&::OVR::OpenVR::__IVRCompositor___GetFrameTimings::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cd9c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTimings.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___GetFrameTimings::*)(ByRef<::OVR::OpenVR::Compositor_FrameTiming>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRCompositor___GetFrameTimings::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28cd9dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTimings.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRCompositor___GetFrameTimings::*)(
    ByRef<::OVR::OpenVR::Compositor_FrameTiming>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetFrameTimings::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28cda94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetFrameTimings* OVR::OpenVR::__IVRCompositor___GetFrameTimings::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetFrameTimings::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRCompositor___GetFrameTimings::Invoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t nFrames) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pTiming, nFrames);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetFrameTimings::BeginInvoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t nFrames, ::System::AsyncCallback* callback,
                                                                                           ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pTiming, nFrames, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRCompositor___GetFrameTimings::EndInvoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pTiming, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___GetFrameTimings::__IVRCompositor___GetFrameTimings() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28cdac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::*)()>(
    &::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cdb7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28cdb90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28cdbb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining* OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline float_t OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline float_t OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::__IVRCompositor___GetFrameTimeRemaining() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCumulativeStats._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetCumulativeStats::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___GetCumulativeStats::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28cdbd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCumulativeStats.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetCumulativeStats::*)(
    ByRef<::OVR::OpenVR::Compositor_CumulativeStats>, uint32_t)>(&::OVR::OpenVR::__IVRCompositor___GetCumulativeStats::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cdcb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCumulativeStats.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___GetCumulativeStats::*)(ByRef<::OVR::OpenVR::Compositor_CumulativeStats>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRCompositor___GetCumulativeStats::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28cdcc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCumulativeStats.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetCumulativeStats::*)(
    ByRef<::OVR::OpenVR::Compositor_CumulativeStats>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetCumulativeStats::EndInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28cdd7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetCumulativeStats* OVR::OpenVR::__IVRCompositor___GetCumulativeStats::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetCumulativeStats::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___GetCumulativeStats::Invoke(ByRef<::OVR::OpenVR::Compositor_CumulativeStats> pStats, uint32_t nStatsSizeInBytes) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pStats, nStatsSizeInBytes);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetCumulativeStats::BeginInvoke(ByRef<::OVR::OpenVR::Compositor_CumulativeStats> pStats, uint32_t nStatsSizeInBytes,
                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pStats, nStatsSizeInBytes, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___GetCumulativeStats::EndInvoke(ByRef<::OVR::OpenVR::Compositor_CumulativeStats> pStats, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pStats, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___GetCumulativeStats::__IVRCompositor___GetCumulativeStats() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___FadeToColor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___FadeToColor::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___FadeToColor::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28cdd98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___FadeToColor.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___FadeToColor::*)(float_t, float_t, float_t, float_t, float_t, bool)>(
    &::OVR::OpenVR::__IVRCompositor___FadeToColor::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x28cde5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___FadeToColor.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___FadeToColor::*)(float_t, float_t, float_t, float_t, float_t, bool, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRCompositor___FadeToColor::BeginInvoke)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x28cde74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___FadeToColor.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___FadeToColor::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___FadeToColor::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28cdf88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___FadeToColor* OVR::OpenVR::__IVRCompositor___FadeToColor::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___FadeToColor*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___FadeToColor::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___FadeToColor::Invoke(float_t fSeconds, float_t fRed, float_t fGreen, float_t fBlue, float_t fAlpha, bool bBackground) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___FadeToColor::BeginInvoke(float_t fSeconds, float_t fRed, float_t fGreen, float_t fBlue, float_t fAlpha, bool bBackground,
                                                                                       ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___FadeToColor::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___FadeToColor::__IVRCompositor___FadeToColor() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28cdf94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdColor_t (::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::*)(bool)>(
    &::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x28ce058;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28ce070;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdColor_t (::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28ce0f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor* OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HmdColor_t OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::Invoke(bool bBackground) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdColor_t, false>(this, ___internal_method, bBackground);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::BeginInvoke(bool bBackground, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, bBackground, callback, object);
}
inline ::OVR::OpenVR::HmdColor_t OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdColor_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::__IVRCompositor___GetCurrentFadeColor() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___FadeGrid._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___FadeGrid::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___FadeGrid::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28ce124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___FadeGrid.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___FadeGrid::*)(float_t, bool)>(
    &::OVR::OpenVR::__IVRCompositor___FadeGrid::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x28ce1e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___FadeGrid.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___FadeGrid::*)(float_t, bool, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___FadeGrid::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28ce200;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___FadeGrid.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___FadeGrid::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___FadeGrid::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28ce2bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___FadeGrid* OVR::OpenVR::__IVRCompositor___FadeGrid::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___FadeGrid*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___FadeGrid::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___FadeGrid::Invoke(float_t fSeconds, bool bFadeIn) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fSeconds, bFadeIn);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___FadeGrid::BeginInvoke(float_t fSeconds, bool bFadeIn, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, fSeconds, bFadeIn, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___FadeGrid::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___FadeGrid::__IVRCompositor___FadeGrid() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28ce2c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::*)()>(
    &::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28ce384;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28ce398;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28ce3b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha* OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline float_t OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline float_t OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::__IVRCompositor___GetCurrentGridAlpha() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28ce3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::*)(
    ByRef<::ArrayW<::OVR::OpenVR::Texture_t, ::Array<::OVR::OpenVR::Texture_t>*>>, uint32_t)>(&::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28ce4b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::*)(ByRef<::ArrayW<::OVR::OpenVR::Texture_t, ::Array<::OVR::OpenVR::Texture_t>*>>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x28ce4cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28ce560;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride* OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::Invoke(ByRef<::ArrayW<::OVR::OpenVR::Texture_t, ::Array<::OVR::OpenVR::Texture_t>*>> pTextures,
                                                                                                  uint32_t unTextureCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, pTextures, unTextureCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::Texture_t, ::Array<::OVR::OpenVR::Texture_t>*>> pTextures,
                                                                                             uint32_t unTextureCount, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pTextures, unTextureCount, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::__IVRCompositor___SetSkyboxOverride() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28ce588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::*)()>(
    &::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28ce644;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28ce658;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28ce678;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride* OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::__IVRCompositor___ClearSkyboxOverride() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorBringToFront._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorBringToFront::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___CompositorBringToFront::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28ce684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorBringToFront.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorBringToFront::*)()>(
    &::OVR::OpenVR::__IVRCompositor___CompositorBringToFront::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28ce740;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorBringToFront.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___CompositorBringToFront::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___CompositorBringToFront::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28ce754;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorBringToFront.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorBringToFront::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___CompositorBringToFront::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28ce774;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___CompositorBringToFront* OVR::OpenVR::__IVRCompositor___CompositorBringToFront::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___CompositorBringToFront::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___CompositorBringToFront::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___CompositorBringToFront::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___CompositorBringToFront::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___CompositorBringToFront::__IVRCompositor___CompositorBringToFront() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorGoToBack._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorGoToBack::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___CompositorGoToBack::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28ce780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorGoToBack.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorGoToBack::*)()>(
    &::OVR::OpenVR::__IVRCompositor___CompositorGoToBack::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28ce83c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorGoToBack.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___CompositorGoToBack::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___CompositorGoToBack::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28ce850;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorGoToBack.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorGoToBack::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___CompositorGoToBack::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28ce870;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___CompositorGoToBack* OVR::OpenVR::__IVRCompositor___CompositorGoToBack::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___CompositorGoToBack::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___CompositorGoToBack::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___CompositorGoToBack::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___CompositorGoToBack::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___CompositorGoToBack::__IVRCompositor___CompositorGoToBack() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorQuit._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorQuit::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___CompositorQuit::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28ce87c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorQuit.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorQuit::*)()>(
    &::OVR::OpenVR::__IVRCompositor___CompositorQuit::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28ce938;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorQuit.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___CompositorQuit::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___CompositorQuit::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28ce94c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorQuit.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorQuit::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___CompositorQuit::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28ce96c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___CompositorQuit* OVR::OpenVR::__IVRCompositor___CompositorQuit::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___CompositorQuit::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___CompositorQuit::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___CompositorQuit::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___CompositorQuit::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___CompositorQuit::__IVRCompositor___CompositorQuit() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___IsFullscreen._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___IsFullscreen::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___IsFullscreen::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28ce978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___IsFullscreen.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___IsFullscreen::*)()>(&::OVR::OpenVR::__IVRCompositor___IsFullscreen::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cea34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___IsFullscreen.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___IsFullscreen::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___IsFullscreen::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28cea48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___IsFullscreen.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___IsFullscreen::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___IsFullscreen::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28cea68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___IsFullscreen* OVR::OpenVR::__IVRCompositor___IsFullscreen::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___IsFullscreen::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRCompositor___IsFullscreen::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___IsFullscreen::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::__IVRCompositor___IsFullscreen::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___IsFullscreen::__IVRCompositor___IsFullscreen() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28cea90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::*)()>(
    &::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28ceb4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28ceb60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28ceb80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess* OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::__IVRCompositor___GetCurrentSceneFocusProcess() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28ceba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::*)()>(
    &::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cec64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28cec78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28cec98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer* OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::__IVRCompositor___GetLastFrameRenderer() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CanRenderScene._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CanRenderScene::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___CanRenderScene::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28cecc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CanRenderScene.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___CanRenderScene::*)()>(
    &::OVR::OpenVR::__IVRCompositor___CanRenderScene::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28ced7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CanRenderScene.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___CanRenderScene::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___CanRenderScene::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28ced90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CanRenderScene.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___CanRenderScene::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___CanRenderScene::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28cedb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___CanRenderScene* OVR::OpenVR::__IVRCompositor___CanRenderScene::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___CanRenderScene::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRCompositor___CanRenderScene::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___CanRenderScene::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::__IVRCompositor___CanRenderScene::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___CanRenderScene::__IVRCompositor___CanRenderScene() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28cedd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::*)()>(
    &::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cee94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28ceea8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28ceec8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow* OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::__IVRCompositor___ShowMirrorWindow() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___HideMirrorWindow._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___HideMirrorWindow::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___HideMirrorWindow::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28ceed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___HideMirrorWindow.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___HideMirrorWindow::*)()>(
    &::OVR::OpenVR::__IVRCompositor___HideMirrorWindow::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cef90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___HideMirrorWindow.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___HideMirrorWindow::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___HideMirrorWindow::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28cefa4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___HideMirrorWindow.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___HideMirrorWindow::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___HideMirrorWindow::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28cefc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___HideMirrorWindow* OVR::OpenVR::__IVRCompositor___HideMirrorWindow::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___HideMirrorWindow::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___HideMirrorWindow::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___HideMirrorWindow::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___HideMirrorWindow::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___HideMirrorWindow::__IVRCompositor___HideMirrorWindow() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28cefd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::*)()>(
    &::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cf08c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28cf0a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28cf0c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible* OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::__IVRCompositor___IsMirrorWindowVisible() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorDumpImages._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorDumpImages::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___CompositorDumpImages::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28cf0e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorDumpImages.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorDumpImages::*)()>(
    &::OVR::OpenVR::__IVRCompositor___CompositorDumpImages::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cf1a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorDumpImages.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___CompositorDumpImages::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___CompositorDumpImages::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28cf1b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorDumpImages.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorDumpImages::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___CompositorDumpImages::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28cf1d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___CompositorDumpImages* OVR::OpenVR::__IVRCompositor___CompositorDumpImages::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___CompositorDumpImages::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___CompositorDumpImages::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___CompositorDumpImages::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___CompositorDumpImages::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___CompositorDumpImages::__IVRCompositor___CompositorDumpImages() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28cf1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::*)()>(
    &::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cf2a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::*)(::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28cf2b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28cf2d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources* OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::__IVRCompositor___ShouldAppRenderWithLowResources() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28cf2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::*)(bool)>(
    &::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x28cf3c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28cf3d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28cf460;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn* OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::Invoke(bool bOverride) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bOverride);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::BeginInvoke(bool bOverride, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, bOverride, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::__IVRCompositor___ForceInterleavedReprojectionOn() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28cf46c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::*)()>(
    &::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cf528;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28cf53c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28cf55c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess* OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::__IVRCompositor___ForceReconnectProcess() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SuspendRendering._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SuspendRendering::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___SuspendRendering::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28cf568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SuspendRendering.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SuspendRendering::*)(bool)>(
    &::OVR::OpenVR::__IVRCompositor___SuspendRendering::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x28cf62c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SuspendRendering.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___SuspendRendering::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___SuspendRendering::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28cf644;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SuspendRendering.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SuspendRendering::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___SuspendRendering::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28cf6cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___SuspendRendering* OVR::OpenVR::__IVRCompositor___SuspendRendering::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___SuspendRendering::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___SuspendRendering::Invoke(bool bSuspend) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bSuspend);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___SuspendRendering::BeginInvoke(bool bSuspend, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, bSuspend, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___SuspendRendering::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___SuspendRendering::__IVRCompositor___SuspendRendering() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28cf6d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::*)(
    ::OVR::OpenVR::EVREye, void*, ByRef<void*>)>(&::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cf79c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::*)(::OVR::OpenVR::EVREye, void*, ByRef<void*>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::BeginInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x28cf7b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::*)(
    ByRef<void*>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28cf880;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11* OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::Invoke(::OVR::OpenVR::EVREye eEye, void* pD3D11DeviceOrResource,
                                                                                                      ByRef<void*> ppD3D11ShaderResourceView) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::BeginInvoke(::OVR::OpenVR::EVREye eEye, void* pD3D11DeviceOrResource, ByRef<void*> ppD3D11ShaderResourceView,
                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::EndInvoke(ByRef<void*> ppD3D11ShaderResourceView, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, ppD3D11ShaderResourceView, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::__IVRCompositor___GetMirrorTextureD3D11() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28cf8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::*)(void*)>(
    &::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cf970;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::*)(void*, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x28cf984;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28cfa08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11* OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::Invoke(void* pD3D11ShaderResourceView) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pD3D11ShaderResourceView);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::BeginInvoke(void* pD3D11ShaderResourceView, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pD3D11ShaderResourceView, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::__IVRCompositor___ReleaseMirrorTextureD3D11() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28cfa14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::*)(
    ::OVR::OpenVR::EVREye, ByRef<uint32_t>, void*)>(&::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cfad8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::*)(::OVR::OpenVR::EVREye, ByRef<uint32_t>, void*, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::BeginInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x28cfaec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::*)(
    ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28cfbd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL* OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::Invoke(::OVR::OpenVR::EVREye eEye, ByRef<uint32_t> pglTextureId, void* pglSharedTextureHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, eEye, pglTextureId, pglSharedTextureHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::BeginInvoke(::OVR::OpenVR::EVREye eEye, ByRef<uint32_t> pglTextureId, void* pglSharedTextureHandle,
                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eEye, pglTextureId, pglSharedTextureHandle, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::EndInvoke(ByRef<uint32_t> pglTextureId, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, pglTextureId, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::__IVRCompositor___GetMirrorTextureGL() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28cfc00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::*)(uint32_t, void*)>(
    &::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cfcc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::*)(uint32_t, void*, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x28cfcd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28cfd8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture* OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::Invoke(uint32_t glTextureId, void* glSharedTextureHandle) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, glTextureId, glSharedTextureHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::BeginInvoke(uint32_t glTextureId, void* glSharedTextureHandle, ::System::AsyncCallback* callback,
                                                                                                  ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, glTextureId, glSharedTextureHandle, callback, object);
}
inline bool OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::__IVRCompositor___ReleaseSharedGLTexture() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28cfdb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::*)(void*)>(
    &::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cfe78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::*)(void*, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x28cfe8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28cff10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess* OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::Invoke(void* glSharedTextureHandle) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, glSharedTextureHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::BeginInvoke(void* glSharedTextureHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, glSharedTextureHandle, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::__IVRCompositor___LockGLSharedTextureForAccess() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28cff1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::*)(void*)>(
    &::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28cffe0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::*)(void*, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x28cfff4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28d0078;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess* OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::Invoke(void* glSharedTextureHandle) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, glSharedTextureHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::BeginInvoke(void* glSharedTextureHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, glSharedTextureHandle, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::__IVRCompositor___UnlockGLSharedTextureForAccess() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28d0084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::*)(
    ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28d015c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::*)(::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x28d0170;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28d0204;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired* OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::Invoke(::System::Text::StringBuilder* pchValue, uint32_t unBufferSize) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pchValue, unBufferSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::BeginInvoke(::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchValue, unBufferSize, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::__IVRCompositor___GetVulkanInstanceExtensionsRequired() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28d022c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::*)(
    void*, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28d02f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::*)(void*, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28d0304;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28d03c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired* OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::Invoke(void* pPhysicalDevice, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pPhysicalDevice, pchValue, unBufferSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::BeginInvoke(void* pPhysicalDevice, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pPhysicalDevice, pchValue, unBufferSize, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::__IVRCompositor___GetVulkanDeviceExtensionsRequired() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28d03e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::*)(::OVR::OpenVR::EVRCompositorTimingMode)>(
    &::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28d04ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::*)(::OVR::OpenVR::EVRCompositorTimingMode, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x28d04c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28d0544;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode* OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::Invoke(::OVR::OpenVR::EVRCompositorTimingMode eTimingMode) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eTimingMode);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::BeginInvoke(::OVR::OpenVR::EVRCompositorTimingMode eTimingMode, ::System::AsyncCallback* callback,
                                                                                                 ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eTimingMode, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::__IVRCompositor___SetExplicitTimingMode() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28d0550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::*)()>(
    &::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28d060c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28d0620;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28d0640;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData* OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::__IVRCompositor___SubmitExplicitTimingData() {}
// Ctor Parameters [CppParam { name: "SetTrackingSpace", ty: "::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetTrackingSpace", ty:
// "::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "WaitGetPoses", ty: "::OVR::OpenVR::__IVRCompositor___WaitGetPoses*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "GetLastPoses", ty: "::OVR::OpenVR::__IVRCompositor___GetLastPoses*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "GetLastPoseForTrackedDeviceIndex", ty: "::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Submit", ty:
// "::OVR::OpenVR::__IVRCompositor___Submit*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ClearLastSubmittedFrame", ty: "::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "PostPresentHandoff", ty: "::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*", modifiers: "", def_value: Some("nullptr") }, CppParam
// { name: "GetFrameTiming", ty: "::OVR::OpenVR::__IVRCompositor___GetFrameTiming*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetFrameTimings", ty:
// "::OVR::OpenVR::__IVRCompositor___GetFrameTimings*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetFrameTimeRemaining", ty:
// "::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetCumulativeStats", ty:
// "::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "FadeToColor", ty: "::OVR::OpenVR::__IVRCompositor___FadeToColor*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "GetCurrentFadeColor", ty: "::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "FadeGrid", ty: "::OVR::OpenVR::__IVRCompositor___FadeGrid*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetCurrentGridAlpha", ty:
// "::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetSkyboxOverride", ty:
// "::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ClearSkyboxOverride", ty:
// "::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "CompositorBringToFront", ty:
// "::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "CompositorGoToBack", ty:
// "::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "CompositorQuit", ty: "::OVR::OpenVR::__IVRCompositor___CompositorQuit*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "IsFullscreen", ty: "::OVR::OpenVR::__IVRCompositor___IsFullscreen*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "GetCurrentSceneFocusProcess", ty: "::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetLastFrameRenderer", ty:
// "::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "CanRenderScene", ty: "::OVR::OpenVR::__IVRCompositor___CanRenderScene*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ShowMirrorWindow", ty: "::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "HideMirrorWindow", ty: "::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "IsMirrorWindowVisible", ty:
// "::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "CompositorDumpImages", ty:
// "::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ShouldAppRenderWithLowResources", ty:
// "::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ForceInterleavedReprojectionOn", ty:
// "::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ForceReconnectProcess", ty:
// "::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SuspendRendering", ty:
// "::OVR::OpenVR::__IVRCompositor___SuspendRendering*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetMirrorTextureD3D11", ty:
// "::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ReleaseMirrorTextureD3D11", ty:
// "::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetMirrorTextureGL", ty:
// "::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ReleaseSharedGLTexture", ty:
// "::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "LockGLSharedTextureForAccess", ty:
// "::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "UnlockGLSharedTextureForAccess", ty:
// "::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetVulkanInstanceExtensionsRequired", ty:
// "::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetVulkanDeviceExtensionsRequired", ty:
// "::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetExplicitTimingMode", ty:
// "::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SubmitExplicitTimingData", ty:
// "::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::OVR::OpenVR::IVRCompositor::IVRCompositor(
    ::OVR::OpenVR::__IVRCompositor___SetTrackingSpace* SetTrackingSpace, ::OVR::OpenVR::__IVRCompositor___GetTrackingSpace* GetTrackingSpace,
    ::OVR::OpenVR::__IVRCompositor___WaitGetPoses* WaitGetPoses, ::OVR::OpenVR::__IVRCompositor___GetLastPoses* GetLastPoses,
    ::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex* GetLastPoseForTrackedDeviceIndex, ::OVR::OpenVR::__IVRCompositor___Submit* Submit,
    ::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame* ClearLastSubmittedFrame, ::OVR::OpenVR::__IVRCompositor___PostPresentHandoff* PostPresentHandoff,
    ::OVR::OpenVR::__IVRCompositor___GetFrameTiming* GetFrameTiming, ::OVR::OpenVR::__IVRCompositor___GetFrameTimings* GetFrameTimings,
    ::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining* GetFrameTimeRemaining, ::OVR::OpenVR::__IVRCompositor___GetCumulativeStats* GetCumulativeStats,
    ::OVR::OpenVR::__IVRCompositor___FadeToColor* FadeToColor, ::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor* GetCurrentFadeColor, ::OVR::OpenVR::__IVRCompositor___FadeGrid* FadeGrid,
    ::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha* GetCurrentGridAlpha, ::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride* SetSkyboxOverride,
    ::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride* ClearSkyboxOverride, ::OVR::OpenVR::__IVRCompositor___CompositorBringToFront* CompositorBringToFront,
    ::OVR::OpenVR::__IVRCompositor___CompositorGoToBack* CompositorGoToBack, ::OVR::OpenVR::__IVRCompositor___CompositorQuit* CompositorQuit,
    ::OVR::OpenVR::__IVRCompositor___IsFullscreen* IsFullscreen, ::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess* GetCurrentSceneFocusProcess,
    ::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer* GetLastFrameRenderer, ::OVR::OpenVR::__IVRCompositor___CanRenderScene* CanRenderScene,
    ::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow* ShowMirrorWindow, ::OVR::OpenVR::__IVRCompositor___HideMirrorWindow* HideMirrorWindow,
    ::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible* IsMirrorWindowVisible, ::OVR::OpenVR::__IVRCompositor___CompositorDumpImages* CompositorDumpImages,
    ::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources* ShouldAppRenderWithLowResources, ::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn* ForceInterleavedReprojectionOn,
    ::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess* ForceReconnectProcess, ::OVR::OpenVR::__IVRCompositor___SuspendRendering* SuspendRendering,
    ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11* GetMirrorTextureD3D11, ::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11* ReleaseMirrorTextureD3D11,
    ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL* GetMirrorTextureGL, ::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture* ReleaseSharedGLTexture,
    ::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess* LockGLSharedTextureForAccess, ::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess* UnlockGLSharedTextureForAccess,
    ::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired* GetVulkanInstanceExtensionsRequired,
    ::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired* GetVulkanDeviceExtensionsRequired, ::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode* SetExplicitTimingMode,
    ::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData* SubmitExplicitTimingData) noexcept {
  this->SetTrackingSpace = SetTrackingSpace;
  this->GetTrackingSpace = GetTrackingSpace;
  this->WaitGetPoses = WaitGetPoses;
  this->GetLastPoses = GetLastPoses;
  this->GetLastPoseForTrackedDeviceIndex = GetLastPoseForTrackedDeviceIndex;
  this->Submit = Submit;
  this->ClearLastSubmittedFrame = ClearLastSubmittedFrame;
  this->PostPresentHandoff = PostPresentHandoff;
  this->GetFrameTiming = GetFrameTiming;
  this->GetFrameTimings = GetFrameTimings;
  this->GetFrameTimeRemaining = GetFrameTimeRemaining;
  this->GetCumulativeStats = GetCumulativeStats;
  this->FadeToColor = FadeToColor;
  this->GetCurrentFadeColor = GetCurrentFadeColor;
  this->FadeGrid = FadeGrid;
  this->GetCurrentGridAlpha = GetCurrentGridAlpha;
  this->SetSkyboxOverride = SetSkyboxOverride;
  this->ClearSkyboxOverride = ClearSkyboxOverride;
  this->CompositorBringToFront = CompositorBringToFront;
  this->CompositorGoToBack = CompositorGoToBack;
  this->CompositorQuit = CompositorQuit;
  this->IsFullscreen = IsFullscreen;
  this->GetCurrentSceneFocusProcess = GetCurrentSceneFocusProcess;
  this->GetLastFrameRenderer = GetLastFrameRenderer;
  this->CanRenderScene = CanRenderScene;
  this->ShowMirrorWindow = ShowMirrorWindow;
  this->HideMirrorWindow = HideMirrorWindow;
  this->IsMirrorWindowVisible = IsMirrorWindowVisible;
  this->CompositorDumpImages = CompositorDumpImages;
  this->ShouldAppRenderWithLowResources = ShouldAppRenderWithLowResources;
  this->ForceInterleavedReprojectionOn = ForceInterleavedReprojectionOn;
  this->ForceReconnectProcess = ForceReconnectProcess;
  this->SuspendRendering = SuspendRendering;
  this->GetMirrorTextureD3D11 = GetMirrorTextureD3D11;
  this->ReleaseMirrorTextureD3D11 = ReleaseMirrorTextureD3D11;
  this->GetMirrorTextureGL = GetMirrorTextureGL;
  this->ReleaseSharedGLTexture = ReleaseSharedGLTexture;
  this->LockGLSharedTextureForAccess = LockGLSharedTextureForAccess;
  this->UnlockGLSharedTextureForAccess = UnlockGLSharedTextureForAccess;
  this->GetVulkanInstanceExtensionsRequired = GetVulkanInstanceExtensionsRequired;
  this->GetVulkanDeviceExtensionsRequired = GetVulkanDeviceExtensionsRequired;
  this->SetExplicitTimingMode = SetExplicitTimingMode;
  this->SubmitExplicitTimingData = SubmitExplicitTimingData;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRCompositor::IVRCompositor() {}
