#pragma once
// IWYU pragma private; include "BGNet\Logging\UnityLogger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGNet/Logging/zzzz__UnityLogger_def.hpp"
#include "BGNet/Logging/zzzz__Debug_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::BGNet::Logging::UnityLogger.LogInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Logging::UnityLogger::*)(::StringW)>(&::BGNet::Logging::UnityLogger::LogInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33449c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::UnityLogger*>(), { "LogInfo", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::UnityLogger.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Logging::UnityLogger::*)(::StringW)>(&::BGNet::Logging::UnityLogger::LogError)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x33449c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::UnityLogger*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::UnityLogger.LogException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Logging::UnityLogger::*)(::System::Exception*, ::StringW)>(&::BGNet::Logging::UnityLogger::LogException)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3344a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::UnityLogger*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::UnityLogger.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Logging::UnityLogger::*)(::StringW)>(&::BGNet::Logging::UnityLogger::LogWarning)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3344ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::UnityLogger*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::UnityLogger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Logging::UnityLogger::*)()>(&::BGNet::Logging::UnityLogger::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3344058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::UnityLogger*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BGNet::Logging::UnityLogger::LogInfo(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::UnityLogger*>(), { "LogInfo", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void BGNet::Logging::UnityLogger::LogError(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::UnityLogger*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void BGNet::Logging::UnityLogger::LogException(::System::Exception* exception, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::UnityLogger*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception, message);
}
inline void BGNet::Logging::UnityLogger::LogWarning(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::UnityLogger*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void BGNet::Logging::UnityLogger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::UnityLogger*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGNet::Logging::UnityLogger* BGNet::Logging::UnityLogger::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGNet::Logging::UnityLogger*>());
}
/// @brief Convert operator to "::BGNet::Logging::Debug_ILogger"
constexpr BGNet::Logging::UnityLogger::operator ::BGNet::Logging::Debug_ILogger*() noexcept {
  return static_cast<::BGNet::Logging::Debug_ILogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGNet::Logging::Debug_ILogger"
constexpr ::BGNet::Logging::Debug_ILogger* BGNet::Logging::UnityLogger::i___BGNet__Logging__Debug_ILogger() noexcept {
  return static_cast<::BGNet::Logging::Debug_ILogger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGNet::Logging::UnityLogger::UnityLogger() {}
