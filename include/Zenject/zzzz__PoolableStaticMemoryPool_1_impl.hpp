#pragma once
// IWYU pragma private; include "Zenject\PoolableStaticMemoryPool_1.hpp"
#include "Zenject/zzzz__StaticMemoryPool_1_impl.hpp"
#include "Zenject/zzzz__PoolableStaticMemoryPool_1_def.hpp"
template <typename TValue> inline void Zenject::PoolableStaticMemoryPool_1<TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableStaticMemoryPool_1<TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValue> inline void Zenject::PoolableStaticMemoryPool_1<TValue>::OnSpawned(TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableStaticMemoryPool_1<TValue>*>(), { "OnSpawned", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template <typename TValue> inline void Zenject::PoolableStaticMemoryPool_1<TValue>::OnDespawned(TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableStaticMemoryPool_1<TValue>*>(), { "OnDespawned", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template <typename TValue> inline ::Zenject::PoolableStaticMemoryPool_1<TValue>* Zenject::PoolableStaticMemoryPool_1<TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PoolableStaticMemoryPool_1<TValue>*>());
}
// Ctor Parameters []
template <typename TValue> constexpr ::Zenject::PoolableStaticMemoryPool_1<TValue>::PoolableStaticMemoryPool_1() {}
