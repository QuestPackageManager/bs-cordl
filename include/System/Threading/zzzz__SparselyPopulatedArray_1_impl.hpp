#pragma once
// IWYU pragma private; include "System\Threading\SparselyPopulatedArray_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArray_1_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayAddInfo_1_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayFragment_1_def.hpp"
template <typename T> constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>*& System::Threading::SparselyPopulatedArray_1<T>::__cordl_internal_get__head() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____head;
}
template <typename T> constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>* const& System::Threading::SparselyPopulatedArray_1<T>::__cordl_internal_get__head() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____head;
}
template <typename T> constexpr void System::Threading::SparselyPopulatedArray_1<T>::__cordl_internal_set__head(::System::Threading::SparselyPopulatedArrayFragment_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____head = value;
}
template <typename T> constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>*& System::Threading::SparselyPopulatedArray_1<T>::__cordl_internal_get__tail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tail;
}
template <typename T> constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>* const& System::Threading::SparselyPopulatedArray_1<T>::__cordl_internal_get__tail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tail;
}
template <typename T> constexpr void System::Threading::SparselyPopulatedArray_1<T>::__cordl_internal_set__tail(::System::Threading::SparselyPopulatedArrayFragment_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tail = value;
}
template <typename T> inline void System::Threading::SparselyPopulatedArray_1<T>::_ctor(int32_t initialSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SparselyPopulatedArray_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialSize);
}
template <typename T> inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArray_1<T>::get_Tail() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SparselyPopulatedArray_1<T>*>(), { "get_Tail", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Threading::SparselyPopulatedArrayAddInfo_1<T> System::Threading::SparselyPopulatedArray_1<T>::Add(T element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SparselyPopulatedArray_1<T>*>(), { "Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SparselyPopulatedArrayAddInfo_1<T>>(this, ___internal_method, element);
}
template <typename T> inline ::System::Threading::SparselyPopulatedArray_1<T>* System::Threading::SparselyPopulatedArray_1<T>::New_ctor(int32_t initialSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::SparselyPopulatedArray_1<T>*>(initialSize));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::SparselyPopulatedArray_1<T>::SparselyPopulatedArray_1() {}
