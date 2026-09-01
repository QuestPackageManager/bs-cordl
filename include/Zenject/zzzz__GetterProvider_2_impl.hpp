#pragma once
// IWYU pragma private; include "Zenject\GetterProvider_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__InjectSources_impl.hpp"
#include "Zenject/zzzz__GetterProvider_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
template <typename TObj, typename TResult> constexpr ::Zenject::DiContainer*& Zenject::GetterProvider_2<TObj, TResult>::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TObj, typename TResult> constexpr ::Zenject::DiContainer* const& Zenject::GetterProvider_2<TObj, TResult>::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TObj, typename TResult> constexpr void Zenject::GetterProvider_2<TObj, TResult>::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
template <typename TObj, typename TResult> constexpr ::System::Object*& Zenject::GetterProvider_2<TObj, TResult>::__cordl_internal_get__identifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identifier;
}
template <typename TObj, typename TResult> constexpr ::System::Object* const& Zenject::GetterProvider_2<TObj, TResult>::__cordl_internal_get__identifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identifier;
}
template <typename TObj, typename TResult> constexpr void Zenject::GetterProvider_2<TObj, TResult>::__cordl_internal_set__identifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____identifier = value;
}
template <typename TObj, typename TResult> constexpr ::System::Func_2<TObj, TResult>*& Zenject::GetterProvider_2<TObj, TResult>::__cordl_internal_get__method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
template <typename TObj, typename TResult> constexpr ::System::Func_2<TObj, TResult>* const& Zenject::GetterProvider_2<TObj, TResult>::__cordl_internal_get__method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
template <typename TObj, typename TResult> constexpr void Zenject::GetterProvider_2<TObj, TResult>::__cordl_internal_set__method(::System::Func_2<TObj, TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____method = value;
}
template <typename TObj, typename TResult> constexpr bool& Zenject::GetterProvider_2<TObj, TResult>::__cordl_internal_get__matchAll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matchAll;
}
template <typename TObj, typename TResult> constexpr bool const& Zenject::GetterProvider_2<TObj, TResult>::__cordl_internal_get__matchAll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matchAll;
}
template <typename TObj, typename TResult> constexpr void Zenject::GetterProvider_2<TObj, TResult>::__cordl_internal_set__matchAll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____matchAll = value;
}
template <typename TObj, typename TResult> constexpr ::Zenject::InjectSources& Zenject::GetterProvider_2<TObj, TResult>::__cordl_internal_get__sourceType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sourceType;
}
template <typename TObj, typename TResult> constexpr ::Zenject::InjectSources const& Zenject::GetterProvider_2<TObj, TResult>::__cordl_internal_get__sourceType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sourceType;
}
template <typename TObj, typename TResult> constexpr void Zenject::GetterProvider_2<TObj, TResult>::__cordl_internal_set__sourceType(::Zenject::InjectSources value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sourceType = value;
}
template <typename TObj, typename TResult>
inline void Zenject::GetterProvider_2<TObj, TResult>::_ctor(::System::Object* identifier, ::System::Func_2<TObj, TResult>* method, ::Zenject::DiContainer* container,
                                                            ::Zenject::InjectSources sourceType, bool matchAll) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetterProvider_2<TObj, TResult>*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Func_2<TObj, TResult>*>(), ::i2c::type_of<::Zenject::DiContainer*>(),
                                                               ::i2c::type_of<::Zenject::InjectSources>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identifier, method, container, sourceType, matchAll);
}
template <typename TObj, typename TResult> inline bool Zenject::GetterProvider_2<TObj, TResult>::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetterProvider_2<TObj, TResult>*>(), { "get_IsCached", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TObj, typename TResult> inline bool Zenject::GetterProvider_2<TObj, TResult>::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetterProvider_2<TObj, TResult>*>(), { "get_TypeVariesBasedOnMemberType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TObj, typename TResult> inline ::System::Type* Zenject::GetterProvider_2<TObj, TResult>::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetterProvider_2<TObj, TResult>*>(), { "GetInstanceType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, context);
}
template <typename TObj, typename TResult> inline ::Zenject::InjectContext* Zenject::GetterProvider_2<TObj, TResult>::GetSubContext(::Zenject::InjectContext* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetterProvider_2<TObj, TResult>*>(), { "GetSubContext", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectContext*>(this, ___internal_method, parent);
}
template <typename TObj, typename TResult>
inline void Zenject::GetterProvider_2<TObj, TResult>::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                     ::by_ref<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetterProvider_2<TObj, TResult>*>(),
                                                           { "GetAllInstancesWithInjectSplit",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                               ::i2c::type_of<::by_ref<::System::Action*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, args, injectAction, buffer);
}
template <typename TObj, typename TResult>
inline ::Zenject::GetterProvider_2<TObj, TResult>* Zenject::GetterProvider_2<TObj, TResult>::New_ctor(::System::Object* identifier, ::System::Func_2<TObj, TResult>* method,
                                                                                                      ::Zenject::DiContainer* container, ::Zenject::InjectSources sourceType, bool matchAll) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::GetterProvider_2<TObj, TResult>*>(identifier, method, container, sourceType, matchAll));
}
/// @brief Convert operator to "::Zenject::IProvider"
template <typename TObj, typename TResult> constexpr Zenject::GetterProvider_2<TObj, TResult>::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IProvider"
template <typename TObj, typename TResult> constexpr ::Zenject::IProvider* Zenject::GetterProvider_2<TObj, TResult>::i___Zenject__IProvider() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TObj, typename TResult> constexpr ::Zenject::GetterProvider_2<TObj, TResult>::GetterProvider_2() {}
