#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/XRSupport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRSupport_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRSupport.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::XR::XRSupport::Initialize)> {
  constexpr static std::size_t size = 0x858;
  constexpr static std::size_t addrs = 0x45e7fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRSupport*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::XR::XRSupport::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRSupport*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::XRSupport::XRSupport() {}
