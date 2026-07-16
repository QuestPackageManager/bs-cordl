#pragma once
// IWYU pragma private; include "BeatSaber/Haptics/DefaultHapticImpulseTransmitter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "BeatSaber/Haptics/zzzz__DefaultHapticImpulseTransmitter_def.hpp"
#include "BeatSaber/Haptics/zzzz__IHapticImpulseTransmitter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::BeatSaber::Haptics::DefaultHapticImpulseTransmitter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::DefaultHapticImpulseTransmitter::*)(::UnityEngine::XR::XRNode)>(
    &::BeatSaber::Haptics::DefaultHapticImpulseTransmitter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3298118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::DefaultHapticImpulseTransmitter*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::DefaultHapticImpulseTransmitter.TriggerHapticPulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::DefaultHapticImpulseTransmitter::*)(float_t, float_t)>(
    &::BeatSaber::Haptics::DefaultHapticImpulseTransmitter::TriggerHapticPulse)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3298120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::DefaultHapticImpulseTransmitter*>(),
                                                                                           { "TriggerHapticPulse", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::DefaultHapticImpulseTransmitter.StopHaptics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::DefaultHapticImpulseTransmitter::*)()>(&::BeatSaber::Haptics::DefaultHapticImpulseTransmitter::StopHaptics)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3298198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::DefaultHapticImpulseTransmitter*>(), { "StopHaptics", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::DefaultHapticImpulseTransmitter.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::DefaultHapticImpulseTransmitter::*)()>(&::BeatSaber::Haptics::DefaultHapticImpulseTransmitter::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3298214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::DefaultHapticImpulseTransmitter*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::XRNode& BeatSaber::Haptics::DefaultHapticImpulseTransmitter::__cordl_internal_get__node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____node;
}
constexpr ::UnityEngine::XR::XRNode const& BeatSaber::Haptics::DefaultHapticImpulseTransmitter::__cordl_internal_get__node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____node;
}
constexpr void BeatSaber::Haptics::DefaultHapticImpulseTransmitter::__cordl_internal_set__node(::UnityEngine::XR::XRNode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____node = value;
}
inline void BeatSaber::Haptics::DefaultHapticImpulseTransmitter::_ctor(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::DefaultHapticImpulseTransmitter*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void BeatSaber::Haptics::DefaultHapticImpulseTransmitter::TriggerHapticPulse(float_t strength, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::DefaultHapticImpulseTransmitter*>(),
                                                                                         { "TriggerHapticPulse", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strength, duration);
}
inline void BeatSaber::Haptics::DefaultHapticImpulseTransmitter::StopHaptics() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::DefaultHapticImpulseTransmitter*>(), { "StopHaptics", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::Haptics::DefaultHapticImpulseTransmitter::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::DefaultHapticImpulseTransmitter*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Haptics::DefaultHapticImpulseTransmitter* BeatSaber::Haptics::DefaultHapticImpulseTransmitter::New_ctor(::UnityEngine::XR::XRNode node) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Haptics::DefaultHapticImpulseTransmitter*>(node));
}
/// @brief Convert operator to "::BeatSaber::Haptics::IHapticImpulseTransmitter"
constexpr BeatSaber::Haptics::DefaultHapticImpulseTransmitter::operator ::BeatSaber::Haptics::IHapticImpulseTransmitter*() noexcept {
  return static_cast<::BeatSaber::Haptics::IHapticImpulseTransmitter*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Haptics::IHapticImpulseTransmitter"
constexpr ::BeatSaber::Haptics::IHapticImpulseTransmitter* BeatSaber::Haptics::DefaultHapticImpulseTransmitter::i___BeatSaber__Haptics__IHapticImpulseTransmitter() noexcept {
  return static_cast<::BeatSaber::Haptics::IHapticImpulseTransmitter*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BeatSaber::Haptics::DefaultHapticImpulseTransmitter::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BeatSaber::Haptics::DefaultHapticImpulseTransmitter::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Haptics::DefaultHapticImpulseTransmitter::DefaultHapticImpulseTransmitter() {}
