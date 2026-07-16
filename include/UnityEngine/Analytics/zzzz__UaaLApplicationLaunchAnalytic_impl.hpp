#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/UaaLApplicationLaunchAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEngine/Analytics/zzzz__UaaLApplicationLaunchAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::*)()>(&::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b046dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic.CreateUaaLApplicationLaunchAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic* (*)()>(
    &::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::CreateUaaLApplicationLaunchAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b04754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic*>(), { "CreateUaaLApplicationLaunchAnalytic", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::__cordl_internal_get_launch_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___launch_type;
}
constexpr int32_t const& UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::__cordl_internal_get_launch_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___launch_type;
}
constexpr void UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::__cordl_internal_set_launch_type(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___launch_type = value;
}
constexpr int32_t& UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::__cordl_internal_get_launch_process_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___launch_process_type;
}
constexpr int32_t const& UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::__cordl_internal_get_launch_process_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___launch_process_type;
}
constexpr void UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::__cordl_internal_set_launch_process_type(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___launch_process_type = value;
}
inline void UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic* UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::CreateUaaLApplicationLaunchAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic*>(), { "CreateUaaLApplicationLaunchAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic* UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::UaaLApplicationLaunchAnalytic() {}
