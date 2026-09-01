#pragma once
// IWYU pragma private; include "Zenject\FactoryFromBinder_4.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FactoryFromBinderBase_impl.hpp"
#include "Zenject/zzzz__FactoryFromBinder_4_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_5_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_4_def.hpp"
#include "Zenject/zzzz__FactorySubContainerBinder_4_def.hpp"
#include "Zenject/zzzz__IFactory_4_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TSubFactory>
inline void Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>::setStaticF___9(
    ::Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>* value) {
  ::cordl_internals::setStaticField<::Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>*, "<>9",
                                    ::Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>*>(
      std::forward<::Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>*>(value));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TSubFactory>
inline ::Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>*
Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>*, "<>9",
                                           ::Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>*>();
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TSubFactory>
inline void Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>::setStaticF___9__2_0(
    ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_4<TParam1, TParam2, TParam3, TContract>*>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_4<TParam1, TParam2, TParam3, TContract>*>*>*, "<>9__2_0",
                                    ::Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>*>(
      std::forward<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_4<TParam1, TParam2, TParam3, TContract>*>*>*>(value));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TSubFactory>
inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_4<TParam1, TParam2, TParam3, TContract>*>*>*
Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_4<TParam1, TParam2, TParam3, TContract>*>*>*, "<>9__2_0",
                                           ::Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>*>();
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TSubFactory>
inline void Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TSubFactory>
inline void Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>::_FromFactory_b__2_0(
    ::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_4<TParam1, TParam2, TParam3, TContract>*>* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>*>(),
                                              { "<FromFactory>b__2_0", {}, { ::i2c::type_of<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_4<TParam1, TParam2, TParam3, TContract>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TSubFactory>
inline ::System::Object* Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TSubFactory>
inline ::Zenject::InjectTypeInfo* Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TSubFactory>
inline ::Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>*
Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TSubFactory>
constexpr ::Zenject::FactoryFromBinder_4___c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>::FactoryFromBinder_4___c__2_1() {}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract>
constexpr ::System::Func_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TContract>*&
Zenject::FactoryFromBinder_4___c__DisplayClass1_0<TParam1, TParam2, TParam3, TContract>::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract>
constexpr ::System::Func_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TContract>* const&
Zenject::FactoryFromBinder_4___c__DisplayClass1_0<TParam1, TParam2, TParam3, TContract>::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract>
constexpr void Zenject::FactoryFromBinder_4___c__DisplayClass1_0<TParam1, TParam2, TParam3, TContract>::__cordl_internal_set_method(
    ::System::Func_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method = value;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract> inline void Zenject::FactoryFromBinder_4___c__DisplayClass1_0<TParam1, TParam2, TParam3, TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_4___c__DisplayClass1_0<TParam1, TParam2, TParam3, TContract>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract>
inline ::Zenject::IProvider* Zenject::FactoryFromBinder_4___c__DisplayClass1_0<TParam1, TParam2, TParam3, TContract>::_FromMethod_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_4___c__DisplayClass1_0<TParam1, TParam2, TParam3, TContract>*>(),
                                                                                         { "<FromMethod>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract>
inline ::System::Object* Zenject::FactoryFromBinder_4___c__DisplayClass1_0<TParam1, TParam2, TParam3, TContract>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_4___c__DisplayClass1_0<TParam1, TParam2, TParam3, TContract>*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract>
inline ::Zenject::InjectTypeInfo* Zenject::FactoryFromBinder_4___c__DisplayClass1_0<TParam1, TParam2, TParam3, TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_4___c__DisplayClass1_0<TParam1, TParam2, TParam3, TContract>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract>
inline ::Zenject::FactoryFromBinder_4___c__DisplayClass1_0<TParam1, TParam2, TParam3, TContract>* Zenject::FactoryFromBinder_4___c__DisplayClass1_0<TParam1, TParam2, TParam3, TContract>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryFromBinder_4___c__DisplayClass1_0<TParam1, TParam2, TParam3, TContract>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TContract>
constexpr ::Zenject::FactoryFromBinder_4___c__DisplayClass1_0<TParam1, TParam2, TParam3, TContract>::FactoryFromBinder_4___c__DisplayClass1_0() {}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract>
inline void Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::FactoryBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, bindInfo, factoryBindInfo);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract>
inline ::Zenject::ConditionCopyNonLazyBinder*
Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::FromMethod(::System::Func_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TContract>* method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>*>(),
                                                           { "FromMethod", {}, { ::i2c::type_of<::System::Func_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TContract>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*>(this, ___internal_method, method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract>
template <typename TSubFactory>
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::FromFactory() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>*>(), { "FromFactory", { ::i2c::class_of<TSubFactory>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSubFactory>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract>
inline ::Zenject::FactorySubContainerBinder_4<TParam1, TParam2, TParam3, TContract>* Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::FromSubContainerResolve() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>*>(), { "FromSubContainerResolve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactorySubContainerBinder_4<TParam1, TParam2, TParam3, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract>
inline ::Zenject::FactorySubContainerBinder_4<TParam1, TParam2, TParam3, TContract>*
Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::FromSubContainerResolve(::System::Object* subIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>*>(),
                                                                                         { "FromSubContainerResolve", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactorySubContainerBinder_4<TParam1, TParam2, TParam3, TContract>*>(this, ___internal_method, subIdentifier);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract>
inline ::Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>*
Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::New_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>*>(container, bindInfo, factoryBindInfo));
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TContract> constexpr ::Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::FactoryFromBinder_4() {}
