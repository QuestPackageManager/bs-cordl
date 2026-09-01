#pragma once
// IWYU pragma private; include "GlobalNamespace\ISyncStateSerializable_1.hpp"
#include "GlobalNamespace/zzzz__ISyncStateSerializable_1_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
template <typename T> inline ::GlobalNamespace::SyncStateId GlobalNamespace::ISyncStateSerializable_1<T>::get_id() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISyncStateSerializable_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SyncStateId>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::ISyncStateSerializable_1<T>::set_id(::GlobalNamespace::SyncStateId value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISyncStateSerializable_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline int64_t GlobalNamespace::ISyncStateSerializable_1<T>::get_time() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISyncStateSerializable_1<T>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::ISyncStateSerializable_1<T>::set_time(int64_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISyncStateSerializable_1<T>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline T GlobalNamespace::ISyncStateSerializable_1<T>::get_state() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISyncStateSerializable_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::ISyncStateSerializable_1<T>::set_state(T value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISyncStateSerializable_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
