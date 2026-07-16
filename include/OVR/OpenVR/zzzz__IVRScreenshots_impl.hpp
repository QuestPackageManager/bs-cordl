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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRScreenshots__RequestScreenshot::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRScreenshots__RequestScreenshot::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3d694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__RequestScreenshot.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::IVRScreenshots__RequestScreenshot::*)(
    ::by_ref<uint32_t>, ::OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW)>(&::OVR::OpenVR::IVRScreenshots__RequestScreenshot::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3d714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>(), { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__RequestScreenshot.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRScreenshots__RequestScreenshot::*)(::by_ref<uint32_t>, ::OVR::OpenVR::EVRScreenshotType, ::StringW,
                                                                                                                                     ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRScreenshots__RequestScreenshot::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e3d728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>(), { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__RequestScreenshot.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::IVRScreenshots__RequestScreenshot::*)(::by_ref<uint32_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRScreenshots__RequestScreenshot::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3d7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>(), { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRScreenshots__RequestScreenshot::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots__RequestScreenshot::Invoke(::by_ref<uint32_t> pOutScreenshotHandle, ::OVR::OpenVR::EVRScreenshotType type,
                                                                                                ::StringW pchPreviewFilename, ::StringW pchVRFilename) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError>(this, ___internal_method, pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRScreenshots__RequestScreenshot::BeginInvoke(::by_ref<uint32_t> pOutScreenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchPreviewFilename,
                                                                                           ::StringW pchVRFilename, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename, callback, object);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots__RequestScreenshot::EndInvoke(::by_ref<uint32_t> pOutScreenshotHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError>(this, ___internal_method, pOutScreenshotHandle, result);
}
inline ::OVR::OpenVR::IVRScreenshots__RequestScreenshot* OVR::OpenVR::IVRScreenshots__RequestScreenshot::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRScreenshots__RequestScreenshot*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRScreenshots__RequestScreenshot::IVRScreenshots__RequestScreenshot() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__HookScreenshot._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRScreenshots__HookScreenshot::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRScreenshots__HookScreenshot::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3d80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__HookScreenshot.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::IVRScreenshots__HookScreenshot::*)(
    ::by_ref<::ArrayW<::OVR::OpenVR::EVRScreenshotType>>, int32_t)>(&::OVR::OpenVR::IVRScreenshots__HookScreenshot::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3d88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>(), { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__HookScreenshot.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRScreenshots__HookScreenshot::*)(::by_ref<::ArrayW<::OVR::OpenVR::EVRScreenshotType>>, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRScreenshots__HookScreenshot::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e3d8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>(), { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__HookScreenshot.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::IVRScreenshots__HookScreenshot::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRScreenshots__HookScreenshot::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3d8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>(), { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRScreenshots__HookScreenshot::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots__HookScreenshot::Invoke(::by_ref<::ArrayW<::OVR::OpenVR::EVRScreenshotType>> pSupportedTypes, int32_t numTypes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError>(this, ___internal_method, pSupportedTypes, numTypes);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRScreenshots__HookScreenshot::BeginInvoke(::by_ref<::ArrayW<::OVR::OpenVR::EVRScreenshotType>> pSupportedTypes, int32_t numTypes,
                                                                                        ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pSupportedTypes, numTypes, callback, object);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots__HookScreenshot::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRScreenshots__HookScreenshot* OVR::OpenVR::IVRScreenshots__HookScreenshot::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRScreenshots__HookScreenshot*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRScreenshots__HookScreenshot::IVRScreenshots__HookScreenshot() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3d920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRScreenshotType (::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::*)(
    uint32_t, ::by_ref<::OVR::OpenVR::EVRScreenshotError>)>(&::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3d98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::*)(uint32_t, ::by_ref<::OVR::OpenVR::EVRScreenshotError>,
                                                                                                                                             ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::BeginInvoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e3d9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRScreenshotType (::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::*)(
    ::by_ref<::OVR::OpenVR::EVRScreenshotError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3da4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRScreenshotType OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::Invoke(uint32_t screenshotHandle, ::by_ref<::OVR::OpenVR::EVRScreenshotError> pError) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotType>(this, ___internal_method, screenshotHandle, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::BeginInvoke(uint32_t screenshotHandle, ::by_ref<::OVR::OpenVR::EVRScreenshotError> pError,
                                                                                                   ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, screenshotHandle, pError, callback, object);
}
inline ::OVR::OpenVR::EVRScreenshotType OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::EndInvoke(::by_ref<::OVR::OpenVR::EVRScreenshotError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotType>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType* OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType::IVRScreenshots__GetScreenshotPropertyType() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3da70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::*)(
    uint32_t, ::OVR::OpenVR::EVRScreenshotPropertyFilenames, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::EVRScreenshotError>)>(
    &::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3dadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::*)(uint32_t, ::OVR::OpenVR::EVRScreenshotPropertyFilenames, ::System::Text::StringBuilder*, uint32_t,
                                                                     ::by_ref<::OVR::OpenVR::EVRScreenshotError>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::BeginInvoke)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5e3daf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::*)(
    ::by_ref<::OVR::OpenVR::EVRScreenshotError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3dbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::Invoke(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType,
                                                                                   ::System::Text::StringBuilder* pchFilename, uint32_t cchFilename,
                                                                                   ::by_ref<::OVR::OpenVR::EVRScreenshotError> pError) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, screenshotHandle, filenameType, pchFilename, cchFilename, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::BeginInvoke(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType,
                                                                                                       ::System::Text::StringBuilder* pchFilename, uint32_t cchFilename,
                                                                                                       ::by_ref<::OVR::OpenVR::EVRScreenshotError> pError, ::System::AsyncCallback* callback,
                                                                                                       ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, screenshotHandle, filenameType, pchFilename, cchFilename, pError, callback, object);
}
inline uint32_t OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::EndInvoke(::by_ref<::OVR::OpenVR::EVRScreenshotError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pError, result);
}
inline ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename* OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename::IVRScreenshots__GetScreenshotPropertyFilename() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3dc08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::*)(uint32_t, float_t)>(
    &::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3dc74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::*)(uint32_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e3dc88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3dd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::Invoke(uint32_t screenshotHandle, float_t flProgress) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError>(this, ___internal_method, screenshotHandle, flProgress);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::BeginInvoke(uint32_t screenshotHandle, float_t flProgress, ::System::AsyncCallback* callback,
                                                                                                  ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, screenshotHandle, flProgress, callback, object);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress* OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress::IVRScreenshots__UpdateScreenshotProgress() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3dd24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::*)(::by_ref<uint32_t>, ::StringW, ::StringW)>(
    &::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3dda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::*)(::by_ref<uint32_t>, ::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::BeginInvoke)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e3ddb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::*)(::by_ref<uint32_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3de1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::Invoke(::by_ref<uint32_t> pOutScreenshotHandle, ::StringW pchPreviewFilename, ::StringW pchVRFilename) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError>(this, ___internal_method, pOutScreenshotHandle, pchPreviewFilename, pchVRFilename);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::BeginInvoke(::by_ref<uint32_t> pOutScreenshotHandle, ::StringW pchPreviewFilename, ::StringW pchVRFilename,
                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pOutScreenshotHandle, pchPreviewFilename, pchVRFilename, callback, object);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::EndInvoke(::by_ref<uint32_t> pOutScreenshotHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError>(this, ___internal_method, pOutScreenshotHandle, result);
}
inline ::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot* OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot::IVRScreenshots__TakeStereoScreenshot() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__SubmitScreenshot._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRScreenshots__SubmitScreenshot::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRScreenshots__SubmitScreenshot::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3de40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__SubmitScreenshot.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::IVRScreenshots__SubmitScreenshot::*)(
    uint32_t, ::OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW)>(&::OVR::OpenVR::IVRScreenshots__SubmitScreenshot::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3deac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>(), { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__SubmitScreenshot.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRScreenshots__SubmitScreenshot::*)(uint32_t, ::OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW,
                                                                                                                                    ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRScreenshots__SubmitScreenshot::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5e3dec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>(), { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRScreenshots__SubmitScreenshot.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRScreenshotError (::OVR::OpenVR::IVRScreenshots__SubmitScreenshot::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRScreenshots__SubmitScreenshot::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3df74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>(), { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRScreenshots__SubmitScreenshot::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots__SubmitScreenshot::Invoke(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename,
                                                                                               ::StringW pchSourceVRFilename) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError>(this, ___internal_method, screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRScreenshots__SubmitScreenshot::BeginInvoke(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename,
                                                                                          ::StringW pchSourceVRFilename, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename, callback, object);
}
inline ::OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots__SubmitScreenshot::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRScreenshotError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRScreenshots__SubmitScreenshot* OVR::OpenVR::IVRScreenshots__SubmitScreenshot::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*>(object, method));
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
