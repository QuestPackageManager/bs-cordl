#pragma once
// IWYU pragma private; include "System/IEquatable_1.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
template <typename T> inline bool System::IEquatable_1<T>::Equals(T other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IEquatable_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
