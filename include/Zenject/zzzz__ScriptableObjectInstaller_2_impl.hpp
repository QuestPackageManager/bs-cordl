#pragma once
#include "Zenject/zzzz__ScriptableObjectInstallerBase_impl.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_2_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
template <typename TParam1, typename TDerived> inline TDerived Zenject::ScriptableObjectInstaller_2<TParam1, TDerived>::InstallFromResource(::Zenject::DiContainer* container, TParam1 p1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScriptableObjectInstaller_2<TParam1, TDerived>*>::get(),
                                                                             "InstallFromResource", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get() })));
  return ::cordl_internals::RunMethodRethrow<TDerived, false>(nullptr, ___internal_method, container, p1);
}
template <typename TParam1, typename TDerived>
inline TDerived Zenject::ScriptableObjectInstaller_2<TParam1, TDerived>::InstallFromResource(::StringW resourcePath, ::Zenject::DiContainer* container, TParam1 p1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScriptableObjectInstaller_2<TParam1, TDerived>*>::get(), "InstallFromResource", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get() })));
  return ::cordl_internals::RunMethodRethrow<TDerived, false>(nullptr, ___internal_method, resourcePath, container, p1);
}
template <typename TParam1, typename TDerived> inline ::Zenject::ScriptableObjectInstaller_2<TParam1, TDerived>* Zenject::ScriptableObjectInstaller_2<TParam1, TDerived>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::ScriptableObjectInstaller_2<TParam1, TDerived>*>());
}
template <typename TParam1, typename TDerived> inline void Zenject::ScriptableObjectInstaller_2<TParam1, TDerived>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScriptableObjectInstaller_2<TParam1, TDerived>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TDerived>
inline ::System::Object* Zenject::ScriptableObjectInstaller_2<TParam1, TDerived>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScriptableObjectInstaller_2<TParam1, TDerived>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TDerived> inline ::Zenject::InjectTypeInfo* Zenject::ScriptableObjectInstaller_2<TParam1, TDerived>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScriptableObjectInstaller_2<TParam1, TDerived>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TDerived> constexpr ::Zenject::ScriptableObjectInstaller_2<TParam1, TDerived>::ScriptableObjectInstaller_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
