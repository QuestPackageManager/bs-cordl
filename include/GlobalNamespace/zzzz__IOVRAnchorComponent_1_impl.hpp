#pragma once
// IWYU pragma private; include "GlobalNamespace/IOVRAnchorComponent_1.hpp"
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
template <typename T> inline bool GlobalNamespace::IOVRAnchorComponent_1<T>::get_IsNull() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IOVRAnchorComponent_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::IOVRAnchorComponent_1<T>::get_IsEnabled() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IOVRAnchorComponent_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::IOVRAnchorComponent_1<T>::SetEnabledAsync(bool enable, double_t timeout) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IOVRAnchorComponent_1<T>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(this, ___internal_method, enable, timeout);
}
template <typename T> inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::IOVRAnchorComponent_1<T>::get_Type() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IOVRAnchorComponent_1<T>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(this, ___internal_method);
}
template <typename T> inline uint64_t GlobalNamespace::IOVRAnchorComponent_1<T>::get_Handle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IOVRAnchorComponent_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::IOVRAnchorComponent_1<T>::FromAnchor(::GlobalNamespace::OVRAnchor anchor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IOVRAnchorComponent_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, anchor);
}
