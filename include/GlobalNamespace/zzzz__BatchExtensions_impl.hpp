#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BatchExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__BatchExtensions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::List_1<T>*>"
template <typename T> constexpr GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::List_1<T>*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::List_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::List_1<T>*>"
template <typename T> constexpr GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::List_1<T>*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::List_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr int32_t& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__set___2__current(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>*& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get_enumerable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumerable;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get_enumerable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumerable;
}
template <typename T> constexpr void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__set_enumerable(::System::Collections::Generic::IEnumerable_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enumerable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>*& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___3__enumerable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__enumerable;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___3__enumerable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__enumerable;
}
template <typename T> constexpr void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__set___3__enumerable(::System::Collections::Generic::IEnumerable_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__enumerable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get_batchSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___batchSize;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get_batchSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___batchSize;
}
template <typename T> constexpr void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__set_batchSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___batchSize = value;
}
template <typename T> constexpr int32_t& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___3__batchSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__batchSize;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___3__batchSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__batchSize;
}
template <typename T> constexpr void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__set___3__batchSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__batchSize = value;
}
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>*& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T>*> const& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename T> constexpr void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__set___7__wrap1(::System::Collections::Generic::IEnumerator_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>* GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>*>(__1__state));
}
template <typename T> inline void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename T> inline void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>*>::get(),
                                                                             "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>*>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__m__Finally1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>*>::get(),
                                                                             "<>m__Finally1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::System_Collections_Generic_IEnumerator_System_Collections_Generic_List_T___get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Collections.Generic.List<T>>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>*>::get(),
                                                                             "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>*>::get(),
                                                                             "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::List_1<T>*>*
GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::System_Collections_Generic_IEnumerable_System_Collections_Generic_List_T___GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>*>::get(),
                                  "System.Collections.Generic.IEnumerable<System.Collections.Generic.List<T>>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::List_1<T>*>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__BatchExtensions___Batch_d__0_1() {}
template <typename T>
inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::List_1<T>*>* GlobalNamespace::BatchExtensions::Batch(::System::Collections::Generic::IEnumerable_1<T>* enumerable,
                                                                                                                                          int32_t batchSize) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BatchExtensions*>::get(), "Batch",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::List_1<T>*>*, false>(nullptr, ___internal_method, enumerable, batchSize);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BatchExtensions::BatchExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
