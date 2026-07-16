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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__AddApplicationManifest::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__AddApplicationManifest::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2e4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__AddApplicationManifest.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__AddApplicationManifest::*)(::StringW, bool)>(
    &::OVR::OpenVR::IVRApplications__AddApplicationManifest::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2e52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__AddApplicationManifest.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__AddApplicationManifest::*)(::StringW, bool, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRApplications__AddApplicationManifest::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e2e540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__AddApplicationManifest.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__AddApplicationManifest::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__AddApplicationManifest::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2e59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__AddApplicationManifest::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__AddApplicationManifest::Invoke(::StringW pchApplicationManifestFullPath, bool bTemporary) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, pchApplicationManifestFullPath, bTemporary);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__AddApplicationManifest::BeginInvoke(::StringW pchApplicationManifestFullPath, bool bTemporary, ::System::AsyncCallback* callback,
                                                                                                 ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchApplicationManifestFullPath, bTemporary, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__AddApplicationManifest::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__AddApplicationManifest* OVR::OpenVR::IVRApplications__AddApplicationManifest::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__AddApplicationManifest*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__AddApplicationManifest::IVRApplications__AddApplicationManifest() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__RemoveApplicationManifest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__RemoveApplicationManifest::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__RemoveApplicationManifest::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e2e5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__RemoveApplicationManifest.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__RemoveApplicationManifest::*)(::StringW)>(
    &::OVR::OpenVR::IVRApplications__RemoveApplicationManifest::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2e63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__RemoveApplicationManifest.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__RemoveApplicationManifest::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__RemoveApplicationManifest::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e2e650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__RemoveApplicationManifest.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__RemoveApplicationManifest::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__RemoveApplicationManifest::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2e670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__RemoveApplicationManifest::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__RemoveApplicationManifest::Invoke(::StringW pchApplicationManifestFullPath) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, pchApplicationManifestFullPath);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__RemoveApplicationManifest::BeginInvoke(::StringW pchApplicationManifestFullPath, ::System::AsyncCallback* callback,
                                                                                                    ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchApplicationManifestFullPath, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__RemoveApplicationManifest::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__RemoveApplicationManifest* OVR::OpenVR::IVRApplications__RemoveApplicationManifest::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__RemoveApplicationManifest::IVRApplications__RemoveApplicationManifest() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IsApplicationInstalled._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__IsApplicationInstalled::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__IsApplicationInstalled::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e2e694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IsApplicationInstalled.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRApplications__IsApplicationInstalled::*)(::StringW)>(&::OVR::OpenVR::IVRApplications__IsApplicationInstalled::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2e710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IsApplicationInstalled.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__IsApplicationInstalled::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__IsApplicationInstalled::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e2e724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IsApplicationInstalled.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRApplications__IsApplicationInstalled::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__IsApplicationInstalled::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2e744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__IsApplicationInstalled::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRApplications__IsApplicationInstalled::Invoke(::StringW pchAppKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pchAppKey);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__IsApplicationInstalled::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchAppKey, callback, object);
}
inline bool OVR::OpenVR::IVRApplications__IsApplicationInstalled::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__IsApplicationInstalled* OVR::OpenVR::IVRApplications__IsApplicationInstalled::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__IsApplicationInstalled*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__IsApplicationInstalled::IVRApplications__IsApplicationInstalled() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationCount._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationCount::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationCount::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e2e768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationCount*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationCount.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetApplicationCount::*)()>(&::OVR::OpenVR::IVRApplications__GetApplicationCount::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2e7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationCount*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationCount*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationCount.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__GetApplicationCount::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationCount::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e2e7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationCount*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationCount*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationCount.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetApplicationCount::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationCount::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2e800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationCount*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationCount*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationCount::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationCount*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetApplicationCount::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationCount*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationCount::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationCount*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetApplicationCount::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationCount*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationCount* OVR::OpenVR::IVRApplications__GetApplicationCount::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__GetApplicationCount*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationCount::IVRApplications__GetApplicationCount() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2e824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::*)(
    uint32_t, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2e890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::*)(uint32_t, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e2e8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2e91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::Invoke(uint32_t unApplicationIndex, ::System::Text::StringBuilder* pchAppKeyBuffer,
                                                                                                         uint32_t unAppKeyBufferLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::BeginInvoke(uint32_t unApplicationIndex, ::System::Text::StringBuilder* pchAppKeyBuffer,
                                                                                                   uint32_t unAppKeyBufferLen, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex* OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex::IVRApplications__GetApplicationKeyByIndex() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2e940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::*)(
    uint32_t, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2e9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::*)(uint32_t, ::System::Text::StringBuilder*, uint32_t,
                                                                                                                                                 ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e2e9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2ea38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::Invoke(uint32_t unProcessId, ::System::Text::StringBuilder* pchAppKeyBuffer,
                                                                                                             uint32_t unAppKeyBufferLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::BeginInvoke(uint32_t unProcessId, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen,
                                                                                                       ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId* OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId::IVRApplications__GetApplicationKeyByProcessId() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchApplication._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__LaunchApplication::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__LaunchApplication::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e2ea5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplication*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchApplication.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__LaunchApplication::*)(::StringW)>(
    &::OVR::OpenVR::IVRApplications__LaunchApplication::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2ead8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplication*>(), { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplication*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchApplication.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__LaunchApplication::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__LaunchApplication::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e2eaec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplication*>(), { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplication*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchApplication.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__LaunchApplication::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__LaunchApplication::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2eb0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplication*>(), { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplication*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__LaunchApplication::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplication*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__LaunchApplication::Invoke(::StringW pchAppKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplication*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, pchAppKey);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__LaunchApplication::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplication*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchAppKey, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__LaunchApplication::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplication*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__LaunchApplication* OVR::OpenVR::IVRApplications__LaunchApplication::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__LaunchApplication*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__LaunchApplication::IVRApplications__LaunchApplication() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchTemplateApplication._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__LaunchTemplateApplication::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__LaunchTemplateApplication::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2eb30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchTemplateApplication.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__LaunchTemplateApplication::*)(
    ::StringW, ::StringW, ::by_ref<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t>>, uint32_t)>(&::OVR::OpenVR::IVRApplications__LaunchTemplateApplication::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2ebb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchTemplateApplication.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__LaunchTemplateApplication::*)(::StringW, ::StringW, ::by_ref<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t>>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__LaunchTemplateApplication::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e2ebc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchTemplateApplication.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__LaunchTemplateApplication::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__LaunchTemplateApplication::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2ec24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__LaunchTemplateApplication::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__LaunchTemplateApplication::Invoke(::StringW pchTemplateAppKey, ::StringW pchNewAppKey,
                                                                                                          ::by_ref<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t>> pKeys, uint32_t unKeys) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, pchTemplateAppKey, pchNewAppKey, pKeys, unKeys);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__LaunchTemplateApplication::BeginInvoke(::StringW pchTemplateAppKey, ::StringW pchNewAppKey,
                                                                                                    ::by_ref<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t>> pKeys, uint32_t unKeys,
                                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchTemplateAppKey, pchNewAppKey, pKeys, unKeys, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__LaunchTemplateApplication::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__LaunchTemplateApplication* OVR::OpenVR::IVRApplications__LaunchTemplateApplication::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__LaunchTemplateApplication::IVRApplications__LaunchTemplateApplication() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2ec48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::*)(::StringW, ::StringW)>(
    &::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2ecc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::*)(::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e2ecdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2ed04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::Invoke(::StringW pchMimeType, ::StringW pchArgs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, pchMimeType, pchArgs);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::BeginInvoke(::StringW pchMimeType, ::StringW pchArgs, ::System::AsyncCallback* callback,
                                                                                                        ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchMimeType, pchArgs, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType* OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType::IVRApplications__LaunchApplicationFromMimeType() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e2ed28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::*)(::StringW)>(
    &::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2eda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e2edb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2edd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::Invoke(::StringW pchAppKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, pchAppKey);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchAppKey, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay* OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay::IVRApplications__LaunchDashboardOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__CancelApplicationLaunch._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__CancelApplicationLaunch::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__CancelApplicationLaunch::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e2edfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__CancelApplicationLaunch.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRApplications__CancelApplicationLaunch::*)(::StringW)>(
    &::OVR::OpenVR::IVRApplications__CancelApplicationLaunch::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2ee78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__CancelApplicationLaunch.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__CancelApplicationLaunch::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__CancelApplicationLaunch::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e2ee8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__CancelApplicationLaunch.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRApplications__CancelApplicationLaunch::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__CancelApplicationLaunch::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2eeac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__CancelApplicationLaunch::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRApplications__CancelApplicationLaunch::Invoke(::StringW pchAppKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pchAppKey);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__CancelApplicationLaunch::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchAppKey, callback, object);
}
inline bool OVR::OpenVR::IVRApplications__CancelApplicationLaunch::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__CancelApplicationLaunch* OVR::OpenVR::IVRApplications__CancelApplicationLaunch::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__CancelApplicationLaunch::IVRApplications__CancelApplicationLaunch() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IdentifyApplication._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__IdentifyApplication::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__IdentifyApplication::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2eed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__IdentifyApplication*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IdentifyApplication.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__IdentifyApplication::*)(uint32_t, ::StringW)>(
    &::OVR::OpenVR::IVRApplications__IdentifyApplication::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2ef3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__IdentifyApplication*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__IdentifyApplication*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IdentifyApplication.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__IdentifyApplication::*)(uint32_t, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRApplications__IdentifyApplication::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e2ef50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__IdentifyApplication*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__IdentifyApplication*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IdentifyApplication.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__IdentifyApplication::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__IdentifyApplication::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2efb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__IdentifyApplication*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__IdentifyApplication*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__IdentifyApplication::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__IdentifyApplication*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__IdentifyApplication::Invoke(uint32_t unProcessId, ::StringW pchAppKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__IdentifyApplication*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, unProcessId, pchAppKey);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__IdentifyApplication::BeginInvoke(uint32_t unProcessId, ::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__IdentifyApplication*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unProcessId, pchAppKey, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__IdentifyApplication::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__IdentifyApplication*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__IdentifyApplication* OVR::OpenVR::IVRApplications__IdentifyApplication::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__IdentifyApplication*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__IdentifyApplication::IVRApplications__IdentifyApplication() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationProcessId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationProcessId::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationProcessId::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e2efd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationProcessId.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetApplicationProcessId::*)(::StringW)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationProcessId::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2f050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationProcessId.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__GetApplicationProcessId::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationProcessId::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e2f064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationProcessId.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetApplicationProcessId::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationProcessId::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2f084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationProcessId::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetApplicationProcessId::Invoke(::StringW pchAppKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchAppKey);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationProcessId::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchAppKey, callback, object);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetApplicationProcessId::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationProcessId* OVR::OpenVR::IVRApplications__GetApplicationProcessId::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__GetApplicationProcessId*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationProcessId::IVRApplications__GetApplicationProcessId() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2f0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::*)(::OVR::OpenVR::EVRApplicationError)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2f114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::*)(::OVR::OpenVR::EVRApplicationError, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e2f128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2f1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::Invoke(::OVR::OpenVR::EVRApplicationError error) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, error);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::BeginInvoke(::OVR::OpenVR::EVRApplicationError error, ::System::AsyncCallback* callback,
                                                                                                           ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, error, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum* OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum::IVRApplications__GetApplicationsErrorNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationPropertyString::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationPropertyString::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2f1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyString.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetApplicationPropertyString::*)(
    ::StringW, ::OVR::OpenVR::EVRApplicationProperty, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::EVRApplicationError>)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationPropertyString::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2f254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyString.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__GetApplicationPropertyString::*)(::StringW, ::OVR::OpenVR::EVRApplicationProperty, ::System::Text::StringBuilder*, uint32_t,
                                                                                                          ::by_ref<::OVR::OpenVR::EVRApplicationError>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRApplications__GetApplicationPropertyString::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5e2f268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyString.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetApplicationPropertyString::*)(
    ::by_ref<::OVR::OpenVR::EVRApplicationError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRApplications__GetApplicationPropertyString::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2f354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationPropertyString::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetApplicationPropertyString::Invoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty,
                                                                                   ::System::Text::StringBuilder* pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen,
                                                                                   ::by_ref<::OVR::OpenVR::EVRApplicationError> peError) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationPropertyString::BeginInvoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty,
                                                                                                       ::System::Text::StringBuilder* pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen,
                                                                                                       ::by_ref<::OVR::OpenVR::EVRApplicationError> peError, ::System::AsyncCallback* callback,
                                                                                                       ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError, callback, object);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetApplicationPropertyString::EndInvoke(::by_ref<::OVR::OpenVR::EVRApplicationError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationPropertyString* OVR::OpenVR::IVRApplications__GetApplicationPropertyString::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationPropertyString::IVRApplications__GetApplicationPropertyString() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2f378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::*)(
    ::StringW, ::OVR::OpenVR::EVRApplicationProperty, ::by_ref<::OVR::OpenVR::EVRApplicationError>)>(&::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2f3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::*)(::StringW, ::OVR::OpenVR::EVRApplicationProperty, ::by_ref<::OVR::OpenVR::EVRApplicationError>, ::System::AsyncCallback*,
                                                                   ::System::Object*)>(&::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::BeginInvoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5e2f40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::*)(::by_ref<::OVR::OpenVR::EVRApplicationError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2f4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::Invoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty,
                                                                             ::by_ref<::OVR::OpenVR::EVRApplicationError> peError) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pchAppKey, eProperty, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::BeginInvoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty,
                                                                                                     ::by_ref<::OVR::OpenVR::EVRApplicationError> peError, ::System::AsyncCallback* callback,
                                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchAppKey, eProperty, peError, callback, object);
}
inline bool OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::EndInvoke(::by_ref<::OVR::OpenVR::EVRApplicationError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool* OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool::IVRApplications__GetApplicationPropertyBool() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2f4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::*)(
    ::StringW, ::OVR::OpenVR::EVRApplicationProperty, ::by_ref<::OVR::OpenVR::EVRApplicationError>)>(&::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2f578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::*)(::StringW, ::OVR::OpenVR::EVRApplicationProperty, ::by_ref<::OVR::OpenVR::EVRApplicationError>, ::System::AsyncCallback*,
                                                                     ::System::Object*)>(&::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::BeginInvoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5e2f58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::*)(
    ::by_ref<::OVR::OpenVR::EVRApplicationError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2f654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint64_t OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::Invoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty,
                                                                                   ::by_ref<::OVR::OpenVR::EVRApplicationError> peError) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, pchAppKey, eProperty, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::BeginInvoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty,
                                                                                                       ::by_ref<::OVR::OpenVR::EVRApplicationError> peError, ::System::AsyncCallback* callback,
                                                                                                       ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchAppKey, eProperty, peError, callback, object);
}
inline uint64_t OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::EndInvoke(::by_ref<::OVR::OpenVR::EVRApplicationError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64* OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64::IVRApplications__GetApplicationPropertyUint64() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2f678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::*)(::StringW, bool)>(
    &::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2f6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::*)(::StringW, bool, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e2f70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2f768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::Invoke(::StringW pchAppKey, bool bAutoLaunch) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, pchAppKey, bAutoLaunch);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::BeginInvoke(::StringW pchAppKey, bool bAutoLaunch, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchAppKey, bAutoLaunch, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch* OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch::IVRApplications__SetApplicationAutoLaunch() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e2f78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::*)(::StringW)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2f808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e2f81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2f83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::Invoke(::StringW pchAppKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pchAppKey);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchAppKey, callback, object);
}
inline bool OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch* OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch::IVRApplications__GetApplicationAutoLaunch() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2f860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::*)(::StringW, ::StringW)>(
    &::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2f8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::*)(::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e2f8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2f91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::Invoke(::StringW pchAppKey, ::StringW pchMimeType) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, pchAppKey, pchMimeType);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::BeginInvoke(::StringW pchAppKey, ::StringW pchMimeType, ::System::AsyncCallback* callback,
                                                                                                           ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchAppKey, pchMimeType, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType* OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType::IVRApplications__SetDefaultApplicationForMimeType() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2f940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::*)(::StringW, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2f9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::*)(::StringW, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e2f9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2fa30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::Invoke(::StringW pchMimeType, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pchMimeType, pchAppKeyBuffer, unAppKeyBufferLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::BeginInvoke(::StringW pchMimeType, ::System::Text::StringBuilder* pchAppKeyBuffer,
                                                                                                           uint32_t unAppKeyBufferLen, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchMimeType, pchAppKeyBuffer, unAppKeyBufferLen, callback, object);
}
inline bool OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType* OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType::IVRApplications__GetDefaultApplicationForMimeType() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2fa54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::*)(::StringW, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2fad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::*)(::StringW, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e2fae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2fb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::Invoke(::StringW pchAppKey, ::System::Text::StringBuilder* pchMimeTypesBuffer, uint32_t unMimeTypesBuffer) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pchAppKey, pchMimeTypesBuffer, unMimeTypesBuffer);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::BeginInvoke(::StringW pchAppKey, ::System::Text::StringBuilder* pchMimeTypesBuffer,
                                                                                                           uint32_t unMimeTypesBuffer, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchAppKey, pchMimeTypesBuffer, unMimeTypesBuffer, callback, object);
}
inline bool OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes* OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes::IVRApplications__GetApplicationSupportedMimeTypes() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2fb68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::*)(::StringW, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2fbe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::*)(::StringW, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e2fbfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2fc58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::Invoke(::StringW pchMimeType, ::System::Text::StringBuilder* pchAppKeysThatSupportBuffer,
                                                                                         uint32_t unAppKeysThatSupportBuffer) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchMimeType, pchAppKeysThatSupportBuffer, unAppKeysThatSupportBuffer);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::BeginInvoke(::StringW pchMimeType, ::System::Text::StringBuilder* pchAppKeysThatSupportBuffer,
                                                                                                             uint32_t unAppKeysThatSupportBuffer, ::System::AsyncCallback* callback,
                                                                                                             ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchMimeType, pchAppKeysThatSupportBuffer, unAppKeysThatSupportBuffer, callback, object);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType* OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::New_ctor(::System::Object* object,
                                                                                                                                                      ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType::IVRApplications__GetApplicationsThatSupportMimeType() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2fc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::*)(uint32_t, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2fce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::*)(uint32_t, ::System::Text::StringBuilder*, uint32_t,
                                                                                                                                                  ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e2fcfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2fd74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::Invoke(uint32_t unHandle, ::System::Text::StringBuilder* pchArgs, uint32_t unArgs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, unHandle, pchArgs, unArgs);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::BeginInvoke(uint32_t unHandle, ::System::Text::StringBuilder* pchArgs, uint32_t unArgs,
                                                                                                        ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unHandle, pchArgs, unArgs, callback, object);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments* OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments::IVRApplications__GetApplicationLaunchArguments() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetStartingApplication._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__GetStartingApplication::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetStartingApplication::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2fd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetStartingApplication*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetStartingApplication.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__GetStartingApplication::*)(::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::IVRApplications__GetStartingApplication::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2fe18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetStartingApplication*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetStartingApplication*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetStartingApplication.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__GetStartingApplication::*)(::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRApplications__GetStartingApplication::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e2fe2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetStartingApplication*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetStartingApplication*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetStartingApplication.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__GetStartingApplication::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetStartingApplication::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2fe88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetStartingApplication*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetStartingApplication*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetStartingApplication::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetStartingApplication*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__GetStartingApplication::Invoke(::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetStartingApplication*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, pchAppKeyBuffer, unAppKeyBufferLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetStartingApplication::BeginInvoke(::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen,
                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetStartingApplication*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchAppKeyBuffer, unAppKeyBufferLen, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__GetStartingApplication::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetStartingApplication*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetStartingApplication* OVR::OpenVR::IVRApplications__GetStartingApplication::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__GetStartingApplication*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetStartingApplication::IVRApplications__GetStartingApplication() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetTransitionState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__GetTransitionState::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetTransitionState::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e2feac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetTransitionState*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetTransitionState.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationTransitionState (::OVR::OpenVR::IVRApplications__GetTransitionState::*)()>(
    &::OVR::OpenVR::IVRApplications__GetTransitionState::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2ff14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetTransitionState*>(), { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetTransitionState*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetTransitionState.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__GetTransitionState::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__GetTransitionState::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e2ff28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetTransitionState*>(), { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetTransitionState*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetTransitionState.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationTransitionState (::OVR::OpenVR::IVRApplications__GetTransitionState::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetTransitionState::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2ff44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetTransitionState*>(), { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetTransitionState*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetTransitionState::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetTransitionState*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationTransitionState OVR::OpenVR::IVRApplications__GetTransitionState::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetTransitionState*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationTransitionState>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetTransitionState::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetTransitionState*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationTransitionState OVR::OpenVR::IVRApplications__GetTransitionState::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetTransitionState*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationTransitionState>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetTransitionState* OVR::OpenVR::IVRApplications__GetTransitionState::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__GetTransitionState*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetTransitionState::IVRApplications__GetTransitionState() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e2ff68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::*)(::StringW)>(
    &::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2ffe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e2fff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e30018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::Invoke(::StringW pchAppKey) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, pchAppKey);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchAppKey, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck* OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck::IVRApplications__PerformApplicationPrelaunchCheck() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3003c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::*)(::OVR::OpenVR::EVRApplicationTransitionState)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e300a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::*)(::OVR::OpenVR::EVRApplicationTransitionState, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e300bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e30144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::Invoke(::OVR::OpenVR::EVRApplicationTransitionState state) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, state);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::BeginInvoke(::OVR::OpenVR::EVRApplicationTransitionState state,
                                                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, state, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum* OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::New_ctor(::System::Object* object,
                                                                                                                                                                      ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum::IVRApplications__GetApplicationsTransitionStateNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e30168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::*)()>(&::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e301d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e301e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e30200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested* OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested::IVRApplications__IsQuitUserPromptRequested() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchInternalProcess._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__LaunchInternalProcess::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__LaunchInternalProcess::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e30224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchInternalProcess.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__LaunchInternalProcess::*)(::StringW, ::StringW, ::StringW)>(
    &::OVR::OpenVR::IVRApplications__LaunchInternalProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e302a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchInternalProcess.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__LaunchInternalProcess::*)(::StringW, ::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRApplications__LaunchInternalProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e302b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__LaunchInternalProcess.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::IVRApplications__LaunchInternalProcess::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__LaunchInternalProcess::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e302e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__LaunchInternalProcess::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__LaunchInternalProcess::Invoke(::StringW pchBinaryPath, ::StringW pchArguments, ::StringW pchWorkingDirectory) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, pchBinaryPath, pchArguments, pchWorkingDirectory);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__LaunchInternalProcess::BeginInvoke(::StringW pchBinaryPath, ::StringW pchArguments, ::StringW pchWorkingDirectory,
                                                                                                ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchBinaryPath, pchArguments, pchWorkingDirectory, callback, object);
}
inline ::OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications__LaunchInternalProcess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__LaunchInternalProcess* OVR::OpenVR::IVRApplications__LaunchInternalProcess::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__LaunchInternalProcess*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRApplications__LaunchInternalProcess::IVRApplications__LaunchInternalProcess() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e30308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::*)()>(&::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e30370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e30384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e303a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline uint32_t OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId* OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*>(object, method));
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
