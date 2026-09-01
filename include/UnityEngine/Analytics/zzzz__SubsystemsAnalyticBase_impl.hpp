#pragma once
// IWYU pragma private; include "UnityEngine\Analytics\SubsystemsAnalyticBase.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEngine/Analytics/zzzz__SubsystemsAnalyticBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::SubsystemsAnalyticBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Analytics::SubsystemsAnalyticBase::*)(::StringW)>(&::UnityEngine::Analytics::SubsystemsAnalyticBase::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e24754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::SubsystemsAnalyticBase*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Analytics::SubsystemsAnalyticBase::__cordl_internal_get_subsystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subsystem;
}
constexpr ::StringW const& UnityEngine::Analytics::SubsystemsAnalyticBase::__cordl_internal_get_subsystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subsystem;
}
constexpr void UnityEngine::Analytics::SubsystemsAnalyticBase::__cordl_internal_set_subsystem(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subsystem = value;
}
inline void UnityEngine::Analytics::SubsystemsAnalyticBase::_ctor(::StringW eventName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::SubsystemsAnalyticBase*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventName);
}
inline ::UnityEngine::Analytics::SubsystemsAnalyticBase* UnityEngine::Analytics::SubsystemsAnalyticBase::New_ctor(::StringW eventName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Analytics::SubsystemsAnalyticBase*>(eventName));
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::SubsystemsAnalyticBase::SubsystemsAnalyticBase() {}
