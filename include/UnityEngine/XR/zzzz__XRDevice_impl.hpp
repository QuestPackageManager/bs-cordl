#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDevice.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__XRDevice_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/XR/zzzz__TrackingSpaceType_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::XRDevice.SetTrackingSpaceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::TrackingSpaceType)>(&::UnityEngine::XR::XRDevice::SetTrackingSpaceType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x72d2154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRDevice*>(), { "SetTrackingSpaceType", {}, { ::i2c::type_of<::UnityEngine::XR::TrackingSpaceType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRDevice.InvokeDeviceLoaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::XR::XRDevice::InvokeDeviceLoaded)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x72d2190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRDevice*>(), { "InvokeDeviceLoaded", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::XRDevice::setStaticF_deviceLoaded(::System::Action_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "deviceLoaded", ::UnityEngine::XR::XRDevice*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* UnityEngine::XR::XRDevice::getStaticF_deviceLoaded() {
  return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "deviceLoaded", ::UnityEngine::XR::XRDevice*>();
}
inline bool UnityEngine::XR::XRDevice::SetTrackingSpaceType(::UnityEngine::XR::TrackingSpaceType trackingSpaceType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRDevice*>(), { "SetTrackingSpaceType", {}, { ::i2c::type_of<::UnityEngine::XR::TrackingSpaceType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trackingSpaceType);
}
inline void UnityEngine::XR::XRDevice::InvokeDeviceLoaded(::StringW loadedDeviceName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRDevice*>(), { "InvokeDeviceLoaded", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, loadedDeviceName);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRDevice::XRDevice() {}
