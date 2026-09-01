#pragma once
// IWYU pragma private; include "Zenject\FactoryToChoiceBinder_3.hpp"
#include "Zenject/zzzz__FactoryFromBinder_3_impl.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_3_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_3_def.hpp"
template <typename TParam1, typename TParam2, typename TContract>
inline void Zenject::FactoryToChoiceBinder_3<TParam1, TParam2, TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryToChoiceBinder_3<TParam1, TParam2, TContract>*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::FactoryBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>* Zenject::FactoryToChoiceBinder_3<TParam1, TParam2, TContract>::ToSelf() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryToChoiceBinder_3<TParam1, TParam2, TContract>*>(), { "ToSelf", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract>
template <typename TConcrete>
inline ::Zenject::FactoryFromBinder_3<TParam1, TParam2, TConcrete>* Zenject::FactoryToChoiceBinder_3<TParam1, TParam2, TContract>::To() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryToChoiceBinder_3<TParam1, TParam2, TContract>*>(), { "To", { ::i2c::class_of<TConcrete>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TConcrete>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryFromBinder_3<TParam1, TParam2, TConcrete>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::FactoryToChoiceBinder_3<TParam1, TParam2, TContract>*
Zenject::FactoryToChoiceBinder_3<TParam1, TParam2, TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryToChoiceBinder_3<TParam1, TParam2, TContract>*>(bindContainer, bindInfo, factoryBindInfo));
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TContract> constexpr ::Zenject::FactoryToChoiceBinder_3<TParam1, TParam2, TContract>::FactoryToChoiceBinder_3() {}
