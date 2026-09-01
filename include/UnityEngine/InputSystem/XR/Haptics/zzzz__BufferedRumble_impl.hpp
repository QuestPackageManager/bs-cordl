#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\XR\Haptics\BufferedRumble.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__HapticCapabilities_impl.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__BufferedRumble_def.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__HapticCapabilities_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::BufferedRumble.get_capabilities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities (::UnityEngine::InputSystem::XR::Haptics::BufferedRumble::*)()>(
    &::UnityEngine::InputSystem::XR::Haptics::BufferedRumble::get_capabilities)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x658bf58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::BufferedRumble>(), { "get_capabilities", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::BufferedRumble.set_capabilities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::Haptics::BufferedRumble::*)(::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities)>(
    &::UnityEngine::InputSystem::XR::Haptics::BufferedRumble::set_capabilities)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x658bf6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::BufferedRumble>(),
                                                             { "set_capabilities", {}, { ::i2c::type_of<::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::BufferedRumble.get_device
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::XR::Haptics::BufferedRumble::*)()>(
    &::UnityEngine::InputSystem::XR::Haptics::BufferedRumble::get_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658bf80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::BufferedRumble>(), { "get_device", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::BufferedRumble.set_device
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::Haptics::BufferedRumble::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::XR::Haptics::BufferedRumble::set_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658bf88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::BufferedRumble>(),
                                                                                           { "set_device", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::BufferedRumble._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::Haptics::BufferedRumble::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::XR::Haptics::BufferedRumble::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x658bf90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::BufferedRumble>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::BufferedRumble.EnqueueRumble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::Haptics::BufferedRumble::*)(::ArrayW<uint8_t>)>(
    &::UnityEngine::InputSystem::XR::Haptics::BufferedRumble::EnqueueRumble)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x658c0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::BufferedRumble>(), { "EnqueueRumble", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities UnityEngine::InputSystem::XR::Haptics::BufferedRumble::get_capabilities() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::BufferedRumble>(), { "get_capabilities", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::Haptics::BufferedRumble::set_capabilities(::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::BufferedRumble>(),
                                                           { "set_capabilities", {}, { ::i2c::type_of<::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::XR::Haptics::BufferedRumble::get_device() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::BufferedRumble>(), { "get_device", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::Haptics::BufferedRumble::set_device(::UnityEngine::InputSystem::InputDevice* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::BufferedRumble>(),
                                                                                         { "set_device", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::XR::Haptics::BufferedRumble::_ctor(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::BufferedRumble>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::XR::Haptics::BufferedRumble::EnqueueRumble(::ArrayW<uint8_t> samples) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::BufferedRumble>(), { "EnqueueRumble", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, samples);
}
// Ctor Parameters [CppParam { name: "_capabilities_k__BackingField", ty: "::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_device_k__BackingField", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::Haptics::BufferedRumble::BufferedRumble(::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities _capabilities_k__BackingField,
                                                                                  ::UnityEngine::InputSystem::InputDevice* _device_k__BackingField) noexcept {
  this->_capabilities_k__BackingField = _capabilities_k__BackingField;
  this->_device_k__BackingField = _device_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::Haptics::BufferedRumble::BufferedRumble() {}
