#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/SubsystemsAnalyticStart.hpp"
#include "UnityEngine/Analytics/zzzz__SubsystemsAnalyticBase_impl.hpp"
#include "UnityEngine/Analytics/zzzz__SubsystemsAnalyticStart_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::SubsystemsAnalyticStart._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Analytics::SubsystemsAnalyticStart::*)()>(&::UnityEngine::Analytics::SubsystemsAnalyticStart::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e21234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::SubsystemsAnalyticStart*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::SubsystemsAnalyticStart.CreateSubsystemsAnalyticStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Analytics::SubsystemsAnalyticStart* (*)()>(&::UnityEngine::Analytics::SubsystemsAnalyticStart::CreateSubsystemsAnalyticStart)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e212c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::SubsystemsAnalyticStart*>(), { "CreateSubsystemsAnalyticStart", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Analytics::SubsystemsAnalyticStart::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::SubsystemsAnalyticStart*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Analytics::SubsystemsAnalyticStart* UnityEngine::Analytics::SubsystemsAnalyticStart::CreateSubsystemsAnalyticStart() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::SubsystemsAnalyticStart*>(), { "CreateSubsystemsAnalyticStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::SubsystemsAnalyticStart*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Analytics::SubsystemsAnalyticStart* UnityEngine::Analytics::SubsystemsAnalyticStart::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Analytics::SubsystemsAnalyticStart*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::SubsystemsAnalyticStart::SubsystemsAnalyticStart() {}
