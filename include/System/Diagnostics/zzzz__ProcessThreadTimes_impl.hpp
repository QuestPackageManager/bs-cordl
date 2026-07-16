#pragma once
// IWYU pragma private; include "System/Diagnostics/ProcessThreadTimes.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__ProcessThreadTimes_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::ProcessThreadTimes.get_TotalProcessorTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Diagnostics::ProcessThreadTimes::*)()>(&::System::Diagnostics::ProcessThreadTimes::get_TotalProcessorTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6397418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::ProcessThreadTimes*>(), { "get_TotalProcessorTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessThreadTimes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::ProcessThreadTimes::*)()>(&::System::Diagnostics::ProcessThreadTimes::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6397034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::ProcessThreadTimes*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int64_t& System::Diagnostics::ProcessThreadTimes::__cordl_internal_get_create() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___create;
}
constexpr int64_t const& System::Diagnostics::ProcessThreadTimes::__cordl_internal_get_create() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___create;
}
constexpr void System::Diagnostics::ProcessThreadTimes::__cordl_internal_set_create(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___create = value;
}
constexpr int64_t& System::Diagnostics::ProcessThreadTimes::__cordl_internal_get_exit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exit;
}
constexpr int64_t const& System::Diagnostics::ProcessThreadTimes::__cordl_internal_get_exit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exit;
}
constexpr void System::Diagnostics::ProcessThreadTimes::__cordl_internal_set_exit(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___exit = value;
}
constexpr int64_t& System::Diagnostics::ProcessThreadTimes::__cordl_internal_get_kernel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernel;
}
constexpr int64_t const& System::Diagnostics::ProcessThreadTimes::__cordl_internal_get_kernel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernel;
}
constexpr void System::Diagnostics::ProcessThreadTimes::__cordl_internal_set_kernel(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernel = value;
}
constexpr int64_t& System::Diagnostics::ProcessThreadTimes::__cordl_internal_get_user() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user;
}
constexpr int64_t const& System::Diagnostics::ProcessThreadTimes::__cordl_internal_get_user() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user;
}
constexpr void System::Diagnostics::ProcessThreadTimes::__cordl_internal_set_user(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___user = value;
}
inline ::System::TimeSpan System::Diagnostics::ProcessThreadTimes::get_TotalProcessorTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::ProcessThreadTimes*>(), { "get_TotalProcessorTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline void System::Diagnostics::ProcessThreadTimes::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::ProcessThreadTimes*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Diagnostics::ProcessThreadTimes* System::Diagnostics::ProcessThreadTimes::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::ProcessThreadTimes*>());
}
// Ctor Parameters []
constexpr ::System::Diagnostics::ProcessThreadTimes::ProcessThreadTimes() {}
