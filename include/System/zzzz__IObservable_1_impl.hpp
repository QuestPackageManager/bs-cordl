#pragma once
// IWYU pragma private; include "System\IObservable_1.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
template <typename T> inline ::System::IDisposable* System::IObservable_1<T>::Subscribe(::System::IObserver_1<T>* observer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IObservable_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(this, ___internal_method, observer);
}
