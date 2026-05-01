#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/IInputUpdateCallbackReceiver.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputUpdateCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver.OnUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver::*)()>(
    &::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver::OnUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver*>::get(), 0));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver::OnUpdate() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
