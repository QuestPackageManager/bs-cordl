#pragma once
// IWYU pragma private; include "Zenject/FactoryToChoiceIdBinder_2.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_2_impl.hpp"
#include "Zenject/zzzz__FactoryToChoiceIdBinder_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_2_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
template <typename TParam1, typename TContract>
inline void Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
template <typename TParam1, typename TContract>
inline ::Zenject::FactoryArgumentsToChoiceBinder_2<TParam1, TContract>* Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>::WithId(::System::Object* identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>*>::get(), "WithId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryArgumentsToChoiceBinder_2<TParam1, TContract>*, false>(this, ___internal_method, identifier);
}
template <typename TParam1, typename TContract>
inline ::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>* Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                                                  ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>*>(bindContainer, bindInfo, factoryBindInfo));
}
// Ctor Parameters []
template <typename TParam1, typename TContract> constexpr ::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>::FactoryToChoiceIdBinder_2() {}
