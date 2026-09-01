#pragma once
// IWYU pragma private; include "GlobalNamespace\MonotonicTimeProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MonotonicTimeProvider_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonotonicTimeProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonotonicTimeProvider::*)()>(&::GlobalNamespace::MonotonicTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x333b10c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MonotonicTimeProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonotonicTimeProvider.GetTimeMs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::MonotonicTimeProvider::*)()>(&::GlobalNamespace::MonotonicTimeProvider::GetTimeMs)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x333b298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MonotonicTimeProvider*>(), { "GetTimeMs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonotonicTimeProvider.GetTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::MonotonicTimeProvider::*)()>(&::GlobalNamespace::MonotonicTimeProvider::GetTicks)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x333b2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MonotonicTimeProvider*>(), { "GetTicks", {}, {} })));
    return ___internal_method;
  }
};
constexpr double_t& GlobalNamespace::MonotonicTimeProvider::__cordl_internal_get__timeSpanTicksPerStopwatchTick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeSpanTicksPerStopwatchTick;
}
constexpr double_t const& GlobalNamespace::MonotonicTimeProvider::__cordl_internal_get__timeSpanTicksPerStopwatchTick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeSpanTicksPerStopwatchTick;
}
constexpr void GlobalNamespace::MonotonicTimeProvider::__cordl_internal_set__timeSpanTicksPerStopwatchTick(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeSpanTicksPerStopwatchTick = value;
}
constexpr int64_t& GlobalNamespace::MonotonicTimeProvider::__cordl_internal_get__startTicks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTicks;
}
constexpr int64_t const& GlobalNamespace::MonotonicTimeProvider::__cordl_internal_get__startTicks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTicks;
}
constexpr void GlobalNamespace::MonotonicTimeProvider::__cordl_internal_set__startTicks(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startTicks = value;
}
constexpr ::System::Diagnostics::Stopwatch*& GlobalNamespace::MonotonicTimeProvider::__cordl_internal_get__stopwatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stopwatch;
}
constexpr ::System::Diagnostics::Stopwatch* const& GlobalNamespace::MonotonicTimeProvider::__cordl_internal_get__stopwatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stopwatch;
}
constexpr void GlobalNamespace::MonotonicTimeProvider::__cordl_internal_set__stopwatch(::System::Diagnostics::Stopwatch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stopwatch = value;
}
inline void GlobalNamespace::MonotonicTimeProvider::setStaticF_instance(::GlobalNamespace::MonotonicTimeProvider* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MonotonicTimeProvider*, "instance", ::GlobalNamespace::MonotonicTimeProvider*>(std::forward<::GlobalNamespace::MonotonicTimeProvider*>(value));
}
inline ::GlobalNamespace::MonotonicTimeProvider* GlobalNamespace::MonotonicTimeProvider::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MonotonicTimeProvider*, "instance", ::GlobalNamespace::MonotonicTimeProvider*>();
}
inline void GlobalNamespace::MonotonicTimeProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MonotonicTimeProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t GlobalNamespace::MonotonicTimeProvider::GetTimeMs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MonotonicTimeProvider*>(), { "GetTimeMs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t GlobalNamespace::MonotonicTimeProvider::GetTicks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MonotonicTimeProvider*>(), { "GetTicks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::GlobalNamespace::MonotonicTimeProvider* GlobalNamespace::MonotonicTimeProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonotonicTimeProvider*>());
}
/// @brief Convert operator to "::BGNet::Core::ITimeProvider"
constexpr GlobalNamespace::MonotonicTimeProvider::operator ::BGNet::Core::ITimeProvider*() noexcept {
  return static_cast<::BGNet::Core::ITimeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGNet::Core::ITimeProvider"
constexpr ::BGNet::Core::ITimeProvider* GlobalNamespace::MonotonicTimeProvider::i___BGNet__Core__ITimeProvider() noexcept {
  return static_cast<::BGNet::Core::ITimeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonotonicTimeProvider::MonotonicTimeProvider() {}
