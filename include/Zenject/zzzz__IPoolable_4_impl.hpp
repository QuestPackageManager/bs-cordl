#pragma once
// IWYU pragma private; include "Zenject\IPoolable_4.hpp"
#include "Zenject/zzzz__IPoolable_4_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4> inline void Zenject::IPoolable_4<TParam1, TParam2, TParam3, TParam4>::OnDespawned() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IPoolable_4<TParam1, TParam2, TParam3, TParam4>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4>
inline void Zenject::IPoolable_4<TParam1, TParam2, TParam3, TParam4>::OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IPoolable_4<TParam1, TParam2, TParam3, TParam4>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p1, p2, p3, p4);
}
