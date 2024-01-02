#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentBag_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentBag_1_def.hpp"
#include "System/Collections/Concurrent/zzzz__IProducerConsumerCollection_1_def.hpp"
#include "System/Threading/zzzz__ThreadLocal_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template <typename T> constexpr int32_t& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__headIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headIndex;
}
template <typename T> constexpr int32_t const& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__headIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headIndex;
}
template <typename T> constexpr void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__set__headIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headIndex = value;
}
template <typename T> constexpr int32_t& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__tailIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailIndex;
}
template <typename T> constexpr int32_t const& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__tailIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailIndex;
}
template <typename T> constexpr void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__set__tailIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tailIndex = value;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*>& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____array;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*> const& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____array;
}
template <typename T> constexpr void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__set__array(::ArrayW<T, ::Array<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____array)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__mask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mask;
}
template <typename T> constexpr int32_t const& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__mask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mask;
}
template <typename T> constexpr void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__set__mask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mask = value;
}
template <typename T> constexpr int32_t& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__addTakeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addTakeCount;
}
template <typename T> constexpr int32_t const& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__addTakeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addTakeCount;
}
template <typename T> constexpr void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__set__addTakeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____addTakeCount = value;
}
template <typename T> constexpr int32_t& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__stealCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stealCount;
}
template <typename T> constexpr int32_t const& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__stealCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stealCount;
}
template <typename T> constexpr void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__set__stealCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stealCount = value;
}
template <typename T> constexpr int32_t& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__currentOp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentOp;
}
template <typename T> constexpr int32_t const& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__currentOp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentOp;
}
template <typename T> constexpr void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__set__currentOp(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentOp = value;
}
template <typename T> constexpr bool& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__frozen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frozen;
}
template <typename T> constexpr bool const& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__frozen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frozen;
}
template <typename T> constexpr void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__set__frozen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____frozen = value;
}
template <typename T>
constexpr ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__nextQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextQueue;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*> const&
System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__nextQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextQueue;
}
template <typename T>
constexpr void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__set__nextQueue(::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nextQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__ownerThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownerThreadId;
}
template <typename T> constexpr int32_t const& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__ownerThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownerThreadId;
}
template <typename T> constexpr void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__set__ownerThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ownerThreadId = value;
}
template <typename T>
inline ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*
System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::New_ctor(::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* nextQueue) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>(nextQueue));
}
template <typename T>
inline void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::_ctor(::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* nextQueue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nextQueue);
}
template <typename T> inline void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::LocalPush(T item, ByRef<int64_t> emptyToNonEmptyListTransitionCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>::get(), "LocalPush", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item, emptyToNonEmptyListTransitionCount);
}
template <typename T> inline void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::LocalClear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>::get(), "LocalClear",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::TryLocalPop(ByRef<T> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>::get(), "TryLocalPop",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
template <typename T> inline bool System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::TrySteal(ByRef<T> result, bool take) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>::get(), "TrySteal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result, take);
}
template <typename T> inline int32_t System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::DangerousCopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>::get(), "DangerousCopyTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, array, arrayIndex);
}
template <typename T> inline int32_t System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::get_DangerousCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>::get(),
                                               "get_DangerousCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__ConcurrentBag_1__WorkStealingQueue() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*>& System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::__get__array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____array;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*> const& System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::__get__array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____array;
}
template <typename T> constexpr void System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::__set__array(::ArrayW<T, ::Array<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____array)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::__get__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
template <typename T> constexpr T const& System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::__get__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
template <typename T> constexpr void System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::__set__current(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::__get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
template <typename T> constexpr int32_t const& System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::__get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
template <typename T> constexpr void System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::__set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
template <typename T>
inline ::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>* System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::New_ctor(::ArrayW<T, ::Array<T>*> array) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>*>(array));
}
template <typename T> inline void System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::_ctor(::ArrayW<T, ::Array<T>*> array) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>*>::get(), ".ctor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array);
}
template <typename T> inline bool System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline T System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>*>::get(), "get_Current",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>*>::get(), "Reset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>*>::get(), "Dispose",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::__ConcurrentBag_1__Enumerator() {}
/// @brief Convert operator to "::System::Collections::Concurrent::IProducerConsumerCollection_1<T>"
template <typename T> constexpr System::Collections::Concurrent::ConcurrentBag_1<T>::operator ::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr System::Collections::Concurrent::ConcurrentBag_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr System::Collections::Concurrent::ConcurrentBag_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename T> constexpr System::Collections::Concurrent::ConcurrentBag_1<T>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template <typename T> constexpr System::Collections::Concurrent::ConcurrentBag_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
template <typename T>
constexpr ::System::Threading::ThreadLocal_1<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>*& System::Collections::Concurrent::ConcurrentBag_1<T>::__get__locals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locals;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ThreadLocal_1<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>*> const&
System::Collections::Concurrent::ConcurrentBag_1<T>::__get__locals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locals;
}
template <typename T>
constexpr void
System::Collections::Concurrent::ConcurrentBag_1<T>::__set__locals(::System::Threading::ThreadLocal_1<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____locals)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*& System::Collections::Concurrent::ConcurrentBag_1<T>::__get__workStealingQueues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workStealingQueues;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*> const&
System::Collections::Concurrent::ConcurrentBag_1<T>::__get__workStealingQueues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workStealingQueues;
}
template <typename T> constexpr void System::Collections::Concurrent::ConcurrentBag_1<T>::__set__workStealingQueues(::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____workStealingQueues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int64_t& System::Collections::Concurrent::ConcurrentBag_1<T>::__get__emptyToNonEmptyListTransitionCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyToNonEmptyListTransitionCount;
}
template <typename T> constexpr int64_t const& System::Collections::Concurrent::ConcurrentBag_1<T>::__get__emptyToNonEmptyListTransitionCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyToNonEmptyListTransitionCount;
}
template <typename T> constexpr void System::Collections::Concurrent::ConcurrentBag_1<T>::__set__emptyToNonEmptyListTransitionCount(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____emptyToNonEmptyListTransitionCount = value;
}
template <typename T> inline ::System::Collections::Concurrent::ConcurrentBag_1<T>* System::Collections::Concurrent::ConcurrentBag_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Concurrent::ConcurrentBag_1<T>*>());
}
template <typename T> inline void System::Collections::Concurrent::ConcurrentBag_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Concurrent::ConcurrentBag_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(), "Add",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline bool System::Collections::Concurrent::ConcurrentBag_1<T>::System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd(T item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                                                                             "System.Collections.Concurrent.IProducerConsumerCollection<T>.TryAdd", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline bool System::Collections::Concurrent::ConcurrentBag_1<T>::TryTake(ByRef<T> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(), "TryTake",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
template <typename T>
inline ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* System::Collections::Concurrent::ConcurrentBag_1<T>::GetCurrentThreadWorkStealingQueue(bool forceCreate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(), "GetCurrentThreadWorkStealingQueue",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*, false>(this, ___internal_method, forceCreate);
}
template <typename T>
inline ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* System::Collections::Concurrent::ConcurrentBag_1<T>::CreateWorkStealingQueueForCurrentThread() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                                                                             "CreateWorkStealingQueueForCurrentThread", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* System::Collections::Concurrent::ConcurrentBag_1<T>::GetUnownedWorkStealingQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                                                                             "GetUnownedWorkStealingQueue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Concurrent::ConcurrentBag_1<T>::TrySteal(ByRef<T> result, bool take) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(), "TrySteal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result, take);
}
template <typename T>
inline bool System::Collections::Concurrent::ConcurrentBag_1<T>::TryStealFromTo(::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* startInclusive,
                                                                                ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* endExclusive, ByRef<T> result, bool take) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(), "TryStealFromTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, startInclusive, endExclusive, result, take);
}
template <typename T> inline void System::Collections::Concurrent::ConcurrentBag_1<T>::CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename T> inline int32_t System::Collections::Concurrent::ConcurrentBag_1<T>::CopyFromEachQueueToArray(::ArrayW<T, ::Array<T>*> array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                                                                             "CopyFromEachQueueToArray", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, array, index);
}
template <typename T> inline void System::Collections::Concurrent::ConcurrentBag_1<T>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(), "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> System::Collections::Concurrent::ConcurrentBag_1<T>::ToArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                                                                             "ToArray", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Concurrent::ConcurrentBag_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                                                                             "Clear", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* System::Collections::Concurrent::ConcurrentBag_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                                                                             "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* System::Collections::Concurrent::ConcurrentBag_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename T> inline int32_t System::Collections::Concurrent::ConcurrentBag_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                                                                             "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline int32_t System::Collections::Concurrent::ConcurrentBag_1<T>::get_DangerousCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                                                                             "get_DangerousCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Concurrent::ConcurrentBag_1<T>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                                                                             "System.Collections.ICollection.get_IsSynchronized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Collections::Concurrent::ConcurrentBag_1<T>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                                                                             "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Collections::Concurrent::ConcurrentBag_1<T>::get_GlobalQueuesLock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                                                                             "get_GlobalQueuesLock", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Concurrent::ConcurrentBag_1<T>::FreezeBag(ByRef<bool> lockTaken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(), "FreezeBag",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lockTaken);
}
template <typename T> inline void System::Collections::Concurrent::ConcurrentBag_1<T>::UnfreezeBag(bool lockTaken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(), "UnfreezeBag",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lockTaken);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Concurrent::ConcurrentBag_1<T>::ConcurrentBag_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
