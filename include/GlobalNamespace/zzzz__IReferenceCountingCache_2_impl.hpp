#pragma once
// IWYU pragma private; include "GlobalNamespace/IReferenceCountingCache_2.hpp"
#include "GlobalNamespace/zzzz__IReferenceCountingCache_2_def.hpp"
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>::Insert(TKey key, TValue item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key, item);
}
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>::AddReference(TKey key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>::RemoveReference(TKey key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>::GetReferenceCount(TKey key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>::TryGet(TKey key, ::by_ref<TValue> result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, result);
}
