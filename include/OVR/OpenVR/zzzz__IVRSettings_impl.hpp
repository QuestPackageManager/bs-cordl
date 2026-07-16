#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRSettings.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRSettings_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSettingsError_def.hpp"
#include "OVR/OpenVR/zzzz__IVRSettings_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3c660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum::*)(::OVR::OpenVR::EVRSettingsError)>(
    &::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3c6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum::*)(::OVR::OpenVR::EVRSettingsError, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e3c6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3c768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum::Invoke(::OVR::OpenVR::EVRSettingsError eError) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, eError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum::BeginInvoke(::OVR::OpenVR::EVRSettingsError eError, ::System::AsyncCallback* callback,
                                                                                                   ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eError, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum* OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum::IVRSettings__GetSettingsErrorNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__Sync._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__Sync::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRSettings__Sync::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3c78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__Sync*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__Sync.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSettings__Sync::*)(bool, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(&::OVR::OpenVR::IVRSettings__Sync::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3c7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__Sync*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__Sync*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__Sync.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSettings__Sync::*)(bool, ::by_ref<::OVR::OpenVR::EVRSettingsError>, ::System::AsyncCallback*,
                                                                                                                     ::System::Object*)>(&::OVR::OpenVR::IVRSettings__Sync::BeginInvoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e3c80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__Sync*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__Sync*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__Sync.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSettings__Sync::*)(::by_ref<::OVR::OpenVR::EVRSettingsError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSettings__Sync::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3c8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__Sync*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__Sync*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSettings__Sync::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__Sync*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSettings__Sync::Invoke(bool bForce, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__Sync*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bForce, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSettings__Sync::BeginInvoke(bool bForce, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError, ::System::AsyncCallback* callback,
                                                                           ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__Sync*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, bForce, peError, callback, object);
}
inline bool OVR::OpenVR::IVRSettings__Sync::EndInvoke(::by_ref<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__Sync*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRSettings__Sync* OVR::OpenVR::IVRSettings__Sync::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSettings__Sync*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSettings__Sync::IVRSettings__Sync() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__SetBool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__SetBool::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRSettings__SetBool::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3c8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__SetBool*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__SetBool.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__SetBool::*)(::StringW, ::StringW, bool, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(
    &::OVR::OpenVR::IVRSettings__SetBool::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3c95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__SetBool*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetBool*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__SetBool.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSettings__SetBool::*)(::StringW, ::StringW, bool, ::by_ref<::OVR::OpenVR::EVRSettingsError>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSettings__SetBool::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e3c970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__SetBool*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetBool*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__SetBool.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__SetBool::*)(::by_ref<::OVR::OpenVR::EVRSettingsError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSettings__SetBool::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3ca30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__SetBool*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetBool*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSettings__SetBool::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__SetBool*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSettings__SetBool::Invoke(::StringW pchSection, ::StringW pchSettingsKey, bool bValue, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetBool*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchSection, pchSettingsKey, bValue, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSettings__SetBool::BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, bool bValue, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError,
                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetBool*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchSection, pchSettingsKey, bValue, peError, callback, object);
}
inline void OVR::OpenVR::IVRSettings__SetBool::EndInvoke(::by_ref<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetBool*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRSettings__SetBool* OVR::OpenVR::IVRSettings__SetBool::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSettings__SetBool*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSettings__SetBool::IVRSettings__SetBool() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__SetInt32._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__SetInt32::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRSettings__SetInt32::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3ca48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__SetInt32*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__SetInt32.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__SetInt32::*)(::StringW, ::StringW, int32_t, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(
    &::OVR::OpenVR::IVRSettings__SetInt32::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3cac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__SetInt32*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetInt32*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__SetInt32.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSettings__SetInt32::*)(::StringW, ::StringW, int32_t, ::by_ref<::OVR::OpenVR::EVRSettingsError>,
                                                                                                                         ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSettings__SetInt32::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e3cadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__SetInt32*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetInt32*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__SetInt32.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__SetInt32::*)(::by_ref<::OVR::OpenVR::EVRSettingsError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSettings__SetInt32::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3cb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__SetInt32*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetInt32*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSettings__SetInt32::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__SetInt32*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSettings__SetInt32::Invoke(::StringW pchSection, ::StringW pchSettingsKey, int32_t nValue, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetInt32*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchSection, pchSettingsKey, nValue, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSettings__SetInt32::BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, int32_t nValue, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError,
                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetInt32*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchSection, pchSettingsKey, nValue, peError, callback, object);
}
inline void OVR::OpenVR::IVRSettings__SetInt32::EndInvoke(::by_ref<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetInt32*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRSettings__SetInt32* OVR::OpenVR::IVRSettings__SetInt32::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSettings__SetInt32*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSettings__SetInt32::IVRSettings__SetInt32() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__SetFloat._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__SetFloat::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRSettings__SetFloat::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3cbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__SetFloat*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__SetFloat.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__SetFloat::*)(::StringW, ::StringW, float_t, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(
    &::OVR::OpenVR::IVRSettings__SetFloat::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3cc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__SetFloat*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetFloat*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__SetFloat.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSettings__SetFloat::*)(::StringW, ::StringW, float_t, ::by_ref<::OVR::OpenVR::EVRSettingsError>,
                                                                                                                         ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSettings__SetFloat::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e3cc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__SetFloat*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetFloat*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__SetFloat.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__SetFloat::*)(::by_ref<::OVR::OpenVR::EVRSettingsError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSettings__SetFloat::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3cd08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__SetFloat*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetFloat*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSettings__SetFloat::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__SetFloat*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSettings__SetFloat::Invoke(::StringW pchSection, ::StringW pchSettingsKey, float_t flValue, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetFloat*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchSection, pchSettingsKey, flValue, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSettings__SetFloat::BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, float_t flValue, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError,
                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetFloat*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchSection, pchSettingsKey, flValue, peError, callback, object);
}
inline void OVR::OpenVR::IVRSettings__SetFloat::EndInvoke(::by_ref<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetFloat*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRSettings__SetFloat* OVR::OpenVR::IVRSettings__SetFloat::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSettings__SetFloat*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSettings__SetFloat::IVRSettings__SetFloat() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__SetString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__SetString::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRSettings__SetString::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3cd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__SetString*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__SetString.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__SetString::*)(::StringW, ::StringW, ::StringW, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(
    &::OVR::OpenVR::IVRSettings__SetString::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3cda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__SetString*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetString*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__SetString.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSettings__SetString::*)(::StringW, ::StringW, ::StringW, ::by_ref<::OVR::OpenVR::EVRSettingsError>,
                                                                                                                          ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSettings__SetString::BeginInvoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e3cdb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__SetString*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetString*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__SetString.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__SetString::*)(::by_ref<::OVR::OpenVR::EVRSettingsError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSettings__SetString::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3ce60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__SetString*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetString*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSettings__SetString::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__SetString*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSettings__SetString::Invoke(::StringW pchSection, ::StringW pchSettingsKey, ::StringW pchValue, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetString*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchSection, pchSettingsKey, pchValue, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSettings__SetString::BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, ::StringW pchValue, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError,
                                                                                ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetString*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchSection, pchSettingsKey, pchValue, peError, callback, object);
}
inline void OVR::OpenVR::IVRSettings__SetString::EndInvoke(::by_ref<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__SetString*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRSettings__SetString* OVR::OpenVR::IVRSettings__SetString::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSettings__SetString*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSettings__SetString::IVRSettings__SetString() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__GetBool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__GetBool::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRSettings__GetBool::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3ce78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetBool*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__GetBool.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSettings__GetBool::*)(::StringW, ::StringW, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(
    &::OVR::OpenVR::IVRSettings__GetBool::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3cef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetBool*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetBool*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__GetBool.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSettings__GetBool::*)(::StringW, ::StringW, ::by_ref<::OVR::OpenVR::EVRSettingsError>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSettings__GetBool::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e3cf0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetBool*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetBool*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__GetBool.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRSettings__GetBool::*)(::by_ref<::OVR::OpenVR::EVRSettingsError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSettings__GetBool::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3cfb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetBool*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetBool*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSettings__GetBool::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetBool*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRSettings__GetBool::Invoke(::StringW pchSection, ::StringW pchSettingsKey, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetBool*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pchSection, pchSettingsKey, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSettings__GetBool::BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError,
                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetBool*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchSection, pchSettingsKey, peError, callback, object);
}
inline bool OVR::OpenVR::IVRSettings__GetBool::EndInvoke(::by_ref<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetBool*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRSettings__GetBool* OVR::OpenVR::IVRSettings__GetBool::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSettings__GetBool*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSettings__GetBool::IVRSettings__GetBool() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__GetInt32._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__GetInt32::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRSettings__GetInt32::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3cfd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetInt32*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__GetInt32.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::OVR::OpenVR::IVRSettings__GetInt32::*)(::StringW, ::StringW, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(
    &::OVR::OpenVR::IVRSettings__GetInt32::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3d054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetInt32*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetInt32*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__GetInt32.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSettings__GetInt32::*)(::StringW, ::StringW, ::by_ref<::OVR::OpenVR::EVRSettingsError>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSettings__GetInt32::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e3d068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetInt32*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetInt32*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__GetInt32.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::OVR::OpenVR::IVRSettings__GetInt32::*)(::by_ref<::OVR::OpenVR::EVRSettingsError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSettings__GetInt32::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3d10c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetInt32*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetInt32*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSettings__GetInt32::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetInt32*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t OVR::OpenVR::IVRSettings__GetInt32::Invoke(::StringW pchSection, ::StringW pchSettingsKey, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetInt32*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, pchSection, pchSettingsKey, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSettings__GetInt32::BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError,
                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetInt32*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchSection, pchSettingsKey, peError, callback, object);
}
inline int32_t OVR::OpenVR::IVRSettings__GetInt32::EndInvoke(::by_ref<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetInt32*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRSettings__GetInt32* OVR::OpenVR::IVRSettings__GetInt32::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSettings__GetInt32*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSettings__GetInt32::IVRSettings__GetInt32() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__GetFloat._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__GetFloat::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRSettings__GetFloat::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3d130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetFloat*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__GetFloat.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::OVR::OpenVR::IVRSettings__GetFloat::*)(::StringW, ::StringW, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(
    &::OVR::OpenVR::IVRSettings__GetFloat::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3d1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetFloat*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetFloat*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__GetFloat.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSettings__GetFloat::*)(::StringW, ::StringW, ::by_ref<::OVR::OpenVR::EVRSettingsError>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSettings__GetFloat::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e3d1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetFloat*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetFloat*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__GetFloat.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::OVR::OpenVR::IVRSettings__GetFloat::*)(::by_ref<::OVR::OpenVR::EVRSettingsError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSettings__GetFloat::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3d268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetFloat*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetFloat*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSettings__GetFloat::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetFloat*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline float_t OVR::OpenVR::IVRSettings__GetFloat::Invoke(::StringW pchSection, ::StringW pchSettingsKey, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetFloat*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, pchSection, pchSettingsKey, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSettings__GetFloat::BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError,
                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetFloat*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchSection, pchSettingsKey, peError, callback, object);
}
inline float_t OVR::OpenVR::IVRSettings__GetFloat::EndInvoke(::by_ref<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetFloat*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRSettings__GetFloat* OVR::OpenVR::IVRSettings__GetFloat::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSettings__GetFloat*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSettings__GetFloat::IVRSettings__GetFloat() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__GetString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__GetString::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRSettings__GetString::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3d28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetString*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__GetString.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__GetString::*)(::StringW, ::StringW, ::System::Text::StringBuilder*, uint32_t,
                                                                                                       ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(&::OVR::OpenVR::IVRSettings__GetString::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3d30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetString*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetString*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__GetString.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRSettings__GetString::*)(::StringW, ::StringW, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::EVRSettingsError>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSettings__GetString::BeginInvoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5e3d320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetString*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetString*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__GetString.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__GetString::*)(::by_ref<::OVR::OpenVR::EVRSettingsError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSettings__GetString::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3d3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetString*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetString*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSettings__GetString::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__GetString*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSettings__GetString::Invoke(::StringW pchSection, ::StringW pchSettingsKey, ::System::Text::StringBuilder* pchValue, uint32_t unValueLen,
                                                        ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetString*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchSection, pchSettingsKey, pchValue, unValueLen, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSettings__GetString::BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, ::System::Text::StringBuilder* pchValue, uint32_t unValueLen,
                                                                                ::by_ref<::OVR::OpenVR::EVRSettingsError> peError, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetString*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchSection, pchSettingsKey, pchValue, unValueLen, peError, callback, object);
}
inline void OVR::OpenVR::IVRSettings__GetString::EndInvoke(::by_ref<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__GetString*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRSettings__GetString* OVR::OpenVR::IVRSettings__GetString::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSettings__GetString*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSettings__GetString::IVRSettings__GetString() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__RemoveSection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__RemoveSection::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRSettings__RemoveSection::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3d400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveSection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__RemoveSection.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__RemoveSection::*)(::StringW, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(
    &::OVR::OpenVR::IVRSettings__RemoveSection::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3d480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveSection*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveSection*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__RemoveSection.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSettings__RemoveSection::*)(::StringW, ::by_ref<::OVR::OpenVR::EVRSettingsError>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRSettings__RemoveSection::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e3d494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveSection*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveSection*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__RemoveSection.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__RemoveSection::*)(::by_ref<::OVR::OpenVR::EVRSettingsError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSettings__RemoveSection::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3d52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveSection*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveSection*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSettings__RemoveSection::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveSection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSettings__RemoveSection::Invoke(::StringW pchSection, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveSection*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchSection, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSettings__RemoveSection::BeginInvoke(::StringW pchSection, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError, ::System::AsyncCallback* callback,
                                                                                    ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveSection*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchSection, peError, callback, object);
}
inline void OVR::OpenVR::IVRSettings__RemoveSection::EndInvoke(::by_ref<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveSection*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRSettings__RemoveSection* OVR::OpenVR::IVRSettings__RemoveSection::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSettings__RemoveSection*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSettings__RemoveSection::IVRSettings__RemoveSection() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__RemoveKeyInSection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__RemoveKeyInSection::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRSettings__RemoveKeyInSection::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3d544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveKeyInSection*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__RemoveKeyInSection.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__RemoveKeyInSection::*)(::StringW, ::StringW, ::by_ref<::OVR::OpenVR::EVRSettingsError>)>(
    &::OVR::OpenVR::IVRSettings__RemoveKeyInSection::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3d5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveKeyInSection*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveKeyInSection*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__RemoveKeyInSection.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRSettings__RemoveKeyInSection::*)(::StringW, ::StringW, ::by_ref<::OVR::OpenVR::EVRSettingsError>,
                                                                                                                                   ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRSettings__RemoveKeyInSection::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e3d5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveKeyInSection*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveKeyInSection*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRSettings__RemoveKeyInSection.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRSettings__RemoveKeyInSection::*)(::by_ref<::OVR::OpenVR::EVRSettingsError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRSettings__RemoveKeyInSection::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3d67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveKeyInSection*>(), { ::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveKeyInSection*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRSettings__RemoveKeyInSection::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveKeyInSection*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRSettings__RemoveKeyInSection::Invoke(::StringW pchSection, ::StringW pchSettingsKey, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveKeyInSection*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchSection, pchSettingsKey, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRSettings__RemoveKeyInSection::BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, ::by_ref<::OVR::OpenVR::EVRSettingsError> peError,
                                                                                         ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveKeyInSection*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchSection, pchSettingsKey, peError, callback, object);
}
inline void OVR::OpenVR::IVRSettings__RemoveKeyInSection::EndInvoke(::by_ref<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRSettings__RemoveKeyInSection*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRSettings__RemoveKeyInSection* OVR::OpenVR::IVRSettings__RemoveKeyInSection::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRSettings__RemoveKeyInSection*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSettings__RemoveKeyInSection::IVRSettings__RemoveKeyInSection() {}
// Ctor Parameters [CppParam { name: "GetSettingsErrorNameFromEnum", ty: "::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Sync",
// ty: "::OVR::OpenVR::IVRSettings__Sync*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetBool", ty: "::OVR::OpenVR::IVRSettings__SetBool*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "SetInt32", ty: "::OVR::OpenVR::IVRSettings__SetInt32*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetFloat", ty: "::OVR::OpenVR::IVRSettings__SetFloat*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "SetString", ty: "::OVR::OpenVR::IVRSettings__SetString*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetBool", ty:
// "::OVR::OpenVR::IVRSettings__GetBool*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetInt32", ty: "::OVR::OpenVR::IVRSettings__GetInt32*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "GetFloat", ty: "::OVR::OpenVR::IVRSettings__GetFloat*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetString", ty: "::OVR::OpenVR::IVRSettings__GetString*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "RemoveSection", ty: "::OVR::OpenVR::IVRSettings__RemoveSection*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "RemoveKeyInSection", ty: "::OVR::OpenVR::IVRSettings__RemoveKeyInSection*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IVRSettings::IVRSettings(::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum* GetSettingsErrorNameFromEnum, ::OVR::OpenVR::IVRSettings__Sync* Sync,
                                                  ::OVR::OpenVR::IVRSettings__SetBool* SetBool, ::OVR::OpenVR::IVRSettings__SetInt32* SetInt32, ::OVR::OpenVR::IVRSettings__SetFloat* SetFloat,
                                                  ::OVR::OpenVR::IVRSettings__SetString* SetString, ::OVR::OpenVR::IVRSettings__GetBool* GetBool, ::OVR::OpenVR::IVRSettings__GetInt32* GetInt32,
                                                  ::OVR::OpenVR::IVRSettings__GetFloat* GetFloat, ::OVR::OpenVR::IVRSettings__GetString* GetString,
                                                  ::OVR::OpenVR::IVRSettings__RemoveSection* RemoveSection, ::OVR::OpenVR::IVRSettings__RemoveKeyInSection* RemoveKeyInSection) noexcept {
  this->GetSettingsErrorNameFromEnum = GetSettingsErrorNameFromEnum;
  this->Sync = Sync;
  this->SetBool = SetBool;
  this->SetInt32 = SetInt32;
  this->SetFloat = SetFloat;
  this->SetString = SetString;
  this->GetBool = GetBool;
  this->GetInt32 = GetInt32;
  this->GetFloat = GetFloat;
  this->GetString = GetString;
  this->RemoveSection = RemoveSection;
  this->RemoveKeyInSection = RemoveKeyInSection;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRSettings::IVRSettings() {}
