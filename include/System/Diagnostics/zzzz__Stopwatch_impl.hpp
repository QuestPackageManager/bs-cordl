#pragma once
// IWYU pragma private; include "System/Diagnostics/Stopwatch.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::Stopwatch.GetTimestamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::System::Diagnostics::Stopwatch::GetTimestamp)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6392ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { "GetTimestamp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Stopwatch.StartNew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::Stopwatch* (*)()>(&::System::Diagnostics::Stopwatch::StartNew)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x639aaf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { "StartNew", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Stopwatch._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Stopwatch::*)()>(&::System::Diagnostics::Stopwatch::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x639ab54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Stopwatch.get_Elapsed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Diagnostics::Stopwatch::*)()>(&::System::Diagnostics::Stopwatch::get_Elapsed)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x639abc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { "get_Elapsed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Stopwatch.get_ElapsedMilliseconds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Diagnostics::Stopwatch::*)()>(&::System::Diagnostics::Stopwatch::get_ElapsedMilliseconds)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x639ad30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { "get_ElapsedMilliseconds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Stopwatch.get_ElapsedTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Diagnostics::Stopwatch::*)()>(&::System::Diagnostics::Stopwatch::get_ElapsedTicks)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x639acbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { "get_ElapsedTicks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Stopwatch.get_IsRunning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::Stopwatch::*)()>(&::System::Diagnostics::Stopwatch::get_IsRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x639ae98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { "get_IsRunning", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Stopwatch.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Stopwatch::*)()>(&::System::Diagnostics::Stopwatch::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x639aea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Stopwatch.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Stopwatch::*)()>(&::System::Diagnostics::Stopwatch::Start)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x639ab58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Stopwatch.Stop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Stopwatch::*)()>(&::System::Diagnostics::Stopwatch::Stop)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x639aeac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { "Stop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Stopwatch.Restart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Stopwatch::*)()>(&::System::Diagnostics::Stopwatch::Restart)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x639af28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { "Restart", {}, {} })));
    return ___internal_method;
  }
};
constexpr int64_t& System::Diagnostics::Stopwatch::__cordl_internal_get_elapsed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elapsed;
}
constexpr int64_t const& System::Diagnostics::Stopwatch::__cordl_internal_get_elapsed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elapsed;
}
constexpr void System::Diagnostics::Stopwatch::__cordl_internal_set_elapsed(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elapsed = value;
}
constexpr int64_t& System::Diagnostics::Stopwatch::__cordl_internal_get_started() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___started;
}
constexpr int64_t const& System::Diagnostics::Stopwatch::__cordl_internal_get_started() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___started;
}
constexpr void System::Diagnostics::Stopwatch::__cordl_internal_set_started(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___started = value;
}
constexpr bool& System::Diagnostics::Stopwatch::__cordl_internal_get_is_running() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_running;
}
constexpr bool const& System::Diagnostics::Stopwatch::__cordl_internal_get_is_running() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_running;
}
constexpr void System::Diagnostics::Stopwatch::__cordl_internal_set_is_running(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_running = value;
}
inline void System::Diagnostics::Stopwatch::setStaticF_Frequency(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "Frequency", ::System::Diagnostics::Stopwatch*>(std::forward<int64_t>(value));
}
inline int64_t System::Diagnostics::Stopwatch::getStaticF_Frequency() {
  return ::cordl_internals::getStaticField<int64_t, "Frequency", ::System::Diagnostics::Stopwatch*>();
}
inline void System::Diagnostics::Stopwatch::setStaticF_IsHighResolution(bool value) {
  ::cordl_internals::setStaticField<bool, "IsHighResolution", ::System::Diagnostics::Stopwatch*>(std::forward<bool>(value));
}
inline bool System::Diagnostics::Stopwatch::getStaticF_IsHighResolution() {
  return ::cordl_internals::getStaticField<bool, "IsHighResolution", ::System::Diagnostics::Stopwatch*>();
}
inline int64_t System::Diagnostics::Stopwatch::GetTimestamp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { "GetTimestamp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline ::System::Diagnostics::Stopwatch* System::Diagnostics::Stopwatch::StartNew() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { "StartNew", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::Stopwatch*>(nullptr, ___internal_method);
}
inline void System::Diagnostics::Stopwatch::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::TimeSpan System::Diagnostics::Stopwatch::get_Elapsed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { "get_Elapsed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline int64_t System::Diagnostics::Stopwatch::get_ElapsedMilliseconds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { "get_ElapsedMilliseconds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::Diagnostics::Stopwatch::get_ElapsedTicks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { "get_ElapsedTicks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline bool System::Diagnostics::Stopwatch::get_IsRunning() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { "get_IsRunning", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Diagnostics::Stopwatch::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::Stopwatch::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::Stopwatch::Stop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { "Stop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::Stopwatch::Restart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Stopwatch*>(), { "Restart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Diagnostics::Stopwatch* System::Diagnostics::Stopwatch::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::Stopwatch*>());
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Stopwatch::Stopwatch() {}
