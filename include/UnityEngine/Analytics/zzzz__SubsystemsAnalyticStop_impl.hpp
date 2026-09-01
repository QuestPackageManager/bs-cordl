#pragma once
// IWYU pragma private; include "UnityEngine\Analytics\SubsystemsAnalyticStop.hpp"
#include "UnityEngine/Analytics/zzzz__SubsystemsAnalyticBase_impl.hpp"
#include "UnityEngine/Analytics/zzzz__SubsystemsAnalyticStop_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::SubsystemsAnalyticStop._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Analytics::SubsystemsAnalyticStop::*)()>(&::UnityEngine::Analytics::SubsystemsAnalyticStop::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e248a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::SubsystemsAnalyticStop*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::SubsystemsAnalyticStop.CreateSubsystemsAnalyticStop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Analytics::SubsystemsAnalyticStop* (*)()>(&::UnityEngine::Analytics::SubsystemsAnalyticStop::CreateSubsystemsAnalyticStop)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e24938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::SubsystemsAnalyticStop*>(), { "CreateSubsystemsAnalyticStop", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Analytics::SubsystemsAnalyticStop::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::SubsystemsAnalyticStop*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Analytics::SubsystemsAnalyticStop* UnityEngine::Analytics::SubsystemsAnalyticStop::CreateSubsystemsAnalyticStop() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::SubsystemsAnalyticStop*>(), { "CreateSubsystemsAnalyticStop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::SubsystemsAnalyticStop*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Analytics::SubsystemsAnalyticStop* UnityEngine::Analytics::SubsystemsAnalyticStop::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Analytics::SubsystemsAnalyticStop*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::SubsystemsAnalyticStop::SubsystemsAnalyticStop() {}
