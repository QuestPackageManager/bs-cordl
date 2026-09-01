#pragma once
// IWYU pragma private; include "GlobalNamespace\PlatformLogger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformLogger_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformLogger_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformLogger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLogger::*)(::StringW)>(&::GlobalNamespace::PlatformLogger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3778a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLogger*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLogger.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLogger::*)(::StringW)>(&::GlobalNamespace::PlatformLogger::LogError)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x37796a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLogger*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLogger.LogInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLogger::*)(::StringW)>(&::GlobalNamespace::PlatformLogger::LogInfo)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3779758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLogger*>(), { "LogInfo", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLogger.LogVerbose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLogger::*)(::StringW)>(&::GlobalNamespace::PlatformLogger::LogVerbose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3779810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLogger*>(), { "LogVerbose", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLogger.LogSensitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLogger::*)(::StringW)>(&::GlobalNamespace::PlatformLogger::LogSensitive)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3779814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLogger*>(), { "LogSensitive", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLogger.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLogger::*)(::StringW)>(&::GlobalNamespace::PlatformLogger::LogWarning)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3779818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLogger*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlatformLogger::__cordl_internal_get_logPrefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logPrefix;
}
constexpr ::StringW const& GlobalNamespace::PlatformLogger::__cordl_internal_get_logPrefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logPrefix;
}
constexpr void GlobalNamespace::PlatformLogger::__cordl_internal_set_logPrefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___logPrefix = value;
}
inline void GlobalNamespace::PlatformLogger::_ctor(::StringW logPrefix) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLogger*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logPrefix);
}
inline void GlobalNamespace::PlatformLogger::LogError(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLogger*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::PlatformLogger::LogInfo(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLogger*>(), { "LogInfo", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::PlatformLogger::LogVerbose(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLogger*>(), { "LogVerbose", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::PlatformLogger::LogSensitive(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLogger*>(), { "LogSensitive", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::PlatformLogger::LogWarning(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLogger*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::GlobalNamespace::PlatformLogger* GlobalNamespace::PlatformLogger::New_ctor(::StringW logPrefix) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformLogger*>(logPrefix));
}
/// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatformLogger"
constexpr GlobalNamespace::PlatformLogger::operator ::OculusStudios::Platform::Core::IPlatformLogger*() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatformLogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::Platform::Core::IPlatformLogger"
constexpr ::OculusStudios::Platform::Core::IPlatformLogger* GlobalNamespace::PlatformLogger::i___OculusStudios__Platform__Core__IPlatformLogger() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatformLogger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformLogger::PlatformLogger() {}
