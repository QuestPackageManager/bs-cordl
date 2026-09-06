#pragma once
// IWYU pragma private; include "Zenject/IPoolable_1.hpp"
#include "Zenject/zzzz__IPoolable_1_def.hpp"
template <typename TParam1> inline void Zenject::IPoolable_1<TParam1>::OnDespawned() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IPoolable_1<TParam1>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1> inline void Zenject::IPoolable_1<TParam1>::OnSpawned(TParam1 p1) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IPoolable_1<TParam1>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p1);
}
