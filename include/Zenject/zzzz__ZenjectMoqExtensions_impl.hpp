#pragma once
// IWYU pragma private; include "Zenject\ZenjectMoqExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ZenjectMoqExtensions_def.hpp"
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_1_def.hpp"
#include "Zenject/zzzz__FromBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
template <typename TContract> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::ZenjectMoqExtensions::FromMock(::Zenject::FromBinderGeneric_1<TContract>* binder) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectMoqExtensions*>(), { "FromMock", { ::i2c::class_of<TContract>() }, { ::i2c::type_of<::Zenject::FromBinderGeneric_1<TContract>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(nullptr, ___internal_method, binder);
}
template <typename TContract> inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::ZenjectMoqExtensions::FromMock(::Zenject::FactoryFromBinder_1<TContract>* binder) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectMoqExtensions*>(), { "FromMock", { ::i2c::class_of<TContract>() }, { ::i2c::type_of<::Zenject::FactoryFromBinder_1<TContract>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*>(nullptr, ___internal_method, binder);
}
// Ctor Parameters []
constexpr ::Zenject::ZenjectMoqExtensions::ZenjectMoqExtensions() {}
