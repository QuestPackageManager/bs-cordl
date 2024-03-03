#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__XRDevice_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/XR/zzzz__TrackingSpaceType_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::XRDevice.SetTrackingSpaceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::TrackingSpaceType)>(&::UnityEngine::XR::XRDevice::SetTrackingSpaceType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2fc17a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDevice*>::get(), "SetTrackingSpaceType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::TrackingSpaceType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRDevice.DisableAutoXRCameraTracking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera*, bool)>(&::UnityEngine::XR::XRDevice::DisableAutoXRCameraTracking)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2fc17dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDevice*>::get(),
                                                                               "DisableAutoXRCameraTracking", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRDevice.InvokeDeviceLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::XR::XRDevice::InvokeDeviceLoaded)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2fc1820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDevice*>::get(), "InvokeDeviceLoaded", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::XRDevice::setStaticF_deviceLoaded(::System::Action_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "deviceLoaded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDevice*>::get>(
      std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* UnityEngine::XR::XRDevice::getStaticF_deviceLoaded() {
  return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "deviceLoaded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDevice*>::get>();
}
inline bool UnityEngine::XR::XRDevice::SetTrackingSpaceType(::UnityEngine::XR::TrackingSpaceType trackingSpaceType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDevice*>::get(), "SetTrackingSpaceType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::TrackingSpaceType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trackingSpaceType);
}
inline void UnityEngine::XR::XRDevice::DisableAutoXRCameraTracking(::UnityEngine::Camera* camera, bool disabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDevice*>::get(), "DisableAutoXRCameraTracking", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, camera, disabled);
}
inline void UnityEngine::XR::XRDevice::InvokeDeviceLoaded(::StringW loadedDeviceName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDevice*>::get(), "InvokeDeviceLoaded", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, loadedDeviceName);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRDevice::XRDevice() {}
