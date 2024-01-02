#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "GlobalNamespace/zzzz__ShuffleExtensions_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "GlobalNamespace/zzzz__ShuffleExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr T& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr T const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___2__current(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>*& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const&
GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set_source(::System::Collections::Generic::IEnumerable_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>*& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__source;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const&
GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__source;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___3__source(::System::Collections::Generic::IEnumerable_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
template <typename T> constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__count;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__count;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___3__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__count = value;
}
template <typename T> constexpr ::System::Random*& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set_random(::System::Random* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Random*& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__random;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__random;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___3__random(::System::Random* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_limit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___limit;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_limit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___limit;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set_limit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___limit = value;
}
template <typename T> constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__limit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__limit;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__limit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__limit;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___3__limit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__limit = value;
}
template <typename T> constexpr T& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_tombstone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tombstone;
}
template <typename T> constexpr T const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_tombstone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tombstone;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set_tombstone(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tombstone)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__tombstone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__tombstone;
}
template <typename T> constexpr T const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__tombstone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__tombstone;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___3__tombstone(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__tombstone)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get__index_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index_5__2;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get__index_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index_5__2;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set__index_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index_5__2 = value;
}
template <typename T> constexpr int32_t& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get__picked_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____picked_5__3;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get__picked_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____picked_5__3;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set__picked_5__3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____picked_5__3 = value;
}
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>*& GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___7__wrap3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap3;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T>*> const&
GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___7__wrap3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap3;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___7__wrap3(::System::Collections::Generic::IEnumerator_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*
GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*>(__1__state));
}
template <typename T> inline void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename T> inline void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*>::get(),
                                               "<>m__Finally1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_Collections_Generic_IEnumerator_T__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*>::get(),
                                               "System.Collections.Generic.IEnumerator<T>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*>::get(),
                                               "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr int32_t& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr T& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr T const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___2__current(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>*& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set_source(::System::Collections::Generic::IEnumerable_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>*& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___3__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__source;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___3__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__source;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___3__source(::System::Collections::Generic::IEnumerable_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get_limit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___limit;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get_limit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___limit;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set_limit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___limit = value;
}
template <typename T> constexpr int32_t& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___3__limit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__limit;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___3__limit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__limit;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___3__limit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__limit = value;
}
template <typename T> constexpr T& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get_tombstone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tombstone;
}
template <typename T> constexpr T const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get_tombstone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tombstone;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set_tombstone(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tombstone)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___3__tombstone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__tombstone;
}
template <typename T> constexpr T const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___3__tombstone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__tombstone;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___3__tombstone(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__tombstone)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>*& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get__enumerator_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumerator_5__2;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T>*> const&
GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get__enumerator_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumerator_5__2;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set__enumerator_5__2(::System::Collections::Generic::IEnumerator_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____enumerator_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get__index_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index_5__3;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get__index_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index_5__3;
}
template <typename T> constexpr void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set__index_5__3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index_5__3 = value;
}
template <typename T> inline ::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>* GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>*>(__1__state));
}
template <typename T> inline void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename T> inline void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>*>::get(), "<>m__Finally1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_Collections_Generic_IEnumerator_T__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>*>::get(),
                                               "System.Collections.Generic.IEnumerator<T>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>*>::get(),
                                               "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__ShuffleExtensions___TakeWithTombstone_d__2_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1,T2>>"
