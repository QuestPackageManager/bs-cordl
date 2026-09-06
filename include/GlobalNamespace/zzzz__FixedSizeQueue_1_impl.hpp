#pragma once
// IWYU pragma private; include "GlobalNamespace/FixedSizeQueue_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FixedSizeQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& GlobalNamespace::FixedSizeQueue_1<T>::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>* const& GlobalNamespace::FixedSizeQueue_1<T>::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
template <typename T> constexpr void GlobalNamespace::FixedSizeQueue_1<T>::__cordl_internal_set__data(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____data = value;
}
template <typename T> constexpr int32_t& GlobalNamespace::FixedSizeQueue_1<T>::__cordl_internal_get__queueSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queueSize;
}
template <typename T> constexpr int32_t const& GlobalNamespace::FixedSizeQueue_1<T>::__cordl_internal_get__queueSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queueSize;
}
template <typename T> constexpr void GlobalNamespace::FixedSizeQueue_1<T>::__cordl_internal_set__queueSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____queueSize = value;
}
template <typename T> inline ::System::Collections::Generic::IReadOnlyList_1<T>* GlobalNamespace::FixedSizeQueue_1<T>::get_data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FixedSizeQueue_1<T>*>(), { "get_data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<T>*>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::FixedSizeQueue_1<T>::_ctor(int32_t queueSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FixedSizeQueue_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, queueSize);
}
template <typename T> inline void GlobalNamespace::FixedSizeQueue_1<T>::_ctor(::System::Collections::Generic::List_1<T>* data, int32_t queueSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FixedSizeQueue_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, queueSize);
}
template <typename T> inline void GlobalNamespace::FixedSizeQueue_1<T>::Add(T item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FixedSizeQueue_1<T>*>(), { "Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline ::GlobalNamespace::FixedSizeQueue_1<T>* GlobalNamespace::FixedSizeQueue_1<T>::New_ctor(int32_t queueSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FixedSizeQueue_1<T>*>(queueSize));
}
template <typename T> inline ::GlobalNamespace::FixedSizeQueue_1<T>* GlobalNamespace::FixedSizeQueue_1<T>::New_ctor(::System::Collections::Generic::List_1<T>* data, int32_t queueSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FixedSizeQueue_1<T>*>(data, queueSize));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::FixedSizeQueue_1<T>::FixedSizeQueue_1() {}
