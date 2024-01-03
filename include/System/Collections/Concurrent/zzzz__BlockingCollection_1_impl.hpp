#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Concurrent/zzzz__BlockingCollection_1_def.hpp"
#include "System/Collections/Concurrent/zzzz__IProducerConsumerCollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr System::Collections::Concurrent::BlockingCollection_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr System::Collections::Concurrent::BlockingCollection_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename T> constexpr System::Collections::Concurrent::BlockingCollection_1<T>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr System::Collections::Concurrent::BlockingCollection_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template <typename T> constexpr System::Collections::Concurrent::BlockingCollection_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
template <typename T> constexpr ::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*& System::Collections::Concurrent::BlockingCollection_1<T>::__get__collection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collection;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*> const&
System::Collections::Concurrent::BlockingCollection_1<T>::__get__collection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collection;
}
template <typename T> constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__set__collection(::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____collection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& System::Collections::Concurrent::BlockingCollection_1<T>::__get__boundedCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundedCapacity;
}
template <typename T> constexpr int32_t const& System::Collections::Concurrent::BlockingCollection_1<T>::__get__boundedCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundedCapacity;
}
template <typename T> constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__set__boundedCapacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boundedCapacity = value;
}
template <typename T> constexpr ::System::Threading::SemaphoreSlim*& System::Collections::Concurrent::BlockingCollection_1<T>::__get__freeNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeNodes;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& System::Collections::Concurrent::BlockingCollection_1<T>::__get__freeNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeNodes;
}
template <typename T> constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__set__freeNodes(::System::Threading::SemaphoreSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____freeNodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Threading::SemaphoreSlim*& System::Collections::Concurrent::BlockingCollection_1<T>::__get__occupiedNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____occupiedNodes;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& System::Collections::Concurrent::BlockingCollection_1<T>::__get__occupiedNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____occupiedNodes;
}
template <typename T> constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__set__occupiedNodes(::System::Threading::SemaphoreSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____occupiedNodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr bool& System::Collections::Concurrent::BlockingCollection_1<T>::__get__isDisposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDisposed;
}
template <typename T> constexpr bool const& System::Collections::Concurrent::BlockingCollection_1<T>::__get__isDisposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDisposed;
}
template <typename T> constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__set__isDisposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDisposed = value;
}
template <typename T> constexpr ::System::Threading::CancellationTokenSource*& System::Collections::Concurrent::BlockingCollection_1<T>::__get__consumersCancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____consumersCancellationTokenSource;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const&
System::Collections::Concurrent::BlockingCollection_1<T>::__get__consumersCancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____consumersCancellationTokenSource;
}
template <typename T> constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__set__consumersCancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____consumersCancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Threading::CancellationTokenSource*& System::Collections::Concurrent::BlockingCollection_1<T>::__get__producersCancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____producersCancellationTokenSource;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const&
System::Collections::Concurrent::BlockingCollection_1<T>::__get__producersCancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____producersCancellationTokenSource;
}
template <typename T> constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__set__producersCancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____producersCancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& System::Collections::Concurrent::BlockingCollection_1<T>::__get__currentAdders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentAdders;
}
template <typename T> constexpr int32_t const& System::Collections::Concurrent::BlockingCollection_1<T>::__get__currentAdders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentAdders;
}
template <typename T> constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__set__currentAdders(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentAdders = value;
}
template <typename T> inline bool System::Collections::Concurrent::BlockingCollection_1<T>::get_IsAddingCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(),
                                                                             "get_IsAddingCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Concurrent::BlockingCollection_1<T>::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(),
                                                                             "get_IsCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline int32_t System::Collections::Concurrent::BlockingCollection_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(),
                                                                             "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Concurrent::BlockingCollection_1<T>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(),
                                                                             "System.Collections.ICollection.get_IsSynchronized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Collections::Concurrent::BlockingCollection_1<T>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(),
                                                                             "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Concurrent::BlockingCollection_1<T>* System::Collections::Concurrent::BlockingCollection_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Concurrent::BlockingCollection_1<T>*>());
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Concurrent::BlockingCollection_1<T>*
System::Collections::Concurrent::BlockingCollection_1<T>::New_ctor(::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* collection) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Concurrent::BlockingCollection_1<T>*>(collection));
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::_ctor(::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* collection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collection);
}
template <typename T>
inline void System::Collections::Concurrent::BlockingCollection_1<T>::Initialize(::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* collection, int32_t boundedCapacity,
                                                                                 int32_t collectionCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(), "Initialize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collection, boundedCapacity, collectionCount);
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(), "Add",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T>
inline bool System::Collections::Concurrent::BlockingCollection_1<T>::TryAddWithNoTimeValidation(T item, int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(), "TryAddWithNoTimeValidation", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item, millisecondsTimeout, cancellationToken);
}
template <typename T> inline T System::Collections::Concurrent::BlockingCollection_1<T>::Take() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(),
                                                                             "Take", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T>
inline bool System::Collections::Concurrent::BlockingCollection_1<T>::TryTake(ByRef<T> item, int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(), "TryTake", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item, millisecondsTimeout, cancellationToken);
}
template <typename T>
inline bool System::Collections::Concurrent::BlockingCollection_1<T>::TryTakeWithNoTimeValidation(ByRef<T> item, int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken,
                                                                                                  ::System::Threading::CancellationTokenSource* combinedTokenSource) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(), "TryTakeWithNoTimeValidation", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationTokenSource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item, millisecondsTimeout, cancellationToken, combinedTokenSource);
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::CompleteAdding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(),
                                                                             "CompleteAdding", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::CancelWaitingConsumers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(),
                                                                             "CancelWaitingConsumers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::CancelWaitingProducers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(),
                                                                             "CancelWaitingProducers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(),
                                                                             "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(), "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* System::Collections::Concurrent::BlockingCollection_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(),
                                               "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* System::Collections::Concurrent::BlockingCollection_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::ValidateMillisecondsTimeout(int32_t millisecondsTimeout) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(), "ValidateMillisecondsTimeout",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, millisecondsTimeout);
}
template <typename T> inline void System::Collections::Concurrent::BlockingCollection_1<T>::CheckDisposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::BlockingCollection_1<T>*>::get(),
                                                                             "CheckDisposed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Concurrent::BlockingCollection_1<T>::BlockingCollection_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
