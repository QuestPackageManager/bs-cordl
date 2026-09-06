#pragma once
// IWYU pragma private; include "Zenject/FactoryToChoiceIdBinder_3.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_3_impl.hpp"
#include "Zenject/zzzz__FactoryToChoiceIdBinder_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_3_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
template <typename TParam1, typename TParam2, typename TContract>
inline void Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::FactoryBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::FactoryArgumentsToChoiceBinder_3<TParam1, TParam2, TContract>* Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>::WithId(::System::Object* identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>*>(), { "WithId", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryArgumentsToChoiceBinder_3<TParam1, TParam2, TContract>*>(this, ___internal_method, identifier);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>*
Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>*>(bindContainer, bindInfo, factoryBindInfo));
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TContract> constexpr ::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>::FactoryToChoiceIdBinder_3() {}
