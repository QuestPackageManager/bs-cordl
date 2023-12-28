#pragma once
#include "Zenject/zzzz__InstallerBase_impl.hpp"
#include "Zenject/zzzz__Installer_2_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
template <typename TParam1, typename TDerived> inline void Zenject::Installer_2<TParam1, TDerived>::Install(::Zenject::DiContainer* container, TParam1 p1) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Installer_2<TParam1, TDerived>*>::get(), "Install", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, container, p1);
}
template <typename TParam1, typename TDerived> inline ::Zenject::Installer_2<TParam1, TDerived>* Zenject::Installer_2<TParam1, TDerived>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::Installer_2<TParam1, TDerived>*>());
}
template <typename TParam1, typename TDerived> inline void Zenject::Installer_2<TParam1, TDerived>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Installer_2<TParam1, TDerived>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TDerived> inline ::Zenject::InjectTypeInfo* Zenject::Installer_2<TParam1, TDerived>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Installer_2<TParam1, TDerived>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TDerived> constexpr ::Zenject::Installer_2<TParam1, TDerived>::Installer_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
