#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XInput/IXboxOneRumble.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__IXboxOneRumble_def.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__IDualMotorRumble_def.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__IHaptics_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::IXboxOneRumble.SetMotorSpeeds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XInput::IXboxOneRumble::*)(float_t, float_t, float_t, float_t)>(
    &::UnityEngine::InputSystem::XInput::IXboxOneRumble::SetMotorSpeeds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XInput::IXboxOneRumble*>(), { ::i2c::class_of<::UnityEngine::InputSystem::XInput::IXboxOneRumble*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::XInput::IXboxOneRumble::SetMotorSpeeds(float_t lowFrequency, float_t highFrequency, float_t leftTrigger, float_t rightTrigger) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::XInput::IXboxOneRumble*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lowFrequency, highFrequency, leftTrigger, rightTrigger);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IDualMotorRumble"
constexpr UnityEngine::InputSystem::XInput::IXboxOneRumble::operator ::UnityEngine::InputSystem::Haptics::IDualMotorRumble*() noexcept {
  return static_cast<::UnityEngine::InputSystem::Haptics::IDualMotorRumble*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::Haptics::IDualMotorRumble"
constexpr ::UnityEngine::InputSystem::Haptics::IDualMotorRumble* UnityEngine::InputSystem::XInput::IXboxOneRumble::i___UnityEngine__InputSystem__Haptics__IDualMotorRumble() noexcept {
  return static_cast<::UnityEngine::InputSystem::Haptics::IDualMotorRumble*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IHaptics"
constexpr UnityEngine::InputSystem::XInput::IXboxOneRumble::operator ::UnityEngine::InputSystem::Haptics::IHaptics*() noexcept {
  return static_cast<::UnityEngine::InputSystem::Haptics::IHaptics*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::Haptics::IHaptics"
constexpr ::UnityEngine::InputSystem::Haptics::IHaptics* UnityEngine::InputSystem::XInput::IXboxOneRumble::i___UnityEngine__InputSystem__Haptics__IHaptics() noexcept {
  return static_cast<::UnityEngine::InputSystem::Haptics::IHaptics*>(static_cast<void*>(this));
}
