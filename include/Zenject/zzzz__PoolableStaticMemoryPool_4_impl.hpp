#pragma once
// IWYU pragma private; include "Zenject/PoolableStaticMemoryPool_4.hpp"
#include "Zenject/zzzz__StaticMemoryPool_4_impl.hpp"
#include "Zenject/zzzz__PoolableStaticMemoryPool_4_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> inline void Zenject::PoolableStaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableStaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline void Zenject::PoolableStaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>::OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableStaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>(),
                                                           { "OnSpawned", {}, { ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p1, p2, p3, value);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> inline void Zenject::PoolableStaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>::OnDespawned(TValue value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableStaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>(), { "OnDespawned", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::Zenject::PoolableStaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>* Zenject::PoolableStaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PoolableStaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> constexpr ::Zenject::PoolableStaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>::PoolableStaticMemoryPool_4() {}
