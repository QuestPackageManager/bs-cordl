#pragma once
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_impl.hpp"
#include "GlobalNamespace/zzzz__ManagedGameplayServerFiniteStateMachine_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ManagedGameplayServerFiniteStateMachine._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ManagedGameplayServerFiniteStateMachine::*)(
    ::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams)>(&::GlobalNamespace::ManagedGameplayServerFiniteStateMachine::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xe3c1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ManagedGameplayServerFiniteStateMachine*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ManagedGameplayServerFiniteStateMachine*
GlobalNamespace::ManagedGameplayServerFiniteStateMachine::New_ctor(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams initParams) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ManagedGameplayServerFiniteStateMachine*>(initParams));
}
inline void GlobalNamespace::ManagedGameplayServerFiniteStateMachine::_ctor(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams initParams) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ManagedGameplayServerFiniteStateMachine*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initParams);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ManagedGameplayServerFiniteStateMachine::ManagedGameplayServerFiniteStateMachine() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
