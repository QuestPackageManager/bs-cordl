#pragma once
// IWYU pragma private; include "System\Collections\Concurrent\ConcurrentQueue_1.hpp"
#include "System/Collections/Concurrent/zzzz__PaddedHeadAndTail_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/Collections/Concurrent/zzzz__IProducerConsumerCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "Item", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "SequenceNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::Collections::Concurrent::Segment_ConcurrentQueue_1_Slot<T>::Segment_ConcurrentQueue_1_Slot(T Item, int32_t SequenceNumber) noexcept {
  this->Item = Item;
  this->SequenceNumber = SequenceNumber;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Concurrent::Segment_ConcurrentQueue_1_Slot<T>::Segment_ConcurrentQueue_1_Slot() {}
template <typename T>
constexpr ::ArrayW<::System::Collections::Concurrent::Segment_ConcurrentQueue_1_Slot<T>>& System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::__cordl_internal_get__slots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slots;
}
template <typename T>
constexpr ::ArrayW<::System::Collections::Concurrent::Segment_ConcurrentQueue_1_Slot<T>> const& System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::__cordl_internal_get__slots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slots;
}
template <typename T>
constexpr void System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::__cordl_internal_set__slots(::ArrayW<::System::Collections::Concurrent::Segment_ConcurrentQueue_1_Slot<T>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____slots = value;
}
template <typename T> constexpr int32_t& System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::__cordl_internal_get__slotsMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slotsMask;
}
template <typename T> constexpr int32_t const& System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::__cordl_internal_get__slotsMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slotsMask;
}
template <typename T> constexpr void System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::__cordl_internal_set__slotsMask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____slotsMask = value;
}
template <typename T> constexpr ::System::Collections::Concurrent::PaddedHeadAndTail& System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::__cordl_internal_get__headAndTail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headAndTail;
}
template <typename T> constexpr ::System::Collections::Concurrent::PaddedHeadAndTail const& System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::__cordl_internal_get__headAndTail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headAndTail;
}
template <typename T> constexpr void System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::__cordl_internal_set__headAndTail(::System::Collections::Concurrent::PaddedHeadAndTail value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headAndTail = value;
}
template <typename T> constexpr bool& System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::__cordl_internal_get__preservedForObservation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preservedForObservation;
}
template <typename T> constexpr bool const& System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::__cordl_internal_get__preservedForObservation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preservedForObservation;
}
template <typename T> constexpr void System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::__cordl_internal_set__preservedForObservation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____preservedForObservation = value;
}
template <typename T> constexpr bool& System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::__cordl_internal_get__frozenForEnqueues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frozenForEnqueues;
}
template <typename T> constexpr bool const& System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::__cordl_internal_get__frozenForEnqueues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frozenForEnqueues;
}
template <typename T> constexpr void System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::__cordl_internal_set__frozenForEnqueues(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____frozenForEnqueues = value;
}
template <typename T> constexpr ::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*& System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::__cordl_internal_get__nextSegment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextSegment;
}
template <typename T>
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* const& System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::__cordl_internal_get__nextSegment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextSegment;
}
template <typename T>
constexpr void System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::__cordl_internal_set__nextSegment(::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextSegment = value;
}
template <typename T> inline void System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::_ctor(int32_t boundedLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boundedLength);
}
template <typename T> inline int32_t System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::get_Capacity() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline int32_t System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::get_FreezeOffset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*>(), { "get_FreezeOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::EnsureFrozenForEnqueues() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*>(), { "EnsureFrozenForEnqueues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::TryDequeue(::by_ref<T> item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*>(), { "TryDequeue", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline bool System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::TryPeek(::by_ref<T> result, bool resultUsed) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*>(),
                                                                                         { "TryPeek", {}, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result, resultUsed);
}
template <typename T> inline bool System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::TryEnqueue(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*>(), { "TryEnqueue", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline ::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::New_ctor(int32_t boundedLength) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*>(boundedLength));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>::ConcurrentQueue_1_Segment() {}
template <typename T> constexpr int32_t& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr T& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr T const& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_set___2__current(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
template <typename T> constexpr ::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get_head() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___head;
}
template <typename T>
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* const& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get_head() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___head;
}
template <typename T>
constexpr void System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_set_head(::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___head = value;
}
template <typename T> constexpr ::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get_tail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tail;
}
template <typename T>
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* const& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get_tail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tail;
}
template <typename T>
constexpr void System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_set_tail(::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tail = value;
}
template <typename T> constexpr int32_t& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get_tailTail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailTail;
}
template <typename T> constexpr int32_t const& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get_tailTail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailTail;
}
template <typename T> constexpr void System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_set_tailTail(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tailTail = value;
}
template <typename T> constexpr int32_t& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get_headHead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headHead;
}
template <typename T> constexpr int32_t const& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get_headHead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headHead;
}
template <typename T> constexpr void System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_set_headHead(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headHead = value;
}
template <typename T> constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<T>*& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<T>* const& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr void System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_set___4__this(::System::Collections::Concurrent::ConcurrentQueue_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename T> constexpr int32_t& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get__headTail_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTail_5__2;
}
template <typename T> constexpr int32_t const& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get__headTail_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTail_5__2;
}
template <typename T> constexpr void System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_set__headTail_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headTail_5__2 = value;
}
template <typename T> constexpr int32_t& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get__i_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__3;
}
template <typename T> constexpr int32_t const& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get__i_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__3;
}
template <typename T> constexpr void System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_set__i_5__3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__3 = value;
}
template <typename T>
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get__s_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____s_5__4;
}
template <typename T>
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* const& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get__s_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____s_5__4;
}
template <typename T>
constexpr void System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_set__s_5__4(::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____s_5__4 = value;
}
template <typename T> constexpr int32_t& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get__i_5__5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__5;
}
template <typename T> constexpr int32_t const& System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_get__i_5__5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__5;
}
template <typename T> constexpr void System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::__cordl_internal_set__i_5__5(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__5 = value;
}
template <typename T> inline void System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template <typename T> inline void System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline T System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::System_Collections_Generic_IEnumerator_T__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<T>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>* System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::i___System__Collections__Generic__IEnumerator_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Concurrent::ConcurrentQueue_1__Enumerate_d__28<T>::ConcurrentQueue_1__Enumerate_d__28() {}
template <typename T> constexpr ::System::Object*& System::Collections::Concurrent::ConcurrentQueue_1<T>::__cordl_internal_get__crossSegmentLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crossSegmentLock;
}
template <typename T> constexpr ::System::Object* const& System::Collections::Concurrent::ConcurrentQueue_1<T>::__cordl_internal_get__crossSegmentLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crossSegmentLock;
}
template <typename T> constexpr void System::Collections::Concurrent::ConcurrentQueue_1<T>::__cordl_internal_set__crossSegmentLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____crossSegmentLock = value;
}
template <typename T> constexpr ::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*& System::Collections::Concurrent::ConcurrentQueue_1<T>::__cordl_internal_get__tail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tail;
}
template <typename T> constexpr ::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* const& System::Collections::Concurrent::ConcurrentQueue_1<T>::__cordl_internal_get__tail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tail;
}
template <typename T> constexpr void System::Collections::Concurrent::ConcurrentQueue_1<T>::__cordl_internal_set__tail(::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tail = value;
}
template <typename T> constexpr ::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*& System::Collections::Concurrent::ConcurrentQueue_1<T>::__cordl_internal_get__head() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____head;
}
template <typename T> constexpr ::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* const& System::Collections::Concurrent::ConcurrentQueue_1<T>::__cordl_internal_get__head() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____head;
}
template <typename T> constexpr void System::Collections::Concurrent::ConcurrentQueue_1<T>::__cordl_internal_set__head(::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____head = value;
}
template <typename T> inline void System::Collections::Concurrent::ConcurrentQueue_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Concurrent::ConcurrentQueue_1<T>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename T> inline bool System::Collections::Concurrent::ConcurrentQueue_1<T>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Collections::Concurrent::ConcurrentQueue_1<T>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* System::Collections::Concurrent::ConcurrentQueue_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Concurrent::ConcurrentQueue_1<T>::System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd(T item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(),
                                                                                         { "System.Collections.Concurrent.IProducerConsumerCollection<T>.TryAdd", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline bool System::Collections::Concurrent::ConcurrentQueue_1<T>::System_Collections_Concurrent_IProducerConsumerCollection_T__TryTake(::by_ref<T> item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(),
                                                           { "System.Collections.Concurrent.IProducerConsumerCollection<T>.TryTake", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline bool System::Collections::Concurrent::ConcurrentQueue_1<T>::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline ::ArrayW<T> System::Collections::Concurrent::ConcurrentQueue_1<T>::ToArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(), { "ToArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template <typename T> inline int32_t System::Collections::Concurrent::ConcurrentQueue_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline int32_t System::Collections::Concurrent::ConcurrentQueue_1<T>::GetCount(::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* s, int32_t head, int32_t tail) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(),
                          { "GetCount", {}, { ::i2c::type_of<::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, head, tail);
}
template <typename T>
inline int64_t System::Collections::Concurrent::ConcurrentQueue_1<T>::GetCount(::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* head, int32_t headHead,
                                                                               ::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* tail, int32_t tailTail) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(),
                                                           { "GetCount",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, head, headHead, tail, tailTail);
}
template <typename T> inline void System::Collections::Concurrent::ConcurrentQueue_1<T>::CopyTo(::ArrayW<T> array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* System::Collections::Concurrent::ConcurrentQueue_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template <typename T>
inline void System::Collections::Concurrent::ConcurrentQueue_1<T>::SnapForObservation(::by_ref<::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*> head, ::by_ref<int32_t> headHead,
                                                                                      ::by_ref<::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*> tail, ::by_ref<int32_t> tailTail) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(),
                                                           { "SnapForObservation",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::by_ref<::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, head, headHead, tail, tailTail);
}
template <typename T> inline T System::Collections::Concurrent::ConcurrentQueue_1<T>::GetItemWhenAvailable(::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* segment, int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(),
                                              { "GetItemWhenAvailable", {}, { ::i2c::type_of<::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, segment, i);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>*
System::Collections::Concurrent::ConcurrentQueue_1<T>::Enumerate(::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* head, int32_t headHead,
                                                                 ::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* tail, int32_t tailTail) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(),
                                                           { "Enumerate",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method, head, headHead, tail, tailTail);
}
template <typename T> inline void System::Collections::Concurrent::ConcurrentQueue_1<T>::Enqueue(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(), { "Enqueue", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline void System::Collections::Concurrent::ConcurrentQueue_1<T>::EnqueueSlow(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(), { "EnqueueSlow", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline bool System::Collections::Concurrent::ConcurrentQueue_1<T>::TryDequeue(::by_ref<T> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(), { "TryDequeue", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
template <typename T> inline bool System::Collections::Concurrent::ConcurrentQueue_1<T>::TryDequeueSlow(::by_ref<T> item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(), { "TryDequeueSlow", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline bool System::Collections::Concurrent::ConcurrentQueue_1<T>::TryPeek(::by_ref<T> result, bool resultUsed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(), { "TryPeek", {}, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result, resultUsed);
}
template <typename T> inline ::System::Collections::Concurrent::ConcurrentQueue_1<T>* System::Collections::Concurrent::ConcurrentQueue_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>());
}
/// @brief Convert operator to "::System::Collections::Concurrent::IProducerConsumerCollection_1<T>"
template <typename T> constexpr System::Collections::Concurrent::ConcurrentQueue_1<T>::operator ::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Concurrent::IProducerConsumerCollection_1<T>"
template <typename T>
constexpr ::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*
System::Collections::Concurrent::ConcurrentQueue_1<T>::i___System__Collections__Concurrent__IProducerConsumerCollection_1_T_() noexcept {
  return static_cast<::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr System::Collections::Concurrent::ConcurrentQueue_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* System::Collections::Concurrent::ConcurrentQueue_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr System::Collections::Concurrent::ConcurrentQueue_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* System::Collections::Concurrent::ConcurrentQueue_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename T> constexpr System::Collections::Concurrent::ConcurrentQueue_1<T>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename T> constexpr ::System::Collections::ICollection* System::Collections::Concurrent::ConcurrentQueue_1<T>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template <typename T> constexpr System::Collections::Concurrent::ConcurrentQueue_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* System::Collections::Concurrent::ConcurrentQueue_1<T>::i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<T>::ConcurrentQueue_1() {}
