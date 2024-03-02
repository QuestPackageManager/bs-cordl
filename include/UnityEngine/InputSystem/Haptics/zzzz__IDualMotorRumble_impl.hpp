#pragma once
#include "UnityEngine/InputSystem/Haptics/zzzz__IDualMotorRumble_def.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__IHaptics_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Haptics::IDualMotorRumble.SetMotorSpeeds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Haptics::IDualMotorRumble::*)(float_t, float_t)>(
    &::UnityEngine::InputSystem::Haptics::IDualMotorRumble::SetMotorSpeeds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Haptics::IDualMotorRumble*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Haptics::IDualMotorRumble*>::get(), 0));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IHaptics"
constexpr UnityEngine::InputSystem::Haptics::IDualMotorRumble::operator ::UnityEngine::InputSystem::Haptics::IHaptics*() noexcept {
  return static_cast<::UnityEngine::InputSystem::Haptics::IHaptics*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::Haptics::IHaptics"
constexpr ::UnityEngine::InputSystem::Haptics::IHaptics* UnityEngine::InputSystem::Haptics::IDualMotorRumble::i___UnityEngine__InputSystem__Haptics__IHaptics() noexcept {
  return static_cast<::UnityEngine::InputSystem::Haptics::IHaptics*>(static_cast<void*>(this));
}
inline void UnityEngine::InputSystem::Haptics::IDualMotorRumble::SetMotorSpeeds(float_t lowFrequency, float_t highFrequency) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Haptics::IDualMotorRumble*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lowFrequency, highFrequency);
}
