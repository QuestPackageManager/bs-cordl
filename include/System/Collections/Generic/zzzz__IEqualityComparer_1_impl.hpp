#pragma once
// IWYU pragma private; include "System/Collections/Generic/IEqualityComparer_1.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
template <typename T> inline bool System::Collections::Generic::IEqualityComparer_1<T>::Equals(T x, T y) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::IEqualityComparer_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
template <typename T> inline int32_t System::Collections::Generic::IEqualityComparer_1<T>::GetHashCode(T obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::IEqualityComparer_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
