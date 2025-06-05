#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidGamepad.hpp"
#include "UnityEngine/InputSystem/zzzz__Gamepad_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidGamepad_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidGamepad._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Android::AndroidGamepad::*)()>(
    &::UnityEngine::InputSystem::Android::AndroidGamepad::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4605d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::AndroidGamepad*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::AndroidGamepad::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::AndroidGamepad*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::AndroidGamepad* UnityEngine::InputSystem::Android::AndroidGamepad::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Android::AndroidGamepad*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::AndroidGamepad::AndroidGamepad() {}
