#pragma once
// IWYU pragma private; include "System\Threading\Tasks\UnobservedTaskExceptionEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Threading/Tasks/zzzz__UnobservedTaskExceptionEventArgs_def.hpp"
#include "System/zzzz__AggregateException_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::UnobservedTaskExceptionEventArgs::*)(::System::AggregateException*)>(
    &::System::Threading::Tasks::UnobservedTaskExceptionEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5cc74f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::AggregateException*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::AggregateException*& System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__cordl_internal_get_m_exception() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_exception;
}
constexpr ::System::AggregateException* const& System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__cordl_internal_get_m_exception() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_exception;
}
constexpr void System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__cordl_internal_set_m_exception(::System::AggregateException* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_exception = value;
}
constexpr bool& System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__cordl_internal_get_m_observed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_observed;
}
constexpr bool const& System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__cordl_internal_get_m_observed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_observed;
}
constexpr void System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__cordl_internal_set_m_observed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_observed = value;
}
inline void System::Threading::Tasks::UnobservedTaskExceptionEventArgs::_ctor(::System::AggregateException* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::AggregateException*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
inline ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs* System::Threading::Tasks::UnobservedTaskExceptionEventArgs::New_ctor(::System::AggregateException* exception) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>(exception));
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs::UnobservedTaskExceptionEventArgs() {}
