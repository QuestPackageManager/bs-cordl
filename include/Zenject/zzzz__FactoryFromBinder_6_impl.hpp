#pragma once
// IWYU pragma private; include "Zenject\FactoryFromBinder_6.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FactoryFromBinderBase_impl.hpp"
#include "Zenject/zzzz__FactoryFromBinder_6_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_7_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_6_def.hpp"
#include "Zenject/zzzz__FactorySubContainerBinder_6_def.hpp"
#include "Zenject/zzzz__IFactory_6_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TSubFactory>
inline void Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>::setStaticF___9(
    ::Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>* value) {
  ::cordl_internals::setStaticField<::Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>*, "<>9",
                                    ::Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>*>(
      std::forward<::Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>*>(value));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TSubFactory>
inline ::Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>*
Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>*, "<>9",
                                           ::Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>*>();
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TSubFactory>
inline void Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>::setStaticF___9__2_0(
    ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>*>*, "<>9__2_0",
                                    ::Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>*>(
      std::forward<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>*>*>(value));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TSubFactory>
inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>*>*
Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>*>*, "<>9__2_0",
                                           ::Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>*>();
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TSubFactory>
inline void Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TSubFactory>
inline void Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>::_FromFactory_b__2_0(
    ::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>*>(),
                          { "<FromFactory>b__2_0", {}, { ::i2c::type_of<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TSubFactory>
inline ::System::Object* Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>*>(),
                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TSubFactory>
inline ::Zenject::InjectTypeInfo* Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TSubFactory>
inline ::Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>*
Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TSubFactory>
constexpr ::Zenject::FactoryFromBinder_6___c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TSubFactory>::FactoryFromBinder_6___c__2_1() {}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
constexpr ::System::Func_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*&
Zenject::FactoryFromBinder_6___c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
constexpr ::System::Func_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* const&
Zenject::FactoryFromBinder_6___c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
constexpr void Zenject::FactoryFromBinder_6___c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::__cordl_internal_set_method(
    ::System::Func_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method = value;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline void Zenject::FactoryFromBinder_6___c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_6___c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline ::Zenject::IProvider* Zenject::FactoryFromBinder_6___c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::_FromMethod_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_6___c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(),
                                                           { "<FromMethod>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline ::System::Object* Zenject::FactoryFromBinder_6___c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_6___c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(),
                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline ::Zenject::InjectTypeInfo* Zenject::FactoryFromBinder_6___c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_6___c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline ::Zenject::FactoryFromBinder_6___c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*
Zenject::FactoryFromBinder_6___c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryFromBinder_6___c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
constexpr ::Zenject::FactoryFromBinder_6___c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::FactoryFromBinder_6___c__DisplayClass1_0() {}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline void Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo,
                                                                                                        ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::FactoryBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, bindInfo, factoryBindInfo);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::FromMethod(
    ::System::Func_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(),
                                              { "FromMethod", {}, { ::i2c::type_of<::System::Func_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*>(this, ___internal_method, method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
template <typename TSubFactory>
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::FromFactory() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(), { "FromFactory", { ::i2c::class_of<TSubFactory>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSubFactory>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline ::Zenject::FactorySubContainerBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*
Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::FromSubContainerResolve() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(), { "FromSubContainerResolve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactorySubContainerBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline ::Zenject::FactorySubContainerBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*
Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::FromSubContainerResolve(::System::Object* subIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(),
                                                                                         { "FromSubContainerResolve", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactorySubContainerBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(this, ___internal_method, subIdentifier);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline ::Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*
Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::New_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo,
                                                                                               ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(container, bindInfo, factoryBindInfo));
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
constexpr ::Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::FactoryFromBinder_6() {}
