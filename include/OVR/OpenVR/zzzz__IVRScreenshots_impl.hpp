#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRScreenshots_def.hpp"
#include "OVR/OpenVR/zzzz__EVRScreenshotError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRScreenshotPropertyFilenames_def.hpp"
#include "OVR/OpenVR/zzzz__EVRScreenshotType_def.hpp"
#include "OVR/OpenVR/zzzz__IVRScreenshots_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___RequestScreenshot._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRScreenshots___RequestScreenshot::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRScreenshots___RequestScreenshot::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28dcb78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___RequestScreenshot*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___RequestScreenshot.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::__IVRScreenshots___RequestScreenshot::*)(
    ByRef<uint32_t>, ::OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW)>(&::OVR::OpenVR::__IVRScreenshots___RequestScreenshot::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28dcc50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___RequestScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___RequestScreenshot*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___RequestScreenshot.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRScreenshots___RequestScreenshot::*)(ByRef<uint32_t>, ::OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRScreenshots___RequestScreenshot::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x28dcc64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___RequestScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___RequestScreenshot*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___RequestScreenshot.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::__IVRScreenshots___RequestScreenshot::*)(
    ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRScreenshots___RequestScreenshot::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28dcd30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___RequestScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___RequestScreenshot*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRScreenshots___RequestScreenshot* OVR::OpenVR::__IVRScreenshots___RequestScreenshot::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRScreenshots___RequestScreenshot*>(object, method));
}
inline void OVR::OpenVR::__IVRScreenshots___RequestScreenshot::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___RequestScreenshot*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::__IVRScreenshots___RequestScreenshot::Invoke(ByRef<uint32_t> pOutScreenshotHandle, ::OVR::OpenVR::EVRScreenshotType type,
                                                                                                   ::StringW pchPreviewFilename, ::StringW pchVRFilename) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___RequestScreenshot*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRScreenshots___RequestScreenshot::BeginInvoke(ByRef<uint32_t> pOutScreenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchPreviewFilename,
                                                                                              ::StringW pchVRFilename, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___RequestScreenshot*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename, callback, object);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::__IVRScreenshots___RequestScreenshot::EndInvoke(ByRef<uint32_t> pOutScreenshotHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___RequestScreenshot*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, pOutScreenshotHandle, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRScreenshots___RequestScreenshot::__IVRScreenshots___RequestScreenshot() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___HookScreenshot._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRScreenshots___HookScreenshot::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRScreenshots___HookScreenshot::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28dcd5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___HookScreenshot*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___HookScreenshot.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::__IVRScreenshots___HookScreenshot::*)(
    ByRef<::ArrayW<::OVR::OpenVR::EVRScreenshotType, ::Array<::OVR::OpenVR::EVRScreenshotType>*>>, int32_t)>(&::OVR::OpenVR::__IVRScreenshots___HookScreenshot::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28dce34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___HookScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___HookScreenshot*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___HookScreenshot.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRScreenshots___HookScreenshot::*)(ByRef<::ArrayW<::OVR::OpenVR::EVRScreenshotType, ::Array<::OVR::OpenVR::EVRScreenshotType>*>>, int32_t, ::System::AsyncCallback*,
                                                         ::System::Object*)>(&::OVR::OpenVR::__IVRScreenshots___HookScreenshot::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x28dce48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___HookScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___HookScreenshot*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___HookScreenshot.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::__IVRScreenshots___HookScreenshot::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRScreenshots___HookScreenshot::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28dcedc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___HookScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___HookScreenshot*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRScreenshots___HookScreenshot* OVR::OpenVR::__IVRScreenshots___HookScreenshot::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRScreenshots___HookScreenshot*>(object, method));
}
inline void OVR::OpenVR::__IVRScreenshots___HookScreenshot::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___HookScreenshot*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRScreenshotError
OVR::OpenVR::__IVRScreenshots___HookScreenshot::Invoke(ByRef<::ArrayW<::OVR::OpenVR::EVRScreenshotType, ::Array<::OVR::OpenVR::EVRScreenshotType>*>> pSupportedTypes, int32_t numTypes) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___HookScreenshot*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, pSupportedTypes, numTypes);
}
inline ::System::IAsyncResult*
OVR::OpenVR::__IVRScreenshots___HookScreenshot::BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::EVRScreenshotType, ::Array<::OVR::OpenVR::EVRScreenshotType>*>> pSupportedTypes, int32_t numTypes,
                                                            ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___HookScreenshot*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pSupportedTypes, numTypes, callback, object);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::__IVRScreenshots___HookScreenshot::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___HookScreenshot*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRScreenshots___HookScreenshot::__IVRScreenshots___HookScreenshot() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28dcf04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotType (::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType::*)(
    uint32_t, ByRef<::OVR::OpenVR::EVRScreenshotError>)>(&::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28dcfc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType::*)(uint32_t, ByRef<::OVR::OpenVR::EVRScreenshotError>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28dcfdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotType (::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType::*)(
    ByRef<::OVR::OpenVR::EVRScreenshotError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28dd094;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType* OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType*>(object, method));
}
inline void OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRScreenshotType OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType::Invoke(uint32_t screenshotHandle, ByRef<::OVR::OpenVR::EVRScreenshotError> pError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotType, false>(this, ___internal_method, screenshotHandle, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType::BeginInvoke(uint32_t screenshotHandle, ByRef<::OVR::OpenVR::EVRScreenshotError> pError,
                                                                                                      ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, screenshotHandle, pError, callback, object);
}
inline ::OVR::OpenVR::EVRScreenshotType OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType::EndInvoke(ByRef<::OVR::OpenVR::EVRScreenshotError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotType, false>(this, ___internal_method, pError, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType::__IVRScreenshots___GetScreenshotPropertyType() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28dd0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename::*)(
    uint32_t, ::OVR::OpenVR::EVRScreenshotPropertyFilenames, ::System::Text::StringBuilder*, uint32_t, ByRef<::OVR::OpenVR::EVRScreenshotError>)>(
    &::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28dd184;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename::*)(uint32_t, ::OVR::OpenVR::EVRScreenshotPropertyFilenames, ::System::Text::StringBuilder*, uint32_t,
                                                                        ByRef<::OVR::OpenVR::EVRScreenshotError>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename::BeginInvoke)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x28dd198;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename::*)(
    ByRef<::OVR::OpenVR::EVRScreenshotError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename::EndInvoke)> {
  constexpr static std::size_t size = 0x102c;
  constexpr static std::size_t addrs = 0x28dd29c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename* OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename*>(object, method));
}
inline void OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename::Invoke(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType,
                                                                                      ::System::Text::StringBuilder* pchFilename, uint32_t cchFilename,
                                                                                      ByRef<::OVR::OpenVR::EVRScreenshotError> pError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, screenshotHandle, filenameType, pchFilename, cchFilename, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename::BeginInvoke(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType,
                                                                                                          ::System::Text::StringBuilder* pchFilename, uint32_t cchFilename,
                                                                                                          ByRef<::OVR::OpenVR::EVRScreenshotError> pError, ::System::AsyncCallback* callback,
                                                                                                          ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, screenshotHandle, filenameType, pchFilename, cchFilename, pError, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename::EndInvoke(ByRef<::OVR::OpenVR::EVRScreenshotError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pError, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename::__IVRScreenshots___GetScreenshotPropertyFilename() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28de2c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress::*)(uint32_t, float_t)>(
    &::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28de38c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress::*)(uint32_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28de3a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28de458;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress* OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress*>(object, method));
}
inline void OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress::Invoke(uint32_t screenshotHandle, float_t flProgress) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, screenshotHandle, flProgress);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress::BeginInvoke(uint32_t screenshotHandle, float_t flProgress, ::System::AsyncCallback* callback,
                                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, screenshotHandle, flProgress, callback, object);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress::__IVRScreenshots___UpdateScreenshotProgress() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28de480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot::*)(
    ByRef<uint32_t>, ::StringW, ::StringW)>(&::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28de558;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot::*)(ByRef<uint32_t>, ::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot::BeginInvoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x28de56c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot::*)(
    ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28de60c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot* OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot*>(object, method));
}
inline void OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot::Invoke(ByRef<uint32_t> pOutScreenshotHandle, ::StringW pchPreviewFilename, ::StringW pchVRFilename) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, pOutScreenshotHandle, pchPreviewFilename, pchVRFilename);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot::BeginInvoke(ByRef<uint32_t> pOutScreenshotHandle, ::StringW pchPreviewFilename, ::StringW pchVRFilename,
                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pOutScreenshotHandle, pchPreviewFilename, pchVRFilename, callback, object);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot::EndInvoke(ByRef<uint32_t> pOutScreenshotHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, pOutScreenshotHandle, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot::__IVRScreenshots___TakeStereoScreenshot() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28de638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot::*)(
    uint32_t, ::OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW)>(&::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28de6fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot::*)(uint32_t, ::OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot::BeginInvoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x28de710;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28de7d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot* OVR::OpenVR::__IVRScreenshots___SubmitScreenshot::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot*>(object, method));
}
inline void OVR::OpenVR::__IVRScreenshots___SubmitScreenshot::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::__IVRScreenshots___SubmitScreenshot::Invoke(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename,
                                                                                                  ::StringW pchSourceVRFilename) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRScreenshots___SubmitScreenshot::BeginInvoke(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename,
                                                                                             ::StringW pchSourceVRFilename, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename, callback, object);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::__IVRScreenshots___SubmitScreenshot::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot::__IVRScreenshots___SubmitScreenshot() {}
