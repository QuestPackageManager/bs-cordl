#pragma once
// IWYU pragma private; include "GlobalNamespace/ILazyCopyHashSet_1.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
template <typename T> inline void GlobalNamespace::ILazyCopyHashSet_1<T>::Add(T item) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILazyCopyHashSet_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::ILazyCopyHashSet_1<T>::Remove(T item) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILazyCopyHashSet_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
