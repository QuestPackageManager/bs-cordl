#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRInput.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRInput_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__EVRInputError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSkeletalMotionRange_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSkeletalTransformSpace_def.hpp"
#include "OVR/OpenVR/zzzz__IVRInput_def.hpp"
#include "OVR/OpenVR/zzzz__InputAnalogActionData_t_def.hpp"
#include "OVR/OpenVR/zzzz__InputDigitalActionData_t_def.hpp"
#include "OVR/OpenVR/zzzz__InputOriginInfo_t_def.hpp"
#include "OVR/OpenVR/zzzz__InputPoseActionData_t_def.hpp"
#include "OVR/OpenVR/zzzz__InputSkeletalActionData_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRActiveActionSet_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRBoneTransform_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___SetActionManifestPath._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRInput___SetActionManifestPath::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRInput___SetActionManifestPath::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3ff8628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___SetActionManifestPath*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___SetActionManifestPath.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___SetActionManifestPath::*)(::StringW)>(
    &::OVR::OpenVR::__IVRInput___SetActionManifestPath::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ff86c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___SetActionManifestPath*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___SetActionManifestPath*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___SetActionManifestPath.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRInput___SetActionManifestPath::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRInput___SetActionManifestPath::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3ff86d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___SetActionManifestPath*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___SetActionManifestPath*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___SetActionManifestPath.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___SetActionManifestPath::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRInput___SetActionManifestPath::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3ff86f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___SetActionManifestPath*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___SetActionManifestPath*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRInput___SetActionManifestPath* OVR::OpenVR::__IVRInput___SetActionManifestPath::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRInput___SetActionManifestPath*>(object, method));
}
inline void OVR::OpenVR::__IVRInput___SetActionManifestPath::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___SetActionManifestPath*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___SetActionManifestPath::Invoke(::StringW pchActionManifestPath) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___SetActionManifestPath*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pchActionManifestPath);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRInput___SetActionManifestPath::BeginInvoke(::StringW pchActionManifestPath, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___SetActionManifestPath*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchActionManifestPath, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___SetActionManifestPath::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___SetActionManifestPath*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRInput___SetActionManifestPath::__IVRInput___SetActionManifestPath() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetActionSetHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRInput___GetActionSetHandle::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRInput___GetActionSetHandle::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3ff8720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionSetHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetActionSetHandle.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetActionSetHandle::*)(::StringW, ByRef<uint64_t>)>(
    &::OVR::OpenVR::__IVRInput___GetActionSetHandle::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ff87c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionSetHandle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionSetHandle*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetActionSetHandle.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRInput___GetActionSetHandle::*)(::StringW, ByRef<uint64_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRInput___GetActionSetHandle::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3ff87d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionSetHandle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionSetHandle*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetActionSetHandle.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetActionSetHandle::*)(
    ByRef<uint64_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRInput___GetActionSetHandle::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3ff8868;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionSetHandle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionSetHandle*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRInput___GetActionSetHandle* OVR::OpenVR::__IVRInput___GetActionSetHandle::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRInput___GetActionSetHandle*>(object, method));
}
inline void OVR::OpenVR::__IVRInput___GetActionSetHandle::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionSetHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetActionSetHandle::Invoke(::StringW pchActionSetName, ByRef<uint64_t> pHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionSetHandle*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pchActionSetName, pHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRInput___GetActionSetHandle::BeginInvoke(::StringW pchActionSetName, ByRef<uint64_t> pHandle, ::System::AsyncCallback* callback,
                                                                                         ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionSetHandle*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchActionSetName, pHandle, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetActionSetHandle::EndInvoke(ByRef<uint64_t> pHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionSetHandle*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pHandle, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRInput___GetActionSetHandle::__IVRInput___GetActionSetHandle() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetActionHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRInput___GetActionHandle::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRInput___GetActionHandle::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3ff8894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetActionHandle.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetActionHandle::*)(::StringW, ByRef<uint64_t>)>(
    &::OVR::OpenVR::__IVRInput___GetActionHandle::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ff8934;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionHandle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionHandle*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetActionHandle.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRInput___GetActionHandle::*)(::StringW, ByRef<uint64_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRInput___GetActionHandle::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3ff8948;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionHandle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionHandle*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetActionHandle.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetActionHandle::*)(ByRef<uint64_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRInput___GetActionHandle::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3ff89dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionHandle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionHandle*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRInput___GetActionHandle* OVR::OpenVR::__IVRInput___GetActionHandle::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRInput___GetActionHandle*>(object, method));
}
inline void OVR::OpenVR::__IVRInput___GetActionHandle::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetActionHandle::Invoke(::StringW pchActionName, ByRef<uint64_t> pHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionHandle*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pchActionName, pHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRInput___GetActionHandle::BeginInvoke(::StringW pchActionName, ByRef<uint64_t> pHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionHandle*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchActionName, pHandle, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetActionHandle::EndInvoke(ByRef<uint64_t> pHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionHandle*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pHandle, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRInput___GetActionHandle::__IVRInput___GetActionHandle() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetInputSourceHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRInput___GetInputSourceHandle::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRInput___GetInputSourceHandle::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3ff8a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetInputSourceHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetInputSourceHandle.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetInputSourceHandle::*)(::StringW, ByRef<uint64_t>)>(
    &::OVR::OpenVR::__IVRInput___GetInputSourceHandle::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ff8aa8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetInputSourceHandle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetInputSourceHandle*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetInputSourceHandle.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRInput___GetInputSourceHandle::*)(::StringW, ByRef<uint64_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRInput___GetInputSourceHandle::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3ff8abc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetInputSourceHandle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetInputSourceHandle*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetInputSourceHandle.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetInputSourceHandle::*)(
    ByRef<uint64_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRInput___GetInputSourceHandle::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3ff8b50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetInputSourceHandle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetInputSourceHandle*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRInput___GetInputSourceHandle* OVR::OpenVR::__IVRInput___GetInputSourceHandle::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRInput___GetInputSourceHandle*>(object, method));
}
inline void OVR::OpenVR::__IVRInput___GetInputSourceHandle::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetInputSourceHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetInputSourceHandle::Invoke(::StringW pchInputSourcePath, ByRef<uint64_t> pHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetInputSourceHandle*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pchInputSourcePath, pHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRInput___GetInputSourceHandle::BeginInvoke(::StringW pchInputSourcePath, ByRef<uint64_t> pHandle, ::System::AsyncCallback* callback,
                                                                                           ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetInputSourceHandle*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchInputSourcePath, pHandle, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetInputSourceHandle::EndInvoke(ByRef<uint64_t> pHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetInputSourceHandle*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pHandle, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRInput___GetInputSourceHandle::__IVRInput___GetInputSourceHandle() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___UpdateActionState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRInput___UpdateActionState::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRInput___UpdateActionState::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3ff8b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___UpdateActionState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___UpdateActionState.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___UpdateActionState::*)(
    ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>>, uint32_t, uint32_t)>(&::OVR::OpenVR::__IVRInput___UpdateActionState::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ff8c1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___UpdateActionState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___UpdateActionState*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___UpdateActionState.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRInput___UpdateActionState::*)(ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>>, uint32_t, uint32_t, ::System::AsyncCallback*,
                                                      ::System::Object*)>(&::OVR::OpenVR::__IVRInput___UpdateActionState::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3ff8c30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___UpdateActionState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___UpdateActionState*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___UpdateActionState.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___UpdateActionState::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRInput___UpdateActionState::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3ff8cd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___UpdateActionState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___UpdateActionState*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRInput___UpdateActionState* OVR::OpenVR::__IVRInput___UpdateActionState::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRInput___UpdateActionState*>(object, method));
}
inline void OVR::OpenVR::__IVRInput___UpdateActionState::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___UpdateActionState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___UpdateActionState::Invoke(ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>> pSets,
                                                                                        uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___UpdateActionState*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pSets, unSizeOfVRSelectedActionSet_t, unSetCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRInput___UpdateActionState::BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>> pSets,
                                                                                        uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, ::System::AsyncCallback* callback,
                                                                                        ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___UpdateActionState*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pSets, unSizeOfVRSelectedActionSet_t, unSetCount, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___UpdateActionState::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___UpdateActionState*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRInput___UpdateActionState::__IVRInput___UpdateActionState() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetDigitalActionData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRInput___GetDigitalActionData::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRInput___GetDigitalActionData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3ff8d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetDigitalActionData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetDigitalActionData.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetDigitalActionData::*)(
    uint64_t, ByRef<::OVR::OpenVR::InputDigitalActionData_t>, uint32_t, uint64_t)>(&::OVR::OpenVR::__IVRInput___GetDigitalActionData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ff8d8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetDigitalActionData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetDigitalActionData*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetDigitalActionData.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRInput___GetDigitalActionData::*)(uint64_t, ByRef<::OVR::OpenVR::InputDigitalActionData_t>, uint32_t, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRInput___GetDigitalActionData::BeginInvoke)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3ff8da0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetDigitalActionData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetDigitalActionData*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetDigitalActionData.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetDigitalActionData::*)(
    ByRef<::OVR::OpenVR::InputDigitalActionData_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRInput___GetDigitalActionData::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3ff8ea8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetDigitalActionData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetDigitalActionData*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRInput___GetDigitalActionData* OVR::OpenVR::__IVRInput___GetDigitalActionData::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRInput___GetDigitalActionData*>(object, method));
}
inline void OVR::OpenVR::__IVRInput___GetDigitalActionData::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetDigitalActionData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetDigitalActionData::Invoke(uint64_t action, ByRef<::OVR::OpenVR::InputDigitalActionData_t> pActionData, uint32_t unActionDataSize,
                                                                                           uint64_t ulRestrictToDevice) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetDigitalActionData*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRInput___GetDigitalActionData::BeginInvoke(uint64_t action, ByRef<::OVR::OpenVR::InputDigitalActionData_t> pActionData, uint32_t unActionDataSize,
                                                                                           uint64_t ulRestrictToDevice, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetDigitalActionData*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetDigitalActionData::EndInvoke(ByRef<::OVR::OpenVR::InputDigitalActionData_t> pActionData, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetDigitalActionData*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pActionData, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRInput___GetDigitalActionData::__IVRInput___GetDigitalActionData() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetAnalogActionData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRInput___GetAnalogActionData::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRInput___GetAnalogActionData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3ff8ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetAnalogActionData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetAnalogActionData.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetAnalogActionData::*)(
    uint64_t, ByRef<::OVR::OpenVR::InputAnalogActionData_t>, uint32_t, uint64_t)>(&::OVR::OpenVR::__IVRInput___GetAnalogActionData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ff8f60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetAnalogActionData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetAnalogActionData*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetAnalogActionData.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRInput___GetAnalogActionData::*)(uint64_t, ByRef<::OVR::OpenVR::InputAnalogActionData_t>, uint32_t, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRInput___GetAnalogActionData::BeginInvoke)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3ff8f74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetAnalogActionData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetAnalogActionData*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetAnalogActionData.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetAnalogActionData::*)(
    ByRef<::OVR::OpenVR::InputAnalogActionData_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRInput___GetAnalogActionData::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3ff907c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetAnalogActionData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetAnalogActionData*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRInput___GetAnalogActionData* OVR::OpenVR::__IVRInput___GetAnalogActionData::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRInput___GetAnalogActionData*>(object, method));
}
inline void OVR::OpenVR::__IVRInput___GetAnalogActionData::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetAnalogActionData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetAnalogActionData::Invoke(uint64_t action, ByRef<::OVR::OpenVR::InputAnalogActionData_t> pActionData, uint32_t unActionDataSize,
                                                                                          uint64_t ulRestrictToDevice) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetAnalogActionData*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRInput___GetAnalogActionData::BeginInvoke(uint64_t action, ByRef<::OVR::OpenVR::InputAnalogActionData_t> pActionData, uint32_t unActionDataSize,
                                                                                          uint64_t ulRestrictToDevice, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetAnalogActionData*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetAnalogActionData::EndInvoke(ByRef<::OVR::OpenVR::InputAnalogActionData_t> pActionData, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetAnalogActionData*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pActionData, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRInput___GetAnalogActionData::__IVRInput___GetAnalogActionData() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetPoseActionData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRInput___GetPoseActionData::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRInput___GetPoseActionData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3ff90a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetPoseActionData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetPoseActionData.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetPoseActionData::*)(
    uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, float_t, ByRef<::OVR::OpenVR::InputPoseActionData_t>, uint32_t, uint64_t)>(&::OVR::OpenVR::__IVRInput___GetPoseActionData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ff9134;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetPoseActionData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetPoseActionData*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetPoseActionData.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRInput___GetPoseActionData::*)(uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, float_t, ByRef<::OVR::OpenVR::InputPoseActionData_t>, uint32_t, uint64_t,
                                                      ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRInput___GetPoseActionData::BeginInvoke)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x3ff9148;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetPoseActionData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetPoseActionData*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetPoseActionData.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetPoseActionData::*)(
    ByRef<::OVR::OpenVR::InputPoseActionData_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRInput___GetPoseActionData::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3ff92b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetPoseActionData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetPoseActionData*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRInput___GetPoseActionData* OVR::OpenVR::__IVRInput___GetPoseActionData::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRInput___GetPoseActionData*>(object, method));
}
inline void OVR::OpenVR::__IVRInput___GetPoseActionData::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetPoseActionData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetPoseActionData::Invoke(uint64_t action, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsFromNow,
                                                                                        ByRef<::OVR::OpenVR::InputPoseActionData_t> pActionData, uint32_t unActionDataSize,
                                                                                        uint64_t ulRestrictToDevice) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetPoseActionData*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, action, eOrigin, fPredictedSecondsFromNow, pActionData, unActionDataSize,
                                                                                  ulRestrictToDevice);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRInput___GetPoseActionData::BeginInvoke(uint64_t action, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsFromNow,
                                                                                        ByRef<::OVR::OpenVR::InputPoseActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice,
                                                                                        ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetPoseActionData*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, action, eOrigin, fPredictedSecondsFromNow, pActionData, unActionDataSize, ulRestrictToDevice,
                                                                             callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetPoseActionData::EndInvoke(ByRef<::OVR::OpenVR::InputPoseActionData_t> pActionData, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetPoseActionData*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pActionData, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRInput___GetPoseActionData::__IVRInput___GetPoseActionData() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetSkeletalActionData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRInput___GetSkeletalActionData::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRInput___GetSkeletalActionData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3ff92e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalActionData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetSkeletalActionData.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetSkeletalActionData::*)(
    uint64_t, ByRef<::OVR::OpenVR::InputSkeletalActionData_t>, uint32_t, uint64_t)>(&::OVR::OpenVR::__IVRInput___GetSkeletalActionData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ff936c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalActionData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalActionData*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetSkeletalActionData.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRInput___GetSkeletalActionData::*)(uint64_t, ByRef<::OVR::OpenVR::InputSkeletalActionData_t>, uint32_t, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRInput___GetSkeletalActionData::BeginInvoke)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3ff9380;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalActionData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalActionData*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetSkeletalActionData.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetSkeletalActionData::*)(
    ByRef<::OVR::OpenVR::InputSkeletalActionData_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRInput___GetSkeletalActionData::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3ff9488;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalActionData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalActionData*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRInput___GetSkeletalActionData* OVR::OpenVR::__IVRInput___GetSkeletalActionData::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRInput___GetSkeletalActionData*>(object, method));
}
inline void OVR::OpenVR::__IVRInput___GetSkeletalActionData::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalActionData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetSkeletalActionData::Invoke(uint64_t action, ByRef<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, uint32_t unActionDataSize,
                                                                                            uint64_t ulRestrictToDevice) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalActionData*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRInput___GetSkeletalActionData::BeginInvoke(uint64_t action, ByRef<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, uint32_t unActionDataSize,
                                                                                            uint64_t ulRestrictToDevice, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalActionData*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetSkeletalActionData::EndInvoke(ByRef<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalActionData*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pActionData, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRInput___GetSkeletalActionData::__IVRInput___GetSkeletalActionData() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetSkeletalBoneData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRInput___GetSkeletalBoneData::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRInput___GetSkeletalBoneData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3ff94b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetSkeletalBoneData.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetSkeletalBoneData::*)(
    uint64_t, ::OVR::OpenVR::EVRSkeletalTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange, ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>>, uint32_t,
    uint64_t)>(&::OVR::OpenVR::__IVRInput___GetSkeletalBoneData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ff9540;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetSkeletalBoneData.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRInput___GetSkeletalBoneData::*)(uint64_t, ::OVR::OpenVR::EVRSkeletalTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange,
                                                        ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>>, uint32_t, uint64_t, ::System::AsyncCallback*,
                                                        ::System::Object*)>(&::OVR::OpenVR::__IVRInput___GetSkeletalBoneData::BeginInvoke)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3ff9554;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetSkeletalBoneData.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetSkeletalBoneData::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRInput___GetSkeletalBoneData::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3ff9690;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRInput___GetSkeletalBoneData* OVR::OpenVR::__IVRInput___GetSkeletalBoneData::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*>(object, method));
}
inline void OVR::OpenVR::__IVRInput___GetSkeletalBoneData::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetSkeletalBoneData::Invoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace,
                                                                                          ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange,
                                                                                          ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>> pTransformArray,
                                                                                          uint32_t unTransformArrayCount, uint64_t ulRestrictToDevice) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, action, eTransformSpace, eMotionRange, pTransformArray, unTransformArrayCount,
                                                                                  ulRestrictToDevice);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRInput___GetSkeletalBoneData::BeginInvoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace,
                                                                                          ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange,
                                                                                          ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>> pTransformArray,
                                                                                          uint32_t unTransformArrayCount, uint64_t ulRestrictToDevice, ::System::AsyncCallback* callback,
                                                                                          ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, action, eTransformSpace, eMotionRange, pTransformArray, unTransformArrayCount,
                                                                             ulRestrictToDevice, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetSkeletalBoneData::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRInput___GetSkeletalBoneData::__IVRInput___GetSkeletalBoneData() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3ff96b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed::*)(
    uint64_t, ::OVR::OpenVR::EVRSkeletalTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange, ::System::IntPtr, uint32_t, ByRef<uint32_t>, uint64_t)>(
    &::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3ff9744;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed::*)(uint64_t, ::OVR::OpenVR::EVRSkeletalTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange, ::System::IntPtr, uint32_t,
                                                                  ByRef<uint32_t>, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed::BeginInvoke)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3ff975c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed::*)(
    ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3ff98d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed* OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*>(object, method));
}
inline void OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed::Invoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace,
                                                                                                    ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ::System::IntPtr pvCompressedData,
                                                                                                    uint32_t unCompressedSize, ByRef<uint32_t> punRequiredCompressedSize, uint64_t ulRestrictToDevice) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, action, eTransformSpace, eMotionRange, pvCompressedData, unCompressedSize,
                                                                                  punRequiredCompressedSize, ulRestrictToDevice);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed::BeginInvoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace,
                                                                                                    ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ::System::IntPtr pvCompressedData,
                                                                                                    uint32_t unCompressedSize, ByRef<uint32_t> punRequiredCompressedSize, uint64_t ulRestrictToDevice,
                                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, action, eTransformSpace, eMotionRange, pvCompressedData, unCompressedSize,
                                                                             punRequiredCompressedSize, ulRestrictToDevice, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed::EndInvoke(ByRef<uint32_t> punRequiredCompressedSize, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, punRequiredCompressedSize, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed::__IVRInput___GetSkeletalBoneDataCompressed() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3ff9900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData::*)(
    ::System::IntPtr, uint32_t, ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace>, ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>>, uint32_t)>(
    &::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ff998c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData::*)(::System::IntPtr, uint32_t, ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace>,
                                                               ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>>, uint32_t, ::System::AsyncCallback*,
                                                               ::System::Object*)>(&::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData::BeginInvoke)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3ff99a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData::*)(
    ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3ff9aac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData* OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*>(object, method));
}
inline void OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError
OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData::Invoke(::System::IntPtr pvCompressedBuffer, uint32_t unCompressedBufferSize, ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace,
                                                             ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>> pTransformArray,
                                                             uint32_t unTransformArrayCount) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pvCompressedBuffer, unCompressedBufferSize, peTransformSpace, pTransformArray,
                                                                                  unTransformArrayCount);
}
inline ::System::IAsyncResult*
OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData::BeginInvoke(::System::IntPtr pvCompressedBuffer, uint32_t unCompressedBufferSize,
                                                                  ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace,
                                                                  ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>> pTransformArray,
                                                                  uint32_t unTransformArrayCount, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pvCompressedBuffer, unCompressedBufferSize, peTransformSpace, pTransformArray,
                                                                             unTransformArrayCount, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData::EndInvoke(ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, peTransformSpace, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData::__IVRInput___DecompressSkeletalBoneData() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3ff9ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction::*)(
    uint64_t, float_t, float_t, float_t, float_t, uint64_t)>(&::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ff9b64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction::*)(uint64_t, float_t, float_t, float_t, float_t, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction::BeginInvoke)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3ff9b78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3ff9c90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction* OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*>(object, method));
}
inline void OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction::Invoke(uint64_t action, float_t fStartSecondsFromNow, float_t fDurationSeconds, float_t fFrequency,
                                                                                                   float_t fAmplitude, uint64_t ulRestrictToDevice) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, action, fStartSecondsFromNow, fDurationSeconds, fFrequency, fAmplitude, ulRestrictToDevice);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction::BeginInvoke(uint64_t action, float_t fStartSecondsFromNow, float_t fDurationSeconds, float_t fFrequency,
                                                                                                   float_t fAmplitude, uint64_t ulRestrictToDevice, ::System::AsyncCallback* callback,
                                                                                                   ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, action, fStartSecondsFromNow, fDurationSeconds, fFrequency, fAmplitude, ulRestrictToDevice,
                                                                             callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction::__IVRInput___TriggerHapticVibrationAction() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetActionOrigins._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRInput___GetActionOrigins::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRInput___GetActionOrigins::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3ff9cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionOrigins*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetActionOrigins.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetActionOrigins::*)(
    uint64_t, uint64_t, ByRef<::ArrayW<uint64_t, ::Array<uint64_t>*>>, uint32_t)>(&::OVR::OpenVR::__IVRInput___GetActionOrigins::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ff9d44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionOrigins*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionOrigins*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetActionOrigins.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRInput___GetActionOrigins::*)(uint64_t, uint64_t, ByRef<::ArrayW<uint64_t, ::Array<uint64_t>*>>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRInput___GetActionOrigins::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3ff9d58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionOrigins*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionOrigins*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetActionOrigins.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetActionOrigins::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRInput___GetActionOrigins::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3ff9e30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionOrigins*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionOrigins*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRInput___GetActionOrigins* OVR::OpenVR::__IVRInput___GetActionOrigins::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRInput___GetActionOrigins*>(object, method));
}
inline void OVR::OpenVR::__IVRInput___GetActionOrigins::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionOrigins*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetActionOrigins::Invoke(uint64_t actionSetHandle, uint64_t digitalActionHandle, ByRef<::ArrayW<uint64_t, ::Array<uint64_t>*>> originsOut,
                                                                                       uint32_t originOutCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionOrigins*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, actionSetHandle, digitalActionHandle, originsOut, originOutCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRInput___GetActionOrigins::BeginInvoke(uint64_t actionSetHandle, uint64_t digitalActionHandle, ByRef<::ArrayW<uint64_t, ::Array<uint64_t>*>> originsOut,
                                                                                       uint32_t originOutCount, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionOrigins*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, actionSetHandle, digitalActionHandle, originsOut, originOutCount, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetActionOrigins::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetActionOrigins*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRInput___GetActionOrigins::__IVRInput___GetActionOrigins() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetOriginLocalizedName._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRInput___GetOriginLocalizedName::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRInput___GetOriginLocalizedName::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3ff9e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetOriginLocalizedName.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetOriginLocalizedName::*)(
    uint64_t, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::__IVRInput___GetOriginLocalizedName::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ff9ee4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetOriginLocalizedName.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRInput___GetOriginLocalizedName::*)(uint64_t, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRInput___GetOriginLocalizedName::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3ff9ef8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetOriginLocalizedName.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetOriginLocalizedName::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRInput___GetOriginLocalizedName::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3ff9fb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRInput___GetOriginLocalizedName* OVR::OpenVR::__IVRInput___GetOriginLocalizedName::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*>(object, method));
}
inline void OVR::OpenVR::__IVRInput___GetOriginLocalizedName::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetOriginLocalizedName::Invoke(uint64_t origin, ::System::Text::StringBuilder* pchNameArray, uint32_t unNameArraySize) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, origin, pchNameArray, unNameArraySize);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRInput___GetOriginLocalizedName::BeginInvoke(uint64_t origin, ::System::Text::StringBuilder* pchNameArray, uint32_t unNameArraySize,
                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, origin, pchNameArray, unNameArraySize, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetOriginLocalizedName::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRInput___GetOriginLocalizedName::__IVRInput___GetOriginLocalizedName() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3ff9fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo::*)(
    uint64_t, ByRef<::OVR::OpenVR::InputOriginInfo_t>, uint32_t)>(&::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ffa06c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo::*)(uint64_t, ByRef<::OVR::OpenVR::InputOriginInfo_t>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3ffa080;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo::*)(
    ByRef<::OVR::OpenVR::InputOriginInfo_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3ffa16c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo* OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*>(object, method));
}
inline void OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo::Invoke(uint64_t origin, ByRef<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, uint32_t unOriginInfoSize) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, origin, pOriginInfo, unOriginInfoSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo::BeginInvoke(uint64_t origin, ByRef<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, uint32_t unOriginInfoSize,
                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, origin, pOriginInfo, unOriginInfoSize, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo::EndInvoke(ByRef<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pOriginInfo, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo::__IVRInput___GetOriginTrackedDeviceInfo() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___ShowActionOrigins._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRInput___ShowActionOrigins::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRInput___ShowActionOrigins::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3ffa198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowActionOrigins*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___ShowActionOrigins.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___ShowActionOrigins::*)(uint64_t, uint64_t)>(
    &::OVR::OpenVR::__IVRInput___ShowActionOrigins::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ffa224;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowActionOrigins*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowActionOrigins*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___ShowActionOrigins.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRInput___ShowActionOrigins::*)(uint64_t, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRInput___ShowActionOrigins::BeginInvoke)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3ffa238;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowActionOrigins*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowActionOrigins*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___ShowActionOrigins.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___ShowActionOrigins::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRInput___ShowActionOrigins::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3ffa2d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowActionOrigins*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowActionOrigins*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRInput___ShowActionOrigins* OVR::OpenVR::__IVRInput___ShowActionOrigins::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRInput___ShowActionOrigins*>(object, method));
}
inline void OVR::OpenVR::__IVRInput___ShowActionOrigins::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowActionOrigins*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___ShowActionOrigins::Invoke(uint64_t actionSetHandle, uint64_t ulActionHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowActionOrigins*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, actionSetHandle, ulActionHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRInput___ShowActionOrigins::BeginInvoke(uint64_t actionSetHandle, uint64_t ulActionHandle, ::System::AsyncCallback* callback,
                                                                                        ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowActionOrigins*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, actionSetHandle, ulActionHandle, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___ShowActionOrigins::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowActionOrigins*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRInput___ShowActionOrigins::__IVRInput___ShowActionOrigins() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3ffa2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet::*)(
    ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>>, uint32_t, uint32_t, uint64_t)>(&::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ffa39c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet::*)(ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>>, uint32_t, uint32_t, uint64_t,
                                                             ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3ffa3b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3ffa488;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet* OVR::OpenVR::__IVRInput___ShowBindingsForActionSet::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*>(object, method));
}
inline void OVR::OpenVR::__IVRInput___ShowBindingsForActionSet::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___ShowBindingsForActionSet::Invoke(ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>> pSets,
                                                                                               uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, uint64_t originToHighlight) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pSets, unSizeOfVRSelectedActionSet_t, unSetCount, originToHighlight);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRInput___ShowBindingsForActionSet::BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>> pSets,
                                                                                               uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, uint64_t originToHighlight,
                                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pSets, unSizeOfVRSelectedActionSet_t, unSetCount, originToHighlight, callback, object);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::__IVRInput___ShowBindingsForActionSet::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet::__IVRInput___ShowBindingsForActionSet() {}
