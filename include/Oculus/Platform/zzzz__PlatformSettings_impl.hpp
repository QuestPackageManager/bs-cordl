#pragma once
// IWYU pragma private; include "Oculus\Platform\PlatformSettings.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Oculus/Platform/zzzz__PlatformSettings_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::PlatformSettings.get_AppID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Oculus::Platform::PlatformSettings::get_AppID)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ddf16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { "get_AppID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::PlatformSettings.set_AppID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Oculus::Platform::PlatformSettings::set_AppID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5debb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { "set_AppID", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::PlatformSettings.get_MobileAppID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Oculus::Platform::PlatformSettings::get_MobileAppID)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ddf134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { "get_MobileAppID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::PlatformSettings.set_MobileAppID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Oculus::Platform::PlatformSettings::set_MobileAppID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5debbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { "set_MobileAppID", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::PlatformSettings.get_UseStandalonePlatform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Oculus::Platform::PlatformSettings::get_UseStandalonePlatform)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5dde648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { "get_UseStandalonePlatform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::PlatformSettings.set_UseStandalonePlatform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Oculus::Platform::PlatformSettings::set_UseStandalonePlatform)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5debbcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { "set_UseStandalonePlatform", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::PlatformSettings.get_UseMobileAppIDInEditor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Oculus::Platform::PlatformSettings::get_UseMobileAppIDInEditor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ddf150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { "get_UseMobileAppIDInEditor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::PlatformSettings.set_UseMobileAppIDInEditor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Oculus::Platform::PlatformSettings::set_UseMobileAppIDInEditor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5debbf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { "set_UseMobileAppIDInEditor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::PlatformSettings.get_Instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Platform::PlatformSettings> (*)()>(&::Oculus::Platform::PlatformSettings::get_Instance)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5deba54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { "get_Instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::PlatformSettings.set_Instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::PlatformSettings*)>(&::Oculus::Platform::PlatformSettings::set_Instance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5debc14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { "set_Instance", {}, { ::i2c::type_of<::Oculus::Platform::PlatformSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::PlatformSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::PlatformSettings::*)()>(&::Oculus::Platform::PlatformSettings::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5debc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::PlatformSettings::__cordl_internal_get_ovrAppID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ovrAppID;
}
constexpr ::StringW const& Oculus::Platform::PlatformSettings::__cordl_internal_get_ovrAppID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ovrAppID;
}
constexpr void Oculus::Platform::PlatformSettings::__cordl_internal_set_ovrAppID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ovrAppID = value;
}
constexpr ::StringW& Oculus::Platform::PlatformSettings::__cordl_internal_get_ovrMobileAppID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ovrMobileAppID;
}
constexpr ::StringW const& Oculus::Platform::PlatformSettings::__cordl_internal_get_ovrMobileAppID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ovrMobileAppID;
}
constexpr void Oculus::Platform::PlatformSettings::__cordl_internal_set_ovrMobileAppID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ovrMobileAppID = value;
}
constexpr bool& Oculus::Platform::PlatformSettings::__cordl_internal_get_ovrUseMobileAppIDInEditor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ovrUseMobileAppIDInEditor;
}
constexpr bool const& Oculus::Platform::PlatformSettings::__cordl_internal_get_ovrUseMobileAppIDInEditor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ovrUseMobileAppIDInEditor;
}
constexpr void Oculus::Platform::PlatformSettings::__cordl_internal_set_ovrUseMobileAppIDInEditor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ovrUseMobileAppIDInEditor = value;
}
constexpr bool& Oculus::Platform::PlatformSettings::__cordl_internal_get_ovrUseStandalonePlatform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ovrUseStandalonePlatform;
}
constexpr bool const& Oculus::Platform::PlatformSettings::__cordl_internal_get_ovrUseStandalonePlatform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ovrUseStandalonePlatform;
}
constexpr void Oculus::Platform::PlatformSettings::__cordl_internal_set_ovrUseStandalonePlatform(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ovrUseStandalonePlatform = value;
}
inline void Oculus::Platform::PlatformSettings::setStaticF_instance(::UnityW<::Oculus::Platform::PlatformSettings> value) {
  ::cordl_internals::setStaticField<::UnityW<::Oculus::Platform::PlatformSettings>, "instance", ::Oculus::Platform::PlatformSettings*>(
      std::forward<::UnityW<::Oculus::Platform::PlatformSettings>>(value));
}
inline ::UnityW<::Oculus::Platform::PlatformSettings> Oculus::Platform::PlatformSettings::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::UnityW<::Oculus::Platform::PlatformSettings>, "instance", ::Oculus::Platform::PlatformSettings*>();
}
inline ::StringW Oculus::Platform::PlatformSettings::get_AppID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { "get_AppID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Oculus::Platform::PlatformSettings::set_AppID(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { "set_AppID", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW Oculus::Platform::PlatformSettings::get_MobileAppID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { "get_MobileAppID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Oculus::Platform::PlatformSettings::set_MobileAppID(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { "set_MobileAppID", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Oculus::Platform::PlatformSettings::get_UseStandalonePlatform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { "get_UseStandalonePlatform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Oculus::Platform::PlatformSettings::set_UseStandalonePlatform(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { "set_UseStandalonePlatform", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Oculus::Platform::PlatformSettings::get_UseMobileAppIDInEditor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { "get_UseMobileAppIDInEditor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Oculus::Platform::PlatformSettings::set_UseMobileAppIDInEditor(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { "set_UseMobileAppIDInEditor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::Oculus::Platform::PlatformSettings> Oculus::Platform::PlatformSettings::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { "get_Instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Platform::PlatformSettings>>(nullptr, ___internal_method);
}
inline void Oculus::Platform::PlatformSettings::set_Instance(::Oculus::Platform::PlatformSettings* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { "set_Instance", {}, { ::i2c::type_of<::Oculus::Platform::PlatformSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Oculus::Platform::PlatformSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PlatformSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::PlatformSettings* Oculus::Platform::PlatformSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::PlatformSettings*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::PlatformSettings::PlatformSettings() {}
