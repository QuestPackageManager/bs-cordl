#pragma once
// IWYU pragma private; include "IgnoranceThirdparty\RingBuffer_1.hpp"
#include "IgnoranceThirdparty/zzzz__Volatile_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "IgnoranceThirdparty/zzzz__RingBuffer_1_def.hpp"
template <typename T> constexpr ::ArrayW<T>& IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_get__entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entries;
}
template <typename T> constexpr ::ArrayW<T> const& IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_get__entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entries;
}
template <typename T> constexpr void IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_set__entries(::ArrayW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____entries = value;
}
template <typename T> constexpr int32_t& IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_get__modMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modMask;
}
template <typename T> constexpr int32_t const& IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_get__modMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modMask;
}
template <typename T> constexpr void IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_set__modMask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modMask = value;
}
template <typename T> constexpr ::IgnoranceThirdparty::Volatile_PaddedLong& IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_get__consumerCursor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____consumerCursor;
}
template <typename T> constexpr ::IgnoranceThirdparty::Volatile_PaddedLong const& IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_get__consumerCursor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____consumerCursor;
}
template <typename T> constexpr void IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_set__consumerCursor(::IgnoranceThirdparty::Volatile_PaddedLong value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____consumerCursor = value;
}
template <typename T> constexpr ::IgnoranceThirdparty::Volatile_PaddedLong& IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_get__producerCursor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____producerCursor;
}
template <typename T> constexpr ::IgnoranceThirdparty::Volatile_PaddedLong const& IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_get__producerCursor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____producerCursor;
}
template <typename T> constexpr void IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_set__producerCursor(::IgnoranceThirdparty::Volatile_PaddedLong value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____producerCursor = value;
}
template <typename T> inline void IgnoranceThirdparty::RingBuffer_1<T>::_ctor(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IgnoranceThirdparty::RingBuffer_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template <typename T> inline int32_t IgnoranceThirdparty::RingBuffer_1<T>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IgnoranceThirdparty::RingBuffer_1<T>*>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline T IgnoranceThirdparty::RingBuffer_1<T>::get_Item(int64_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IgnoranceThirdparty::RingBuffer_1<T>*>(), { "get_Item", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template <typename T> inline void IgnoranceThirdparty::RingBuffer_1<T>::set_Item(int64_t index, T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IgnoranceThirdparty::RingBuffer_1<T>*>(), { "set_Item", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template <typename T> inline T IgnoranceThirdparty::RingBuffer_1<T>::Dequeue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IgnoranceThirdparty::RingBuffer_1<T>*>(), { "Dequeue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline bool IgnoranceThirdparty::RingBuffer_1<T>::TryDequeue(::by_ref<T> obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IgnoranceThirdparty::RingBuffer_1<T>*>(), { "TryDequeue", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
template <typename T> inline void IgnoranceThirdparty::RingBuffer_1<T>::Enqueue(T item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IgnoranceThirdparty::RingBuffer_1<T>*>(), { "Enqueue", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline int32_t IgnoranceThirdparty::RingBuffer_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IgnoranceThirdparty::RingBuffer_1<T>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline int32_t IgnoranceThirdparty::RingBuffer_1<T>::NextPowerOfTwo(int32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::IgnoranceThirdparty::RingBuffer_1<T>*>(), { "NextPowerOfTwo", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x);
}
template <typename T> inline ::IgnoranceThirdparty::RingBuffer_1<T>* IgnoranceThirdparty::RingBuffer_1<T>::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::IgnoranceThirdparty::RingBuffer_1<T>*>(capacity));
}
// Ctor Parameters []
template <typename T> constexpr ::IgnoranceThirdparty::RingBuffer_1<T>::RingBuffer_1() {}
