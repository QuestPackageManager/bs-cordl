#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Haptics/IDualMotorRumble.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__IDualMotorRumble_def.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__IHaptics_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Haptics::IDualMotorRumble.SetMotorSpeeds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Haptics::IDualMotorRumble::*)(float_t, float_t)>(
    &::UnityEngine::InputSystem::Haptics::IDualMotorRumble::SetMotorSpeeds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Haptics::IDualMotorRumble*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Haptics::IDualMotorRumble*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Haptics::IDualMotorRumble::SetMotorSpeeds(float_t lowFrequency, float_t highFrequency) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Haptics::IDualMotorRumble*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lowFrequency, highFrequency);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IHaptics"
constexpr UnityEngine::InputSystem::Haptics::IDualMotorRumble::operator ::UnityEngine::InputSystem::Haptics::IHaptics*() noexcept {
  return static_cast<::UnityEngine::InputSystem::Haptics::IHaptics*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::Haptics::IHaptics"
constexpr ::UnityEngine::InputSystem::Haptics::IHaptics* UnityEngine::InputSystem::Haptics::IDualMotorRumble::i___UnityEngine__InputSystem__Haptics__IHaptics() noexcept {
  return static_cast<::UnityEngine::InputSystem::Haptics::IHaptics*>(static_cast<void*>(this));
}
