#pragma once
// IWYU pragma private; include "Priority_Queue\SimplePriorityQueue_2.hpp"
#include "Priority_Queue/zzzz__GenericPriorityQueueNode_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Priority_Queue/zzzz__SimplePriorityQueue_2_def.hpp"
#include "Priority_Queue/zzzz__GenericPriorityQueue_2_def.hpp"
#include "Priority_Queue/zzzz__IPriorityQueue_2_def.hpp"
#include "Priority_Queue/zzzz__SimplePriorityQueue_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
template <typename TItem, typename TPriority> constexpr TItem& Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>::__cordl_internal_get__Data_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Data_k__BackingField;
}
template <typename TItem, typename TPriority> constexpr TItem const& Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>::__cordl_internal_get__Data_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Data_k__BackingField;
}
template <typename TItem, typename TPriority> constexpr void Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>::__cordl_internal_set__Data_k__BackingField(TItem value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Data_k__BackingField = value;
}
template <typename TItem, typename TPriority> inline TItem Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>::get_Data() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>(), { "get_Data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TItem>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>::set_Data(TItem value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>(), { "set_Data", {}, { ::i2c::type_of<TItem>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>::_ctor(TItem data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>(), { ".ctor", {}, { ::i2c::type_of<TItem>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>* Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>::New_ctor(TItem data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>(data));
}
// Ctor Parameters []
template <typename TItem, typename TPriority> constexpr ::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>::SimplePriorityQueue_2_SimpleNode() {}
template <typename TItem, typename TPriority>
constexpr ::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*, TPriority>*&
Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::__cordl_internal_get__queue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queue;
}
template <typename TItem, typename TPriority>
constexpr ::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*, TPriority>* const&
Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::__cordl_internal_get__queue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queue;
}
template <typename TItem, typename TPriority>
constexpr void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::__cordl_internal_set__queue(
    ::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*, TPriority>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____queue = value;
}
template <typename TItem, typename TPriority>
constexpr ::System::Collections::Generic::Dictionary_2<TItem, ::System::Collections::Generic::IList_1<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>*>*&
Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::__cordl_internal_get__itemToNodesCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemToNodesCache;
}
template <typename TItem, typename TPriority>
constexpr ::System::Collections::Generic::Dictionary_2<TItem, ::System::Collections::Generic::IList_1<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>*>* const&
Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::__cordl_internal_get__itemToNodesCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemToNodesCache;
}
template <typename TItem, typename TPriority>
constexpr void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::__cordl_internal_set__itemToNodesCache(
    ::System::Collections::Generic::Dictionary_2<TItem, ::System::Collections::Generic::IList_1<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____itemToNodesCache = value;
}
template <typename TItem, typename TPriority>
constexpr ::System::Collections::Generic::IList_1<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>*&
Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::__cordl_internal_get__nullNodesCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nullNodesCache;
}
template <typename TItem, typename TPriority>
constexpr ::System::Collections::Generic::IList_1<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>* const&
Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::__cordl_internal_get__nullNodesCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nullNodesCache;
}
template <typename TItem, typename TPriority>
constexpr void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::__cordl_internal_set__nullNodesCache(
    ::System::Collections::Generic::IList_1<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nullNodesCache = value;
}
template <typename TItem, typename TPriority> inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::_ctor(::System::Collections::Generic::IComparer_1<TPriority>* priorityComparer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IComparer_1<TPriority>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, priorityComparer);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::_ctor(::System::Comparison_1<TPriority>* priorityComparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Comparison_1<TPriority>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, priorityComparer);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TItem>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemEquality);
}
template <typename TItem, typename TPriority>
inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::_ctor(::System::Collections::Generic::IComparer_1<TPriority>* priorityComparer,
                                                                           ::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(),
                       { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IComparer_1<TPriority>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TItem>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, priorityComparer, itemEquality);
}
template <typename TItem, typename TPriority>
inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::_ctor(::System::Comparison_1<TPriority>* priorityComparer,
                                                                           ::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::System::Comparison_1<TPriority>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TItem>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, priorityComparer, itemEquality);
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>* Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::GetExistingNode(TItem item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(), { "GetExistingNode", {}, { ::i2c::type_of<TItem>() } })));
  return ::cordl_internals::RunMethodRethrow<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>(this, ___internal_method, item);
}
template <typename TItem, typename TPriority>
inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::AddToNodeCache(::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(),
                                                           { "AddToNodeCache", {}, { ::i2c::type_of<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
template <typename TItem, typename TPriority>
inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::RemoveFromNodeCache(::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(),
                                                           { "RemoveFromNodeCache", {}, { ::i2c::type_of<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
template <typename TItem, typename TPriority> inline int32_t Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline TItem Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::get_First() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(), { "get_First", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TItem>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::Contains(TItem item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(), { "Contains", {}, { ::i2c::type_of<TItem>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename TItem, typename TPriority> inline TItem Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::Dequeue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(), { "Dequeue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TItem>(this, ___internal_method);
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>* Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::EnqueueNoLockOrCache(TItem item, TPriority priority) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(),
                                                                                         { "EnqueueNoLockOrCache", {}, { ::i2c::type_of<TItem>(), ::i2c::type_of<TPriority>() } })));
  return ::cordl_internals::RunMethodRethrow<::Priority_Queue::SimplePriorityQueue_2_SimpleNode<TItem, TPriority>*>(this, ___internal_method, item, priority);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::Enqueue(TItem item, TPriority priority) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(), { "Enqueue", {}, { ::i2c::type_of<TItem>(), ::i2c::type_of<TPriority>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, priority);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::EnqueueWithoutDuplicates(TItem item, TPriority priority) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(),
                                                                                         { "EnqueueWithoutDuplicates", {}, { ::i2c::type_of<TItem>(), ::i2c::type_of<TPriority>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item, priority);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::Remove(TItem item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(), { "Remove", {}, { ::i2c::type_of<TItem>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::UpdatePriority(TItem item, TPriority priority) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(),
                                                                                         { "UpdatePriority", {}, { ::i2c::type_of<TItem>(), ::i2c::type_of<TPriority>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, priority);
}
template <typename TItem, typename TPriority> inline TPriority Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::GetPriority(TItem item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(), { "GetPriority", {}, { ::i2c::type_of<TItem>() } })));
  return ::cordl_internals::RunMethodRethrow<TPriority>(this, ___internal_method, item);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::TryFirst(::by_ref<TItem> first) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(), { "TryFirst", {}, { ::i2c::type_of<::by_ref<TItem>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, first);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::TryDequeue(::by_ref<TItem> first) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(), { "TryDequeue", {}, { ::i2c::type_of<::by_ref<TItem>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, first);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::TryRemove(TItem item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(), { "TryRemove", {}, { ::i2c::type_of<TItem>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::TryUpdatePriority(TItem item, TPriority priority) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(),
                                                                                         { "TryUpdatePriority", {}, { ::i2c::type_of<TItem>(), ::i2c::type_of<TPriority>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item, priority);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::TryGetPriority(TItem item, ::by_ref<TPriority> priority) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(),
                                                                                         { "TryGetPriority", {}, { ::i2c::type_of<TItem>(), ::i2c::type_of<::by_ref<TPriority>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item, priority);
}
template <typename TItem, typename TPriority> inline ::System::Collections::Generic::IEnumerator_1<TItem>* Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TItem>*>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline ::System::Collections::IEnumerator* Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::IsValidQueue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(), { "IsValidQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>* Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>());
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*
Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::New_ctor(::System::Collections::Generic::IComparer_1<TPriority>* priorityComparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(priorityComparer));
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>* Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::New_ctor(::System::Comparison_1<TPriority>* priorityComparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(priorityComparer));
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*
Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(itemEquality));
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*
Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::New_ctor(::System::Collections::Generic::IComparer_1<TPriority>* priorityComparer,
                                                                  ::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(priorityComparer, itemEquality));
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*
Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::New_ctor(::System::Comparison_1<TPriority>* priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>*>(priorityComparer, itemEquality));
}
/// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
template <typename TItem, typename TPriority> constexpr Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::operator ::Priority_Queue::IPriorityQueue_2<TItem, TPriority>*() noexcept {
  return static_cast<::Priority_Queue::IPriorityQueue_2<TItem, TPriority>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
template <typename TItem, typename TPriority>
constexpr ::Priority_Queue::IPriorityQueue_2<TItem, TPriority>* Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::i___Priority_Queue__IPriorityQueue_2_TItem_TPriority_() noexcept {
  return static_cast<::Priority_Queue::IPriorityQueue_2<TItem, TPriority>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TItem>"
template <typename TItem, typename TPriority> constexpr Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::operator ::System::Collections::Generic::IEnumerable_1<TItem>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TItem>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TItem>"
template <typename TItem, typename TPriority>
constexpr ::System::Collections::Generic::IEnumerable_1<TItem>* Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::i___System__Collections__Generic__IEnumerable_1_TItem_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TItem>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TItem, typename TPriority> constexpr Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TItem, typename TPriority> constexpr ::System::Collections::IEnumerable* Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TItem, typename TPriority> constexpr ::Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::SimplePriorityQueue_2() {}
