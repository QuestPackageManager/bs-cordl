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
/// @brief Convert operator to "::Zenject::Internal::IDecoratorProvider"
template <typename TContract> constexpr Zenject::Internal::DecoratorProvider_1<TContract>::operator ::Zenject::Internal::IDecoratorProvider*() noexcept {
  return static_cast<::Zenject::Internal::IDecoratorProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::Internal::IDecoratorProvider"
template <typename TContract> constexpr ::Zenject::Internal::IDecoratorProvider* Zenject::Internal::DecoratorProvider_1<TContract>::i___Zenject__Internal__IDecoratorProvider() noexcept {
  return static_cast<::Zenject::Internal::IDecoratorProvider*>(static_cast<void*>(this));
}
template <typename TContract>
constexpr ::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*, ::System::Collections::Generic::List_1<::System::Object*>*>*&
Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_get__cachedInstances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedInstances;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*, ::System::Collections::Generic::List_1<::System::Object*>*>*> const&
Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_get__cachedInstances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedInstances;
}
template <typename TContract>
constexpr void Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_set__cachedInstances(
    ::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*, ::System::Collections::Generic::List_1<::System::Object*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____cachedInstances, value);
}
template <typename TContract> constexpr ::Zenject::DiContainer*& Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TContract> constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TContract> constexpr void Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____container, value);
}
template <typename TContract> constexpr ::System::Collections::Generic::List_1<::System::Guid>*& Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_get__factoryBindIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factoryBindIds;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Guid>*> const&
Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_get__factoryBindIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factoryBindIds;
}
template <typename TContract> constexpr void Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_set__factoryBindIds(::System::Collections::Generic::List_1<::System::Guid>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____factoryBindIds, value);
}
template <typename TContract>
constexpr ::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract, TContract>*>*& Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_get__decoratorFactories() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decoratorFactories;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract, TContract>*>*> const&
Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_get__decoratorFactories() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decoratorFactories;
}
template <typename TContract>
constexpr void
Zenject::Internal::DecoratorProvider_1<TContract>::__cordl_internal_set__decoratorFactories(::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract, TContract>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____decoratorFactories, value);
}
template <typename TContract> inline ::Zenject::Internal::DecoratorProvider_1<TContract>* Zenject::Internal::DecoratorProvider_1<TContract>::New_ctor(::Zenject::DiContainer* container) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::DecoratorProvider_1<TContract>*>(container));
}
template <typename TContract> inline void Zenject::Internal::DecoratorProvider_1<TContract>::_ctor(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::DecoratorProvider_1<TContract>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
template <typename TContract> inline void Zenject::Internal::DecoratorProvider_1<TContract>::AddFactoryId(::System::Guid factoryBindId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::DecoratorProvider_1<TContract>*>::get(), "AddFactoryId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, factoryBindId);
}
template <typename TContract> inline void Zenject::Internal::DecoratorProvider_1<TContract>::LazyInitializeDecoratorFactories() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::DecoratorProvider_1<TContract>*>::get(),
                                                                             "LazyInitializeDecoratorFactories", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract>
inline void Zenject::Internal::DecoratorProvider_1<TContract>::GetAllInstances(::Zenject::IProvider* provider, ::Zenject::InjectContext* context,
                                                                               ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::DecoratorProvider_1<TContract>*>::get(), "GetAllInstances", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provider, context, buffer);
}
template <typename TContract>
inline void Zenject::Internal::DecoratorProvider_1<TContract>::WrapProviderInstances(::Zenject::IProvider* provider, ::Zenject::InjectContext* context,
                                                                                     ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::DecoratorProvider_1<TContract>*>::get(), "WrapProviderInstances", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provider, context, buffer);
}
template <typename TContract> inline ::System::Object* Zenject::Internal::DecoratorProvider_1<TContract>::DecorateInstance(::System::Object* instance, ::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::DecoratorProvider_1<TContract>*>::get(), "DecorateInstance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, instance, context);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::Internal::DecoratorProvider_1<TContract>::DecoratorProvider_1() {}
