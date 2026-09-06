#pragma once
// IWYU pragma private; include "System/Collections/Generic/IComparer_1.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
template <typename T> inline int32_t System::Collections::Generic::IComparer_1<T>::Compare(T x, T y) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::IComparer_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
