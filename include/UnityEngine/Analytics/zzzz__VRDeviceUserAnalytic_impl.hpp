#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/VRDeviceUserAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__VRDeviceAnalyticBase_impl.hpp"
#include "UnityEngine/Analytics/zzzz__VRDeviceUserAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::VRDeviceUserAnalytic.CreateVRDeviceUserAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Analytics::VRDeviceUserAnalytic* (*)()>(&::UnityEngine::Analytics::VRDeviceUserAnalytic::CreateVRDeviceUserAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e21614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::VRDeviceUserAnalytic*>(), { "CreateVRDeviceUserAnalytic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::VRDeviceUserAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Analytics::VRDeviceUserAnalytic::*)()>(&::UnityEngine::Analytics::VRDeviceUserAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e21668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::VRDeviceUserAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Analytics::VRDeviceUserAnalytic::__cordl_internal_get_vr_user_presence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vr_user_presence;
}
constexpr int32_t const& UnityEngine::Analytics::VRDeviceUserAnalytic::__cordl_internal_get_vr_user_presence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vr_user_presence;
}
constexpr void UnityEngine::Analytics::VRDeviceUserAnalytic::__cordl_internal_set_vr_user_presence(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vr_user_presence = value;
}
inline ::UnityEngine::Analytics::VRDeviceUserAnalytic* UnityEngine::Analytics::VRDeviceUserAnalytic::CreateVRDeviceUserAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::VRDeviceUserAnalytic*>(), { "CreateVRDeviceUserAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::VRDeviceUserAnalytic*>(nullptr, ___internal_method);
}
inline void UnityEngine::Analytics::VRDeviceUserAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::VRDeviceUserAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Analytics::VRDeviceUserAnalytic* UnityEngine::Analytics::VRDeviceUserAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Analytics::VRDeviceUserAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::VRDeviceUserAnalytic::VRDeviceUserAnalytic() {}
