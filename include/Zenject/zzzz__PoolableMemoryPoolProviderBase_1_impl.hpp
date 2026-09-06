#pragma once
// IWYU pragma private; include "Zenject/PoolableMemoryPoolProviderBase_1.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PoolableMemoryPoolProviderBase_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
template <typename TContract> constexpr ::System::Guid& Zenject::PoolableMemoryPoolProviderBase_1<TContract>::__cordl_internal_get__PoolId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PoolId_k__BackingField;
}
template <typename TContract> constexpr ::System::Guid const& Zenject::PoolableMemoryPoolProviderBase_1<TContract>::__cordl_internal_get__PoolId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PoolId_k__BackingField;
}
template <typename TContract> constexpr void Zenject::PoolableMemoryPoolProviderBase_1<TContract>::__cordl_internal_set__PoolId_k__BackingField(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____PoolId_k__BackingField = value;
}
template <typename TContract> constexpr ::Zenject::DiContainer*& Zenject::PoolableMemoryPoolProviderBase_1<TContract>::__cordl_internal_get__Container_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Container_k__BackingField;
}
template <typename TContract> constexpr ::Zenject::DiContainer* const& Zenject::PoolableMemoryPoolProviderBase_1<TContract>::__cordl_internal_get__Container_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Container_k__BackingField;
}
template <typename TContract> constexpr void Zenject::PoolableMemoryPoolProviderBase_1<TContract>::__cordl_internal_set__Container_k__BackingField(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Container_k__BackingField = value;
}
template <typename TContract> inline void Zenject::PoolableMemoryPoolProviderBase_1<TContract>::_ctor(::Zenject::DiContainer* container, ::System::Guid poolId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableMemoryPoolProviderBase_1<TContract>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, poolId);
}
template <typename TContract> inline bool Zenject::PoolableMemoryPoolProviderBase_1<TContract>::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableMemoryPoolProviderBase_1<TContract>*>(), { "get_IsCached", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TContract> inline ::System::Guid Zenject::PoolableMemoryPoolProviderBase_1<TContract>::get_PoolId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableMemoryPoolProviderBase_1<TContract>*>(), { "get_PoolId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::PoolableMemoryPoolProviderBase_1<TContract>::set_PoolId(::System::Guid value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableMemoryPoolProviderBase_1<TContract>*>(), { "set_PoolId", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TContract> inline ::Zenject::DiContainer* Zenject::PoolableMemoryPoolProviderBase_1<TContract>::get_Container() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableMemoryPoolProviderBase_1<TContract>*>(), { "get_Container", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::PoolableMemoryPoolProviderBase_1<TContract>::set_Container(::Zenject::DiContainer* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableMemoryPoolProviderBase_1<TContract>*>(), { "set_Container", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TContract> inline bool Zenject::PoolableMemoryPoolProviderBase_1<TContract>::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableMemoryPoolProviderBase_1<TContract>*>(), { "get_TypeVariesBasedOnMemberType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TContract> inline ::System::Type* Zenject::PoolableMemoryPoolProviderBase_1<TContract>::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableMemoryPoolProviderBase_1<TContract>*>(), { "GetInstanceType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, context);
}
template <typename TContract>
inline void
Zenject::PoolableMemoryPoolProviderBase_1<TContract>::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                     ::by_ref<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::PoolableMemoryPoolProviderBase_1<TContract>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, args, injectAction, buffer);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::PoolableMemoryPoolProviderBase_1<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableMemoryPoolProviderBase_1<TContract>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TContract>
inline ::Zenject::PoolableMemoryPoolProviderBase_1<TContract>* Zenject::PoolableMemoryPoolProviderBase_1<TContract>::New_ctor(::Zenject::DiContainer* container, ::System::Guid poolId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PoolableMemoryPoolProviderBase_1<TContract>*>(container, poolId));
}
/// @brief Convert operator to "::Zenject::IProvider"
template <typename TContract> constexpr Zenject::PoolableMemoryPoolProviderBase_1<TContract>::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IProvider"
template <typename TContract> constexpr ::Zenject::IProvider* Zenject::PoolableMemoryPoolProviderBase_1<TContract>::i___Zenject__IProvider() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::PoolableMemoryPoolProviderBase_1<TContract>::PoolableMemoryPoolProviderBase_1() {}
