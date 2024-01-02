#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__SubsystemBindings_def.hpp"
//  Writing Method size for method: ::UnityEngine::SubsystemBindings.DestroySubsystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*)>(&::UnityEngine::SubsystemBindings::DestroySubsystem)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d1a5ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemBindings*>::get(), "DestroySubsystem", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::SubsystemBindings::DestroySubsystem(void* nativePtr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemBindings*>::get(), "DestroySubsystem", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nativePtr);
}
// Ctor Parameters []
constexpr ::UnityEngine::SubsystemBindings::SubsystemBindings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
