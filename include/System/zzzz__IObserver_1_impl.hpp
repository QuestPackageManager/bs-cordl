#pragma once
// IWYU pragma private; include "System\IObserver_1.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
template <typename T> inline void System::IObserver_1<T>::OnNext(T value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IObserver_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void System::IObserver_1<T>::OnError(::System::Exception* error) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IObserver_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
template <typename T> inline void System::IObserver_1<T>::OnCompleted() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IObserver_1<T>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
