#pragma once
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_3_impl.hpp"
#include "Zenject/zzzz__FactoryToChoiceIdBinder_3_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_3_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>*
Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>*>(bindContainer, bindInfo, factoryBindInfo));
}
template <typename TParam1, typename TParam2, typename TContract>
inline void Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::FactoryArgumentsToChoiceBinder_3<TParam1, TParam2, TContract>* Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>::WithId(::System::Object* identifier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>*>::get(), "WithId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryArgumentsToChoiceBinder_3<TParam1, TParam2, TContract>*, false>(this, ___internal_method, identifier);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TContract> constexpr ::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>::FactoryToChoiceIdBinder_3() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
