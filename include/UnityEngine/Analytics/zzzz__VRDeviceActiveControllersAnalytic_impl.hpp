#pragma once
// IWYU pragma private; include "UnityEngine\Analytics\VRDeviceActiveControllersAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__VRDeviceAnalyticBase_impl.hpp"
#include "UnityEngine/Analytics/zzzz__VRDeviceActiveControllersAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic.CreateVRDeviceActiveControllersAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic* (*)()>(
    &::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic::CreateVRDeviceActiveControllersAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e24bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic*>(), { "CreateVRDeviceActiveControllersAnalytic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic::*)()>(&::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e24c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& UnityEngine::Analytics::VRDeviceActiveControllersAnalytic::__cordl_internal_get_vr_active_controllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vr_active_controllers;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::Analytics::VRDeviceActiveControllersAnalytic::__cordl_internal_get_vr_active_controllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vr_active_controllers;
}
constexpr void UnityEngine::Analytics::VRDeviceActiveControllersAnalytic::__cordl_internal_set_vr_active_controllers(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vr_active_controllers = value;
}
inline ::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic* UnityEngine::Analytics::VRDeviceActiveControllersAnalytic::CreateVRDeviceActiveControllersAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic*>(), { "CreateVRDeviceActiveControllersAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic*>(nullptr, ___internal_method);
}
inline void UnityEngine::Analytics::VRDeviceActiveControllersAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic* UnityEngine::Analytics::VRDeviceActiveControllersAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic::VRDeviceActiveControllersAnalytic() {}
