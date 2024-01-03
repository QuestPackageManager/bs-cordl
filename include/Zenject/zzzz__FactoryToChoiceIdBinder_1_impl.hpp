#pragma once
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_1_impl.hpp"
#include "Zenject/zzzz__FactoryToChoiceIdBinder_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_1_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
template <typename TContract>
inline ::Zenject::FactoryToChoiceIdBinder_1<TContract>* Zenject::FactoryToChoiceIdBinder_1<TContract>::New_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo,
                                                                                                                ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::FactoryToChoiceIdBinder_1<TContract>*>(container, bindInfo, factoryBindInfo));
}
template <typename TContract>
inline void Zenject::FactoryToChoiceIdBinder_1<TContract>::_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceIdBinder_1<TContract>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, bindInfo, factoryBindInfo);
}
template <typename TContract> inline ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* Zenject::FactoryToChoiceIdBinder_1<TContract>::WithId(::System::Object* identifier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceIdBinder_1<TContract>*>::get(), "WithId", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*, false>(this, ___internal_method, identifier);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FactoryToChoiceIdBinder_1<TContract>::FactoryToChoiceIdBinder_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
