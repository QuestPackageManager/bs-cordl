#pragma once
// IWYU pragma private; include "BGNet/Logging/ConsoleLogger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGNet/Logging/zzzz__ConsoleLogger_def.hpp"
#include "BGNet/Logging/zzzz__Debug_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::BGNet::Logging::ConsoleLogger.LogInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Logging::ConsoleLogger::*)(::StringW)>(&::BGNet::Logging::ConsoleLogger::LogInfo)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x33416e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::ConsoleLogger*>(), { "LogInfo", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::ConsoleLogger.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Logging::ConsoleLogger::*)(::StringW)>(&::BGNet::Logging::ConsoleLogger::LogError)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x33417f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::ConsoleLogger*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::ConsoleLogger.LogException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Logging::ConsoleLogger::*)(::System::Exception*, ::StringW)>(&::BGNet::Logging::ConsoleLogger::LogException)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x33419d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::ConsoleLogger*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::ConsoleLogger.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Logging::ConsoleLogger::*)(::StringW)>(&::BGNet::Logging::ConsoleLogger::LogWarning)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3341b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::ConsoleLogger*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::ConsoleLogger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Logging::ConsoleLogger::*)()>(&::BGNet::Logging::ConsoleLogger::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3341c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::ConsoleLogger*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BGNet::Logging::ConsoleLogger::LogInfo(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::ConsoleLogger*>(), { "LogInfo", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void BGNet::Logging::ConsoleLogger::LogError(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::ConsoleLogger*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void BGNet::Logging::ConsoleLogger::LogException(::System::Exception* exception, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::ConsoleLogger*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception, message);
}
inline void BGNet::Logging::ConsoleLogger::LogWarning(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::ConsoleLogger*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void BGNet::Logging::ConsoleLogger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::ConsoleLogger*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGNet::Logging::ConsoleLogger* BGNet::Logging::ConsoleLogger::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGNet::Logging::ConsoleLogger*>());
}
/// @brief Convert operator to "::BGNet::Logging::Debug_ILogger"
constexpr BGNet::Logging::ConsoleLogger::operator ::BGNet::Logging::Debug_ILogger*() noexcept {
  return static_cast<::BGNet::Logging::Debug_ILogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGNet::Logging::Debug_ILogger"
constexpr ::BGNet::Logging::Debug_ILogger* BGNet::Logging::ConsoleLogger::i___BGNet__Logging__Debug_ILogger() noexcept {
  return static_cast<::BGNet::Logging::Debug_ILogger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGNet::Logging::ConsoleLogger::ConsoleLogger() {}
