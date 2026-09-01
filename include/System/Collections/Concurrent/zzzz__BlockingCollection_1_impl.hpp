#pragma once
// IWYU pragma private; include "System\Collections\Concurrent\BlockingCollection_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Concurrent/zzzz__BlockingCollection_1_def.hpp"
#include "System/Collections/Concurrent/zzzz__IProducerConsumerCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> constexpr ::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*& System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_get__collection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collection;
}
template <typename T>
constexpr ::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* const& System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_get__collection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collection;
}
template <typename T>
constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_set__collection(::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____collection = value;
}
template <typename T> constexpr int32_t& System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_get__boundedCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundedCapacity;
}
template <typename T> constexpr int32_t const& System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_get__boundedCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundedCapacity;
}
template <typename T> constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_set__boundedCapacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boundedCapacity = value;
}
template <typename T> constexpr ::System::Threading::SemaphoreSlim*& System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_get__freeNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeNodes;
}
template <typename T> constexpr ::System::Threading::SemaphoreSlim* const& System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_get__freeNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeNodes;
}
template <typename T> constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_set__freeNodes(::System::Threading::SemaphoreSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____freeNodes = value;
}
template <typename T> constexpr ::System::Threading::SemaphoreSlim*& System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_get__occupiedNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____occupiedNodes;
}
template <typename T> constexpr ::System::Threading::SemaphoreSlim* const& System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_get__occupiedNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____occupiedNodes;
}
template <typename T> constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_set__occupiedNodes(::System::Threading::SemaphoreSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____occupiedNodes = value;
}
template <typename T> constexpr bool& System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_get__isDisposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDisposed;
}
template <typename T> constexpr bool const& System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_get__isDisposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDisposed;
}
template <typename T> constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_set__isDisposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDisposed = value;
}
template <typename T> constexpr ::System::Threading::CancellationTokenSource*& System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_get__consumersCancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____consumersCancellationTokenSource;
}
template <typename T>
constexpr ::System::Threading::CancellationTokenSource* const& System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_get__consumersCancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____consumersCancellationTokenSource;
}
template <typename T>
constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_set__consumersCancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____consumersCancellationTokenSource = value;
}
template <typename T> constexpr ::System::Threading::CancellationTokenSource*& System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_get__producersCancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____producersCancellationTokenSource;
}
template <typename T>
constexpr ::System::Threading::CancellationTokenSource* const& System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_get__producersCancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____producersCancellationTokenSource;
}
template <typename T>
constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_set__producersCancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____producersCancellationTokenSource = value;
}
template <typename T> constexpr int32_t& System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_get__currentAdders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentAdders;
}
template <typename T> constexpr int32_t const& System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_get__currentAdders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentAdders;
}
template <typename T> constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__cordl_internal_set__currentAdders(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentAdders = value;
}
template <typename T> inline bool System::Collections::Concurrent::BlockingCollection_1<T>::get_IsAddingCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(), { "get_IsAddingCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Concurrent::BlockingCollection_1<T>::get_IsCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(), { "get_IsCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline int32_t System::Collections::Concurrent::BlockingCollection_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Concurrent::BlockingCollection_1<T>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Collections::Concurrent::BlockingCollection_1<T>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::_ctor(::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* collection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
template <typename T>
inline void System::Collections::Concurrent::BlockingCollection_1<T>::Initialize(::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* collection, int32_t boundedCapacity,
                                                                                 int32_t collectionCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(),
                          { "Initialize", {}, { ::i2c::type_of<::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection, boundedCapacity, collectionCount);
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(), { "Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T>
inline bool System::Collections::Concurrent::BlockingCollection_1<T>::TryAddWithNoTimeValidation(T item, int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(),
                                              { "TryAddWithNoTimeValidation", {}, { ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item, millisecondsTimeout, cancellationToken);
}
template <typename T> inline T System::Collections::Concurrent::BlockingCollection_1<T>::Take() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(), { "Take", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T>
inline bool System::Collections::Concurrent::BlockingCollection_1<T>::TryTake(::by_ref<T> item, int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(),
                                                           { "TryTake", {}, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item, millisecondsTimeout, cancellationToken);
}
template <typename T>
inline bool System::Collections::Concurrent::BlockingCollection_1<T>::TryTakeWithNoTimeValidation(::by_ref<T> item, int32_t millisecondsTimeout,
                                                                                                  ::System::Threading::CancellationToken cancellationToken,
                                                                                                  ::System::Threading::CancellationTokenSource* combinedTokenSource) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(),
                                                           { "TryTakeWithNoTimeValidation",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>(),
                                                               ::i2c::type_of<::System::Threading::CancellationTokenSource*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item, millisecondsTimeout, cancellationToken, combinedTokenSource);
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::CompleteAdding() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(), { "CompleteAdding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::CancelWaitingConsumers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(), { "CancelWaitingConsumers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::CancelWaitingProducers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(), { "CancelWaitingProducers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* System::Collections::Concurrent::BlockingCollection_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(), { "System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* System::Collections::Concurrent::BlockingCollection_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::ValidateMillisecondsTimeout(int32_t millisecondsTimeout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(), { "ValidateMillisecondsTimeout", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, millisecondsTimeout);
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::CheckDisposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::BlockingCollection_1<T>*>(), { "CheckDisposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Concurrent::BlockingCollection_1<T>* System::Collections::Concurrent::BlockingCollection_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Concurrent::BlockingCollection_1<T>*>());
}
template <typename T>
inline ::System::Collections::Concurrent::BlockingCollection_1<T>*
System::Collections::Concurrent::BlockingCollection_1<T>::New_ctor(::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* collection) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Concurrent::BlockingCollection_1<T>*>(collection));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr System::Collections::Concurrent::BlockingCollection_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* System::Collections::Concurrent::BlockingCollection_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr System::Collections::Concurrent::BlockingCollection_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* System::Collections::Concurrent::BlockingCollection_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename T> constexpr System::Collections::Concurrent::BlockingCollection_1<T>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename T> constexpr ::System::Collections::ICollection* System::Collections::Concurrent::BlockingCollection_1<T>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr System::Collections::Concurrent::BlockingCollection_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* System::Collections::Concurrent::BlockingCollection_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template <typename T> constexpr System::Collections::Concurrent::BlockingCollection_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* System::Collections::Concurrent::BlockingCollection_1<T>::i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Concurrent::BlockingCollection_1<T>::BlockingCollection_1() {}
