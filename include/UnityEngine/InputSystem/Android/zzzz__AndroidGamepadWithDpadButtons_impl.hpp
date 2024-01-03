#pragma once
#include "UnityEngine/InputSystem/Android/zzzz__AndroidGamepad_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidGamepadWithDpadButtons_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons::*)()>(
    &::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ae59a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons* UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons*>());
}
inline void UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons::AndroidGamepadWithDpadButtons() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
