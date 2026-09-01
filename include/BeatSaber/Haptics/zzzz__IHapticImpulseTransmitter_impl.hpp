#pragma once
// IWYU pragma private; include "BeatSaber\Haptics\IHapticImpulseTransmitter.hpp"
#include "BeatSaber/Haptics/zzzz__IHapticImpulseTransmitter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::BeatSaber::Haptics::IHapticImpulseTransmitter.TriggerHapticPulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::IHapticImpulseTransmitter::*)(float_t, float_t)>(
    &::BeatSaber::Haptics::IHapticImpulseTransmitter::TriggerHapticPulse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::IHapticImpulseTransmitter*>(), { ::i2c::class_of<::BeatSaber::Haptics::IHapticImpulseTransmitter*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::IHapticImpulseTransmitter.StopHaptics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::IHapticImpulseTransmitter::*)()>(&::BeatSaber::Haptics::IHapticImpulseTransmitter::StopHaptics)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::IHapticImpulseTransmitter*>(), { ::i2c::class_of<::BeatSaber::Haptics::IHapticImpulseTransmitter*>(), 1 }));
    return ___internal_method;
  }
};
inline void BeatSaber::Haptics::IHapticImpulseTransmitter::TriggerHapticPulse(float_t strength, float_t duration) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Haptics::IHapticImpulseTransmitter*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strength, duration);
}
inline void BeatSaber::Haptics::IHapticImpulseTransmitter::StopHaptics() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Haptics::IHapticImpulseTransmitter*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BeatSaber::Haptics::IHapticImpulseTransmitter::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BeatSaber::Haptics::IHapticImpulseTransmitter::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
