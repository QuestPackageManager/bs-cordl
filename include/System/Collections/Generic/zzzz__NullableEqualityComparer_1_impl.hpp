#pragma once
// IWYU pragma private; include "System/Collections/Generic/NullableEqualityComparer_1.hpp"
#include "System/Collections/Generic/zzzz__EqualityComparer_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/Collections/Generic/zzzz__NullableEqualityComparer_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline bool System::Collections::Generic::NullableEqualityComparer_1<T>::Equals(::System::Nullable_1<T> x, ::System::Nullable_1<T> y) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::NullableEqualityComparer_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
template <typename T> inline int32_t System::Collections::Generic::NullableEqualityComparer_1<T>::GetHashCode(::System::Nullable_1<T> obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::NullableEqualityComparer_1<T>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
template <typename T>
inline int32_t System::Collections::Generic::NullableEqualityComparer_1<T>::IndexOf(::ArrayW<::System::Nullable_1<T>> array, ::System::Nullable_1<T> value, int32_t startIndex, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::NullableEqualityComparer_1<T>*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, value, startIndex, count);
}
template <typename T>
inline int32_t System::Collections::Generic::NullableEqualityComparer_1<T>::LastIndexOf(::ArrayW<::System::Nullable_1<T>> array, ::System::Nullable_1<T> value, int32_t startIndex, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::NullableEqualityComparer_1<T>*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, value, startIndex, count);
}
template <typename T> inline bool System::Collections::Generic::NullableEqualityComparer_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::NullableEqualityComparer_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
template <typename T> inline int32_t System::Collections::Generic::NullableEqualityComparer_1<T>::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::NullableEqualityComparer_1<T>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::NullableEqualityComparer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::NullableEqualityComparer_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::NullableEqualityComparer_1<T>* System::Collections::Generic::NullableEqualityComparer_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::NullableEqualityComparer_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::NullableEqualityComparer_1<T>::NullableEqualityComparer_1() {}
