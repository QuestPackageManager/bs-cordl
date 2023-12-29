#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRSpatialAnchors_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSpatialAnchorError_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__SpatialAnchorPose_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "OVR/OpenVR/zzzz__IVRSpatialAnchors_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26791e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::*)(
    ::StringW, ByRef<uint32_t>)>(&::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26792b8;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x26792cc;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2679360;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor* OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*>(object, method));
}
inline void OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::Invoke(::StringW pchDescriptor, ByRef<uint32_t> pHandleOut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError, false>(this, ___internal_method, pchDescriptor, pHandleOut);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::BeginInvoke(::StringW pchDescriptor, ByRef<uint32_t> pHandleOut, ::System::AsyncCallback* callback,
                                                                                                                 ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchDescriptor, pHandleOut, callback, object);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::EndInvoke(ByRef<uint32_t> pHandleOut, ::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor*>::get(), "EndInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError, false>(this, ___internal_method, pHandleOut, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor::__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x267938c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::*)(
    uint32_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t>, ByRef<uint32_t>)>(&::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2679450;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2679464;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2679564;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose* OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*>(object, method));
}
inline void OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin,
                                                                                                                   ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPose, ByRef<uint32_t> pHandleOut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::SpatialAnchorPose_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError, false>(this, ___internal_method, unDeviceIndex, eOrigin, pPose, pHandleOut);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin,
                                                                                                           ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPose, ByRef<uint32_t> pHandleOut,
                                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::SpatialAnchorPose_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unDeviceIndex, eOrigin, pPose, pHandleOut, callback, object);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::EndInvoke(ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPose, ByRef<uint32_t> pHandleOut,
                                                                                                                      ::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose*>::get(), "EndInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::SpatialAnchorPose_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError, false>(this, ___internal_method, pPose, pHandleOut, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSpatialAnchors___CreateSpatialAnchorFromPose::__IVRSpatialAnchors___CreateSpatialAnchorFromPose() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2679598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::*)(
    uint32_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t>)>(&::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x267965c;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2679670;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2679758;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose* OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*>(object, method));
}
inline void OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::Invoke(uint32_t unHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin,
                                                                                                            ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::SpatialAnchorPose_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError, false>(this, ___internal_method, unHandle, eOrigin, pPoseOut);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::BeginInvoke(uint32_t unHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin,
                                                                                                    ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut, ::System::AsyncCallback* callback,
                                                                                                    ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::SpatialAnchorPose_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unHandle, eOrigin, pPoseOut, callback, object);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::EndInvoke(ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut, ::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose*>::get(), "EndInvoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::SpatialAnchorPose_t>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError, false>(this, ___internal_method, pPoseOut, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorPose::__IVRSpatialAnchors___GetSpatialAnchorPose() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2679784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::*)(
    uint32_t, ::System::Text::StringBuilder*, ByRef<uint32_t>)>(&::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2679848;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x267985c;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2679904;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor* OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*>(object, method));
}
inline void OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::Invoke(uint32_t unHandle, ::System::Text::StringBuilder* pchDescriptorOut,
                                                                                                                  ByRef<uint32_t> punDescriptorBufferLenInOut) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError, false>(this, ___internal_method, unHandle, pchDescriptorOut, punDescriptorBufferLenInOut);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::BeginInvoke(uint32_t unHandle, ::System::Text::StringBuilder* pchDescriptorOut,
                                                                                                          ByRef<uint32_t> punDescriptorBufferLenInOut, ::System::AsyncCallback* callback,
                                                                                                          ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unHandle, pchDescriptorOut, punDescriptorBufferLenInOut, callback, object);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor::EndInvoke(ByRef<uint32_t> punDescriptorBufferLenInOut, ::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRSpatialAnchors___GetSpatialAnchorDescriptor*>::get(), "EndInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
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
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
