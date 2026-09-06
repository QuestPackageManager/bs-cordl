#pragma once
// IWYU pragma private; include "GlobalNamespace/ISyncStateDeltaSerializable_1.hpp"
#include "GlobalNamespace/zzzz__ISyncStateDeltaSerializable_1_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
template <typename T> inline ::GlobalNamespace::SyncStateId GlobalNamespace::ISyncStateDeltaSerializable_1<T>::get_baseId() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISyncStateDeltaSerializable_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SyncStateId>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::ISyncStateDeltaSerializable_1<T>::set_baseId(::GlobalNamespace::SyncStateId value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISyncStateDeltaSerializable_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline int32_t GlobalNamespace::ISyncStateDeltaSerializable_1<T>::get_timeOffsetMs() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISyncStateDeltaSerializable_1<T>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::ISyncStateDeltaSerializable_1<T>::set_timeOffsetMs(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISyncStateDeltaSerializable_1<T>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline T GlobalNamespace::ISyncStateDeltaSerializable_1<T>::get_delta() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISyncStateDeltaSerializable_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::ISyncStateDeltaSerializable_1<T>::set_delta(T value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISyncStateDeltaSerializable_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
