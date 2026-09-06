#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/IPlatformLogger.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformLogger_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformLogger.LogVerbose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::IPlatformLogger::*)(::StringW)>(&::OculusStudios::Platform::Core::IPlatformLogger::LogVerbose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatformLogger*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformLogger*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformLogger.LogInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::IPlatformLogger::*)(::StringW)>(&::OculusStudios::Platform::Core::IPlatformLogger::LogInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatformLogger*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformLogger*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformLogger.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::IPlatformLogger::*)(::StringW)>(&::OculusStudios::Platform::Core::IPlatformLogger::LogWarning)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatformLogger*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformLogger*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformLogger.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::IPlatformLogger::*)(::StringW)>(&::OculusStudios::Platform::Core::IPlatformLogger::LogError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatformLogger*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformLogger*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformLogger.LogSensitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::IPlatformLogger::*)(::StringW)>(&::OculusStudios::Platform::Core::IPlatformLogger::LogSensitive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatformLogger*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformLogger*>(), 4 }));
    return ___internal_method;
  }
};
inline void OculusStudios::Platform::Core::IPlatformLogger::LogVerbose(::StringW message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformLogger*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void OculusStudios::Platform::Core::IPlatformLogger::LogInfo(::StringW message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformLogger*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void OculusStudios::Platform::Core::IPlatformLogger::LogWarning(::StringW message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformLogger*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void OculusStudios::Platform::Core::IPlatformLogger::LogError(::StringW message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformLogger*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void OculusStudios::Platform::Core::IPlatformLogger::LogSensitive(::StringW message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformLogger*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
