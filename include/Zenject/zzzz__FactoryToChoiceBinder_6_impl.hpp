#pragma once
#include "Zenject/zzzz__FactoryFromBinder_6_impl.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_6_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_6_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline ::Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*
Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                   ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(bindContainer, bindInfo, factoryBindInfo));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline void Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                            ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline ::Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::ToSelf() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>::get(), "ToSelf",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
template <typename TConcrete>
inline ::Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TConcrete>* Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::To() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>::get(), "To",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TConcrete>*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
constexpr ::Zenject::FactoryToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::FactoryToChoiceBinder_6() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
