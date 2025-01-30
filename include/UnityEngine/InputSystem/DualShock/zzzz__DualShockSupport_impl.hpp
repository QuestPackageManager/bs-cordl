#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/DualShock/DualShockSupport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/DualShock/zzzz__DualShockSupport_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockSupport.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::DualShock::DualShockSupport::Initialize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x460759c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::DualShock::DualShockSupport*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::DualShock::DualShockSupport::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::DualShock::DualShockSupport*>::get(),
                                                                             "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::DualShock::DualShockSupport::DualShockSupport() {}
