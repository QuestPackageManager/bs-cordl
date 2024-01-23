#pragma once
#include "Zenject/zzzz__InstallerBase_impl.hpp"
#include "Zenject/zzzz__Installer_6_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TDerived>
inline void Zenject::Installer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TDerived>::Install(::Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Installer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TDerived>*>::get(), "Install",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, container, p1, p2, p3, p4, p5);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TDerived>
inline ::Zenject::Installer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TDerived>* Zenject::Installer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TDerived>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Installer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TDerived>*>());
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TDerived>
inline void Zenject::Installer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TDerived>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Installer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TDerived>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TDerived>
inline ::Zenject::InjectTypeInfo* Zenject::Installer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TDerived>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Installer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TDerived>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TDerived>
constexpr ::Zenject::Installer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TDerived>::Installer_6() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
