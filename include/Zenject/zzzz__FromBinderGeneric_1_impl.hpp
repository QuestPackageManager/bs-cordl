#pragma once
// IWYU pragma private; include "Zenject\FromBinderGeneric_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FromBinder_impl.hpp"
#include "Zenject/zzzz__FromBinderGeneric_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FromBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
template <typename TContract, typename TFactory>
inline void Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>::setStaticF___9(::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>* value) {
  ::cordl_internals::setStaticField<::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>*, "<>9", ::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>*>(
      std::forward<::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>*>(value));
}
template <typename TContract, typename TFactory> inline ::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>* Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>*, "<>9", ::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>*>();
}
template <typename TContract, typename TFactory>
inline void Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>::setStaticF___9__1_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*, "<>9__1_0",
                                    ::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>*>(
      std::forward<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*>(value));
}
template <typename TContract, typename TFactory>
inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*, "<>9__1_0",
                                           ::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>*>();
}
template <typename TContract, typename TFactory> inline void Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract, typename TFactory>
inline void Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>::_FromFactory_b__1_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>*>(),
                                                           { "<FromFactory>b__1_0", {}, { ::i2c::type_of<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
template <typename TContract, typename TFactory> inline ::System::Object* Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TContract, typename TFactory> inline ::Zenject::InjectTypeInfo* Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TContract, typename TFactory> inline ::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>* Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>*>());
}
// Ctor Parameters []
template <typename TContract, typename TFactory> constexpr ::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>::FromBinderGeneric_1___c__1_1() {}
template <typename TContract> constexpr ::System::Func_2<TContract, bool>*& Zenject::FromBinderGeneric_1___c__DisplayClass14_0<TContract>::__cordl_internal_get_predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
template <typename TContract> constexpr ::System::Func_2<TContract, bool>* const& Zenject::FromBinderGeneric_1___c__DisplayClass14_0<TContract>::__cordl_internal_get_predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
template <typename TContract> constexpr void Zenject::FromBinderGeneric_1___c__DisplayClass14_0<TContract>::__cordl_internal_set_predicate(::System::Func_2<TContract, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___predicate = value;
}
template <typename TContract> inline void Zenject::FromBinderGeneric_1___c__DisplayClass14_0<TContract>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1___c__DisplayClass14_0<TContract>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract> inline bool Zenject::FromBinderGeneric_1___c__DisplayClass14_0<TContract>::_FromComponentsInChildren_b__0(::UnityEngine::Component* component) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1___c__DisplayClass14_0<TContract>*>(),
                                                                                         { "<FromComponentsInChildren>b__0", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
template <typename TContract> inline ::System::Object* Zenject::FromBinderGeneric_1___c__DisplayClass14_0<TContract>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1___c__DisplayClass14_0<TContract>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::FromBinderGeneric_1___c__DisplayClass14_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1___c__DisplayClass14_0<TContract>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TContract> inline ::Zenject::FromBinderGeneric_1___c__DisplayClass14_0<TContract>* Zenject::FromBinderGeneric_1___c__DisplayClass14_0<TContract>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinderGeneric_1___c__DisplayClass14_0<TContract>*>());
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FromBinderGeneric_1___c__DisplayClass14_0<TContract>::FromBinderGeneric_1___c__DisplayClass14_0() {}
template <typename TContract> constexpr ::System::Func_2<TContract, bool>*& Zenject::FromBinderGeneric_1___c__DisplayClass15_0<TContract>::__cordl_internal_get_predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
template <typename TContract> constexpr ::System::Func_2<TContract, bool>* const& Zenject::FromBinderGeneric_1___c__DisplayClass15_0<TContract>::__cordl_internal_get_predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
template <typename TContract> constexpr void Zenject::FromBinderGeneric_1___c__DisplayClass15_0<TContract>::__cordl_internal_set_predicate(::System::Func_2<TContract, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___predicate = value;
}
template <typename TContract> inline void Zenject::FromBinderGeneric_1___c__DisplayClass15_0<TContract>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1___c__DisplayClass15_0<TContract>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract> inline bool Zenject::FromBinderGeneric_1___c__DisplayClass15_0<TContract>::_FromComponentsInHierarchy_b__0(::UnityEngine::Component* component) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1___c__DisplayClass15_0<TContract>*>(),
                                                                                         { "<FromComponentsInHierarchy>b__0", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
template <typename TContract> inline ::System::Object* Zenject::FromBinderGeneric_1___c__DisplayClass15_0<TContract>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1___c__DisplayClass15_0<TContract>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::FromBinderGeneric_1___c__DisplayClass15_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1___c__DisplayClass15_0<TContract>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TContract> inline ::Zenject::FromBinderGeneric_1___c__DisplayClass15_0<TContract>* Zenject::FromBinderGeneric_1___c__DisplayClass15_0<TContract>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinderGeneric_1___c__DisplayClass15_0<TContract>*>());
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FromBinderGeneric_1___c__DisplayClass15_0<TContract>::FromBinderGeneric_1___c__DisplayClass15_0() {}
template <typename TContract> constexpr ::System::Func_1<TContract>*& Zenject::FromBinderGeneric_1___c__DisplayClass3_0<TContract>::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TContract> constexpr ::System::Func_1<TContract>* const& Zenject::FromBinderGeneric_1___c__DisplayClass3_0<TContract>::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TContract> constexpr void Zenject::FromBinderGeneric_1___c__DisplayClass3_0<TContract>::__cordl_internal_set_method(::System::Func_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method = value;
}
template <typename TContract> inline void Zenject::FromBinderGeneric_1___c__DisplayClass3_0<TContract>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1___c__DisplayClass3_0<TContract>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract> inline TContract Zenject::FromBinderGeneric_1___c__DisplayClass3_0<TContract>::_FromMethod_b__0(::Zenject::InjectContext* ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1___c__DisplayClass3_0<TContract>*>(),
                                                                                         { "<FromMethod>b__0", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<TContract>(this, ___internal_method, ctx);
}
template <typename TContract> inline ::System::Object* Zenject::FromBinderGeneric_1___c__DisplayClass3_0<TContract>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1___c__DisplayClass3_0<TContract>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::FromBinderGeneric_1___c__DisplayClass3_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1___c__DisplayClass3_0<TContract>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TContract> inline ::Zenject::FromBinderGeneric_1___c__DisplayClass3_0<TContract>* Zenject::FromBinderGeneric_1___c__DisplayClass3_0<TContract>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinderGeneric_1___c__DisplayClass3_0<TContract>*>());
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FromBinderGeneric_1___c__DisplayClass3_0<TContract>::FromBinderGeneric_1___c__DisplayClass3_0() {}
template <typename TContract>
inline void Zenject::FromBinderGeneric_1<TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1<TContract>*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::BindStatement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindContainer, bindInfo, bindStatement);
}
template <typename TContract> template <typename TFactory> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromFactory() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1<TContract>*>(), { "FromFactory", { ::i2c::class_of<TFactory>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TFactory>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
template <typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FromBinderGeneric_1<TContract>::FromIFactory(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* factoryBindGenerator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1<TContract>*>(),
                                                           { "FromIFactory", {}, { ::i2c::type_of<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, factoryBindGenerator);
}
template <typename TContract> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromMethod(::System::Func_1<TContract>* method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1<TContract>*>(), { "FromMethod", {}, { ::i2c::type_of<::System::Func_1<TContract>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, method);
}
template <typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromMethod(::System::Func_2<::Zenject::InjectContext*, TContract>* method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1<TContract>*>(),
                                                                                         { "FromMethod", {}, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, TContract>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, method);
}
template <typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FromBinderGeneric_1<TContract>::FromMethodMultiple(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TContract>*>* method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1<TContract>*>(),
                                       { "FromMethodMultiple", {}, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TContract>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, method);
}
template <typename TContract>
template <typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromResolveGetter(::System::Func_2<TObj, TContract>* method) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1<TContract>*>(),
                                                           { "FromResolveGetter", { ::i2c::class_of<TObj>() }, { ::i2c::type_of<::System::Func_2<TObj, TContract>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObj>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, method);
}
template <typename TContract>
template <typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromResolveGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1<TContract>*>(),
                                              { "FromResolveGetter", { ::i2c::class_of<TObj>() }, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Func_2<TObj, TContract>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObj>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, identifier, method);
}
template <typename TContract>
template <typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromResolveGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method,
                                                                                                                           ::Zenject::InjectSources source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1<TContract>*>(),
                                              { "FromResolveGetter",
                                                { ::i2c::class_of<TObj>() },
                                                { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Func_2<TObj, TContract>*>(), ::i2c::type_of<::Zenject::InjectSources>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObj>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, identifier, method, source);
}
template <typename TContract>
template <typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromResolveAllGetter(::System::Func_2<TObj, TContract>* method) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1<TContract>*>(),
                                                           { "FromResolveAllGetter", { ::i2c::class_of<TObj>() }, { ::i2c::type_of<::System::Func_2<TObj, TContract>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObj>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, method);
}
template <typename TContract>
template <typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromResolveAllGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1<TContract>*>(),
                                              { "FromResolveAllGetter", { ::i2c::class_of<TObj>() }, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Func_2<TObj, TContract>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObj>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, identifier, method);
}
template <typename TContract>
template <typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromResolveAllGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method,
                                                                                                                              ::Zenject::InjectSources source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1<TContract>*>(),
                                              { "FromResolveAllGetter",
                                                { ::i2c::class_of<TObj>() },
                                                { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Func_2<TObj, TContract>*>(), ::i2c::type_of<::Zenject::InjectSources>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObj>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, identifier, method, source);
}
template <typename TContract> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromInstance(TContract instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1<TContract>*>(), { "FromInstance", {}, { ::i2c::type_of<TContract>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, instance);
}
template <typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromComponentsInChildren(::System::Func_2<TContract, bool>* predicate, bool includeInactive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1<TContract>*>(),
                                                           { "FromComponentsInChildren", {}, { ::i2c::type_of<::System::Func_2<TContract, bool>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, predicate, includeInactive);
}
template <typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromComponentsInChildren(bool excludeSelf, ::System::Func_2<TContract, bool>* predicate,
                                                                                                                                  bool includeInactive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1<TContract>*>(),
                                              { "FromComponentsInChildren", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_2<TContract, bool>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, excludeSelf, predicate, includeInactive);
}
template <typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromComponentsInHierarchy(::System::Func_2<TContract, bool>* predicate, bool includeInactive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderGeneric_1<TContract>*>(),
                                                           { "FromComponentsInHierarchy", {}, { ::i2c::type_of<::System::Func_2<TContract, bool>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, predicate, includeInactive);
}
template <typename TContract>
inline ::Zenject::FromBinderGeneric_1<TContract>* Zenject::FromBinderGeneric_1<TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                    ::Zenject::BindStatement* bindStatement) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinderGeneric_1<TContract>*>(bindContainer, bindInfo, bindStatement));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FromBinderGeneric_1<TContract>::FromBinderGeneric_1() {}
