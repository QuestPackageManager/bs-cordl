#pragma once
// IWYU pragma private; include "System\Collections\Generic\ObjectComparer_1.hpp"
#include "System/Collections/Generic/zzzz__Comparer_1_impl.hpp"
#include "System/Collections/Generic/zzzz__ObjectComparer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline int32_t System::Collections::Generic::ObjectComparer_1<T>::Compare(T x, T y) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::ObjectComparer_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
template <typename T> inline bool System::Collections::Generic::ObjectComparer_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::ObjectComparer_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
template <typename T> inline int32_t System::Collections::Generic::ObjectComparer_1<T>::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::ObjectComparer_1<T>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::ObjectComparer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ObjectComparer_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::ObjectComparer_1<T>* System::Collections::Generic::ObjectComparer_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::ObjectComparer_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::ObjectComparer_1<T>::ObjectComparer_1() {}
