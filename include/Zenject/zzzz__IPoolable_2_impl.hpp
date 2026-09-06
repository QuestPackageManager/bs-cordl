#pragma once
// IWYU pragma private; include "Zenject/IPoolable_2.hpp"
#include "Zenject/zzzz__IPoolable_2_def.hpp"
template <typename TParam1, typename TParam2> inline void Zenject::IPoolable_2<TParam1, TParam2>::OnDespawned() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IPoolable_2<TParam1, TParam2>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TParam2> inline void Zenject::IPoolable_2<TParam1, TParam2>::OnSpawned(TParam1 p1, TParam2 p2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IPoolable_2<TParam1, TParam2>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p1, p2);
}
