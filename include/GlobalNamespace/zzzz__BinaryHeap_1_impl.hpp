#pragma once
// IWYU pragma private; include "GlobalNamespace\BinaryHeap_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BinaryHeap_1_def.hpp"
template <typename T> constexpr ::ArrayW<T>& GlobalNamespace::BinaryHeap_1<T>::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
template <typename T> constexpr ::ArrayW<T> const& GlobalNamespace::BinaryHeap_1<T>::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
template <typename T> constexpr void GlobalNamespace::BinaryHeap_1<T>::__cordl_internal_set__data(::ArrayW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____data = value;
}
template <typename T> constexpr int32_t& GlobalNamespace::BinaryHeap_1<T>::__cordl_internal_get__tail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tail;
}
template <typename T> constexpr int32_t const& GlobalNamespace::BinaryHeap_1<T>::__cordl_internal_get__tail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tail;
}
template <typename T> constexpr void GlobalNamespace::BinaryHeap_1<T>::__cordl_internal_set__tail(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tail = value;
}
template <typename T> inline void GlobalNamespace::BinaryHeap_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryHeap_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::BinaryHeap_1<T>::_ctor(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryHeap_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template <typename T> inline void GlobalNamespace::BinaryHeap_1<T>::Insert(T item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryHeap_1<T>*>(), { "Insert", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline bool GlobalNamespace::BinaryHeap_1<T>::RemoveMin(::by_ref<T> output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BinaryHeap_1<T>*>(), { "RemoveMin", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, output);
}
template <typename T> inline ::GlobalNamespace::BinaryHeap_1<T>* GlobalNamespace::BinaryHeap_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BinaryHeap_1<T>*>());
}
template <typename T> inline ::GlobalNamespace::BinaryHeap_1<T>* GlobalNamespace::BinaryHeap_1<T>::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BinaryHeap_1<T>*>(capacity));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::BinaryHeap_1<T>::BinaryHeap_1() {}
