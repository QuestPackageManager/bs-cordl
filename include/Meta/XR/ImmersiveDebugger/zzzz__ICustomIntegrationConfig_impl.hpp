#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/ICustomIntegrationConfig.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__ICustomIntegrationConfig_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig.GetCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig::*)()>(
    &::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig::GetCamera)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*>::get(), 0));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Camera> Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig::GetCamera() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(this, ___internal_method);
}
