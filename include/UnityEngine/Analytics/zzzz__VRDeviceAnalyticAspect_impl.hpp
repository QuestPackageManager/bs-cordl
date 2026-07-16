#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/VRDeviceAnalyticAspect.hpp"
#include "UnityEngine/Analytics/zzzz__VRDeviceAnalyticBase_impl.hpp"
#include "UnityEngine/Analytics/zzzz__VRDeviceAnalyticAspect_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::VRDeviceAnalyticAspect.CreateVRDeviceAnalyticAspect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Analytics::VRDeviceAnalyticAspect* (*)()>(&::UnityEngine::Analytics::VRDeviceAnalyticAspect::CreateVRDeviceAnalyticAspect)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e21564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::VRDeviceAnalyticAspect*>(), { "CreateVRDeviceAnalyticAspect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::VRDeviceAnalyticAspect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Analytics::VRDeviceAnalyticAspect::*)()>(&::UnityEngine::Analytics::VRDeviceAnalyticAspect::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e215b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::VRDeviceAnalyticAspect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Analytics::VRDeviceAnalyticAspect::__cordl_internal_get_vr_aspect_ratio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vr_aspect_ratio;
}
constexpr float_t const& UnityEngine::Analytics::VRDeviceAnalyticAspect::__cordl_internal_get_vr_aspect_ratio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vr_aspect_ratio;
}
constexpr void UnityEngine::Analytics::VRDeviceAnalyticAspect::__cordl_internal_set_vr_aspect_ratio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vr_aspect_ratio = value;
}
inline ::UnityEngine::Analytics::VRDeviceAnalyticAspect* UnityEngine::Analytics::VRDeviceAnalyticAspect::CreateVRDeviceAnalyticAspect() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::VRDeviceAnalyticAspect*>(), { "CreateVRDeviceAnalyticAspect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::VRDeviceAnalyticAspect*>(nullptr, ___internal_method);
}
inline void UnityEngine::Analytics::VRDeviceAnalyticAspect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::VRDeviceAnalyticAspect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Analytics::VRDeviceAnalyticAspect* UnityEngine::Analytics::VRDeviceAnalyticAspect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Analytics::VRDeviceAnalyticAspect*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::VRDeviceAnalyticAspect::VRDeviceAnalyticAspect() {}
