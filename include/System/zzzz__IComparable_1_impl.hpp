#pragma once
// IWYU pragma private; include "System/IComparable_1.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
template <typename T> inline int32_t System::IComparable_1<T>::CompareTo(T other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IComparable_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
