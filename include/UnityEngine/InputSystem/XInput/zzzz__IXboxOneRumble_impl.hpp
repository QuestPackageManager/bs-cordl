#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XInput/IXboxOneRumble.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__IDualMotorRumble_impl.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__IHaptics_impl.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__IXboxOneRumble_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::IXboxOneRumble.SetMotorSpeeds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XInput::IXboxOneRumble::*)(float_t, float_t, float_t, float_t)>(
    &::UnityEngine::InputSystem::XInput::IXboxOneRumble::SetMotorSpeeds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::IXboxOneRumble*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::IXboxOneRumble*>::get(), 0));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::XInput::IXboxOneRumble::SetMotorSpeeds(float_t lowFrequency, float_t highFrequency, float_t leftTrigger, float_t rightTrigger) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::IXboxOneRumble*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lowFrequency, highFrequency, leftTrigger, rightTrigger);
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
