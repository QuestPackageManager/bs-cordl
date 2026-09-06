#pragma once
// IWYU pragma private; include "Zenject/PoolableStaticMemoryPool_2.hpp"
#include "Zenject/zzzz__StaticMemoryPool_2_impl.hpp"
#include "Zenject/zzzz__PoolableStaticMemoryPool_2_def.hpp"
template <typename TParam1, typename TValue> inline void Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TValue> inline void Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>::OnSpawned(TParam1 p1, TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>*>(), { "OnSpawned", {}, { ::i2c::type_of<TParam1>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p1, value);
}
template <typename TParam1, typename TValue> inline void Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>::OnDespawned(TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>*>(), { "OnDespawned", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template <typename TParam1, typename TValue> inline ::Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>* Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TValue> constexpr ::Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>::PoolableStaticMemoryPool_2() {}