template <typename T1, typename T2>
constexpr GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1, T2>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1, T2>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T1, typename T2> constexpr GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1,T2>>"
template <typename T1, typename T2>
constexpr GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1, T2>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1, T2>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T1, typename T2> constexpr GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T1, typename T2> constexpr GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T1, typename T2> constexpr int32_t& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T1, typename T2> constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T1, typename T2> constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T1, typename T2> constexpr ::System::ValueTuple_2<T1, T2>& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T1, typename T2> constexpr ::System::ValueTuple_2<T1, T2> const& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T1, typename T2> constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__set___2__current(::System::ValueTuple_2<T1, T2> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
template <typename T1, typename T2> constexpr int32_t& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T1, typename T2> constexpr int32_t const& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T1, typename T2> constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename T1, typename T2> constexpr ::System::Collections::Generic::IEnumerable_1<T1>*& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get_collection1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collection1;
}
template <typename T1, typename T2>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T1>*> const&
GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get_collection1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collection1;
}
template <typename T1, typename T2> constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__set_collection1(::System::Collections::Generic::IEnumerable_1<T1>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___collection1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T1, typename T2> constexpr ::System::Collections::Generic::IEnumerable_1<T1>*& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get___3__collection1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__collection1;
}
template <typename T1, typename T2>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T1>*> const&
GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get___3__collection1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__collection1;
}
template <typename T1, typename T2>
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__set___3__collection1(::System::Collections::Generic::IEnumerable_1<T1>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__collection1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T1, typename T2> constexpr ::System::Collections::Generic::IEnumerable_1<T2>*& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get_collection2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collection2;
}
template <typename T1, typename T2>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T2>*> const&
GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get_collection2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collection2;
}
template <typename T1, typename T2> constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__set_collection2(::System::Collections::Generic::IEnumerable_1<T2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___collection2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T1, typename T2> constexpr ::System::Collections::Generic::IEnumerable_1<T2>*& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get___3__collection2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__collection2;
}
template <typename T1, typename T2>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T2>*> const&
GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get___3__collection2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__collection2;
}
template <typename T1, typename T2>
constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__set___3__collection2(::System::Collections::Generic::IEnumerable_1<T2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__collection2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T1, typename T2> constexpr T2& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get_collection2Tombstone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collection2Tombstone;
}
template <typename T1, typename T2> constexpr T2 const& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get_collection2Tombstone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collection2Tombstone;
}
template <typename T1, typename T2> constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__set_collection2Tombstone(T2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___collection2Tombstone)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T1, typename T2> constexpr T2& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get___3__collection2Tombstone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__collection2Tombstone;
}
template <typename T1, typename T2> constexpr T2 const& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get___3__collection2Tombstone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__collection2Tombstone;
}
template <typename T1, typename T2> constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__set___3__collection2Tombstone(T2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__collection2Tombstone)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T1, typename T2> constexpr ::System::Collections::Generic::IEnumerator_1<T1>*& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get__enum1_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enum1_5__2;
}
template <typename T1, typename T2>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T1>*> const&
GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get__enum1_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enum1_5__2;
}
template <typename T1, typename T2> constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__set__enum1_5__2(::System::Collections::Generic::IEnumerator_1<T1>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____enum1_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T1, typename T2> constexpr ::System::Collections::Generic::IEnumerator_1<T2>*& GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get__enum2_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enum2_5__3;
}
template <typename T1, typename T2>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T2>*> const&
GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__get__enum2_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enum2_5__3;
}
template <typename T1, typename T2> constexpr void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__set__enum2_5__3(::System::Collections::Generic::IEnumerator_1<T2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____enum2_5__3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T1, typename T2>
inline ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>*>(__1__state));
}
template <typename T1, typename T2> inline void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename T1, typename T2> inline void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2> inline bool GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T1, typename T2> inline void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>*>::get(),
                                               "<>m__Finally1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2> inline void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__m__Finally2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>*>::get(),
                                               "<>m__Finally2", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2>
inline ::System::ValueTuple_2<T1, T2> GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::System_Collections_Generic_IEnumerator__T1_T2___get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>*>::get(),
                                               "System.Collections.Generic.IEnumerator<(T1,T2)>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<T1, T2>, false>(this, ___internal_method);
}
template <typename T1, typename T2> inline void GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2> inline ::System::Object* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T1, typename T2>
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1, T2>>*
GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::System_Collections_Generic_IEnumerable__T1_T2___GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>*>::get(),
                                               "System.Collections.Generic.IEnumerable<(T1,T2)>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1, T2>>*, false>(this, ___internal_method);
}
template <typename T1, typename T2> inline ::System::Collections::IEnumerator* GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T1, typename T2> constexpr ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>::__ShuffleExtensions___ZipSkipTombstone_d__3_2() {}
template <typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::ShuffleExtensions::Shuffle(::System::Collections::Generic::IEnumerable_1<T>* source, ::System::Random* random) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShuffleExtensions*>::get(), "Shuffle",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Random*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(nullptr, ___internal_method, source, random);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::ShuffleExtensions::PickRandomElementsWithTombstone(::System::Collections::Generic::IEnumerable_1<T>* source, int32_t limit,
                                                                                                                             int32_t count, ::System::Random* random, T tombstone) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShuffleExtensions*>::get(), "PickRandomElementsWithTombstone",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Random*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(nullptr, ___internal_method, source, limit, count, random, tombstone);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::ShuffleExtensions::TakeWithTombstone(::System::Collections::Generic::IEnumerable_1<T>* source, int32_t limit, T tombstone) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShuffleExtensions*>::get(), "TakeWithTombstone",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(nullptr, ___internal_method, source, limit, tombstone);
}
template <typename T1, typename T2>
inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1, T2>>*
GlobalNamespace::ShuffleExtensions::ZipSkipTombstone(::System::Collections::Generic::IEnumerable_1<T1>* collection1, ::System::Collections::Generic::IEnumerable_1<T2>* collection2,
                                                     T2 collection2Tombstone) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShuffleExtensions*>::get(), "ZipSkipTombstone",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T1>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T2>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1, T2>>*, false>(nullptr, ___internal_method, collection1, collection2,
                                                                                                                                    collection2Tombstone);
}
template <typename T> inline void GlobalNamespace::ShuffleExtensions::ShuffleInPlace(::System::Collections::Generic::IList_1<T>* list, ::System::Random* random) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShuffleExtensions*>::get(), "ShuffleInPlace",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<T>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Random*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, list, random);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShuffleExtensions::ShuffleExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
