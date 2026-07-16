#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityDebugLogger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnityDebugLogger_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberLogger_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityDebugLogger.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityDebugLogger::*)(::StringW)>(&::GlobalNamespace::UnityDebugLogger::Log)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58e4650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityDebugLogger*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityDebugLogger.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityDebugLogger::*)(::StringW, ::System::Object*)>(&::GlobalNamespace::UnityDebugLogger::Log)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58e46ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityDebugLogger*>(), { "Log", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityDebugLogger.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityDebugLogger::*)(::StringW)>(&::GlobalNamespace::UnityDebugLogger::LogWarning)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58e476c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityDebugLogger*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityDebugLogger.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityDebugLogger::*)(::StringW, ::System::Object*)>(&::GlobalNamespace::UnityDebugLogger::LogWarning)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58e47c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityDebugLogger*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityDebugLogger.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityDebugLogger::*)(::StringW)>(&::GlobalNamespace::UnityDebugLogger::LogError)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58e4888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityDebugLogger*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityDebugLogger.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityDebugLogger::*)(::StringW, ::System::Object*)>(&::GlobalNamespace::UnityDebugLogger::LogError)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58e48e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityDebugLogger*>(), { "LogError", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityDebugLogger.LogException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityDebugLogger::*)(::System::Exception*)>(&::GlobalNamespace::UnityDebugLogger::LogException)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58e49a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityDebugLogger*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityDebugLogger.LogException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityDebugLogger::*)(::System::Exception*, ::System::Object*)>(&::GlobalNamespace::UnityDebugLogger::LogException)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58e4a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityDebugLogger*>(),
                                                                                           { "LogException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityDebugLogger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityDebugLogger::*)()>(&::GlobalNamespace::UnityDebugLogger::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e4ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityDebugLogger*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UnityDebugLogger::Log(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityDebugLogger*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::UnityDebugLogger::Log(::StringW message, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityDebugLogger*>(), { "Log", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, context);
}
inline void GlobalNamespace::UnityDebugLogger::LogWarning(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityDebugLogger*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::UnityDebugLogger::LogWarning(::StringW message, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityDebugLogger*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, context);
}
inline void GlobalNamespace::UnityDebugLogger::LogError(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityDebugLogger*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::UnityDebugLogger::LogError(::StringW message, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityDebugLogger*>(), { "LogError", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, context);
}
inline void GlobalNamespace::UnityDebugLogger::LogException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityDebugLogger*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
inline void GlobalNamespace::UnityDebugLogger::LogException(::System::Exception* exception, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityDebugLogger*>(),
                                                                                         { "LogException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception, context);
}
inline void GlobalNamespace::UnityDebugLogger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityDebugLogger*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnityDebugLogger* GlobalNamespace::UnityDebugLogger::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnityDebugLogger*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBeatSaberLogger"
constexpr GlobalNamespace::UnityDebugLogger::operator ::GlobalNamespace::IBeatSaberLogger*() noexcept {
  return static_cast<::GlobalNamespace::IBeatSaberLogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatSaberLogger"
constexpr ::GlobalNamespace::IBeatSaberLogger* GlobalNamespace::UnityDebugLogger::i___GlobalNamespace__IBeatSaberLogger() noexcept {
  return static_cast<::GlobalNamespace::IBeatSaberLogger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityDebugLogger::UnityDebugLogger() {}
