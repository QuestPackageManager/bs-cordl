#pragma once
// IWYU pragma private; include "Zenject\DecoratorToChoiceFromBinder_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__DecoratorToChoiceFromBinder_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_2_def.hpp"
template <typename TContract> constexpr ::Zenject::DiContainer*& Zenject::DecoratorToChoiceFromBinder_1<TContract>::__cordl_internal_get__bindContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindContainer;
}
template <typename TContract> constexpr ::Zenject::DiContainer* const& Zenject::DecoratorToChoiceFromBinder_1<TContract>::__cordl_internal_get__bindContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindContainer;
}
template <typename TContract> constexpr void Zenject::DecoratorToChoiceFromBinder_1<TContract>::__cordl_internal_set__bindContainer(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindContainer = value;
}
template <typename TContract> constexpr ::Zenject::BindInfo*& Zenject::DecoratorToChoiceFromBinder_1<TContract>::__cordl_internal_get__bindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindInfo;
}
template <typename TContract> constexpr ::Zenject::BindInfo* const& Zenject::DecoratorToChoiceFromBinder_1<TContract>::__cordl_internal_get__bindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindInfo;
}
template <typename TContract> constexpr void Zenject::DecoratorToChoiceFromBinder_1<TContract>::__cordl_internal_set__bindInfo(::Zenject::BindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindInfo = value;
}
template <typename TContract> constexpr ::Zenject::FactoryBindInfo*& Zenject::DecoratorToChoiceFromBinder_1<TContract>::__cordl_internal_get__factoryBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factoryBindInfo;
}
template <typename TContract> constexpr ::Zenject::FactoryBindInfo* const& Zenject::DecoratorToChoiceFromBinder_1<TContract>::__cordl_internal_get__factoryBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factoryBindInfo;
}
template <typename TContract> constexpr void Zenject::DecoratorToChoiceFromBinder_1<TContract>::__cordl_internal_set__factoryBindInfo(::Zenject::FactoryBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____factoryBindInfo = value;
}
template <typename TContract>
inline void Zenject::DecoratorToChoiceFromBinder_1<TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DecoratorToChoiceFromBinder_1<TContract>*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::FactoryBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
template <typename TContract> template <typename TConcrete> inline ::Zenject::FactoryFromBinder_2<TContract, TConcrete>* Zenject::DecoratorToChoiceFromBinder_1<TContract>::With() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DecoratorToChoiceFromBinder_1<TContract>*>(), { "With", { ::i2c::class_of<TConcrete>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TConcrete>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryFromBinder_2<TContract, TConcrete>*>(this, ___internal_method);
}
template <typename TContract>
inline ::Zenject::DecoratorToChoiceFromBinder_1<TContract>* Zenject::DecoratorToChoiceFromBinder_1<TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                                        ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DecoratorToChoiceFromBinder_1<TContract>*>(bindContainer, bindInfo, factoryBindInfo));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::DecoratorToChoiceFromBinder_1<TContract>::DecoratorToChoiceFromBinder_1() {}
