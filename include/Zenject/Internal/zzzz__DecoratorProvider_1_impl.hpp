#pragma once
// IWYU pragma private; include "Zenject/Internal/DecoratorProvider_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/Internal/zzzz__DecoratorProvider_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/Internal/zzzz__IDecoratorProvider_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IFactory_2_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
template <typename TContract>
constexpr ::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*, ::System::Collections::Generic::List_1<::System::Object*>*>*&
Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_get__cachedInstances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedInstances;
}
template <typename TContract>
constexpr ::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*, ::System::Collections::Generic::List_1<::System::Object*>*>* const&
Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_get__cachedInstances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedInstances;
}
template <typename TContract>
constexpr void Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_set__cachedInstances(
    ::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*, ::System::Collections::Generic::List_1<::System::Object*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cachedInstances = value;
}
template <typename TContract> constexpr ::Zenject::DiContainer*& Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TContract> constexpr ::Zenject::DiContainer* const& Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TContract> constexpr void Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
template <typename TContract> constexpr ::System::Collections::Generic::List_1<::System::Guid>*& Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_get__factoryBindIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factoryBindIds;
}
template <typename TContract> constexpr ::System::Collections::Generic::List_1<::System::Guid>* const& Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_get__factoryBindIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factoryBindIds;
}
template <typename TContract> constexpr void Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_set__factoryBindIds(::System::Collections::Generic::List_1<::System::Guid>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____factoryBindIds = value;
}
template <typename TContract>
constexpr ::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract, TContract>*>*& Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_get__decoratorFactories() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decoratorFactories;
}
template <typename TContract>
constexpr ::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract, TContract>*>* const&
Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_get__decoratorFactories() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decoratorFactories;
}
template <typename TContract>
constexpr void
Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_set__decoratorFactories(::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract, TContract>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____decoratorFactories = value;
}
template <typename TContract> inline void Zenject::Internal::DecoratorProvider_1<TContract>::_ctor(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::DecoratorProvider_1<TContract>*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
template <typename TContract> inline void Zenject::Internal::DecoratorProvider_1<TContract>::AddFactoryId(::System::Guid factoryBindId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::DecoratorProvider_1<TContract>*>(), { "AddFactoryId", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, factoryBindId);
}
template <typename TContract> inline void Zenject::Internal::DecoratorProvider_1<TContract>::LazyInitializeDecoratorFactories() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::DecoratorProvider_1<TContract>*>(), { "LazyInitializeDecoratorFactories", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract>
inline void Zenject::Internal::DecoratorProvider_1<TContract>::GetAllInstances(::Zenject::IProvider* provider, ::Zenject::InjectContext* context,
                                                                               ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::Internal::DecoratorProvider_1<TContract>*>(),
                          { "GetAllInstances",
                            {},
                            { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider, context, buffer);
}
template <typename TContract>
inline void Zenject::Internal::DecoratorProvider_1<TContract>::WrapProviderInstances(::Zenject::IProvider* provider, ::Zenject::InjectContext* context,
                                                                                     ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::Internal::DecoratorProvider_1<TContract>*>(),
                          { "WrapProviderInstances",
                            {},
                            { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider, context, buffer);
}
template <typename TContract> inline ::System::Object* Zenject::Internal::DecoratorProvider_1<TContract>::DecorateInstance(::System::Object* instance, ::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::DecoratorProvider_1<TContract>*>(),
                                                           { "DecorateInstance", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, instance, context);
}
template <typename TContract> inline ::Zenject::Internal::DecoratorProvider_1<TContract>* Zenject::Internal::DecoratorProvider_1<TContract>::New_ctor(::Zenject::DiContainer* container) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::DecoratorProvider_1<TContract>*>(container));
}
/// @brief Convert operator to "::Zenject::Internal::IDecoratorProvider"
template <typename TContract> constexpr Zenject::Internal::DecoratorProvider_1<TContract>::operator ::Zenject::Internal::IDecoratorProvider*() noexcept {
  return static_cast<::Zenject::Internal::IDecoratorProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::Internal::IDecoratorProvider"
template <typename TContract> constexpr ::Zenject::Internal::IDecoratorProvider* Zenject::Internal::DecoratorProvider_1<TContract>::i___Zenject__Internal__IDecoratorProvider() noexcept {
  return static_cast<::Zenject::Internal::IDecoratorProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::Internal::DecoratorProvider_1<TContract>::DecoratorProvider_1() {}
