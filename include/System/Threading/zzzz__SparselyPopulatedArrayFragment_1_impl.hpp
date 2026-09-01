#pragma once
// IWYU pragma private; include "System\Threading\SparselyPopulatedArrayFragment_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayFragment_1_def.hpp"
template <typename T> constexpr ::ArrayW<T>& System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_get__elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elements;
}
template <typename T> constexpr ::ArrayW<T> const& System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_get__elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elements;
}
template <typename T> constexpr void System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_set__elements(::ArrayW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elements = value;
}
template <typename T> constexpr int32_t& System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_get__freeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeCount;
}
template <typename T> constexpr int32_t const& System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_get__freeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeCount;
}
template <typename T> constexpr void System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_set__freeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____freeCount = value;
}
template <typename T> constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>*& System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_get__next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
template <typename T> constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>* const& System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_get__next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
template <typename T> constexpr void System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_set__next(::System::Threading::SparselyPopulatedArrayFragment_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____next = value;
}
template <typename T> constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>*& System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_get__prev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prev;
}
template <typename T> constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>* const& System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_get__prev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prev;
}
template <typename T> constexpr void System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_set__prev(::System::Threading::SparselyPopulatedArrayFragment_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prev = value;
}
template <typename T> inline void System::Threading::SparselyPopulatedArrayFragment_1<T>::_ctor(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
template <typename T> inline void System::Threading::SparselyPopulatedArrayFragment_1<T>::_ctor(int32_t size, ::System::Threading::SparselyPopulatedArrayFragment_1<T>* prev) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size, prev);
}
template <typename T> inline T System::Threading::SparselyPopulatedArrayFragment_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template <typename T> inline int32_t System::Threading::SparselyPopulatedArrayFragment_1<T>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArrayFragment_1<T>::get_Prev() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(), { "get_Prev", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(this, ___internal_method);
}
template <typename T> inline T System::Threading::SparselyPopulatedArrayFragment_1<T>::SafeAtomicRemove(int32_t index, T expectedElement) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(), { "SafeAtomicRemove", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index, expectedElement);
}
template <typename T> inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArrayFragment_1<T>::New_ctor(int32_t size) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(size));
}
template <typename T>
inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArrayFragment_1<T>::New_ctor(int32_t size,
                                                                                                                                  ::System::Threading::SparselyPopulatedArrayFragment_1<T>* prev) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(size, prev));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>::SparselyPopulatedArrayFragment_1() {}
