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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Priority_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueueNode_1<TPriority>*>::get(),
                                                                             "get_Priority", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TPriority, false>(this, ___internal_method);
}
template <typename TPriority> inline void Priority_Queue::GenericPriorityQueueNode_1<TPriority>::set_Priority(TPriority value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueueNode_1<TPriority>*>::get(), "set_Priority",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TPriority> inline int32_t Priority_Queue::GenericPriorityQueueNode_1<TPriority>::get_QueueIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueueNode_1<TPriority>*>::get(),
                                                                             "get_QueueIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TPriority> inline void Priority_Queue::GenericPriorityQueueNode_1<TPriority>::set_QueueIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueueNode_1<TPriority>*>::get(), "set_QueueIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TPriority> inline int64_t Priority_Queue::GenericPriorityQueueNode_1<TPriority>::get_InsertionIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueueNode_1<TPriority>*>::get(),
                                                                             "get_InsertionIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
template <typename TPriority> inline void Priority_Queue::GenericPriorityQueueNode_1<TPriority>::set_InsertionIndex(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueueNode_1<TPriority>*>::get(), "set_InsertionIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TPriority> inline ::Priority_Queue::GenericPriorityQueueNode_1<TPriority>* Priority_Queue::GenericPriorityQueueNode_1<TPriority>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Priority_Queue::GenericPriorityQueueNode_1<TPriority>*>());
}
template <typename TPriority> inline void Priority_Queue::GenericPriorityQueueNode_1<TPriority>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueueNode_1<TPriority>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TPriority> constexpr ::Priority_Queue::GenericPriorityQueueNode_1<TPriority>::GenericPriorityQueueNode_1() {}
