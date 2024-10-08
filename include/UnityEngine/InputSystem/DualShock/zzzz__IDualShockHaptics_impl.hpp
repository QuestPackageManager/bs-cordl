#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/DualShock/IDualShockHaptics.hpp"
#include "UnityEngine/InputSystem/DualShock/zzzz__IDualShockHaptics_def.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__IDualMotorRumble_def.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__IHaptics_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::IDualShockHaptics.SetLightBarColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::DualShock::IDualShockHaptics::*)(::UnityEngine::Color)>(
    &::UnityEngine::InputSystem::DualShock::IDualShockHaptics::SetLightBarColor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::DualShock::IDualShockHaptics*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::DualShock::IDualShockHaptics*>::get(), 0));
    return ___internal_method;
  }
};
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
inline void UnityEngine::InputSystem::DualShock::IDualShockHaptics::SetLightBarColor(::UnityEngine::Color color) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::DualShock::IDualShockHaptics*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
