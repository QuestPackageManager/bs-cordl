#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRApplications.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRApplications_def.hpp"
#include "OVR/OpenVR/zzzz__AppOverrideKeys_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVRApplicationError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRApplicationProperty_def.hpp"
#include "OVR/OpenVR/zzzz__EVRApplicationTransitionState_def.hpp"
#include "OVR/OpenVR/zzzz__IVRApplications_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__AddApplicationManifest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__AddApplicationManifest::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__AddApplicationManifest::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4067fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__AddApplicationManifest.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__AddApplicationManifest::*)(::StringW, bool)>(
    &::OVR::OpenVR::IVRApplications__AddApplicationManifest::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4068054;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__AddApplicationManifest.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__AddApplicationManifest::*)(::StringW, bool, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRApplications__AddApplicationManifest::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x406806c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__AddApplicationManifest.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__AddApplicationManifest::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRApplications__AddApplicationManifest::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4068104;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__AddApplicationManifest::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__AddApplicationManifest::Invoke(::StringW pchApplicationManifestFullPath, bool bTemporary) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, pchApplicationManifestFullPath, bTemporary);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__AddApplicationManifest::BeginInvoke(::StringW pchApplicationManifestFullPath, bool bTemporary, ::System::AsyncCallback* callback,
                                                                                                 ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchApplicationManifestFullPath, bTemporary, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__AddApplicationManifest::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__AddApplicationManifest* OVR::OpenVR::IVRApplications__AddApplicationManifest::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__AddApplicationManifest::IVRApplications__AddApplicationManifest() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__RemoveApplicationManifest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__RemoveApplicationManifest::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__RemoveApplicationManifest::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x406812c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__RemoveApplicationManifest.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__RemoveApplicationManifest::*)(::StringW)>(
    &::OVR::OpenVR::IVRApplications__RemoveApplicationManifest::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40681c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__RemoveApplicationManifest.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__RemoveApplicationManifest::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRApplications__RemoveApplicationManifest::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x40681dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__RemoveApplicationManifest.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__RemoveApplicationManifest::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRApplications__RemoveApplicationManifest::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40681fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__RemoveApplicationManifest::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__RemoveApplicationManifest::Invoke(::StringW pchApplicationManifestFullPath) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, pchApplicationManifestFullPath);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__RemoveApplicationManifest::BeginInvoke(::StringW pchApplicationManifestFullPath, ::System::AsyncCallback* callback,
                                                                                                    ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchApplicationManifestFullPath, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__RemoveApplicationManifest::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__RemoveApplicationManifest* OVR::OpenVR::IVRApplications__RemoveApplicationManifest::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__RemoveApplicationManifest::IVRApplications__RemoveApplicationManifest() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IsApplicationInstalled._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__IsApplicationInstalled::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__IsApplicationInstalled::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4068224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IsApplicationInstalled.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRApplications__IsApplicationInstalled::*)(::StringW)>(
    &::OVR::OpenVR::IVRApplications__IsApplicationInstalled::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40682c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IsApplicationInstalled.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__IsApplicationInstalled::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRApplications__IsApplicationInstalled::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x40682d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IsApplicationInstalled.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRApplications__IsApplicationInstalled::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__IsApplicationInstalled::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40682f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__IsApplicationInstalled::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRApplications__IsApplicationInstalled::Invoke(::StringW pchAppKey) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pchAppKey);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__IsApplicationInstalled::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchAppKey, callback, object);
}
inline bool OVR::OpenVR::IVRApplications__IsApplicationInstalled::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__IsApplicationInstalled* OVR::OpenVR::IVRApplications__IsApplicationInstalled::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__IsApplicationInstalled::IVRApplications__IsApplicationInstalled() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationCount._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationCount::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationCount::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x406831c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationCount*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationCount.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetApplicationCount::*)()>(
    &::OVR::OpenVR::IVRApplications__GetApplicationCount::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40683a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationCount*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationCount*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationCount.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__GetApplicationCount::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRApplications__GetApplicationCount::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x40683b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationCount*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationCount*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationCount.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetApplicationCount::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationCount::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40683d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationCount*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationCount*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationCount::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationCount*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetApplicationCount::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationCount*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationCount::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationCount*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetApplicationCount::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationCount*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationCount* OVR::OpenVR::IVRApplications__GetApplicationCount::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__GetApplicationCount*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationCount::IVRApplications__GetApplicationCount() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4068400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::*)(
    uint32_t, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406848c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::*)(uint32_t, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x40684a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4068548;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::Invoke(uint32_t unApplicationIndex, ::System::Text::StringBuilder* pchAppKeyBuffer,
                                                                                                         uint32_t unAppKeyBufferLen) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::BeginInvoke(uint32_t unApplicationIndex, ::System::Text::StringBuilder* pchAppKeyBuffer,
                                                                                                   uint32_t unAppKeyBufferLen, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex* OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::IVRApplications__GetApplicationKeyByIndex() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4068570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::*)(
    uint32_t, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40685fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::*)(uint32_t, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4068610;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40686b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::Invoke(uint32_t unProcessId, ::System::Text::StringBuilder* pchAppKeyBuffer,
                                                                                                             uint32_t unAppKeyBufferLen) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::BeginInvoke(uint32_t unProcessId, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen,
                                                                                                       ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId* OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::IVRApplications__GetApplicationKeyByProcessId() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchApplication._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__LaunchApplication::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__LaunchApplication::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x40686e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplication*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchApplication.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__LaunchApplication::*)(::StringW)>(
    &::OVR::OpenVR::IVRApplications__LaunchApplication::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406877c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplication*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplication*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchApplication.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__LaunchApplication::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRApplications__LaunchApplication::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4068790;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplication*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplication*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchApplication.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__LaunchApplication::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__LaunchApplication::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40687b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplication*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplication*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__LaunchApplication::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplication*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__LaunchApplication::Invoke(::StringW pchAppKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplication*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, pchAppKey);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__LaunchApplication::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplication*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchAppKey, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__LaunchApplication::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplication*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__LaunchApplication* OVR::OpenVR::IVRApplications__LaunchApplication::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__LaunchApplication*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__LaunchApplication::IVRApplications__LaunchApplication() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchTemplateApplication._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__LaunchTemplateApplication::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__LaunchTemplateApplication::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x40687d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchTemplateApplication.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__LaunchTemplateApplication::*)(
    ::StringW, ::StringW, ::ByRef<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t, ::Array<::OVR::OpenVR::AppOverrideKeys_t>*>>, uint32_t)>(
    &::OVR::OpenVR::IVRApplications__LaunchTemplateApplication::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4068878;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchTemplateApplication.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__LaunchTemplateApplication::*)(::StringW, ::StringW, ::ByRef<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t, ::Array<::OVR::OpenVR::AppOverrideKeys_t>*>>, uint32_t,
                                                                  ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRApplications__LaunchTemplateApplication::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x406888c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchTemplateApplication.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__LaunchTemplateApplication::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRApplications__LaunchTemplateApplication::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4068934;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__LaunchTemplateApplication::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError
OVR::OpenVR::IVRApplications__LaunchTemplateApplication::Invoke(::StringW pchTemplateAppKey, ::StringW pchNewAppKey,
                                                                ::ByRef<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t, ::Array<::OVR::OpenVR::AppOverrideKeys_t>*>> pKeys, uint32_t unKeys) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, pchTemplateAppKey, pchNewAppKey, pKeys, unKeys);
}
inline ::System::IAsyncResult*
OVR::OpenVR::IVRApplications__LaunchTemplateApplication::BeginInvoke(::StringW pchTemplateAppKey, ::StringW pchNewAppKey,
                                                                     ::ByRef<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t, ::Array<::OVR::OpenVR::AppOverrideKeys_t>*>> pKeys, uint32_t unKeys,
                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchTemplateAppKey, pchNewAppKey, pKeys, unKeys, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__LaunchTemplateApplication::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__LaunchTemplateApplication* OVR::OpenVR::IVRApplications__LaunchTemplateApplication::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__LaunchTemplateApplication::IVRApplications__LaunchTemplateApplication() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x406895c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::*)(
    ::StringW, ::StringW)>(&::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40689fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::*)(::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4068a10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4068a38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::Invoke(::StringW pchMimeType, ::StringW pchArgs) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, pchMimeType, pchArgs);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::BeginInvoke(::StringW pchMimeType, ::StringW pchArgs, ::System::AsyncCallback* callback,
                                                                                                        ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchMimeType, pchArgs, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType* OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::IVRApplications__LaunchApplicationFromMimeType() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4068a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::*)(::StringW)>(
    &::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4068afc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4068b10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4068b30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::Invoke(::StringW pchAppKey) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, pchAppKey);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchAppKey, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay* OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::IVRApplications__LaunchDashboardOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__CancelApplicationLaunch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__CancelApplicationLaunch::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__CancelApplicationLaunch::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4068b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__CancelApplicationLaunch.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRApplications__CancelApplicationLaunch::*)(::StringW)>(
    &::OVR::OpenVR::IVRApplications__CancelApplicationLaunch::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4068bf4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__CancelApplicationLaunch.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__CancelApplicationLaunch::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRApplications__CancelApplicationLaunch::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4068c08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__CancelApplicationLaunch.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRApplications__CancelApplicationLaunch::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__CancelApplicationLaunch::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4068c28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__CancelApplicationLaunch::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRApplications__CancelApplicationLaunch::Invoke(::StringW pchAppKey) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pchAppKey);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__CancelApplicationLaunch::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchAppKey, callback, object);
}
inline bool OVR::OpenVR::IVRApplications__CancelApplicationLaunch::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__CancelApplicationLaunch* OVR::OpenVR::IVRApplications__CancelApplicationLaunch::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__CancelApplicationLaunch::IVRApplications__CancelApplicationLaunch() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IdentifyApplication._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__IdentifyApplication::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__IdentifyApplication::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4068c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IdentifyApplication*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IdentifyApplication.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__IdentifyApplication::*)(uint32_t, ::StringW)>(
    &::OVR::OpenVR::IVRApplications__IdentifyApplication::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4068cdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IdentifyApplication*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IdentifyApplication*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IdentifyApplication.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__IdentifyApplication::*)(uint32_t, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRApplications__IdentifyApplication::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4068cf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IdentifyApplication*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IdentifyApplication*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IdentifyApplication.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__IdentifyApplication::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__IdentifyApplication::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4068d84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IdentifyApplication*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IdentifyApplication*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__IdentifyApplication::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IdentifyApplication*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__IdentifyApplication::Invoke(uint32_t unProcessId, ::StringW pchAppKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IdentifyApplication*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, unProcessId, pchAppKey);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__IdentifyApplication::BeginInvoke(uint32_t unProcessId, ::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IdentifyApplication*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unProcessId, pchAppKey, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__IdentifyApplication::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IdentifyApplication*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__IdentifyApplication* OVR::OpenVR::IVRApplications__IdentifyApplication::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__IdentifyApplication*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__IdentifyApplication::IVRApplications__IdentifyApplication() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationProcessId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationProcessId::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationProcessId::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4068dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationProcessId.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetApplicationProcessId::*)(::StringW)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationProcessId::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4068e48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationProcessId.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__GetApplicationProcessId::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRApplications__GetApplicationProcessId::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4068e5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationProcessId.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetApplicationProcessId::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationProcessId::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4068e7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationProcessId::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetApplicationProcessId::Invoke(::StringW pchAppKey) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pchAppKey);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationProcessId::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchAppKey, callback, object);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetApplicationProcessId::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationProcessId* OVR::OpenVR::IVRApplications__GetApplicationProcessId::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationProcessId::IVRApplications__GetApplicationProcessId() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4068ea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::*)(
    ::OVR::OpenVR::EVRApplicationError)>(&::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4068f30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::*)(::OVR::OpenVR::EVRApplicationError, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4068f44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4068fc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::Invoke(::OVR::OpenVR::EVRApplicationError error) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, error);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::BeginInvoke(::OVR::OpenVR::EVRApplicationError error, ::System::AsyncCallback* callback,
                                                                                                           ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, error, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum* OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::IVRApplications__GetApplicationsErrorNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyString._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationPropertyString::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationPropertyString::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4068ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyString.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetApplicationPropertyString::*)(
    ::StringW, ::OVR::OpenVR::EVRApplicationProperty, ::System::Text::StringBuilder*, uint32_t, ::ByRef<::OVR::OpenVR::EVRApplicationError>)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationPropertyString::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4069090;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyString.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__GetApplicationPropertyString::*)(::StringW, ::OVR::OpenVR::EVRApplicationProperty, ::System::Text::StringBuilder*, uint32_t,
                                                                                                          ::ByRef<::OVR::OpenVR::EVRApplicationError>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRApplications__GetApplicationPropertyString::BeginInvoke)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x40690a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyString.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetApplicationPropertyString::*)(
    ::ByRef<::OVR::OpenVR::EVRApplicationError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRApplications__GetApplicationPropertyString::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40691ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationPropertyString::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetApplicationPropertyString::Invoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty,
                                                                                   ::System::Text::StringBuilder* pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen,
                                                                                   ::ByRef<::OVR::OpenVR::EVRApplicationError> peError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationPropertyString::BeginInvoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty,
                                                                                                       ::System::Text::StringBuilder* pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen,
                                                                                                       ::ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::AsyncCallback* callback,
                                                                                                       ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError, callback,
                                                                             object);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetApplicationPropertyString::EndInvoke(::ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationPropertyString* OVR::OpenVR::IVRApplications__GetApplicationPropertyString::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationPropertyString::IVRApplications__GetApplicationPropertyString() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x40691d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::*)(
    ::StringW, ::OVR::OpenVR::EVRApplicationProperty, ::ByRef<::OVR::OpenVR::EVRApplicationError>)>(&::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4069278;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::*)(::StringW, ::OVR::OpenVR::EVRApplicationProperty, ::ByRef<::OVR::OpenVR::EVRApplicationError>, ::System::AsyncCallback*,
                                                                   ::System::Object*)>(&::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::BeginInvoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x406928c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::*)(
    ::ByRef<::OVR::OpenVR::EVRApplicationError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4069354;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::Invoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty,
                                                                             ::ByRef<::OVR::OpenVR::EVRApplicationError> peError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pchAppKey, eProperty, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::BeginInvoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty,
                                                                                                     ::ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::AsyncCallback* callback,
                                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchAppKey, eProperty, peError, callback, object);
}
inline bool OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::EndInvoke(::ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool* OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::IVRApplications__GetApplicationPropertyBool() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4069380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::*)(
    ::StringW, ::OVR::OpenVR::EVRApplicationProperty, ::ByRef<::OVR::OpenVR::EVRApplicationError>)>(&::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4069420;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::*)(::StringW, ::OVR::OpenVR::EVRApplicationProperty, ::ByRef<::OVR::OpenVR::EVRApplicationError>, ::System::AsyncCallback*,
                                                                     ::System::Object*)>(&::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::BeginInvoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x4069434;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::*)(
    ::ByRef<::OVR::OpenVR::EVRApplicationError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40694fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint64_t OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::Invoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty,
                                                                                   ::ByRef<::OVR::OpenVR::EVRApplicationError> peError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, pchAppKey, eProperty, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::BeginInvoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty,
                                                                                                       ::ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::AsyncCallback* callback,
                                                                                                       ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchAppKey, eProperty, peError, callback, object);
}
inline uint64_t OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::EndInvoke(::ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64* OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::IVRApplications__GetApplicationPropertyUint64() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4069528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::*)(::StringW, bool)>(
    &::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x40695c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::*)(::StringW, bool, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x40695e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4069678;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::Invoke(::StringW pchAppKey, bool bAutoLaunch) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, pchAppKey, bAutoLaunch);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::BeginInvoke(::StringW pchAppKey, bool bAutoLaunch, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchAppKey, bAutoLaunch, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch* OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::IVRApplications__SetApplicationAutoLaunch() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x40696a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::*)(::StringW)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406973c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4069750;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4069770;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::Invoke(::StringW pchAppKey) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pchAppKey);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchAppKey, callback, object);
}
inline bool OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch* OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::IVRApplications__GetApplicationAutoLaunch() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4069798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::*)(
    ::StringW, ::StringW)>(&::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4069838;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::*)(::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406984c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4069874;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::Invoke(::StringW pchAppKey, ::StringW pchMimeType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, pchAppKey, pchMimeType);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::BeginInvoke(::StringW pchAppKey, ::StringW pchMimeType, ::System::AsyncCallback* callback,
                                                                                                           ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchAppKey, pchMimeType, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType* OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::IVRApplications__SetDefaultApplicationForMimeType() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x406989c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::*)(
    ::StringW, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406993c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::*)(::StringW, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4069950;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40699e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::Invoke(::StringW pchMimeType, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pchMimeType, pchAppKeyBuffer, unAppKeyBufferLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::BeginInvoke(::StringW pchMimeType, ::System::Text::StringBuilder* pchAppKeyBuffer,
                                                                                                           uint32_t unAppKeyBufferLen, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchMimeType, pchAppKeyBuffer, unAppKeyBufferLen, callback, object);
}
inline bool OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType* OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::IVRApplications__GetDefaultApplicationForMimeType() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4069a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::*)(
    ::StringW, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4069ab0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::*)(::StringW, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4069ac4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4069b5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::Invoke(::StringW pchAppKey, ::System::Text::StringBuilder* pchMimeTypesBuffer, uint32_t unMimeTypesBuffer) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pchAppKey, pchMimeTypesBuffer, unMimeTypesBuffer);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::BeginInvoke(::StringW pchAppKey, ::System::Text::StringBuilder* pchMimeTypesBuffer,
                                                                                                           uint32_t unMimeTypesBuffer, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchAppKey, pchMimeTypesBuffer, unMimeTypesBuffer, callback, object);
}
inline bool OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes* OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::IVRApplications__GetApplicationSupportedMimeTypes() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4069b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::*)(
    ::StringW, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4069c24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::*)(::StringW, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4069c38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4069cd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::Invoke(::StringW pchMimeType, ::System::Text::StringBuilder* pchAppKeysThatSupportBuffer,
                                                                                         uint32_t unAppKeysThatSupportBuffer) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pchMimeType, pchAppKeysThatSupportBuffer, unAppKeysThatSupportBuffer);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::BeginInvoke(::StringW pchMimeType, ::System::Text::StringBuilder* pchAppKeysThatSupportBuffer,
                                                                                                             uint32_t unAppKeysThatSupportBuffer, ::System::AsyncCallback* callback,
                                                                                                             ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchMimeType, pchAppKeysThatSupportBuffer, unAppKeysThatSupportBuffer, callback, object);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType* OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::New_ctor(::System::Object* object,
                                                                                                                                                      ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::IVRApplications__GetApplicationsThatSupportMimeType() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4069cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::*)(
    uint32_t, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4069d84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::*)(uint32_t, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4069d98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4069e40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::Invoke(uint32_t unHandle, ::System::Text::StringBuilder* pchArgs, uint32_t unArgs) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unHandle, pchArgs, unArgs);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::BeginInvoke(uint32_t unHandle, ::System::Text::StringBuilder* pchArgs, uint32_t unArgs,
                                                                                                        ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unHandle, pchArgs, unArgs, callback, object);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments* OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::IVRApplications__GetApplicationLaunchArguments() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetStartingApplication._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__GetStartingApplication::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetStartingApplication::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4069e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetStartingApplication*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetStartingApplication.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__GetStartingApplication::*)(
    ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::IVRApplications__GetStartingApplication::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4069f08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetStartingApplication*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetStartingApplication*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetStartingApplication.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__GetStartingApplication::*)(::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRApplications__GetStartingApplication::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4069f1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetStartingApplication*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetStartingApplication*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetStartingApplication.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__GetStartingApplication::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRApplications__GetStartingApplication::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4069fb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetStartingApplication*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetStartingApplication*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetStartingApplication::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetStartingApplication*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__GetStartingApplication::Invoke(::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetStartingApplication*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, pchAppKeyBuffer, unAppKeyBufferLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetStartingApplication::BeginInvoke(::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen,
                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetStartingApplication*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchAppKeyBuffer, unAppKeyBufferLen, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__GetStartingApplication::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetStartingApplication*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetStartingApplication* OVR::OpenVR::IVRApplications__GetStartingApplication::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__GetStartingApplication*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetStartingApplication::IVRApplications__GetStartingApplication() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetTransitionState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__GetTransitionState::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetTransitionState::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4069fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetTransitionState*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetTransitionState.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationTransitionState (::OVR::OpenVR::IVRApplications__GetTransitionState::*)()>(
    &::OVR::OpenVR::IVRApplications__GetTransitionState::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406a060;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetTransitionState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetTransitionState*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetTransitionState.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__GetTransitionState::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRApplications__GetTransitionState::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x406a074;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetTransitionState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetTransitionState*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetTransitionState.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationTransitionState (::OVR::OpenVR::IVRApplications__GetTransitionState::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRApplications__GetTransitionState::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406a094;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetTransitionState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetTransitionState*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetTransitionState::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetTransitionState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationTransitionState OVR::OpenVR::IVRApplications__GetTransitionState::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetTransitionState*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationTransitionState, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetTransitionState::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetTransitionState*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationTransitionState OVR::OpenVR::IVRApplications__GetTransitionState::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetTransitionState*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationTransitionState, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetTransitionState* OVR::OpenVR::IVRApplications__GetTransitionState::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__GetTransitionState*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetTransitionState::IVRApplications__GetTransitionState() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x406a0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::*)(::StringW)>(
    &::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406a158;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x406a16c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406a18c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::Invoke(::StringW pchAppKey) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, pchAppKey);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchAppKey, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck* OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::IVRApplications__PerformApplicationPrelaunchCheck() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::*)(
    ::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x406a1b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::*)(
    ::OVR::OpenVR::EVRApplicationTransitionState)>(&::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406a240;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::*)(::OVR::OpenVR::EVRApplicationTransitionState, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x406a254;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406a2d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::Invoke(::OVR::OpenVR::EVRApplicationTransitionState state) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, state);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::BeginInvoke(::OVR::OpenVR::EVRApplicationTransitionState state,
                                                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, state, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum* OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::New_ctor(::System::Object* object,
                                                                                                                                                                      ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::IVRApplications__GetApplicationsTransitionStateNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x406a300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::*)()>(
    &::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406a388;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x406a39c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406a3bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested* OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::IVRApplications__IsQuitUserPromptRequested() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchInternalProcess._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__LaunchInternalProcess::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__LaunchInternalProcess::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x406a3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchInternalProcess.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__LaunchInternalProcess::*)(
    ::StringW, ::StringW, ::StringW)>(&::OVR::OpenVR::IVRApplications__LaunchInternalProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406a484;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchInternalProcess.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__LaunchInternalProcess::*)(::StringW, ::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRApplications__LaunchInternalProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x406a498;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchInternalProcess.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__LaunchInternalProcess::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRApplications__LaunchInternalProcess::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406a4c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__LaunchInternalProcess::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__LaunchInternalProcess::Invoke(::StringW pchBinaryPath, ::StringW pchArguments, ::StringW pchWorkingDirectory) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, pchBinaryPath, pchArguments, pchWorkingDirectory);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__LaunchInternalProcess::BeginInvoke(::StringW pchBinaryPath, ::StringW pchArguments, ::StringW pchWorkingDirectory,
                                                                                                ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchBinaryPath, pchArguments, pchWorkingDirectory, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__LaunchInternalProcess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__LaunchInternalProcess* OVR::OpenVR::IVRApplications__LaunchInternalProcess::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__LaunchInternalProcess::IVRApplications__LaunchInternalProcess() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x406a4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::*)()>(
    &::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406a574;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x406a588;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406a5a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId* OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::IVRApplications__GetCurrentSceneProcessId() {}
// Ctor Parameters [CppParam { name: "AddApplicationManifest", ty: "::OVR::OpenVR::IVRApplications__AddApplicationManifest*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "RemoveApplicationManifest", ty: "::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsApplicationInstalled", ty:
// "::OVR::OpenVR::IVRApplications__IsApplicationInstalled*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetApplicationCount", ty:
// "::OVR::OpenVR::IVRApplications__GetApplicationCount*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetApplicationKeyByIndex", ty:
// "::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetApplicationKeyByProcessId", ty:
// "::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "LaunchApplication", ty:
// "::OVR::OpenVR::IVRApplications__LaunchApplication*", modifiers: "", def_value: Some("{}") }, CppParam { name: "LaunchTemplateApplication", ty:
// "::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*", modifiers: "", def_value: Some("{}") }, CppParam { name: "LaunchApplicationFromMimeType", ty:
// "::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*", modifiers: "", def_value: Some("{}") }, CppParam { name: "LaunchDashboardOverlay", ty:
// "::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CancelApplicationLaunch", ty:
// "::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IdentifyApplication", ty:
// "::OVR::OpenVR::IVRApplications__IdentifyApplication*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetApplicationProcessId", ty:
// "::OVR::OpenVR::IVRApplications__GetApplicationProcessId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetApplicationsErrorNameFromEnum", ty:
// "::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetApplicationPropertyString", ty:
// "::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetApplicationPropertyBool", ty:
// "::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetApplicationPropertyUint64", ty:
// "::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetApplicationAutoLaunch", ty:
// "::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetApplicationAutoLaunch", ty:
// "::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetDefaultApplicationForMimeType", ty:
// "::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetDefaultApplicationForMimeType", ty:
// "::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetApplicationSupportedMimeTypes", ty:
// "::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetApplicationsThatSupportMimeType", ty:
// "::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetApplicationLaunchArguments", ty:
// "::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetStartingApplication", ty:
// "::OVR::OpenVR::IVRApplications__GetStartingApplication*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetTransitionState", ty: "::OVR::OpenVR::IVRApplications__GetTransitionState*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "PerformApplicationPrelaunchCheck", ty: "::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "GetApplicationsTransitionStateNameFromEnum", ty: "::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "IsQuitUserPromptRequested", ty: "::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*", modifiers: "", def_value: Some("{}") }, CppParam { name: "LaunchInternalProcess",
// ty: "::OVR::OpenVR::IVRApplications__LaunchInternalProcess*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetCurrentSceneProcessId", ty:
// "::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IVRApplications::IVRApplications(
    ::OVR::OpenVR::IVRApplications__AddApplicationManifest* AddApplicationManifest, ::OVR::OpenVR::IVRApplications__RemoveApplicationManifest* RemoveApplicationManifest,
    ::OVR::OpenVR::IVRApplications__IsApplicationInstalled* IsApplicationInstalled, ::OVR::OpenVR::IVRApplications__GetApplicationCount* GetApplicationCount,
    ::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex* GetApplicationKeyByIndex, ::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId* GetApplicationKeyByProcessId,
    ::OVR::OpenVR::IVRApplications__LaunchApplication* LaunchApplication, ::OVR::OpenVR::IVRApplications__LaunchTemplateApplication* LaunchTemplateApplication,
    ::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType* LaunchApplicationFromMimeType, ::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay* LaunchDashboardOverlay,
    ::OVR::OpenVR::IVRApplications__CancelApplicationLaunch* CancelApplicationLaunch, ::OVR::OpenVR::IVRApplications__IdentifyApplication* IdentifyApplication,
    ::OVR::OpenVR::IVRApplications__GetApplicationProcessId* GetApplicationProcessId, ::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum* GetApplicationsErrorNameFromEnum,
    ::OVR::OpenVR::IVRApplications__GetApplicationPropertyString* GetApplicationPropertyString, ::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool* GetApplicationPropertyBool,
    ::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64* GetApplicationPropertyUint64, ::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch* SetApplicationAutoLaunch,
    ::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch* GetApplicationAutoLaunch, ::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType* SetDefaultApplicationForMimeType,
    ::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType* GetDefaultApplicationForMimeType,
    ::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes* GetApplicationSupportedMimeTypes,
    ::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType* GetApplicationsThatSupportMimeType,
    ::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments* GetApplicationLaunchArguments, ::OVR::OpenVR::IVRApplications__GetStartingApplication* GetStartingApplication,
    ::OVR::OpenVR::IVRApplications__GetTransitionState* GetTransitionState, ::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck* PerformApplicationPrelaunchCheck,
    ::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum* GetApplicationsTransitionStateNameFromEnum,
    ::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested* IsQuitUserPromptRequested, ::OVR::OpenVR::IVRApplications__LaunchInternalProcess* LaunchInternalProcess,
    ::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId* GetCurrentSceneProcessId) noexcept {
  this->AddApplicationManifest = AddApplicationManifest;
  this->RemoveApplicationManifest = RemoveApplicationManifest;
  this->IsApplicationInstalled = IsApplicationInstalled;
  this->GetApplicationCount = GetApplicationCount;
  this->GetApplicationKeyByIndex = GetApplicationKeyByIndex;
  this->GetApplicationKeyByProcessId = GetApplicationKeyByProcessId;
  this->LaunchApplication = LaunchApplication;
  this->LaunchTemplateApplication = LaunchTemplateApplication;
  this->LaunchApplicationFromMimeType = LaunchApplicationFromMimeType;
  this->LaunchDashboardOverlay = LaunchDashboardOverlay;
  this->CancelApplicationLaunch = CancelApplicationLaunch;
  this->IdentifyApplication = IdentifyApplication;
  this->GetApplicationProcessId = GetApplicationProcessId;
  this->GetApplicationsErrorNameFromEnum = GetApplicationsErrorNameFromEnum;
  this->GetApplicationPropertyString = GetApplicationPropertyString;
  this->GetApplicationPropertyBool = GetApplicationPropertyBool;
  this->GetApplicationPropertyUint64 = GetApplicationPropertyUint64;
  this->SetApplicationAutoLaunch = SetApplicationAutoLaunch;
  this->GetApplicationAutoLaunch = GetApplicationAutoLaunch;
  this->SetDefaultApplicationForMimeType = SetDefaultApplicationForMimeType;
  this->GetDefaultApplicationForMimeType = GetDefaultApplicationForMimeType;
  this->GetApplicationSupportedMimeTypes = GetApplicationSupportedMimeTypes;
  this->GetApplicationsThatSupportMimeType = GetApplicationsThatSupportMimeType;
  this->GetApplicationLaunchArguments = GetApplicationLaunchArguments;
  this->GetStartingApplication = GetStartingApplication;
  this->GetTransitionState = GetTransitionState;
  this->PerformApplicationPrelaunchCheck = PerformApplicationPrelaunchCheck;
  this->GetApplicationsTransitionStateNameFromEnum = GetApplicationsTransitionStateNameFromEnum;
  this->IsQuitUserPromptRequested = IsQuitUserPromptRequested;
  this->LaunchInternalProcess = LaunchInternalProcess;
  this->GetCurrentSceneProcessId = GetCurrentSceneProcessId;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications::IVRApplications() {}
