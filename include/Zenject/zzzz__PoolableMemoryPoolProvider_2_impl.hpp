#pragma once
// IWYU pragma private; include "Zenject/PoolableMemoryPoolProvider_2.hpp"
#include "Zenject/zzzz__PoolableMemoryPoolProviderBase_1_impl.hpp"
#include "Zenject/zzzz__PoolableMemoryPoolProvider_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
template <typename TContract, typename TMemoryPool> constexpr TMemoryPool& Zenject::PoolableMemoryPoolProvider_2<TContract, TMemoryPool>::__cordl_internal_get__pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pool;
}
template <typename TContract, typename TMemoryPool> constexpr TMemoryPool const& Zenject::PoolableMemoryPoolProvider_2<TContract, TMemoryPool>::__cordl_internal_get__pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pool;
}
template <typename TContract, typename TMemoryPool> constexpr void Zenject::PoolableMemoryPoolProvider_2<TContract, TMemoryPool>::__cordl_internal_set__pool(TMemoryPool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pool = value;
}
template <typename TContract, typename TMemoryPool> inline void Zenject::PoolableMemoryPoolProvider_2<TContract, TMemoryPool>::_ctor(::Zenject::DiContainer* container, ::System::Guid poolId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableMemoryPoolProvider_2<TContract, TMemoryPool>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, poolId);
}
template <typename TContract, typename TMemoryPool> inline void Zenject::PoolableMemoryPoolProvider_2<TContract, TMemoryPool>::Validate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableMemoryPoolProvider_2<TContract, TMemoryPool>*>(), { "Validate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract, typename TMemoryPool>
inline void Zenject::PoolableMemoryPoolProvider_2<TContract, TMemoryPool>::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context,
                                                                                                          ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                                          ::by_ref<::System::Action*> injectAction,
                                                                                                          ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::PoolableMemoryPoolProvider_2<TContract, TMemoryPool>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, args, injectAction, buffer);
}
template <typename TContract, typename TMemoryPool>
inline ::Zenject::PoolableMemoryPoolProvider_2<TContract, TMemoryPool>* Zenject::PoolableMemoryPoolProvider_2<TContract, TMemoryPool>::New_ctor(::Zenject::DiContainer* container,
                                                                                                                                                ::System::Guid poolId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PoolableMemoryPoolProvider_2<TContract, TMemoryPool>*>(container, poolId));
}
/// @brief Convert operator to "::Zenject::IValidatable"
template <typename TContract, typename TMemoryPool> constexpr Zenject::PoolableMemoryPoolProvider_2<TContract, TMemoryPool>::operator ::Zenject::IValidatable*() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IValidatable"
template <typename TContract, typename TMemoryPool> constexpr ::Zenject::IValidatable* Zenject::PoolableMemoryPoolProvider_2<TContract, TMemoryPool>::i___Zenject__IValidatable() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TContract, typename TMemoryPool> constexpr ::Zenject::PoolableMemoryPoolProvider_2<TContract, TMemoryPool>::PoolableMemoryPoolProvider_2() {}
