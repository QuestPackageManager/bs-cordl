#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidProximity.hpp"
#include "UnityEngine/InputSystem/zzzz__ProximitySensor_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidProximity_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidProximity._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Android::AndroidProximity::*)()>(
    &::UnityEngine::InputSystem::Android::AndroidProximity::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31550a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::AndroidProximity*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Android::AndroidProximity* UnityEngine::InputSystem::Android::AndroidProximity::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Android::AndroidProximity*>());
}
inline void UnityEngine::InputSystem::Android::AndroidProximity::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::AndroidProximity*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::AndroidProximity::AndroidProximity() {}
