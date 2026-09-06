#pragma once
// IWYU pragma private; include "Priority_Queue/GenericPriorityQueueNode_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Priority_Queue/zzzz__GenericPriorityQueueNode_1_def.hpp"
template <typename TPriority> constexpr TPriority& Priority_Queue::GenericPriorityQueueNode_1<TPriority>::__cordl_internal_get__Priority_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Priority_k__BackingField;
}
template <typename TPriority> constexpr TPriority const& Priority_Queue::GenericPriorityQueueNode_1<TPriority>::__cordl_internal_get__Priority_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Priority_k__BackingField;
}
template <typename TPriority> constexpr void Priority_Queue::GenericPriorityQueueNode_1<TPriority>::__cordl_internal_set__Priority_k__BackingField(TPriority value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Priority_k__BackingField = value;
}
template <typename TPriority> constexpr int32_t& Priority_Queue::GenericPriorityQueueNode_1<TPriority>::__cordl_internal_get__QueueIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____QueueIndex_k__BackingField;
}
template <typename TPriority> constexpr int32_t const& Priority_Queue::GenericPriorityQueueNode_1<TPriority>::__cordl_internal_get__QueueIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____QueueIndex_k__BackingField;
}
template <typename TPriority> constexpr void Priority_Queue::GenericPriorityQueueNode_1<TPriority>::__cordl_internal_set__QueueIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____QueueIndex_k__BackingField = value;
}
template <typename TPriority> constexpr int64_t& Priority_Queue::GenericPriorityQueueNode_1<TPriority>::__cordl_internal_get__InsertionIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InsertionIndex_k__BackingField;
}
template <typename TPriority> constexpr int64_t const& Priority_Queue::GenericPriorityQueueNode_1<TPriority>::__cordl_internal_get__InsertionIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InsertionIndex_k__BackingField;
}
template <typename TPriority> constexpr void Priority_Queue::GenericPriorityQueueNode_1<TPriority>::__cordl_internal_set__InsertionIndex_k__BackingField(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InsertionIndex_k__BackingField = value;
}
template <typename TPriority> inline TPriority Priority_Queue::GenericPriorityQueueNode_1<TPriority>::get_Priority() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueueNode_1<TPriority>*>(), { "get_Priority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TPriority>(this, ___internal_method);
}
template <typename TPriority> inline void Priority_Queue::GenericPriorityQueueNode_1<TPriority>::set_Priority(TPriority value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueueNode_1<TPriority>*>(), { "set_Priority", {}, { ::i2c::type_of<TPriority>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TPriority> inline int32_t Priority_Queue::GenericPriorityQueueNode_1<TPriority>::get_QueueIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueueNode_1<TPriority>*>(), { "get_QueueIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TPriority> inline void Priority_Queue::GenericPriorityQueueNode_1<TPriority>::set_QueueIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueueNode_1<TPriority>*>(), { "set_QueueIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TPriority> inline int64_t Priority_Queue::GenericPriorityQueueNode_1<TPriority>::get_InsertionIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueueNode_1<TPriority>*>(), { "get_InsertionIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
template <typename TPriority> inline void Priority_Queue::GenericPriorityQueueNode_1<TPriority>::set_InsertionIndex(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueueNode_1<TPriority>*>(), { "set_InsertionIndex", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TPriority> inline void Priority_Queue::GenericPriorityQueueNode_1<TPriority>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueueNode_1<TPriority>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TPriority> inline ::Priority_Queue::GenericPriorityQueueNode_1<TPriority>* Priority_Queue::GenericPriorityQueueNode_1<TPriority>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Priority_Queue::GenericPriorityQueueNode_1<TPriority>*>());
}
// Ctor Parameters []
template <typename TPriority> constexpr ::Priority_Queue::GenericPriorityQueueNode_1<TPriority>::GenericPriorityQueueNode_1() {}
