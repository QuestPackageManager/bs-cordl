#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Haptics/DualMotorRumble.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__DualMotorRumble_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Haptics::DualMotorRumble.get_lowFrequencyMotorSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Haptics::DualMotorRumble::*)()>(
    &::UnityEngine::InputSystem::Haptics::DualMotorRumble::get_lowFrequencyMotorSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a7aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Haptics::DualMotorRumble>(), { "get_lowFrequencyMotorSpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Haptics::DualMotorRumble.set_lowFrequencyMotorSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Haptics::DualMotorRumble::*)(float_t)>(
    &::UnityEngine::InputSystem::Haptics::DualMotorRumble::set_lowFrequencyMotorSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a7ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Haptics::DualMotorRumble>(), { "set_lowFrequencyMotorSpeed", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Haptics::DualMotorRumble.get_highFrequencyMotorSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Haptics::DualMotorRumble::*)()>(
    &::UnityEngine::InputSystem::Haptics::DualMotorRumble::get_highFrequencyMotorSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a7ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Haptics::DualMotorRumble>(), { "get_highFrequencyMotorSpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Haptics::DualMotorRumble.set_highFrequencyMotorSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Haptics::DualMotorRumble::*)(float_t)>(
    &::UnityEngine::InputSystem::Haptics::DualMotorRumble::set_highFrequencyMotorSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a7ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Haptics::DualMotorRumble>(), { "set_highFrequencyMotorSpeed", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Haptics::DualMotorRumble.get_isRumbling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Haptics::DualMotorRumble::*)()>(&::UnityEngine::InputSystem::Haptics::DualMotorRumble::get_isRumbling)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x65a7ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Haptics::DualMotorRumble>(), { "get_isRumbling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Haptics::DualMotorRumble.PauseHaptics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Haptics::DualMotorRumble::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::Haptics::DualMotorRumble::PauseHaptics)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x65a7b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Haptics::DualMotorRumble>(),
                                                                                           { "PauseHaptics", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Haptics::DualMotorRumble.ResumeHaptics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Haptics::DualMotorRumble::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::Haptics::DualMotorRumble::ResumeHaptics)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x65a7c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Haptics::DualMotorRumble>(),
                                                                                           { "ResumeHaptics", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Haptics::DualMotorRumble.ResetHaptics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Haptics::DualMotorRumble::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::Haptics::DualMotorRumble::ResetHaptics)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x65a7e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Haptics::DualMotorRumble>(),
                                                                                           { "ResetHaptics", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Haptics::DualMotorRumble.SetMotorSpeeds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Haptics::DualMotorRumble::*)(::UnityEngine::InputSystem::InputDevice*, float_t, float_t)>(
    &::UnityEngine::InputSystem::Haptics::DualMotorRumble::SetMotorSpeeds)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x65a7d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Haptics::DualMotorRumble>(),
                                                { "SetMotorSpeeds", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::InputSystem::Haptics::DualMotorRumble::get_lowFrequencyMotorSpeed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Haptics::DualMotorRumble>(), { "get_lowFrequencyMotorSpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Haptics::DualMotorRumble::set_lowFrequencyMotorSpeed(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Haptics::DualMotorRumble>(), { "set_lowFrequencyMotorSpeed", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::Haptics::DualMotorRumble::get_highFrequencyMotorSpeed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Haptics::DualMotorRumble>(), { "get_highFrequencyMotorSpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Haptics::DualMotorRumble::set_highFrequencyMotorSpeed(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Haptics::DualMotorRumble>(), { "set_highFrequencyMotorSpeed", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Haptics::DualMotorRumble::get_isRumbling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Haptics::DualMotorRumble>(), { "get_isRumbling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Haptics::DualMotorRumble::PauseHaptics(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Haptics::DualMotorRumble>(),
                                                                                         { "PauseHaptics", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::Haptics::DualMotorRumble::ResumeHaptics(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Haptics::DualMotorRumble>(),
                                                                                         { "ResumeHaptics", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::Haptics::DualMotorRumble::ResetHaptics(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Haptics::DualMotorRumble>(),
                                                                                         { "ResetHaptics", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::Haptics::DualMotorRumble::SetMotorSpeeds(::UnityEngine::InputSystem::InputDevice* device, float_t lowFrequency, float_t highFrequency) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Haptics::DualMotorRumble>(),
                                              { "SetMotorSpeeds", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, device, lowFrequency, highFrequency);
}
// Ctor Parameters [CppParam { name: "_lowFrequencyMotorSpeed_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_highFrequencyMotorSpeed_k__BackingField", ty:
// "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Haptics::DualMotorRumble::DualMotorRumble(float_t _lowFrequencyMotorSpeed_k__BackingField, float_t _highFrequencyMotorSpeed_k__BackingField) noexcept {
  this->_lowFrequencyMotorSpeed_k__BackingField = _lowFrequencyMotorSpeed_k__BackingField;
  this->_highFrequencyMotorSpeed_k__BackingField = _highFrequencyMotorSpeed_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Haptics::DualMotorRumble::DualMotorRumble() {}
