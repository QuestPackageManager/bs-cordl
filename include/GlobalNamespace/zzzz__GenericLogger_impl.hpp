#pragma once
// IWYU pragma private; include "GlobalNamespace/GenericLogger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GenericLogger_def.hpp"
#include "GlobalNamespace/zzzz__GenericLogger_def.hpp"
#include "GlobalNamespace/zzzz__IVerboseLogger_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GenericLogger_ScopedStopwatch._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GenericLogger_ScopedStopwatch::*)(::StringW)>(&::GlobalNamespace::GenericLogger_ScopedStopwatch::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5857864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GenericLogger_ScopedStopwatch*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GenericLogger_ScopedStopwatch.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GenericLogger_ScopedStopwatch::*)()>(&::GlobalNamespace::GenericLogger_ScopedStopwatch::Dispose)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x585795c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GenericLogger_ScopedStopwatch*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GenericLogger_ScopedStopwatch::__cordl_internal_get__processName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processName;
}
constexpr ::StringW const& GlobalNamespace::GenericLogger_ScopedStopwatch::__cordl_internal_get__processName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processName;
}
constexpr void GlobalNamespace::GenericLogger_ScopedStopwatch::__cordl_internal_set__processName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____processName = value;
}
constexpr ::System::Diagnostics::Stopwatch*& GlobalNamespace::GenericLogger_ScopedStopwatch::__cordl_internal_get__stopwatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stopwatch;
}
constexpr ::System::Diagnostics::Stopwatch* const& GlobalNamespace::GenericLogger_ScopedStopwatch::__cordl_internal_get__stopwatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stopwatch;
}
constexpr void GlobalNamespace::GenericLogger_ScopedStopwatch::__cordl_internal_set__stopwatch(::System::Diagnostics::Stopwatch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stopwatch = value;
}
inline void GlobalNamespace::GenericLogger_ScopedStopwatch::_ctor(::StringW processName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GenericLogger_ScopedStopwatch*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, processName);
}
inline void GlobalNamespace::GenericLogger_ScopedStopwatch::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GenericLogger_ScopedStopwatch*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GenericLogger_ScopedStopwatch* GlobalNamespace::GenericLogger_ScopedStopwatch::New_ctor(::StringW processName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GenericLogger_ScopedStopwatch*>(processName));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::GenericLogger_ScopedStopwatch::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GenericLogger_ScopedStopwatch::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GenericLogger_ScopedStopwatch::GenericLogger_ScopedStopwatch() {}
//  Writing Method size for method: ::GlobalNamespace::GenericLogger.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::IVerboseLogger*, ::StringW)>(&::GlobalNamespace::GenericLogger::Format)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x58575a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GenericLogger*>(),
                                                                                           { "Format", {}, { ::i2c::type_of<::GlobalNamespace::IVerboseLogger*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GenericLogger.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::IVerboseLogger*, ::StringW)>(&::GlobalNamespace::GenericLogger::Log)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x585769c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GenericLogger*>(), { "Log", {}, { ::i2c::type_of<::GlobalNamespace::IVerboseLogger*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GenericLogger.LogWithTimestamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::GenericLogger::LogWithTimestamp)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5857718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GenericLogger*>(), { "LogWithTimestamp", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::GenericLogger::Format(::GlobalNamespace::IVerboseLogger* logger, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GenericLogger*>(), { "Format", {}, { ::i2c::type_of<::GlobalNamespace::IVerboseLogger*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, logger, message);
}
inline void GlobalNamespace::GenericLogger::Log(::GlobalNamespace::IVerboseLogger* logger, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GenericLogger*>(), { "Log", {}, { ::i2c::type_of<::GlobalNamespace::IVerboseLogger*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logger, message);
}
template <typename T> inline void GlobalNamespace::GenericLogger::Log(T logger, ::StringW message) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GenericLogger*>(), { "Log", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logger, message);
}
inline void GlobalNamespace::GenericLogger::LogWithTimestamp(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GenericLogger*>(), { "LogWithTimestamp", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GenericLogger::GenericLogger() {}
