#pragma once
// IWYU pragma private; include "UnityEngine\Pool\IObjectPool_1.hpp"
#include "UnityEngine/Pool/zzzz__IObjectPool_1_def.hpp"
template <typename T> inline void UnityEngine::Pool::IObjectPool_1<T>::Release(T element) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Pool::IObjectPool_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
