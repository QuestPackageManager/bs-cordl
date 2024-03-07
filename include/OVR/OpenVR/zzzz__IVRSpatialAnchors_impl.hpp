#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRSpatialAnchors_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSpatialAnchorError_def.hpp"
#include "OVR/OpenVR/zzzz__IVRSpatialAnchors_def.hpp"
#include "OVR/OpenVR/zzzz__SpatialAnchorPose_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x29442ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::*)(
    ::StringW, ByRef<uint32_t>)>(&::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2944384;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::*)(::StringW, ByRef<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2944398;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::*)(
    ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x294442c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor* OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*>(object, method));
}
inline void OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::Invoke(::StringW pchDescriptor, ByRef<uint32_t> pHandleOut) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError, false>(this, ___internal_method, pchDescriptor, pHandleOut);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::BeginInvoke(::StringW pchDescriptor, ByRef<uint32_t> pHandleOut, ::System::AsyncCallback* callback,
                                                                                                                 ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchDescriptor, pHandleOut, callback, object);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::EndInvoke(ByRef<uint32_t> pHandleOut, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError, false>(this, ___internal_method, pHandleOut, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2944458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::*)(
    uint32_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t>, ByRef<uint32_t>)>(&::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x294451c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::*)(uint32_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t>, ByRef<uint32_t>,
                                                                         ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2944530;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::*)(
    ByRef<::OVR::OpenVR::SpatialAnchorPose_t>, ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2944630;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose* OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*>(object, method));
}
inline void OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin,
                                                                                                                   ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPose, ByRef<uint32_t> pHandleOut) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError, false>(this, ___internal_method, unDeviceIndex, eOrigin, pPose, pHandleOut);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin,
                                                                                                           ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPose, ByRef<uint32_t> pHandleOut,
                                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, eOrigin, pPose, pHandleOut, callback, object);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::EndInvoke(ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPose, ByRef<uint32_t> pHandleOut,
                                                                                                                      ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError, false>(this, ___internal_method, pPose, pHandleOut, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::__IVRSpatialAnchors___CreateSpatialAnchorFromPose() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2944664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::*)(
    uint32_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t>)>(&::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2944728;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::*)(uint32_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t>, ::System::AsyncCallback*,
                                                                  ::System::Object*)>(&::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::BeginInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x294473c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::*)(
    ByRef<::OVR::OpenVR::SpatialAnchorPose_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2944824;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose* OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*>(object, method));
}
inline void OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::Invoke(uint32_t unHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin,
                                                                                                            ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError, false>(this, ___internal_method, unHandle, eOrigin, pPoseOut);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::BeginInvoke(uint32_t unHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin,
                                                                                                    ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut, ::System::AsyncCallback* callback,
                                                                                                    ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unHandle, eOrigin, pPoseOut, callback, object);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::EndInvoke(ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError, false>(this, ___internal_method, pPoseOut, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::__IVRSpatialAnchors___GetSpatialAnchorPose() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2944850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::*)(
    uint32_t, ::System::Text::StringBuilder*, ByRef<uint32_t>)>(&::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2944914;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::*)(uint32_t, ::System::Text::StringBuilder*, ByRef<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2944928;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::*)(
    ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x29449d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor* OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*>(object, method));
}
inline void OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::Invoke(uint32_t unHandle, ::System::Text::StringBuilder* pchDescriptorOut,
                                                                                                                  ByRef<uint32_t> punDescriptorBufferLenInOut) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError, false>(this, ___internal_method, unHandle, pchDescriptorOut, punDescriptorBufferLenInOut);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::BeginInvoke(uint32_t unHandle, ::System::Text::StringBuilder* pchDescriptorOut,
                                                                                                          ByRef<uint32_t> punDescriptorBufferLenInOut, ::System::AsyncCallback* callback,
                                                                                                          ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unHandle, pchDescriptorOut, punDescriptorBufferLenInOut, callback, object);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::EndInvoke(ByRef<uint32_t> punDescriptorBufferLenInOut, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError, false>(this, ___internal_method, punDescriptorBufferLenInOut, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::__IVRSpatialAnchors___GetSpatialAnchorDescriptor() {}
// Ctor Parameters [CppParam { name: "CreateSpatialAnchorFromDescriptor", ty: "::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "CreateSpatialAnchorFromPose", ty: "::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "GetSpatialAnchorPose", ty: "::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetSpatialAnchorDescriptor", ty:
// "::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::OVR::OpenVR::IVRSpatialAnchors::IVRSpatialAnchors(::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor* CreateSpatialAnchorFromDescriptor,
                                                              ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose* CreateSpatialAnchorFromPose,
                                                              ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose* GetSpatialAnchorPose,
                                                              ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor* GetSpatialAnchorDescriptor) noexcept {
  this->CreateSpatialAnchorFromDescriptor = CreateSpatialAnchorFromDescriptor;
  this->CreateSpatialAnchorFromPose = CreateSpatialAnchorFromPose;
  this->GetSpatialAnchorPose = GetSpatialAnchorPose;
  this->GetSpatialAnchorDescriptor = GetSpatialAnchorDescriptor;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSpatialAnchors::IVRSpatialAnchors() {}
