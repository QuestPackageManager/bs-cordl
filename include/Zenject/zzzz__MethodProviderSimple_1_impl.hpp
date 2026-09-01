#pragma once
// IWYU pragma private; include "Zenject\MethodProviderSimple_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__MethodProviderSimple_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
template <typename TReturn> constexpr ::System::Func_1<TReturn>*& Zenject::MethodProviderSimple_1<TReturn>::__cordl_internal_get__method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
template <typename TReturn> constexpr ::System::Func_1<TReturn>* const& Zenject::MethodProviderSimple_1<TReturn>::__cordl_internal_get__method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
template <typename TReturn> constexpr void Zenject::MethodProviderSimple_1<TReturn>::__cordl_internal_set__method(::System::Func_1<TReturn>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____method = value;
}
template <typename TReturn> inline void Zenject::MethodProviderSimple_1<TReturn>::_ctor(::System::Func_1<TReturn>* method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MethodProviderSimple_1<TReturn>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Func_1<TReturn>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method);
}
template <typename TReturn> inline bool Zenject::MethodProviderSimple_1<TReturn>::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MethodProviderSimple_1<TReturn>*>(), { "get_IsCached", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TReturn> inline bool Zenject::MethodProviderSimple_1<TReturn>::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MethodProviderSimple_1<TReturn>*>(), { "get_TypeVariesBasedOnMemberType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TReturn> inline ::System::Type* Zenject::MethodProviderSimple_1<TReturn>::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MethodProviderSimple_1<TReturn>*>(), { "GetInstanceType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, context);
}
template <typename TReturn>
inline void Zenject::MethodProviderSimple_1<TReturn>::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                     ::by_ref<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MethodProviderSimple_1<TReturn>*>(),
                                                           { "GetAllInstancesWithInjectSplit",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                               ::i2c::type_of<::by_ref<::System::Action*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, args, injectAction, buffer);
}
template <typename TReturn> inline ::Zenject::MethodProviderSimple_1<TReturn>* Zenject::MethodProviderSimple_1<TReturn>::New_ctor(::System::Func_1<TReturn>* method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::MethodProviderSimple_1<TReturn>*>(method));
}
/// @brief Convert operator to "::Zenject::IProvider"
template <typename TReturn> constexpr Zenject::MethodProviderSimple_1<TReturn>::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IProvider"
template <typename TReturn> constexpr ::Zenject::IProvider* Zenject::MethodProviderSimple_1<TReturn>::i___Zenject__IProvider() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TReturn> constexpr ::Zenject::MethodProviderSimple_1<TReturn>::MethodProviderSimple_1() {}
