#pragma once
// IWYU pragma private; include "Zenject\FactoryFromBinder_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FactoryFromBinderBase_impl.hpp"
#include "Zenject/zzzz__InjectSources_impl.hpp"
#include "Zenject/zzzz__FactoryFromBinder_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__ArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_1_def.hpp"
#include "Zenject/zzzz__FactorySubContainerBinder_1_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TContract> inline void Zenject::FactoryFromBinder_1___c<TContract>::setStaticF___9(::Zenject::FactoryFromBinder_1___c<TContract>* value) {
  ::cordl_internals::setStaticField<::Zenject::FactoryFromBinder_1___c<TContract>*, "<>9", ::Zenject::FactoryFromBinder_1___c<TContract>*>(
      std::forward<::Zenject::FactoryFromBinder_1___c<TContract>*>(value));
}
template <typename TContract> inline ::Zenject::FactoryFromBinder_1___c<TContract>* Zenject::FactoryFromBinder_1___c<TContract>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::FactoryFromBinder_1___c<TContract>*, "<>9", ::Zenject::FactoryFromBinder_1___c<TContract>*>();
}
template <typename TContract> inline void Zenject::FactoryFromBinder_1___c<TContract>::setStaticF___9__8_2(::System::Func_2<TContract, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<TContract, bool>*, "<>9__8_2", ::Zenject::FactoryFromBinder_1___c<TContract>*>(std::forward<::System::Func_2<TContract, bool>*>(value));
}
template <typename TContract> inline ::System::Func_2<TContract, bool>* Zenject::FactoryFromBinder_1___c<TContract>::getStaticF___9__8_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<TContract, bool>*, "<>9__8_2", ::Zenject::FactoryFromBinder_1___c<TContract>*>();
}
template <typename TContract> inline void Zenject::FactoryFromBinder_1___c<TContract>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c<TContract>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract> inline bool Zenject::FactoryFromBinder_1___c<TContract>::_FromComponentInHierarchy_b__8_2(TContract x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c<TContract>*>(), { "<FromComponentInHierarchy>b__8_2", {}, { ::i2c::type_of<TContract>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
template <typename TContract> inline ::System::Object* Zenject::FactoryFromBinder_1___c<TContract>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c<TContract>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::FactoryFromBinder_1___c<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c<TContract>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TContract> inline ::Zenject::FactoryFromBinder_1___c<TContract>* Zenject::FactoryFromBinder_1___c<TContract>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryFromBinder_1___c<TContract>*>());
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FactoryFromBinder_1___c<TContract>::FactoryFromBinder_1___c() {}
template <typename TContract, typename TSubFactory>
inline void Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>::setStaticF___9(::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>* value) {
  ::cordl_internals::setStaticField<::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*, "<>9", ::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*>(
      std::forward<::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*>(value));
}
template <typename TContract, typename TSubFactory>
inline ::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>* Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*, "<>9", ::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*>();
}
template <typename TContract, typename TSubFactory>
inline void Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>::setStaticF___9__5_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*, "<>9__5_0",
                                    ::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*>(
      std::forward<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*>(value));
}
template <typename TContract, typename TSubFactory>
inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*, "<>9__5_0",
                                           ::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*>();
}
template <typename TContract, typename TSubFactory> inline void Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract, typename TSubFactory>
inline void Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>::_FromFactory_b__5_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*>(),
                                                           { "<FromFactory>b__5_0", {}, { ::i2c::type_of<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
template <typename TContract, typename TSubFactory> inline ::System::Object* Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TContract, typename TSubFactory> inline ::Zenject::InjectTypeInfo* Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TContract, typename TSubFactory> inline ::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>* Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*>());
}
// Ctor Parameters []
template <typename TContract, typename TSubFactory> constexpr ::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>::FactoryFromBinder_1___c__5_1() {}
template <typename TContract, typename TObj> constexpr ::System::Object*& Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__cordl_internal_get_subIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subIdentifier;
}
template <typename TContract, typename TObj> constexpr ::System::Object* const& Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__cordl_internal_get_subIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subIdentifier;
}
template <typename TContract, typename TObj> constexpr void Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__cordl_internal_set_subIdentifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subIdentifier = value;
}
template <typename TContract, typename TObj> constexpr ::System::Func_2<TObj, TContract>*& Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TContract, typename TObj>
constexpr ::System::Func_2<TObj, TContract>* const& Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TContract, typename TObj>
constexpr void Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__cordl_internal_set_method(::System::Func_2<TObj, TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method = value;
}
template <typename TContract, typename TObj> constexpr ::Zenject::InjectSources& Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TContract, typename TObj> constexpr ::Zenject::InjectSources const& Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TContract, typename TObj> constexpr void Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__cordl_internal_set_source(::Zenject::InjectSources value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
template <typename TContract, typename TObj> inline void Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract, typename TObj>
inline ::Zenject::IProvider* Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::_FromResolveGetter_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>*>(),
                                                                                         { "<FromResolveGetter>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container);
}
template <typename TContract, typename TObj> inline ::System::Object* Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TContract, typename TObj> inline ::Zenject::InjectTypeInfo* Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TContract, typename TObj>
inline ::Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>* Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>*>());
}
// Ctor Parameters []
template <typename TContract, typename TObj> constexpr ::Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::FactoryFromBinder_1___c__DisplayClass3_0_1() {}
template <typename TContract> constexpr ::System::Func_2<::Zenject::DiContainer*, TContract>*& Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TContract> constexpr ::System::Func_2<::Zenject::DiContainer*, TContract>* const& Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TContract> constexpr void Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>::__cordl_internal_set_method(::System::Func_2<::Zenject::DiContainer*, TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method = value;
}
template <typename TContract> inline void Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::IProvider* Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>::_FromMethod_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>*>(), { "<FromMethod>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container);
}
template <typename TContract> inline ::System::Object* Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TContract> inline ::Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>* Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>*>());
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>::FactoryFromBinder_1___c__DisplayClass4_0() {}
template <typename TContract> constexpr ::Zenject::FactoryFromBinder_1<TContract>*& Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract> constexpr ::Zenject::FactoryFromBinder_1<TContract>* const& Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract> constexpr void Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__cordl_internal_set___4__this(::Zenject::FactoryFromBinder_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename TContract> constexpr bool& Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__cordl_internal_get_includeInactive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInactive;
}
template <typename TContract> constexpr bool const& Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__cordl_internal_get_includeInactive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInactive;
}
template <typename TContract> constexpr void Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__cordl_internal_set_includeInactive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___includeInactive = value;
}
template <typename TContract> constexpr ::System::Func_2<::UnityW<::UnityEngine::GameObject>, TContract>*& Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__cordl_internal_get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
template <typename TContract>
constexpr ::System::Func_2<::UnityW<::UnityEngine::GameObject>, TContract>* const& Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__cordl_internal_get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
template <typename TContract>
constexpr void Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__cordl_internal_set___9__1(::System::Func_2<::UnityW<::UnityEngine::GameObject>, TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____9__1 = value;
}
template <typename TContract> inline void Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract> inline TContract Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::_FromComponentInHierarchy_b__0(::Zenject::DiContainer* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>*>(),
                                                                                         { "<FromComponentInHierarchy>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<TContract>(this, ___internal_method, _);
}
template <typename TContract> inline TContract Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::_FromComponentInHierarchy_b__1(::UnityEngine::GameObject* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>*>(),
                                                                                         { "<FromComponentInHierarchy>b__1", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<TContract>(this, ___internal_method, x);
}
template <typename TContract> inline ::System::Object* Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TContract> inline ::Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>* Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>*>());
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::FactoryFromBinder_1___c__DisplayClass8_0() {}
template <typename TContract>
inline void Zenject::FactoryFromBinder_1<TContract>::_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1<TContract>*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::FactoryBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, bindInfo, factoryBindInfo);
}
template <typename TContract>
template <typename TObj>
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_1<TContract>::FromResolveGetter(::System::Func_2<TObj, TContract>* method) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1<TContract>*>(),
                                                           { "FromResolveGetter", { ::i2c::class_of<TObj>() }, { ::i2c::type_of<::System::Func_2<TObj, TContract>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObj>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*>(this, ___internal_method, method);
}
template <typename TContract>
template <typename TObj>
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_1<TContract>::FromResolveGetter(::System::Object* subIdentifier, ::System::Func_2<TObj, TContract>* method) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1<TContract>*>(),
                                              { "FromResolveGetter", { ::i2c::class_of<TObj>() }, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Func_2<TObj, TContract>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObj>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*>(this, ___internal_method, subIdentifier, method);
}
template <typename TContract>
template <typename TObj>
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_1<TContract>::FromResolveGetter(::System::Object* subIdentifier, ::System::Func_2<TObj, TContract>* method,
                                                                                                         ::Zenject::InjectSources source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1<TContract>*>(),
                                              { "FromResolveGetter",
                                                { ::i2c::class_of<TObj>() },
                                                { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Func_2<TObj, TContract>*>(), ::i2c::type_of<::Zenject::InjectSources>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObj>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*>(this, ___internal_method, subIdentifier, method, source);
}
template <typename TContract> inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_1<TContract>::FromMethod(::System::Func_2<::Zenject::DiContainer*, TContract>* method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1<TContract>*>(),
                                                                                         { "FromMethod", {}, { ::i2c::type_of<::System::Func_2<::Zenject::DiContainer*, TContract>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*>(this, ___internal_method, method);
}
template <typename TContract> template <typename TSubFactory> inline ::Zenject::ArgConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_1<TContract>::FromFactory() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1<TContract>*>(), { "FromFactory", { ::i2c::class_of<TSubFactory>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSubFactory>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::FactorySubContainerBinder_1<TContract>* Zenject::FactoryFromBinder_1<TContract>::FromSubContainerResolve() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1<TContract>*>(), { "FromSubContainerResolve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactorySubContainerBinder_1<TContract>*>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::FactorySubContainerBinder_1<TContract>* Zenject::FactoryFromBinder_1<TContract>::FromSubContainerResolve(::System::Object* subIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1<TContract>*>(), { "FromSubContainerResolve", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactorySubContainerBinder_1<TContract>*>(this, ___internal_method, subIdentifier);
}
template <typename TContract> inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_1<TContract>::FromComponentInHierarchy(bool includeInactive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryFromBinder_1<TContract>*>(), { "FromComponentInHierarchy", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*>(this, ___internal_method, includeInactive);
}
template <typename TContract>
inline ::Zenject::FactoryFromBinder_1<TContract>* Zenject::FactoryFromBinder_1<TContract>::New_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo,
                                                                                                    ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryFromBinder_1<TContract>*>(container, bindInfo, factoryBindInfo));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FactoryFromBinder_1<TContract>::FactoryFromBinder_1() {}
