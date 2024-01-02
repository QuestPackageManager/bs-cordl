#pragma once
#include "Zenject/zzzz__FactoryFromBinder_2_impl.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_2_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_2_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
template <typename TParam1, typename TContract>
inline ::Zenject::FactoryToChoiceBinder_2<TParam1, TContract>* Zenject::FactoryToChoiceBinder_2<TParam1, TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                                              ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::FactoryToChoiceBinder_2<TParam1, TContract>*>(bindContainer, bindInfo, factoryBindInfo));
}
template <typename TParam1, typename TContract>
inline void Zenject::FactoryToChoiceBinder_2<TParam1, TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceBinder_2<TParam1, TContract>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
template <typename TParam1, typename TContract> inline ::Zenject::FactoryFromBinder_2<TParam1, TContract>* Zenject::FactoryToChoiceBinder_2<TParam1, TContract>::ToSelf() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceBinder_2<TParam1, TContract>*>::get(),
                                                                             "ToSelf", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryFromBinder_2<TParam1, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TContract> template <typename TConcrete> inline ::Zenject::FactoryFromBinder_2<TParam1, TConcrete>* Zenject::FactoryToChoiceBinder_2<TParam1, TContract>::To() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceBinder_2<TParam1, TContract>*>::get(), "To",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryFromBinder_2<TParam1, TConcrete>*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TContract> constexpr ::Zenject::FactoryToChoiceBinder_2<TParam1, TContract>::FactoryToChoiceBinder_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
