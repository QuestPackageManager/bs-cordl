#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRScreenshots.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRScreenshots_def.hpp"
#include "OVR/OpenVR/zzzz__EVRScreenshotError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRScreenshotPropertyFilenames_def.hpp"
#include "OVR/OpenVR/zzzz__EVRScreenshotType_def.hpp"
#include "OVR/OpenVR/zzzz__IVRScreenshots_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__RequestScreenshot._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRScreenshots__RequestScreenshot::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRScreenshots__RequestScreenshot::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x406d208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__RequestScreenshot.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::IVRScreenshots__RequestScreenshot::*)(
    ::ByRef<uint32_t>, ::OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW)>(&::OVR::OpenVR::IVRScreenshots__RequestScreenshot::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406d2a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__RequestScreenshot.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRScreenshots__RequestScreenshot::*)(::ByRef<uint32_t>, ::OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRScreenshots__RequestScreenshot::BeginInvoke)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x406d2bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__RequestScreenshot.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::IVRScreenshots__RequestScreenshot::*)(
    ::ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRScreenshots__RequestScreenshot::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x406d390;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRScreenshots__RequestScreenshot::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots__RequestScreenshot::Invoke(::ByRef<uint32_t> pOutScreenshotHandle, ::OVR::OpenVR::EVRScreenshotType type,
                                                                                                ::StringW pchPreviewFilename, ::StringW pchVRFilename) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRScreenshots__RequestScreenshot::BeginInvoke(::ByRef<uint32_t> pOutScreenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchPreviewFilename,
                                                                                           ::StringW pchVRFilename, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename, callback, object);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots__RequestScreenshot::EndInvoke(::ByRef<uint32_t> pOutScreenshotHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, pOutScreenshotHandle, result);
}
inline ::OVR::OpenVR::IVRScreenshots__RequestScreenshot* OVR::OpenVR::IVRScreenshots__RequestScreenshot::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRScreenshots__RequestScreenshot::IVRScreenshots__RequestScreenshot() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__HookScreenshot._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRScreenshots__HookScreenshot::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRScreenshots__HookScreenshot::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x406d3bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__HookScreenshot.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::IVRScreenshots__HookScreenshot::*)(
    ::ByRef<::ArrayW<::OVR::OpenVR::EVRScreenshotType, ::Array<::OVR::OpenVR::EVRScreenshotType>*>>, int32_t)>(&::OVR::OpenVR::IVRScreenshots__HookScreenshot::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406d45c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__HookScreenshot.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRScreenshots__HookScreenshot::*)(::ByRef<::ArrayW<::OVR::OpenVR::EVRScreenshotType, ::Array<::OVR::OpenVR::EVRScreenshotType>*>>, int32_t,
                                                                                           ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRScreenshots__HookScreenshot::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x406d470;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__HookScreenshot.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::IVRScreenshots__HookScreenshot::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRScreenshots__HookScreenshot::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406d504;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRScreenshots__HookScreenshot::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRScreenshotError
OVR::OpenVR::IVRScreenshots__HookScreenshot::Invoke(::ByRef<::ArrayW<::OVR::OpenVR::EVRScreenshotType, ::Array<::OVR::OpenVR::EVRScreenshotType>*>> pSupportedTypes, int32_t numTypes) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, pSupportedTypes, numTypes);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRScreenshots__HookScreenshot::BeginInvoke(::ByRef<::ArrayW<::OVR::OpenVR::EVRScreenshotType, ::Array<::OVR::OpenVR::EVRScreenshotType>*>> pSupportedTypes,
                                                                                        int32_t numTypes, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pSupportedTypes, numTypes, callback, object);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots__HookScreenshot::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRScreenshots__HookScreenshot* OVR::OpenVR::IVRScreenshots__HookScreenshot::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRScreenshots__HookScreenshot::IVRScreenshots__HookScreenshot() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x406d52c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotType (::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::*)(
    uint32_t, ::ByRef<::OVR::OpenVR::EVRScreenshotError>)>(&::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406d5b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::*)(uint32_t, ::ByRef<::OVR::OpenVR::EVRScreenshotError>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x406d5cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotType (::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::*)(
    ::ByRef<::OVR::OpenVR::EVRScreenshotError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x406d688;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRScreenshotType OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::Invoke(uint32_t screenshotHandle, ::ByRef<::OVR::OpenVR::EVRScreenshotError> pError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotType, false>(this, ___internal_method, screenshotHandle, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::BeginInvoke(uint32_t screenshotHandle, ::ByRef<::OVR::OpenVR::EVRScreenshotError> pError,
                                                                                                   ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, screenshotHandle, pError, callback, object);
}
inline ::OVR::OpenVR::EVRScreenshotType OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::EndInvoke(::ByRef<::OVR::OpenVR::EVRScreenshotError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotType, false>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType* OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::IVRScreenshots__GetScreenshotPropertyType() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x406d6b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::*)(
    uint32_t, ::OVR::OpenVR::EVRScreenshotPropertyFilenames, ::System::Text::StringBuilder*, uint32_t, ::ByRef<::OVR::OpenVR::EVRScreenshotError>)>(
    &::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406d740;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::*)(uint32_t, ::OVR::OpenVR::EVRScreenshotPropertyFilenames, ::System::Text::StringBuilder*, uint32_t,
                                                                     ::ByRef<::OVR::OpenVR::EVRScreenshotError>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::BeginInvoke)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x406d754;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::*)(
    ::ByRef<::OVR::OpenVR::EVRScreenshotError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x406d860;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::Invoke(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType,
                                                                                   ::System::Text::StringBuilder* pchFilename, uint32_t cchFilename,
                                                                                   ::ByRef<::OVR::OpenVR::EVRScreenshotError> pError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, screenshotHandle, filenameType, pchFilename, cchFilename, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::BeginInvoke(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType,
                                                                                                       ::System::Text::StringBuilder* pchFilename, uint32_t cchFilename,
                                                                                                       ::ByRef<::OVR::OpenVR::EVRScreenshotError> pError, ::System::AsyncCallback* callback,
                                                                                                       ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, screenshotHandle, filenameType, pchFilename, cchFilename, pError, callback, object);
}
inline uint32_t OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::EndInvoke(::ByRef<::OVR::OpenVR::EVRScreenshotError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename* OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::IVRScreenshots__GetScreenshotPropertyFilename() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x406d88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::*)(uint32_t, float_t)>(
    &::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406d918;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::*)(uint32_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x406d92c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406d9e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::Invoke(uint32_t screenshotHandle, float_t flProgress) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, screenshotHandle, flProgress);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::BeginInvoke(uint32_t screenshotHandle, float_t flProgress, ::System::AsyncCallback* callback,
                                                                                                  ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, screenshotHandle, flProgress, callback, object);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress* OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::IVRScreenshots__UpdateScreenshotProgress() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x406da10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::*)(
    ::ByRef<uint32_t>, ::StringW, ::StringW)>(&::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406dab0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::*)(::ByRef<uint32_t>, ::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::BeginInvoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x406dac4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::*)(
    ::ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x406db64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::Invoke(::ByRef<uint32_t> pOutScreenshotHandle, ::StringW pchPreviewFilename, ::StringW pchVRFilename) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, pOutScreenshotHandle, pchPreviewFilename, pchVRFilename);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::BeginInvoke(::ByRef<uint32_t> pOutScreenshotHandle, ::StringW pchPreviewFilename, ::StringW pchVRFilename,
                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pOutScreenshotHandle, pchPreviewFilename, pchVRFilename, callback, object);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::EndInvoke(::ByRef<uint32_t> pOutScreenshotHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, pOutScreenshotHandle, result);
}
inline ::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot* OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::IVRScreenshots__TakeStereoScreenshot() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__SubmitScreenshot._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRScreenshots__SubmitScreenshot::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRScreenshots__SubmitScreenshot::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x406db90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__SubmitScreenshot.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::IVRScreenshots__SubmitScreenshot::*)(
    uint32_t, ::OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW)>(&::OVR::OpenVR::IVRScreenshots__SubmitScreenshot::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406dc1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__SubmitScreenshot.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRScreenshots__SubmitScreenshot::*)(uint32_t, ::OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRScreenshots__SubmitScreenshot::BeginInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x406dc30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__SubmitScreenshot.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::IVRScreenshots__SubmitScreenshot::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRScreenshots__SubmitScreenshot::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406dd00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRScreenshots__SubmitScreenshot::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots__SubmitScreenshot::Invoke(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename,
                                                                                               ::StringW pchSourceVRFilename) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRScreenshots__SubmitScreenshot::BeginInvoke(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename,
                                                                                          ::StringW pchSourceVRFilename, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename, callback, object);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots__SubmitScreenshot::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRScreenshots__SubmitScreenshot* OVR::OpenVR::IVRScreenshots__SubmitScreenshot::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRScreenshots__SubmitScreenshot::IVRScreenshots__SubmitScreenshot() {}
// Ctor Parameters [CppParam { name: "RequestScreenshot", ty: "::OVR::OpenVR::IVRScreenshots__RequestScreenshot*", modifiers: "", def_value: Some("{}") }, CppParam { name: "HookScreenshot", ty:
// "::OVR::OpenVR::IVRScreenshots__HookScreenshot*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetScreenshotPropertyType", ty:
// "::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetScreenshotPropertyFilename", ty:
// "::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*", modifiers: "", def_value: Some("{}") }, CppParam { name: "UpdateScreenshotProgress", ty:
// "::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*", modifiers: "", def_value: Some("{}") }, CppParam { name: "TakeStereoScreenshot", ty:
// "::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SubmitScreenshot", ty: "::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*",
// modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IVRScreenshots::IVRScreenshots(::OVR::OpenVR::IVRScreenshots__RequestScreenshot* RequestScreenshot, ::OVR::OpenVR::IVRScreenshots__HookScreenshot* HookScreenshot,
                                                        ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType* GetScreenshotPropertyType,
                                                        ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename* GetScreenshotPropertyFilename,
                                                        ::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress* UpdateScreenshotProgress,
                                                        ::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot* TakeStereoScreenshot,
                                                        ::OVR::OpenVR::IVRScreenshots__SubmitScreenshot* SubmitScreenshot) noexcept {
  this->RequestScreenshot = RequestScreenshot;
  this->HookScreenshot = HookScreenshot;
  this->GetScreenshotPropertyType = GetScreenshotPropertyType;
  this->GetScreenshotPropertyFilename = GetScreenshotPropertyFilename;
  this->UpdateScreenshotProgress = UpdateScreenshotProgress;
  this->TakeStereoScreenshot = TakeStereoScreenshot;
  this->SubmitScreenshot = SubmitScreenshot;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRScreenshots::IVRScreenshots() {}
