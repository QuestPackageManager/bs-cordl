#pragma once
// IWYU pragma private; include "Priority_Queue\GenericPriorityQueue_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Priority_Queue/zzzz__GenericPriorityQueue_2_def.hpp"
#include "Priority_Queue/zzzz__GenericPriorityQueue_2_def.hpp"
#include "Priority_Queue/zzzz__IFixedSizePriorityQueue_2_def.hpp"
#include "Priority_Queue/zzzz__IPriorityQueue_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TItem, typename TPriority> constexpr int32_t& Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TItem, typename TPriority> constexpr int32_t const& Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TItem, typename TPriority> constexpr void Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TItem, typename TPriority> constexpr TItem& Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TItem, typename TPriority> constexpr TItem const& Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TItem, typename TPriority> constexpr void Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::__cordl_internal_set___2__current(TItem value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
template <typename TItem, typename TPriority>
constexpr ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*& Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TItem, typename TPriority>
constexpr ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>* const& Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TItem, typename TPriority>
constexpr void Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::__cordl_internal_set___4__this(::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename TItem, typename TPriority> constexpr int32_t& Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::__cordl_internal_get__i_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
template <typename TItem, typename TPriority> constexpr int32_t const& Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::__cordl_internal_get__i_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
template <typename TItem, typename TPriority> constexpr void Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::__cordl_internal_set__i_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__2 = value;
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline TItem Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::System_Collections_Generic_IEnumerator_TItem__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<TItem>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TItem>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline ::System::Object* Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>* Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TItem>"
template <typename TItem, typename TPriority>
constexpr Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::operator ::System::Collections::Generic::IEnumerator_1<TItem>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TItem>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TItem>"
template <typename TItem, typename TPriority>
constexpr ::System::Collections::Generic::IEnumerator_1<TItem>*
Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::i___System__Collections__Generic__IEnumerator_1_TItem_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TItem>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TItem, typename TPriority> constexpr Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TItem, typename TPriority>
constexpr ::System::Collections::IEnumerator* Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TItem, typename TPriority> constexpr Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TItem, typename TPriority> constexpr ::System::IDisposable* Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TItem, typename TPriority> constexpr ::Priority_Queue::GenericPriorityQueue_2__GetEnumerator_d__25<TItem, TPriority>::GenericPriorityQueue_2__GetEnumerator_d__25() {}
template <typename TItem, typename TPriority> constexpr int32_t& Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__cordl_internal_get__numNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numNodes;
}
template <typename TItem, typename TPriority> constexpr int32_t const& Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__cordl_internal_get__numNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numNodes;
}
template <typename TItem, typename TPriority> constexpr void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__cordl_internal_set__numNodes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numNodes = value;
}
template <typename TItem, typename TPriority> constexpr ::ArrayW<TItem>& Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__cordl_internal_get__nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodes;
}
template <typename TItem, typename TPriority> constexpr ::ArrayW<TItem> const& Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__cordl_internal_get__nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodes;
}
template <typename TItem, typename TPriority> constexpr void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__cordl_internal_set__nodes(::ArrayW<TItem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodes = value;
}
template <typename TItem, typename TPriority> constexpr int64_t& Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__cordl_internal_get__numNodesEverEnqueued() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numNodesEverEnqueued;
}
template <typename TItem, typename TPriority> constexpr int64_t const& Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__cordl_internal_get__numNodesEverEnqueued() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numNodesEverEnqueued;
}
template <typename TItem, typename TPriority> constexpr void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__cordl_internal_set__numNodesEverEnqueued(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numNodesEverEnqueued = value;
}
template <typename TItem, typename TPriority> constexpr ::System::Comparison_1<TPriority>*& Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__cordl_internal_get__comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparer;
}
template <typename TItem, typename TPriority> constexpr ::System::Comparison_1<TPriority>* const& Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__cordl_internal_get__comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparer;
}
template <typename TItem, typename TPriority> constexpr void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__cordl_internal_set__comparer(::System::Comparison_1<TPriority>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____comparer = value;
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::_ctor(int32_t maxNodes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxNodes);
}
template <typename TItem, typename TPriority>
inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::_ctor(int32_t maxNodes, ::System::Collections::Generic::IComparer_1<TPriority>* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TPriority>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxNodes, comparer);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::_ctor(int32_t maxNodes, ::System::Comparison_1<TPriority>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Comparison_1<TPriority>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxNodes, comparer);
}
template <typename TItem, typename TPriority> inline int32_t Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline int32_t Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::get_MaxSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(), { "get_MaxSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::Contains(TItem node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(), { "Contains", {}, { ::i2c::type_of<TItem>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::Enqueue(TItem node, TPriority priority) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(), { "Enqueue", {}, { ::i2c::type_of<TItem>(), ::i2c::type_of<TPriority>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, priority);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::CascadeUp(TItem node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(), { "CascadeUp", {}, { ::i2c::type_of<TItem>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::CascadeDown(TItem node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(), { "CascadeDown", {}, { ::i2c::type_of<TItem>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::HasHigherPriority(TItem higher, TItem lower) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(),
                                                                                         { "HasHigherPriority", {}, { ::i2c::type_of<TItem>(), ::i2c::type_of<TItem>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, higher, lower);
}
template <typename TItem, typename TPriority> inline TItem Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::Dequeue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(), { "Dequeue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TItem>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::Resize(int32_t maxNodes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(), { "Resize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxNodes);
}
template <typename TItem, typename TPriority> inline TItem Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::get_First() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(), { "get_First", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TItem>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::UpdatePriority(TItem node, TPriority priority) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(),
                                                                                         { "UpdatePriority", {}, { ::i2c::type_of<TItem>(), ::i2c::type_of<TPriority>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, priority);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::OnNodeUpdated(TItem node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(), { "OnNodeUpdated", {}, { ::i2c::type_of<TItem>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::Remove(TItem node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(), { "Remove", {}, { ::i2c::type_of<TItem>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::ResetNode(TItem node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(), { "ResetNode", {}, { ::i2c::type_of<TItem>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
template <typename TItem, typename TPriority> inline ::System::Collections::Generic::IEnumerator_1<TItem>* Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TItem>*>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline ::System::Collections::IEnumerator* Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::IsValidQueue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(), { "IsValidQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>* Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::New_ctor(int32_t maxNodes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(maxNodes));
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*
Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::New_ctor(int32_t maxNodes, ::System::Collections::Generic::IComparer_1<TPriority>* comparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(maxNodes, comparer));
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>* Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::New_ctor(int32_t maxNodes, ::System::Comparison_1<TPriority>* comparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(maxNodes, comparer));
}
/// @brief Convert operator to "::Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>"
template <typename TItem, typename TPriority> constexpr Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::operator ::Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>*() noexcept {
  return static_cast<::Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>"
template <typename TItem, typename TPriority>
constexpr ::Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>*
Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::i___Priority_Queue__IFixedSizePriorityQueue_2_TItem_TPriority_() noexcept {
  return static_cast<::Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
template <typename TItem, typename TPriority> constexpr Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::operator ::Priority_Queue::IPriorityQueue_2<TItem, TPriority>*() noexcept {
  return static_cast<::Priority_Queue::IPriorityQueue_2<TItem, TPriority>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
template <typename TItem, typename TPriority>
constexpr ::Priority_Queue::IPriorityQueue_2<TItem, TPriority>* Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::i___Priority_Queue__IPriorityQueue_2_TItem_TPriority_() noexcept {
  return static_cast<::Priority_Queue::IPriorityQueue_2<TItem, TPriority>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TItem>"
template <typename TItem, typename TPriority> constexpr Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::operator ::System::Collections::Generic::IEnumerable_1<TItem>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TItem>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TItem>"
template <typename TItem, typename TPriority>
constexpr ::System::Collections::Generic::IEnumerable_1<TItem>* Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::i___System__Collections__Generic__IEnumerable_1_TItem_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TItem>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TItem, typename TPriority> constexpr Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TItem, typename TPriority> constexpr ::System::Collections::IEnumerable* Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TItem, typename TPriority> constexpr ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::GenericPriorityQueue_2() {}
