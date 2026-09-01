#pragma once
// IWYU pragma private; include "Priority_Queue\StablePriorityQueue_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Priority_Queue/zzzz__StablePriorityQueue_1_def.hpp"
#include "Priority_Queue/zzzz__IFixedSizePriorityQueue_2_def.hpp"
#include "Priority_Queue/zzzz__IPriorityQueue_2_def.hpp"
#include "Priority_Queue/zzzz__StablePriorityQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> constexpr int32_t& Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr T& Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr T const& Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_set___2__current(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
template <typename T> constexpr ::Priority_Queue::StablePriorityQueue_1<T>*& Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr ::Priority_Queue::StablePriorityQueue_1<T>* const& Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_set___4__this(::Priority_Queue::StablePriorityQueue_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename T> constexpr int32_t& Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_get__i_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
template <typename T> constexpr int32_t const& Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_get__i_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
template <typename T> constexpr void Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_set__i_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__2 = value;
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline T Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::System_Collections_Generic_IEnumerator_T__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>*>(), { "System.Collections.Generic.IEnumerator<T>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Object* Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T> inline ::Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>* Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::i___System__Collections__Generic__IEnumerator_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::StablePriorityQueue_1__GetEnumerator_d__22() {}
template <typename T> constexpr int32_t& Priority_Queue::StablePriorityQueue_1<T>::__cordl_internal_get__numNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numNodes;
}
template <typename T> constexpr int32_t const& Priority_Queue::StablePriorityQueue_1<T>::__cordl_internal_get__numNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numNodes;
}
template <typename T> constexpr void Priority_Queue::StablePriorityQueue_1<T>::__cordl_internal_set__numNodes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numNodes = value;
}
template <typename T> constexpr ::ArrayW<T>& Priority_Queue::StablePriorityQueue_1<T>::__cordl_internal_get__nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodes;
}
template <typename T> constexpr ::ArrayW<T> const& Priority_Queue::StablePriorityQueue_1<T>::__cordl_internal_get__nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodes;
}
template <typename T> constexpr void Priority_Queue::StablePriorityQueue_1<T>::__cordl_internal_set__nodes(::ArrayW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodes = value;
}
template <typename T> constexpr int64_t& Priority_Queue::StablePriorityQueue_1<T>::__cordl_internal_get__numNodesEverEnqueued() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numNodesEverEnqueued;
}
template <typename T> constexpr int64_t const& Priority_Queue::StablePriorityQueue_1<T>::__cordl_internal_get__numNodesEverEnqueued() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numNodesEverEnqueued;
}
template <typename T> constexpr void Priority_Queue::StablePriorityQueue_1<T>::__cordl_internal_set__numNodesEverEnqueued(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numNodesEverEnqueued = value;
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1<T>::_ctor(int32_t maxNodes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxNodes);
}
template <typename T> inline int32_t Priority_Queue::StablePriorityQueue_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1<T>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline int32_t Priority_Queue::StablePriorityQueue_1<T>::get_MaxSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1<T>*>(), { "get_MaxSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1<T>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool Priority_Queue::StablePriorityQueue_1<T>::Contains(T node) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1<T>*>(), { "Contains", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1<T>::Enqueue(T node, float_t priority) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1<T>*>(), { "Enqueue", {}, { ::i2c::type_of<T>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, priority);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1<T>::CascadeUp(T node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1<T>*>(), { "CascadeUp", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1<T>::CascadeDown(T node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1<T>*>(), { "CascadeDown", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
template <typename T> inline bool Priority_Queue::StablePriorityQueue_1<T>::HasHigherPriority(T higher, T lower) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1<T>*>(), { "HasHigherPriority", {}, { ::i2c::type_of<T>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, higher, lower);
}
template <typename T> inline T Priority_Queue::StablePriorityQueue_1<T>::Dequeue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1<T>*>(), { "Dequeue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1<T>::Resize(int32_t maxNodes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1<T>*>(), { "Resize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxNodes);
}
template <typename T> inline T Priority_Queue::StablePriorityQueue_1<T>::get_First() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1<T>*>(), { "get_First", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1<T>::UpdatePriority(T node, float_t priority) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1<T>*>(), { "UpdatePriority", {}, { ::i2c::type_of<T>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, priority);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1<T>::OnNodeUpdated(T node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1<T>*>(), { "OnNodeUpdated", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1<T>::Remove(T node) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1<T>*>(), { "Remove", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1<T>::ResetNode(T node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1<T>*>(), { "ResetNode", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* Priority_Queue::StablePriorityQueue_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1<T>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* Priority_Queue::StablePriorityQueue_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1<T>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename T> inline bool Priority_Queue::StablePriorityQueue_1<T>::IsValidQueue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueue_1<T>*>(), { "IsValidQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline ::Priority_Queue::StablePriorityQueue_1<T>* Priority_Queue::StablePriorityQueue_1<T>::New_ctor(int32_t maxNodes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Priority_Queue::StablePriorityQueue_1<T>*>(maxNodes));
}
/// @brief Convert operator to "::Priority_Queue::IFixedSizePriorityQueue_2<T,float_t>"
template <typename T> constexpr Priority_Queue::StablePriorityQueue_1<T>::operator ::Priority_Queue::IFixedSizePriorityQueue_2<T, float_t>*() noexcept {
  return static_cast<::Priority_Queue::IFixedSizePriorityQueue_2<T, float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Priority_Queue::IFixedSizePriorityQueue_2<T,float_t>"
template <typename T> constexpr ::Priority_Queue::IFixedSizePriorityQueue_2<T, float_t>* Priority_Queue::StablePriorityQueue_1<T>::i___Priority_Queue__IFixedSizePriorityQueue_2_T_float_t_() noexcept {
  return static_cast<::Priority_Queue::IFixedSizePriorityQueue_2<T, float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<T,float_t>"
template <typename T> constexpr Priority_Queue::StablePriorityQueue_1<T>::operator ::Priority_Queue::IPriorityQueue_2<T, float_t>*() noexcept {
  return static_cast<::Priority_Queue::IPriorityQueue_2<T, float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Priority_Queue::IPriorityQueue_2<T,float_t>"
template <typename T> constexpr ::Priority_Queue::IPriorityQueue_2<T, float_t>* Priority_Queue::StablePriorityQueue_1<T>::i___Priority_Queue__IPriorityQueue_2_T_float_t_() noexcept {
  return static_cast<::Priority_Queue::IPriorityQueue_2<T, float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr Priority_Queue::StablePriorityQueue_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* Priority_Queue::StablePriorityQueue_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Priority_Queue::StablePriorityQueue_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* Priority_Queue::StablePriorityQueue_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::Priority_Queue::StablePriorityQueue_1<T>::StablePriorityQueue_1() {}
