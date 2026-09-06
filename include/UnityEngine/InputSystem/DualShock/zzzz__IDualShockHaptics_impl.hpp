#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/DualShock/IDualShockHaptics.hpp"
#include "UnityEngine/InputSystem/DualShock/zzzz__IDualShockHaptics_def.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__IDualMotorRumble_def.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__IHaptics_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::IDualShockHaptics.SetLightBarColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DualShock::IDualShockHaptics::*)(::UnityEngine::Color)>(
    &::UnityEngine::InputSystem::DualShock::IDualShockHaptics::SetLightBarColor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::IDualShockHaptics*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::DualShock::IDualShockHaptics*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::DualShock::IDualShockHaptics::SetLightBarColor(::UnityEngine::Color color) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::DualShock::IDualShockHaptics*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IDualMotorRumble"
constexpr UnityEngine::InputSystem::DualShock::IDualShockHaptics::operator ::UnityEngine::InputSystem::Haptics::IDualMotorRumble*() noexcept {
  return static_cast<::UnityEngine::InputSystem::Haptics::IDualMotorRumble*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::Haptics::IDualMotorRumble"
constexpr ::UnityEngine::InputSystem::Haptics::IDualMotorRumble* UnityEngine::InputSystem::DualShock::IDualShockHaptics::i___UnityEngine__InputSystem__Haptics__IDualMotorRumble() noexcept {
  return static_cast<::UnityEngine::InputSystem::Haptics::IDualMotorRumble*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IHaptics"
constexpr UnityEngine::InputSystem::DualShock::IDualShockHaptics::operator ::UnityEngine::InputSystem::Haptics::IHaptics*() noexcept {
  return static_cast<::UnityEngine::InputSystem::Haptics::IHaptics*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::Haptics::IHaptics"
constexpr ::UnityEngine::InputSystem::Haptics::IHaptics* UnityEngine::InputSystem::DualShock::IDualShockHaptics::i___UnityEngine__InputSystem__Haptics__IHaptics() noexcept {
  return static_cast<::UnityEngine::InputSystem::Haptics::IHaptics*>(static_cast<void*>(this));
}
