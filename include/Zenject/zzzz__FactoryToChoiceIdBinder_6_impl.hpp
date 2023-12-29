#pragma once
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_6_impl.hpp"
#include "Zenject/zzzz__FactoryToChoiceIdBinder_6_def.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_6_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline ::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*
Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                     ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(bindContainer, bindInfo, factoryBindInfo));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline void Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                              ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>::get(), ".ctor",
                                  std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline ::Zenject::FactoryArgumentsToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*
Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::WithId(::System::Object* identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>::get(),
                                  "WithId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryArgumentsToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*, false>(this, ___internal_method, identifier);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
constexpr ::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::FactoryToChoiceIdBinder_6() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
