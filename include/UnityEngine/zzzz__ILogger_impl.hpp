#pragma once
// IWYU pragma private; include "UnityEngine\ILogger.hpp"
#include "UnityEngine/zzzz__ILogger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ILogHandler_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::ILogger.get_logHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ILogHandler* (::UnityEngine::ILogger::*)()>(&::UnityEngine::ILogger::get_logHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ILogger*>(), { ::i2c::class_of<::UnityEngine::ILogger*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ILogger.get_logEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ILogger::*)()>(&::UnityEngine::ILogger::get_logEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ILogger*>(), { ::i2c::class_of<::UnityEngine::ILogger*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ILogger.IsLogTypeAllowed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ILogger::*)(::UnityEngine::LogType)>(&::UnityEngine::ILogger::IsLogTypeAllowed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ILogger*>(), { ::i2c::class_of<::UnityEngine::ILogger*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ILogger.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ILogger::*)(::UnityEngine::LogType, ::System::Object*)>(&::UnityEngine::ILogger::Log)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ILogger*>(), { ::i2c::class_of<::UnityEngine::ILogger*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ILogger.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ILogger::*)(::UnityEngine::LogType, ::System::Object*, ::UnityEngine::Object*)>(&::UnityEngine::ILogger::Log)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ILogger*>(), { ::i2c::class_of<::UnityEngine::ILogger*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ILogger.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ILogger::*)(::StringW, ::System::Object*)>(&::UnityEngine::ILogger::LogError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ILogger*>(), { ::i2c::class_of<::UnityEngine::ILogger*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ILogger.LogFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ILogger::*)(::UnityEngine::LogType, ::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::ILogger::LogFormat)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ILogger*>(), { ::i2c::class_of<::UnityEngine::ILogger*>(), 6 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::ILogHandler* UnityEngine::ILogger::get_logHandler() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ILogger*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ILogHandler*>(this, ___internal_method);
}
inline bool UnityEngine::ILogger::get_logEnabled() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ILogger*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::ILogger::IsLogTypeAllowed(::UnityEngine::LogType logType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ILogger*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, logType);
}
inline void UnityEngine::ILogger::Log(::UnityEngine::LogType logType, ::System::Object* message) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ILogger*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logType, message);
}
inline void UnityEngine::ILogger::Log(::UnityEngine::LogType logType, ::System::Object* message, ::UnityEngine::Object* context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ILogger*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logType, message, context);
}
inline void UnityEngine::ILogger::LogError(::StringW tag, ::System::Object* message) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ILogger*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag, message);
}
inline void UnityEngine::ILogger::LogFormat(::UnityEngine::LogType logType, ::StringW format, ::ArrayW<::System::Object*> args) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ILogger*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logType, format, args);
}
/// @brief Convert operator to "::UnityEngine::ILogHandler"
constexpr UnityEngine::ILogger::operator ::UnityEngine::ILogHandler*() noexcept {
  return static_cast<::UnityEngine::ILogHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ILogHandler"
constexpr ::UnityEngine::ILogHandler* UnityEngine::ILogger::i___UnityEngine__ILogHandler() noexcept {
  return static_cast<::UnityEngine::ILogHandler*>(static_cast<void*>(this));
}
