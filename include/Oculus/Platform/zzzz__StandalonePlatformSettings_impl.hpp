#pragma once
// IWYU pragma private; include "Oculus\Platform\StandalonePlatformSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__StandalonePlatformSettings_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::StandalonePlatformSettings.get_OculusPlatformTestUserEmail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Oculus::Platform::StandalonePlatformSettings::get_OculusPlatformTestUserEmail)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5dec148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatformSettings*>(), { "get_OculusPlatformTestUserEmail", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::StandalonePlatformSettings.set_OculusPlatformTestUserEmail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Oculus::Platform::StandalonePlatformSettings::set_OculusPlatformTestUserEmail)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dec15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatformSettings*>(), { "set_OculusPlatformTestUserEmail", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::StandalonePlatformSettings.get_OculusPlatformTestUserPassword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Oculus::Platform::StandalonePlatformSettings::get_OculusPlatformTestUserPassword)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5dec160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatformSettings*>(), { "get_OculusPlatformTestUserPassword", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::StandalonePlatformSettings.set_OculusPlatformTestUserPassword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Oculus::Platform::StandalonePlatformSettings::set_OculusPlatformTestUserPassword)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dec174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatformSettings*>(), { "set_OculusPlatformTestUserPassword", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::StandalonePlatformSettings.get_OculusPlatformTestUserAccessToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Oculus::Platform::StandalonePlatformSettings::get_OculusPlatformTestUserAccessToken)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5dec178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatformSettings*>(), { "get_OculusPlatformTestUserAccessToken", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::StandalonePlatformSettings.set_OculusPlatformTestUserAccessToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Oculus::Platform::StandalonePlatformSettings::set_OculusPlatformTestUserAccessToken)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dec18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatformSettings*>(), { "set_OculusPlatformTestUserAccessToken", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::StandalonePlatformSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::StandalonePlatformSettings::*)()>(&::Oculus::Platform::StandalonePlatformSettings::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dec190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatformSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Oculus::Platform::StandalonePlatformSettings::get_OculusPlatformTestUserEmail() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatformSettings*>(), { "get_OculusPlatformTestUserEmail", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Oculus::Platform::StandalonePlatformSettings::set_OculusPlatformTestUserEmail(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatformSettings*>(), { "set_OculusPlatformTestUserEmail", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW Oculus::Platform::StandalonePlatformSettings::get_OculusPlatformTestUserPassword() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatformSettings*>(), { "get_OculusPlatformTestUserPassword", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Oculus::Platform::StandalonePlatformSettings::set_OculusPlatformTestUserPassword(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatformSettings*>(), { "set_OculusPlatformTestUserPassword", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW Oculus::Platform::StandalonePlatformSettings::get_OculusPlatformTestUserAccessToken() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatformSettings*>(), { "get_OculusPlatformTestUserAccessToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Oculus::Platform::StandalonePlatformSettings::set_OculusPlatformTestUserAccessToken(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatformSettings*>(), { "set_OculusPlatformTestUserAccessToken", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Oculus::Platform::StandalonePlatformSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatformSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::StandalonePlatformSettings* Oculus::Platform::StandalonePlatformSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::StandalonePlatformSettings*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::StandalonePlatformSettings::StandalonePlatformSettings() {}