// Ctor Parameters [CppParam { name: "RequestScreenshot", ty: "::OVR::OpenVR::__IVRScreenshots___RequestScreenshot*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "HookScreenshot",
// ty: "::OVR::OpenVR::__IVRScreenshots___HookScreenshot*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetScreenshotPropertyType", ty:
// "::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetScreenshotPropertyFilename", ty:
// "::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "UpdateScreenshotProgress", ty:
// "::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "TakeStereoScreenshot", ty:
// "::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SubmitScreenshot", ty:
// "::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::OVR::OpenVR::IVRScreenshots::IVRScreenshots(::OVR::OpenVR::__IVRScreenshots___RequestScreenshot* RequestScreenshot, ::OVR::OpenVR::__IVRScreenshots___HookScreenshot* HookScreenshot,
                                                        ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyType* GetScreenshotPropertyType,
                                                        ::OVR::OpenVR::__IVRScreenshots___GetScreenshotPropertyFilename* GetScreenshotPropertyFilename,
                                                        ::OVR::OpenVR::__IVRScreenshots___UpdateScreenshotProgress* UpdateScreenshotProgress,
                                                        ::OVR::OpenVR::__IVRScreenshots___TakeStereoScreenshot* TakeStereoScreenshot,
                                                        ::OVR::OpenVR::__IVRScreenshots___SubmitScreenshot* SubmitScreenshot) noexcept {
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
