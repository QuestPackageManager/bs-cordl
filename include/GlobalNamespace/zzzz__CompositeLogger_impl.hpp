#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeLogger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CompositeLogger_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberLogger_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CompositeLogger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLogger::*)(::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>*)>(
    &::GlobalNamespace::CompositeLogger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e4ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLogger*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLogger.AddLogger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLogger::*)(::GlobalNamespace::IBeatSaberLogger*)>(&::GlobalNamespace::CompositeLogger::AddLogger)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58e4ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLogger*>(), { "AddLogger", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberLogger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLogger.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLogger::*)(::StringW)>(&::GlobalNamespace::CompositeLogger::Log)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x58e50ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLogger*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLogger.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLogger::*)(::StringW, ::System::Object*)>(&::GlobalNamespace::CompositeLogger::Log)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x58e522c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLogger*>(), { "Log", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLogger.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLogger::*)(::StringW)>(&::GlobalNamespace::CompositeLogger::LogWarning)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x58e53b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLogger*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLogger.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLogger::*)(::StringW, ::System::Object*)>(&::GlobalNamespace::CompositeLogger::LogWarning)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x58e553c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLogger*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLogger.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLogger::*)(::StringW)>(&::GlobalNamespace::CompositeLogger::LogError)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x58e56c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLogger*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLogger.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLogger::*)(::StringW, ::System::Object*)>(&::GlobalNamespace::CompositeLogger::LogError)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x58e584c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLogger*>(), { "LogError", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLogger.LogException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLogger::*)(::System::Exception*)>(&::GlobalNamespace::CompositeLogger::LogException)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x58e59d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLogger*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLogger.LogException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLogger::*)(::System::Exception*, ::System::Object*)>(&::GlobalNamespace::CompositeLogger::LogException)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x58e5b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLogger*>(),
                                                                                           { "LogException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>*& GlobalNamespace::CompositeLogger::__cordl_internal_get__loggers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loggers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>* const& GlobalNamespace::CompositeLogger::__cordl_internal_get__loggers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loggers;
}
constexpr void GlobalNamespace::CompositeLogger::__cordl_internal_set__loggers(::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loggers = value;
}
inline void GlobalNamespace::CompositeLogger::_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>* loggers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLogger*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loggers);
}
inline void GlobalNamespace::CompositeLogger::AddLogger(::GlobalNamespace::IBeatSaberLogger* logger) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLogger*>(), { "AddLogger", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberLogger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logger);
}
inline void GlobalNamespace::CompositeLogger::Log(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLogger*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::CompositeLogger::Log(::StringW message, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLogger*>(), { "Log", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, context);
}
inline void GlobalNamespace::CompositeLogger::LogWarning(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLogger*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::CompositeLogger::LogWarning(::StringW message, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLogger*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, context);
}
inline void GlobalNamespace::CompositeLogger::LogError(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLogger*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::CompositeLogger::LogError(::StringW message, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLogger*>(), { "LogError", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, context);
}
inline void GlobalNamespace::CompositeLogger::LogException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLogger*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
inline void GlobalNamespace::CompositeLogger::LogException(::System::Exception* exception, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLogger*>(),
                                                                                         { "LogException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception, context);
}
inline ::GlobalNamespace::CompositeLogger* GlobalNamespace::CompositeLogger::New_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>* loggers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CompositeLogger*>(loggers));
}
/// @brief Convert operator to "::GlobalNamespace::IBeatSaberLogger"
constexpr GlobalNamespace::CompositeLogger::operator ::GlobalNamespace::IBeatSaberLogger*() noexcept {
  return static_cast<::GlobalNamespace::IBeatSaberLogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatSaberLogger"
constexpr ::GlobalNamespace::IBeatSaberLogger* GlobalNamespace::CompositeLogger::i___GlobalNamespace__IBeatSaberLogger() noexcept {
  return static_cast<::GlobalNamespace::IBeatSaberLogger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompositeLogger::CompositeLogger() {}
