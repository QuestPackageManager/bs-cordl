#pragma once
// IWYU pragma private; include "Unity/Collections/IIndexable_1.hpp"
#include "Unity/Collections/zzzz__IIndexable_1_def.hpp"
template <typename T> inline int32_t Unity::Collections::IIndexable_1<T>::get_Length() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::IIndexable_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void Unity::Collections::IIndexable_1<T>::set_Length(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::IIndexable_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::by_ref<T> Unity::Collections::IIndexable_1<T>::ElementAt(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::IIndexable_1<T>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(this, ___internal_method, index);
}