// Ctor Parameters [CppParam { name: "SetActionManifestPath", ty: "::OVR::OpenVR::__IVRInput___SetActionManifestPath*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "GetActionSetHandle", ty: "::OVR::OpenVR::__IVRInput___GetActionSetHandle*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetActionHandle", ty:
// "::OVR::OpenVR::__IVRInput___GetActionHandle*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetInputSourceHandle", ty: "::OVR::OpenVR::__IVRInput___GetInputSourceHandle*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "UpdateActionState", ty: "::OVR::OpenVR::__IVRInput___UpdateActionState*", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "GetDigitalActionData", ty: "::OVR::OpenVR::__IVRInput___GetDigitalActionData*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetAnalogActionData", ty:
// "::OVR::OpenVR::__IVRInput___GetAnalogActionData*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetPoseActionData", ty: "::OVR::OpenVR::__IVRInput___GetPoseActionData*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetSkeletalActionData", ty: "::OVR::OpenVR::__IVRInput___GetSkeletalActionData*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "GetSkeletalBoneData", ty: "::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetSkeletalBoneDataCompressed", ty:
// "::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "DecompressSkeletalBoneData", ty:
// "::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "TriggerHapticVibrationAction", ty:
// "::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetActionOrigins", ty: "::OVR::OpenVR::__IVRInput___GetActionOrigins*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOriginLocalizedName", ty: "::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "GetOriginTrackedDeviceInfo", ty: "::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ShowActionOrigins", ty:
// "::OVR::OpenVR::__IVRInput___ShowActionOrigins*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ShowBindingsForActionSet", ty:
// "::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::OVR::OpenVR::IVRInput::IVRInput(::OVR::OpenVR::__IVRInput___SetActionManifestPath* SetActionManifestPath, ::OVR::OpenVR::__IVRInput___GetActionSetHandle* GetActionSetHandle,
                                            ::OVR::OpenVR::__IVRInput___GetActionHandle* GetActionHandle, ::OVR::OpenVR::__IVRInput___GetInputSourceHandle* GetInputSourceHandle,
                                            ::OVR::OpenVR::__IVRInput___UpdateActionState* UpdateActionState, ::OVR::OpenVR::__IVRInput___GetDigitalActionData* GetDigitalActionData,
                                            ::OVR::OpenVR::__IVRInput___GetAnalogActionData* GetAnalogActionData, ::OVR::OpenVR::__IVRInput___GetPoseActionData* GetPoseActionData,
                                            ::OVR::OpenVR::__IVRInput___GetSkeletalActionData* GetSkeletalActionData, ::OVR::OpenVR::__IVRInput___GetSkeletalBoneData* GetSkeletalBoneData,
                                            ::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed* GetSkeletalBoneDataCompressed,
                                            ::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData* DecompressSkeletalBoneData,
                                            ::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction* TriggerHapticVibrationAction, ::OVR::OpenVR::__IVRInput___GetActionOrigins* GetActionOrigins,
                                            ::OVR::OpenVR::__IVRInput___GetOriginLocalizedName* GetOriginLocalizedName,
                                            ::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo* GetOriginTrackedDeviceInfo, ::OVR::OpenVR::__IVRInput___ShowActionOrigins* ShowActionOrigins,
                                            ::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet* ShowBindingsForActionSet) noexcept {
  this->SetActionManifestPath = SetActionManifestPath;
  this->GetActionSetHandle = GetActionSetHandle;
  this->GetActionHandle = GetActionHandle;
  this->GetInputSourceHandle = GetInputSourceHandle;
  this->UpdateActionState = UpdateActionState;
  this->GetDigitalActionData = GetDigitalActionData;
  this->GetAnalogActionData = GetAnalogActionData;
  this->GetPoseActionData = GetPoseActionData;
  this->GetSkeletalActionData = GetSkeletalActionData;
  this->GetSkeletalBoneData = GetSkeletalBoneData;
  this->GetSkeletalBoneDataCompressed = GetSkeletalBoneDataCompressed;
  this->DecompressSkeletalBoneData = DecompressSkeletalBoneData;
  this->TriggerHapticVibrationAction = TriggerHapticVibrationAction;
  this->GetActionOrigins = GetActionOrigins;
  this->GetOriginLocalizedName = GetOriginLocalizedName;
  this->GetOriginTrackedDeviceInfo = GetOriginTrackedDeviceInfo;
  this->ShowActionOrigins = ShowActionOrigins;
  this->ShowBindingsForActionSet = ShowBindingsForActionSet;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRInput::IVRInput() {}
