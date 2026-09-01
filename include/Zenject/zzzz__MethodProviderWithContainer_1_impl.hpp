#pragma once
// IWYU pragma private; include "Zenject\MethodProviderWithContainer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__MethodProviderWithContainer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
template <typename TValue> constexpr ::System::Func_2<::Zenject::DiContainer*, TValue>*& Zenject::MethodProviderWithContainer_1<TValue>::__cordl_internal_get__method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
template <typename TValue> constexpr ::System::Func_2<::Zenject::DiContainer*, TValue>* const& Zenject::MethodProviderWithContainer_1<TValue>::__cordl_internal_get__method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
template <typename TValue> constexpr void Zenject::MethodProviderWithContainer_1<TValue>::__cordl_internal_set__method(::System::Func_2<::Zenject::DiContainer*, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____method = value;
}
template <typename TValue> inline void Zenject::MethodProviderWithContainer_1<TValue>::_ctor(::System::Func_2<::Zenject::DiContainer*, TValue>* method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MethodProviderWithContainer_1<TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Func_2<::Zenject::DiContainer*, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method);
}
template <typename TValue> inline bool Zenject::MethodProviderWithContainer_1<TValue>::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MethodProviderWithContainer_1<TValue>*>(), { "get_IsCached", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TValue> inline bool Zenject::MethodProviderWithContainer_1<TValue>::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MethodProviderWithContainer_1<TValue>*>(), { "get_TypeVariesBasedOnMemberType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TValue> inline ::System::Type* Zenject::MethodProviderWithContainer_1<TValue>::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MethodProviderWithContainer_1<TValue>*>(), { "GetInstanceType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, context);
}
template <typename TValue>
inline void Zenject::MethodProviderWithContainer_1<TValue>::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                           ::by_ref<::System::Action*> injectAction,
                                                                                           ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MethodProviderWithContainer_1<TValue>*>(),
                                                           { "GetAllInstancesWithInjectSplit",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                               ::i2c::type_of<::by_ref<::System::Action*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, args, injectAction, buffer);
}
template <typename TValue>
inline ::Zenject::MethodProviderWithContainer_1<TValue>* Zenject::MethodProviderWithContainer_1<TValue>::New_ctor(::System::Func_2<::Zenject::DiContainer*, TValue>* method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::MethodProviderWithContainer_1<TValue>*>(method));
}
/// @brief Convert operator to "::Zenject::IProvider"
template <typename TValue> constexpr Zenject::MethodProviderWithContainer_1<TValue>::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IProvider"
template <typename TValue> constexpr ::Zenject::IProvider* Zenject::MethodProviderWithContainer_1<TValue>::i___Zenject__IProvider() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TValue> constexpr ::Zenject::MethodProviderWithContainer_1<TValue>::MethodProviderWithContainer_1() {}
