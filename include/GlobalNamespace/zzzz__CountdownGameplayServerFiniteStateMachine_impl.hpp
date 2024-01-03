#pragma once
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_impl.hpp"
#include "GlobalNamespace/zzzz__CountdownGameplayServerFiniteStateMachine_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CountdownGameplayServerFiniteStateMachine._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownGameplayServerFiniteStateMachine::*)(
    ::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams)>(&::GlobalNamespace::CountdownGameplayServerFiniteStateMachine::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xe3bde4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownGameplayServerFiniteStateMachine*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::CountdownGameplayServerFiniteStateMachine*
GlobalNamespace::CountdownGameplayServerFiniteStateMachine::New_ctor(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams initParams) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CountdownGameplayServerFiniteStateMachine*>(initParams));
}
inline void GlobalNamespace::CountdownGameplayServerFiniteStateMachine::_ctor(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams initParams) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownGameplayServerFiniteStateMachine*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initParams);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CountdownGameplayServerFiniteStateMachine::CountdownGameplayServerFiniteStateMachine() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
