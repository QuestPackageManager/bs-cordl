#pragma once
// IWYU pragma private; include "OVR\OpenVR\IVRResources.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRResources_def.hpp"
#include "OVR/OpenVR/zzzz__IVRResources_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRResources__LoadSharedResource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRResources__LoadSharedResource::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRResources__LoadSharedResource::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e401c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRResources__LoadSharedResource*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRResources__LoadSharedResource.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRResources__LoadSharedResource::*)(::StringW, ::StringW, uint32_t)>(
    &::OVR::OpenVR::IVRResources__LoadSharedResource::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e40240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRResources__LoadSharedResource*>(), { ::i2c::class_of<::OVR::OpenVR::IVRResources__LoadSharedResource*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRResources__LoadSharedResource.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRResources__LoadSharedResource::*)(::StringW, ::StringW, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRResources__LoadSharedResource::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e40254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRResources__LoadSharedResource*>(), { ::i2c::class_of<::OVR::OpenVR::IVRResources__LoadSharedResource*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRResources__LoadSharedResource.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRResources__LoadSharedResource::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRResources__LoadSharedResource::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e402b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRResources__LoadSharedResource*>(), { ::i2c::class_of<::OVR::OpenVR::IVRResources__LoadSharedResource*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRResources__LoadSharedResource::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRResources__LoadSharedResource*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRResources__LoadSharedResource::Invoke(::StringW pchResourceName, ::StringW pchBuffer, uint32_t unBufferLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRResources__LoadSharedResource*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchResourceName, pchBuffer, unBufferLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRResources__LoadSharedResource::BeginInvoke(::StringW pchResourceName, ::StringW pchBuffer, uint32_t unBufferLen, ::System::AsyncCallback* callback,
                                                                                          ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRResources__LoadSharedResource*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchResourceName, pchBuffer, unBufferLen, callback, object);
}
inline uint32_t OVR::OpenVR::IVRResources__LoadSharedResource::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRResources__LoadSharedResource*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRResources__LoadSharedResource* OVR::OpenVR::IVRResources__LoadSharedResource::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRResources__LoadSharedResource*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRResources__LoadSharedResource::IVRResources__LoadSharedResource() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRResources__GetResourceFullPath._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRResources__GetResourceFullPath::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRResources__GetResourceFullPath::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e402d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRResources__GetResourceFullPath*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRResources__GetResourceFullPath.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRResources__GetResourceFullPath::*)(::StringW, ::StringW, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::IVRResources__GetResourceFullPath::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e40354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRResources__GetResourceFullPath*>(), { ::i2c::class_of<::OVR::OpenVR::IVRResources__GetResourceFullPath*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRResources__GetResourceFullPath.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRResources__GetResourceFullPath::*)(::StringW, ::StringW, ::System::Text::StringBuilder*, uint32_t,
                                                                                                                                     ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRResources__GetResourceFullPath::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e40368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRResources__GetResourceFullPath*>(), { ::i2c::class_of<::OVR::OpenVR::IVRResources__GetResourceFullPath*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRResources__GetResourceFullPath.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRResources__GetResourceFullPath::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRResources__GetResourceFullPath::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e403c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRResources__GetResourceFullPath*>(), { ::i2c::class_of<::OVR::OpenVR::IVRResources__GetResourceFullPath*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRResources__GetResourceFullPath::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRResources__GetResourceFullPath*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRResources__GetResourceFullPath::Invoke(::StringW pchResourceName, ::StringW pchResourceTypeDirectory, ::System::Text::StringBuilder* pchPathBuffer,
                                                                       uint32_t unBufferLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRResources__GetResourceFullPath*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchResourceName, pchResourceTypeDirectory, pchPathBuffer, unBufferLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRResources__GetResourceFullPath::BeginInvoke(::StringW pchResourceName, ::StringW pchResourceTypeDirectory, ::System::Text::StringBuilder* pchPathBuffer,
                                                                                           uint32_t unBufferLen, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRResources__GetResourceFullPath*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchResourceName, pchResourceTypeDirectory, pchPathBuffer, unBufferLen, callback, object);
}
inline uint32_t OVR::OpenVR::IVRResources__GetResourceFullPath::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRResources__GetResourceFullPath*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRResources__GetResourceFullPath* OVR::OpenVR::IVRResources__GetResourceFullPath::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRResources__GetResourceFullPath*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRResources__GetResourceFullPath::IVRResources__GetResourceFullPath() {}
// Ctor Parameters [CppParam { name: "LoadSharedResource", ty: "::OVR::OpenVR::IVRResources__LoadSharedResource*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetResourceFullPath", ty:
// "::OVR::OpenVR::IVRResources__GetResourceFullPath*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IVRResources::IVRResources(::OVR::OpenVR::IVRResources__LoadSharedResource* LoadSharedResource,
                                                    ::OVR::OpenVR::IVRResources__GetResourceFullPath* GetResourceFullPath) noexcept {
  this->LoadSharedResource = LoadSharedResource;
  this->GetResourceFullPath = GetResourceFullPath;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRResources::IVRResources() {}
