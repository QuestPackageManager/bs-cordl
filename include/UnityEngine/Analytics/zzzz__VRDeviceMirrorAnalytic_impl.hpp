#pragma once
// IWYU pragma private; include "UnityEngine\Analytics\VRDeviceMirrorAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__VRDeviceAnalyticBase_impl.hpp"
#include "UnityEngine/Analytics/zzzz__VRDeviceMirrorAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::VRDeviceMirrorAnalytic.CreateVRDeviceMirrorAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Analytics::VRDeviceMirrorAnalytic* (*)()>(&::UnityEngine::Analytics::VRDeviceMirrorAnalytic::CreateVRDeviceMirrorAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e24b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::VRDeviceMirrorAnalytic*>(), { "CreateVRDeviceMirrorAnalytic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::VRDeviceMirrorAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Analytics::VRDeviceMirrorAnalytic::*)()>(&::UnityEngine::Analytics::VRDeviceMirrorAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e24b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::VRDeviceMirrorAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Analytics::VRDeviceMirrorAnalytic::__cordl_internal_get_vr_device_mirror_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vr_device_mirror_mode;
}
constexpr bool const& UnityEngine::Analytics::VRDeviceMirrorAnalytic::__cordl_internal_get_vr_device_mirror_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vr_device_mirror_mode;
}
constexpr void UnityEngine::Analytics::VRDeviceMirrorAnalytic::__cordl_internal_set_vr_device_mirror_mode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vr_device_mirror_mode = value;
}
inline ::UnityEngine::Analytics::VRDeviceMirrorAnalytic* UnityEngine::Analytics::VRDeviceMirrorAnalytic::CreateVRDeviceMirrorAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::VRDeviceMirrorAnalytic*>(), { "CreateVRDeviceMirrorAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::VRDeviceMirrorAnalytic*>(nullptr, ___internal_method);
}
inline void UnityEngine::Analytics::VRDeviceMirrorAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::VRDeviceMirrorAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Analytics::VRDeviceMirrorAnalytic* UnityEngine::Analytics::VRDeviceMirrorAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Analytics::VRDeviceMirrorAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::VRDeviceMirrorAnalytic::VRDeviceMirrorAnalytic() {}
