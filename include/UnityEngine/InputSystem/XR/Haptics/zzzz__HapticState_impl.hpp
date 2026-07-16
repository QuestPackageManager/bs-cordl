#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/Haptics/HapticState.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__HapticState_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::HapticState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::Haptics::HapticState::*)(uint32_t, uint32_t)>(
    &::UnityEngine::InputSystem::XR::Haptics::HapticState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6586ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::HapticState>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::HapticState.get_samplesQueued
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::XR::Haptics::HapticState::*)()>(
    &::UnityEngine::InputSystem::XR::Haptics::HapticState::get_samplesQueued)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6586ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::HapticState>(), { "get_samplesQueued", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::HapticState.set_samplesQueued
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::Haptics::HapticState::*)(uint32_t)>(
    &::UnityEngine::InputSystem::XR::Haptics::HapticState::set_samplesQueued)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6586ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::HapticState>(), { "set_samplesQueued", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::HapticState.get_samplesAvailable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::XR::Haptics::HapticState::*)()>(
    &::UnityEngine::InputSystem::XR::Haptics::HapticState::get_samplesAvailable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6586ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::HapticState>(), { "get_samplesAvailable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::HapticState.set_samplesAvailable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::Haptics::HapticState::*)(uint32_t)>(
    &::UnityEngine::InputSystem::XR::Haptics::HapticState::set_samplesAvailable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6586ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::HapticState>(), { "set_samplesAvailable", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::XR::Haptics::HapticState::_ctor(uint32_t samplesQueued, uint32_t samplesAvailable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::HapticState>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, samplesQueued, samplesAvailable);
}
inline uint32_t UnityEngine::InputSystem::XR::Haptics::HapticState::get_samplesQueued() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::HapticState>(), { "get_samplesQueued", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::Haptics::HapticState::set_samplesQueued(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::HapticState>(), { "set_samplesQueued", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::XR::Haptics::HapticState::get_samplesAvailable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::HapticState>(), { "get_samplesAvailable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::Haptics::HapticState::set_samplesAvailable(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::HapticState>(), { "set_samplesAvailable", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_samplesQueued_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_samplesAvailable_k__BackingField", ty: "uint32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::Haptics::HapticState::HapticState(uint32_t _samplesQueued_k__BackingField, uint32_t _samplesAvailable_k__BackingField) noexcept {
  this->_samplesQueued_k__BackingField = _samplesQueued_k__BackingField;
  this->_samplesAvailable_k__BackingField = _samplesAvailable_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::Haptics::HapticState::HapticState() {}
