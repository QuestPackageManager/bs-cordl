#pragma once
// IWYU pragma private; include "GlobalNamespace\IEquatableByReference_1.hpp"
#include "GlobalNamespace/zzzz__IEquatableByReference_1_def.hpp"
template <typename T> inline bool GlobalNamespace::IEquatableByReference_1<T>::Equals(::by_ref<T> other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IEquatableByReference_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
