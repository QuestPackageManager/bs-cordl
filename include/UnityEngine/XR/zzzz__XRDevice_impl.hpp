#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDevice.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__XRDevice_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/XR/zzzz__TrackingSpaceType_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::XRDevice.SetTrackingSpaceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::TrackingSpaceType)>(&::UnityEngine::XR::XRDevice::SetTrackingSpaceType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e33220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRDevice*>(), { "SetTrackingSpaceType", {}, { ::i2c::type_of<::UnityEngine::XR::TrackingSpaceType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRDevice.DisableAutoXRCameraTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, bool)>(&::UnityEngine::XR::XRDevice::DisableAutoXRCameraTracking)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e3325c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRDevice*>(), { "DisableAutoXRCameraTracking", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRDevice.InvokeDeviceLoaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::XR::XRDevice::InvokeDeviceLoaded)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e33354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRDevice*>(), { "InvokeDeviceLoaded", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRDevice.DisableAutoXRCameraTracking_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::XR::XRDevice::DisableAutoXRCameraTracking_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e33310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRDevice*>(), { "DisableAutoXRCameraTracking_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
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
inline void UnityEngine::XR::XRDevice::DisableAutoXRCameraTracking(::UnityEngine::Camera* camera, bool disabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRDevice*>(), { "DisableAutoXRCameraTracking", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, disabled);
}
inline void UnityEngine::XR::XRDevice::InvokeDeviceLoaded(::StringW loadedDeviceName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRDevice*>(), { "InvokeDeviceLoaded", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, loadedDeviceName);
}
inline void UnityEngine::XR::XRDevice::DisableAutoXRCameraTracking_Injected(::System::IntPtr camera, bool disabled) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRDevice*>(), { "DisableAutoXRCameraTracking_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, disabled);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRDevice::XRDevice() {}
