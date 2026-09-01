#pragma once
// IWYU pragma private; include "Zenject\FactoryToChoiceBinder_1.hpp"
#include "Zenject/zzzz__FactoryFromBinder_1_impl.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__FactoryFromBinderUntyped_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_1_def.hpp"
template <typename TContract>
inline void Zenject::FactoryToChoiceBinder_1<TContract>::_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryToChoiceBinder_1<TContract>*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::FactoryBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, bindInfo, factoryBindInfo);
}
template <typename TContract> inline ::Zenject::FactoryFromBinder_1<TContract>* Zenject::FactoryToChoiceBinder_1<TContract>::ToSelf() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryToChoiceBinder_1<TContract>*>(), { "ToSelf", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryFromBinder_1<TContract>*>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::FactoryFromBinderUntyped* Zenject::FactoryToChoiceBinder_1<TContract>::To(::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryToChoiceBinder_1<TContract>*>(), { "To", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryFromBinderUntyped*>(this, ___internal_method, concreteType);
}
template <typename TContract> template <typename TConcrete> inline ::Zenject::FactoryFromBinder_1<TConcrete>* Zenject::FactoryToChoiceBinder_1<TContract>::To() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryToChoiceBinder_1<TContract>*>(), { "To", { ::i2c::class_of<TConcrete>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TConcrete>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryFromBinder_1<TConcrete>*>(this, ___internal_method);
}
template <typename TContract>
inline ::Zenject::FactoryToChoiceBinder_1<TContract>* Zenject::FactoryToChoiceBinder_1<TContract>::New_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo,
                                                                                                            ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryToChoiceBinder_1<TContract>*>(container, bindInfo, factoryBindInfo));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FactoryToChoiceBinder_1<TContract>::FactoryToChoiceBinder_1() {}
