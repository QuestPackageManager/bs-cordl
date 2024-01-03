#pragma once
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_impl.hpp"
#include "GlobalNamespace/zzzz__QuickStartOneSongGameplayServerFiniteStateMachine_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine::*)(
    ::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams)>(&::GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xe3c1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine*
GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine::New_ctor(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams initParams) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine*>(initParams));
}
inline void GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine::_ctor(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams initParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initParams);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine::QuickStartOneSongGameplayServerFiniteStateMachine() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
