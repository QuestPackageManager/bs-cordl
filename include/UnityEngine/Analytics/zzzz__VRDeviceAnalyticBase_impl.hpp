#pragma once
// IWYU pragma private; include "UnityEngine\Analytics\VRDeviceAnalyticBase.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEngine/Analytics/zzzz__VRDeviceAnalyticBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::VRDeviceAnalyticBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Analytics::VRDeviceAnalyticBase::*)()>(&::UnityEngine::Analytics::VRDeviceAnalyticBase::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e24a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::VRDeviceAnalyticBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Analytics::VRDeviceAnalyticBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::VRDeviceAnalyticBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Analytics::VRDeviceAnalyticBase* UnityEngine::Analytics::VRDeviceAnalyticBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Analytics::VRDeviceAnalyticBase*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::VRDeviceAnalyticBase::VRDeviceAnalyticBase() {}
