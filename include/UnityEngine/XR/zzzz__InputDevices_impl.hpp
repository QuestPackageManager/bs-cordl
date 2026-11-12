#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputDevices.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__InputDevices_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/XR/zzzz__ConnectionChangeType_def.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.GetDeviceAtXRNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputDevice (*)(::UnityEngine::XR::XRNode)>(&::UnityEngine::XR::InputDevices::GetDeviceAtXRNode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x73126d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(), { "GetDeviceAtXRNode", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.InvokeConnectionEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::UnityEngine::XR::ConnectionChangeType)>(&::UnityEngine::XR::InputDevices::InvokeConnectionEvent)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x7312718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                                                             { "InvokeConnectionEvent", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::XR::ConnectionChangeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.SendHapticImpulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, uint32_t, float_t, float_t)>(&::UnityEngine::XR::InputDevices::SendHapticImpulse)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x73120a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                                                { "SendHapticImpulse", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.StopHaptics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t)>(&::UnityEngine::XR::InputDevices::StopHaptics)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x731215c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(), { "StopHaptics", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.TryGetFeatureValue_bool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::StringW, ::by_ref<bool>)>(&::UnityEngine::XR::InputDevices::TryGetFeatureValue_bool)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x7312230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                                                             { "TryGetFeatureValue_bool", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.IsDeviceValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t)>(&::UnityEngine::XR::InputDevices::IsDeviceValid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7311d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(), { "IsDeviceValid", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.GetDeviceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint64_t)>(&::UnityEngine::XR::InputDevices::GetDeviceName)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x7311d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(), { "GetDeviceName", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.GetDeviceManufacturer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint64_t)>(&::UnityEngine::XR::InputDevices::GetDeviceManufacturer)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x7311e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(), { "GetDeviceManufacturer", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.GetDeviceCharacteristics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputDeviceCharacteristics (*)(uint64_t)>(&::UnityEngine::XR::InputDevices::GetDeviceCharacteristics)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7311f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(), { "GetDeviceCharacteristics", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.TryGetFeatureValue_bool_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<bool>)>(
    &::UnityEngine::XR::InputDevices::TryGetFeatureValue_bool_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x73127dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
            { "TryGetFeatureValue_bool_Injected", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.GetDeviceName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::XR::InputDevices::GetDeviceName_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7312830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                                                { "GetDeviceName_Injected", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.GetDeviceManufacturer_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::XR::InputDevices::GetDeviceManufacturer_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7312874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                                                { "GetDeviceManufacturer_Injected", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::InputDevices::setStaticF_deviceConnected(::System::Action_1<::UnityEngine::XR::InputDevice>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceConnected", ::UnityEngine::XR::InputDevices*>(
      std::forward<::System::Action_1<::UnityEngine::XR::InputDevice>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::InputDevice>* UnityEngine::XR::InputDevices::getStaticF_deviceConnected() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceConnected", ::UnityEngine::XR::InputDevices*>();
}
inline void UnityEngine::XR::InputDevices::setStaticF_deviceDisconnected(::System::Action_1<::UnityEngine::XR::InputDevice>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceDisconnected", ::UnityEngine::XR::InputDevices*>(
      std::forward<::System::Action_1<::UnityEngine::XR::InputDevice>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::InputDevice>* UnityEngine::XR::InputDevices::getStaticF_deviceDisconnected() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceDisconnected", ::UnityEngine::XR::InputDevices*>();
}
inline void UnityEngine::XR::InputDevices::setStaticF_deviceConfigChanged(::System::Action_1<::UnityEngine::XR::InputDevice>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceConfigChanged", ::UnityEngine::XR::InputDevices*>(
      std::forward<::System::Action_1<::UnityEngine::XR::InputDevice>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::InputDevice>* UnityEngine::XR::InputDevices::getStaticF_deviceConfigChanged() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceConfigChanged", ::UnityEngine::XR::InputDevices*>();
}
inline ::UnityEngine::XR::InputDevice UnityEngine::XR::InputDevices::GetDeviceAtXRNode(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(), { "GetDeviceAtXRNode", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputDevice>(nullptr, ___internal_method, node);
}
inline void UnityEngine::XR::InputDevices::InvokeConnectionEvent(uint64_t deviceId, ::UnityEngine::XR::ConnectionChangeType change) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                                                           { "InvokeConnectionEvent", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::XR::ConnectionChangeType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deviceId, change);
}
inline bool UnityEngine::XR::InputDevices::SendHapticImpulse(uint64_t deviceId, uint32_t channel, float_t amplitude, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                                              { "SendHapticImpulse", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, channel, amplitude, duration);
}
inline void UnityEngine::XR::InputDevices::StopHaptics(uint64_t deviceId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(), { "StopHaptics", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deviceId);
}
inline bool UnityEngine::XR::InputDevices::TryGetFeatureValue_bool(uint64_t deviceId, ::StringW usage, ::by_ref<bool> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                                                           { "TryGetFeatureValue_bool", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, usage, value);
}
inline bool UnityEngine::XR::InputDevices::IsDeviceValid(uint64_t deviceId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(), { "IsDeviceValid", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId);
}
inline ::StringW UnityEngine::XR::InputDevices::GetDeviceName(uint64_t deviceId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(), { "GetDeviceName", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, deviceId);
}
inline ::StringW UnityEngine::XR::InputDevices::GetDeviceManufacturer(uint64_t deviceId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(), { "GetDeviceManufacturer", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, deviceId);
}
inline ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::InputDevices::GetDeviceCharacteristics(uint64_t deviceId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(), { "GetDeviceCharacteristics", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputDeviceCharacteristics>(nullptr, ___internal_method, deviceId);
}
inline bool UnityEngine::XR::InputDevices::TryGetFeatureValue_bool_Injected(uint64_t deviceId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> usage, ::by_ref<bool> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
          { "TryGetFeatureValue_bool_Injected", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, usage, value);
}
inline void UnityEngine::XR::InputDevices::GetDeviceName_Injected(uint64_t deviceId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                                                           { "GetDeviceName_Injected", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deviceId, ret);
}
inline void UnityEngine::XR::InputDevices::GetDeviceManufacturer_Injected(uint64_t deviceId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                                              { "GetDeviceManufacturer_Injected", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deviceId, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::InputDevices::InputDevices() {}
