#pragma once
// IWYU pragma private; include "Zenject\ConcreteBinderGeneric_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FromBinderGeneric_1_impl.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__ConventionSelectTypesBinder_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FromBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__FromBinderNonGeneric_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TContract> constexpr ::System::Type*& Zenject::ConcreteBinderGeneric_1___c__DisplayClass5_0<TContract>::__cordl_internal_get_concreteType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
template <typename TContract> constexpr ::System::Type* const& Zenject::ConcreteBinderGeneric_1___c__DisplayClass5_0<TContract>::__cordl_internal_get_concreteType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
template <typename TContract> constexpr void Zenject::ConcreteBinderGeneric_1___c__DisplayClass5_0<TContract>::__cordl_internal_set_concreteType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___concreteType = value;
}
template <typename TContract> inline void Zenject::ConcreteBinderGeneric_1___c__DisplayClass5_0<TContract>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderGeneric_1___c__DisplayClass5_0<TContract>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract> inline bool Zenject::ConcreteBinderGeneric_1___c__DisplayClass5_0<TContract>::_To_b__1(::System::Type* contractType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderGeneric_1___c__DisplayClass5_0<TContract>*>(), { "<To>b__1", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, contractType);
}
template <typename TContract> inline ::System::Object* Zenject::ConcreteBinderGeneric_1___c__DisplayClass5_0<TContract>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderGeneric_1___c__DisplayClass5_0<TContract>*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::ConcreteBinderGeneric_1___c__DisplayClass5_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderGeneric_1___c__DisplayClass5_0<TContract>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TContract> inline ::Zenject::ConcreteBinderGeneric_1___c__DisplayClass5_0<TContract>* Zenject::ConcreteBinderGeneric_1___c__DisplayClass5_0<TContract>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConcreteBinderGeneric_1___c__DisplayClass5_0<TContract>*>());
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::ConcreteBinderGeneric_1___c__DisplayClass5_0<TContract>::ConcreteBinderGeneric_1___c__DisplayClass5_0() {}
template <typename TContract>
inline void Zenject::ConcreteBinderGeneric_1<TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderGeneric_1<TContract>*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::BindStatement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindContainer, bindInfo, bindStatement);
}
template <typename TContract> inline ::Zenject::FromBinderGeneric_1<TContract>* Zenject::ConcreteBinderGeneric_1<TContract>::ToSelf() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderGeneric_1<TContract>*>(), { "ToSelf", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderGeneric_1<TContract>*>(this, ___internal_method);
}
template <typename TContract> template <typename TConcrete> inline ::Zenject::FromBinderGeneric_1<TConcrete>* Zenject::ConcreteBinderGeneric_1<TContract>::To() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderGeneric_1<TContract>*>(), { "To", { ::i2c::class_of<TConcrete>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TConcrete>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderGeneric_1<TConcrete>*>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::FromBinderNonGeneric* Zenject::ConcreteBinderGeneric_1<TContract>::To(::ArrayW<::System::Type*> concreteTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderGeneric_1<TContract>*>(), { "To", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*>(this, ___internal_method, concreteTypes);
}
template <typename TContract> inline ::Zenject::FromBinderNonGeneric* Zenject::ConcreteBinderGeneric_1<TContract>::To(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderGeneric_1<TContract>*>(),
                                                                                         { "To", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*>(this, ___internal_method, concreteTypes);
}
template <typename TContract> inline ::Zenject::FromBinderNonGeneric* Zenject::ConcreteBinderGeneric_1<TContract>::To(::System::Action_1<::Zenject::ConventionSelectTypesBinder*>* generator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderGeneric_1<TContract>*>(),
                                                                                         { "To", {}, { ::i2c::type_of<::System::Action_1<::Zenject::ConventionSelectTypesBinder*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*>(this, ___internal_method, generator);
}
template <typename TContract> inline ::Zenject::IProvider* Zenject::ConcreteBinderGeneric_1<TContract>::_ToSelf_b__1_0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderGeneric_1<TContract>*>(),
                                                                                         { "<ToSelf>b__1_0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
template <typename TContract> inline bool Zenject::ConcreteBinderGeneric_1<TContract>::_To_b__5_0(::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderGeneric_1<TContract>*>(), { "<To>b__5_0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, concreteType);
}
template <typename TContract>
inline ::Zenject::ConcreteBinderGeneric_1<TContract>* Zenject::ConcreteBinderGeneric_1<TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                            ::Zenject::BindStatement* bindStatement) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConcreteBinderGeneric_1<TContract>*>(bindContainer, bindInfo, bindStatement));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::ConcreteBinderGeneric_1<TContract>::ConcreteBinderGeneric_1() {}
